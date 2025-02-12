/**
 * tlb.sv:
 *   Generic translation lookaside buffer.
 */

module tlb #(
    parameter chn = 1,  // request channel width
    parameter set = 64, // number of sets
    parameter way = 8   // number of ways
)(
    input  logic clk,
    input  logic rst,
    input  logic flush,
    /* slave interface with lower-level TLB or pipeline */
    input  logic [chn-1:0] [7:0] s_rqst, // request ID
    input  logic [chn-1:0][63:0] s_vadd, // virtual address
    input  logic [chn-1:0][63:0] s_satp, // CSR SATP for translation
    output logic [chn-1:0] [7:0] s_resp, // response ID
    output logic [chn-1:0] [7:0] s_perm, // access permission
    output logic [chn-1:0][63:0] s_padd, // physical address
    /* master interface with higher-level TLB */
    output logic  [7:0] m_rqst, // request ID
    output logic [63:0] m_vadd, // virtual address
    output logic [63:0] m_satp, // CSR SATP for translation
    input  logic  [7:0] m_resp, // response ID
    input  logic  [7:0] m_perm, // access permission, 0 indicates page fault
    input  logic [63:0] m_padd  // physical address
);
    /* request buffer */
    logic [chn-1:0] [7:0] b_rqst, f_rqst;
    logic [chn-1:0][63:0] b_vadd, f_vadd;
    logic [chn-1:0][63:0] b_satp, f_satp;
    logic [chn-1:0]       b_ready, b_miss;
    always_comb for (int i = 0; i < chn; i++) b_ready[i] = ~|b_rqst[i] | |s_resp[i];
    always_comb for (int i = 0; i < chn; i++) begin
        f_rqst[i] = b_ready[i] ? s_rqst[i] : b_rqst[i];
        f_vadd[i] = b_ready[i] ? s_vadd[i] : b_vadd[i];
        f_satp[i] = b_ready[i] ? s_satp[i] : b_satp[i];
    end
    always_ff @(posedge clk) if (rst | flush) b_rqst <= 0;
        else for (int i = 0; i < chn; i++) begin
            if (|s_resp[i]) b_rqst[i] <= 0;
            if (|s_rqst[i] & b_ready[i]) begin
                b_rqst[i] <= s_rqst[i];
                b_miss[i] <= 0;
                b_vadd[i] <= s_vadd[i];
                b_satp[i] <= s_satp[i];
            end
            if (|b_rqst[i] & ~set_hitpos[i][$clog2(way)]) b_miss[i] <= 1;
            if (b_miss[i]) b_miss[i] <= 0; // cancel after being sent
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
    logic [way-1:0]                  req_vld, fil_vld;
    logic [way-1:0][51:0]            req_dat, fil_dat;
    logic [way-1:0][67:0]            req_tag, fil_tag;
    logic [way-1:0] [7:0]            req_prm, fil_prm;
    logic [$clog2(way)-1:0]          req_ptr, fil_ptr;
    firstk #(.width(way), .k(1)) hit_pos_inst[chn-1:0](.bits(set_hit), .pos(set_hitpos));
    always_comb begin
        fil_vld = req_vld;
        fil_tag = req_tag;
        fil_dat = req_dat;
        fil_prm = req_prm;
        fil_vld[req_ptr] = 1;
        fil_tag[req_ptr] = {m_satp[59:44], m_vadd[63:12]};
        fil_dat[req_ptr] = m_padd[51:0];
        fil_prm[req_ptr] = m_perm;
    end
    always_comb for (int i = 0; i < chn; i++) begin
        set_hit[i][0] = ~|b_satp[i][63:60]; // hit when bare
        for (int j = 0; j < way; j++)
            if (set_vld[i][j] & set_tag[i][j] == {b_satp[i][59:44], b_vadd[i][63:12]})
                set_hit[i][j] = 1;
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
        set_dat[i] <= tlb_dat[$clog2(set)'(f_vadd[i][63:12])];
        set_tag[i] <= tlb_tag[$clog2(set)'(f_vadd[i][63:12])];
        set_prm[i] <= tlb_prm[$clog2(set)'(f_vadd[i][63:12])];
        set_ptr[i] <= tlb_ptr[$clog2(set)'(f_vadd[i][63:12])];
        set_vld[i] <= tlb_vld[$clog2(set)'(f_vadd[i][63:12])];
    end
    always_ff @(posedge clk) for (int i = 0; i < chn; i++)
        if (|b_rqst[i] & b_miss[i]) begin
            req_tag <= set_tag[i];
            req_dat <= set_dat[i];
            req_prm <= set_prm[i];
            req_ptr <= set_ptr[i];
        end

    /* master interface */
    always_comb begin
        m_rqst = 0;
        m_vadd = 0;
        m_satp = 0;
        for (int i = 0; i < chn; i++) if (|b_rqst[i]) begin
            if (b_miss[i]) m_rqst = b_rqst[i];
            m_vadd = b_vadd[i];
            m_satp = b_satp[i];
        end
    end

    /* slave interface */
    always_comb for (int i = 0; i < chn; i++) begin
        s_resp[i] = set_hitpos[i][$clog2(way)] ? b_rqst[i] : 0;
        s_perm[i] = set_prm[i][$clog2(way)'(set_hitpos[i])];
        s_padd[i] = {set_dat[i][$clog2(way)'(set_hitpos[i])], b_vadd[i][11:0]};
        if (~|b_satp[i][63:60]) s_padd[i] = b_vadd[i]; // bare
        if (~|b_satp[i][63:60]) s_perm[i] = 8'hff;
        if (m_resp == b_rqst[i] & ~|m_perm) begin // page fault from high level
            s_resp[i] = b_rqst[i];
            s_perm[i] = 0;
        end
    end
endmodule
