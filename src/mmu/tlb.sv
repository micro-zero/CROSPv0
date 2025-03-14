/**
 * tlb.sv:
 *   Generic translation lookaside buffer.
 */

module tlb #(
    parameter init = 0,  // initialize RAMs
    parameter chn  = 1,  // request channel width
    parameter set  = 64, // number of sets
    parameter way  = 8   // number of ways
)(
    input  logic       clk,    // clock signal
    input  logic       rst,    // reset signal
    input  logic [7:0] flmask, // flush ignore mask
    input  logic [7:0] flrqst, // flush request ID
    /* slave interface with lower-level TLB or pipeline */
    input  logic [chn-1:0] [7:0] s_rqst, // request ID
    input  logic [chn-1:0][63:0] s_vadd, // virtual address
    input  logic [chn-1:0][63:0] s_satp, // CSR SATP for translation
    output logic [chn-1:0] [7:0] s_resp, // response ID
    output logic [chn-1:0] [7:0] s_perm, // access permission
    output logic [chn-1:0][63:0] s_padd, // physical address
    /* master interface with higher-level TLB or PTW */
    output logic  [7:0] m_rqst, // request ID
    output logic [63:0] m_vadd, // virtual address
    output logic [63:0] m_satp, // CSR SATP for translation
    input  logic  [7:0] m_resp, // response ID
    input  logic  [7:0] m_perm, // access permission, 0 indicates page fault
    input  logic [63:0] m_padd  // physical address
);
    /* flush function (see cache.sv) */
    function logic fl(input logic [7:0] req); fl = |req & (req & ~flmask) == (flrqst & ~flmask); endfunction

    /* request buffer */
    logic [chn-1:0] [7:0] b_rqst;
    logic [chn-1:0][63:0] b_vadd;
    logic [chn-1:0][63:0] b_satp;
    always_ff @(posedge clk) for (int i = 0; i < chn; i++)
        if (rst) b_rqst[i] <= 0; else begin
            b_rqst[i] <= fl(s_rqst[i]) ? 0 : s_rqst[i];
            b_vadd[i] <= s_vadd[i];
            b_satp[i] <= s_satp[i];
        end

    /* TLB entity */
    logic       [way*52-1:0] tlb_dat[set-1:0]; // TLB data
    logic       [way*68-1:0] tlb_tag[set-1:0]; // TLB tag of each block, [67:52]ASID/[51:0]PADDR
    logic       [way* 8-1:0] tlb_prm[set-1:0]; // access permission of each entry
    logic [set-1:0][way-1:0] tlb_vld;          // TLB flags of each entry
    logic  [$clog2(way)-1:0] tlb_ptr[set-1:0]; // pointers in FIFO replacement policy
    /* requested set */
    logic [chn-1:0]  [way-1:0][51:0] set_dat;
    logic [chn-1:0]  [way-1:0][67:0] set_tag;
    logic [chn-1:0]  [way-1:0] [7:0] set_prm;
    logic [chn-1:0]  [way-1:0]       set_vld;
    logic [chn-1:0]  [way-1:0]       set_hit;
    logic [chn-1:0][$clog2(way)  :0] set_hitpos;
    logic [chn-1:0][$clog2(way)-1:0] set_ptr;
    /* MSHR (single) */
    logic                   miss, fill;
    logic             [7:0] mis_req;
    logic            [63:0] mis_add, mis_csr;
    logic   [way-1:0]       mis_vld, fil_vld;
    logic   [way-1:0][51:0] mis_dat, fil_dat;
    logic   [way-1:0][67:0] mis_tag, fil_tag;
    logic   [way-1:0] [7:0] mis_prm, fil_prm;
    logic [$clog2(way)-1:0] mis_ptr, fil_ptr;
    firstk #(.width(way), .k(1)) hit_pos_inst[chn-1:0](.bits(set_hit), .pos(set_hitpos));
    always_comb begin
        fil_vld = mis_vld;
        fil_tag = mis_tag;
        fil_dat = mis_dat;
        fil_prm = mis_prm;
        fil_ptr = mis_ptr;
        fil_vld[mis_ptr] = 1;
        fil_tag[mis_ptr] = {m_satp[59:44], m_vadd[63:12]};
        fil_dat[mis_ptr] = m_padd[63:12];
        fil_prm[mis_ptr] = m_perm;
    end
    always_comb for (int i = 0; i < chn; i++) begin
        for (int j = 0; j < way; j++)
            set_hit[i][j] = set_vld[i][j] & set_tag[i][j] == {b_satp[i][59:44], b_vadd[i][63:12]};
        set_hit[i][0] |= ~|b_satp[i][63:60]; // hit when bare
    end
    always_ff @(posedge clk) if (rst) tlb_vld <= 0;
        else if (|m_resp & |m_perm) begin // TLB fill
            tlb_vld[$clog2(set)'(m_vadd[63:12])] <= fil_vld;
            tlb_dat[$clog2(set)'(m_vadd[63:12])] <= fil_dat;
            tlb_tag[$clog2(set)'(m_vadd[63:12])] <= fil_tag;
            tlb_prm[$clog2(set)'(m_vadd[63:12])] <= fil_prm;
            tlb_ptr[$clog2(set)'(m_vadd[63:12])] <= fil_ptr + 1;
        end
    always_ff @(posedge clk) for (int i = 0; i < chn; i++) begin
        set_dat[i] <= tlb_dat[$clog2(set)'(s_vadd[i][63:12])];
        set_tag[i] <= tlb_tag[$clog2(set)'(s_vadd[i][63:12])];
        set_prm[i] <= tlb_prm[$clog2(set)'(s_vadd[i][63:12])];
        set_ptr[i] <= tlb_ptr[$clog2(set)'(s_vadd[i][63:12])];
        set_vld[i] <= tlb_vld[$clog2(set)'(s_vadd[i][63:12])];
    end
    always_ff @(posedge clk) if (rst) fill <= 0; // also includes page fault
        else if (|m_resp) fill <= 1; else fill <= 0;
    always_ff @(posedge clk) if (rst | fl(mis_req)) {miss, mis_req} <= 0;
        else begin
            if (|m_resp) mis_req <= 0; // master interface handled
            if (fill)    miss    <= 0; // filling handled
            if (~miss) for (int i = 0; i < chn; i++)
                if (|b_rqst[i] & ~set_hitpos[i][$clog2(way)]) begin
                    miss    <= fl(b_rqst[i]) ? 0 : 1;
                    mis_req <= fl(b_rqst[i]) ? 0 : b_rqst[i];
                    mis_add <= b_vadd[i];
                    mis_csr <= b_satp[i];
                    mis_vld <= set_vld[i];
                    mis_tag <= set_tag[i];
                    mis_dat <= set_dat[i];
                    mis_prm <= set_prm[i];
                    mis_ptr <= set_ptr[i];
                end
        end

    /* interface */
    always_comb m_rqst = |m_resp ? 0 : mis_req;
    always_comb m_vadd = mis_add;
    always_comb m_satp = mis_csr;
    always_comb for (int i = 0; i < chn; i++) begin
        s_resp[i] = set_hitpos[i][$clog2(way)] ? b_rqst[i] : 0;
        s_perm[i] = set_prm[i][$clog2(way)'(set_hitpos[i])];
        s_padd[i] = {set_dat[i][$clog2(way)'(set_hitpos[i])], b_vadd[i][11:0]};
        if (~|b_satp[i][63:60]) {s_perm[i], s_padd[i]} = {8'hff, b_vadd[i]}; // bare
        if (|m_resp & ~|m_perm & b_rqst[i] == mis_req) begin
            s_resp[i] = b_rqst[i];
            s_perm[i] = 0; // page fault from high level
        end
    end

    if (init) initial for (int i = 0; i < set; i++) tlb_ptr[i] = 0;
endmodule
