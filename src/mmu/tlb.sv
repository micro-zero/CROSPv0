/**
 * tlb.sv:
 *   Generic translation lookaside buffer.
 */

module tlb #(
    parameter chn  = 1,  // request channel width
    parameter set  = 64, // number of sets
    parameter way  = 8   // number of ways
)(
    input  logic         clk,   // clock signal
    input  logic         rst,   // reset signal
    input  logic [255:0] flush, // flush bitmap
    /* fence interface */
    input  logic  [2:0] fence, // fence bits [2]: all asid, [1]: all address, [0]: sfence.vma
    input  logic [15:0] fasid, // fence ASID
    input  logic [63:0] fvadd, // fence virtual address
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
    /* request buffer */
    logic [chn-1:0] [7:0] b_rqst;
    logic [chn-1:0][63:0] b_vadd;
    logic [chn-1:0][63:0] b_satp;
    always_ff @(posedge clk) for (int i = 0; i < chn; i++)
        if (rst) b_rqst[i] <= 0; else begin
            b_rqst[i] <= flush[s_rqst[i]] ? 0 : s_rqst[i];
            b_vadd[i] <= s_vadd[i];
            b_satp[i] <= s_satp[i];
        end

    /* TLB entity */
    logic       [way*52-1:0] tlb_dat[set-1:0]; // TLB data
    logic       [way*68-1:0] tlb_tag[set-1:0]; // TLB tag of each block, [67:52]ASID/[51:0]PADDR
    logic       [way* 8-1:0] tlb_prm[set-1:0]; // access permission of each entry
    logic [set-1:0][way-1:0] tlb_vld;          // TLB flags of each entry
    logic [set-1:0][way-1:0] tlb_bdt;          // TLB binary decision tree
    /* R/W indices */
    logic [chn-1:0][$clog2(set)-1:0] rindex;
    logic          [$clog2(set)-1:0] windex;
    logic                      [2:0] rfence; // fence address has been read
    logic                     [15:0] rasid;  // ASID of last cycle
    logic                     [63:0] rvadd;  // virtual address of last cycle
    /* requested set */
    logic [chn-1:0]  [way-1:0][51:0] set_dat;
    logic [chn-1:0]  [way-1:0][67:0] set_tag;
    logic [chn-1:0]  [way-1:0] [7:0] set_prm;
    logic [chn-1:0]  [way-1:0]       set_vld;
    logic [chn-1:0]  [way-1:0]       set_bdt, new_bdt;
    logic [chn-1:0]  [way-1:0]       set_hit, set_eql;
    logic [chn-1:0][$clog2(way)  :0] set_hitpos;
    logic [chn-1:0][$clog2(way)-1:0] set_ptr;
    logic [chn-1:0][$clog2(way)-1:0] bdt_pos; // BDT position
    logic          [$clog2(way)-1:0] bdt_cur; // BDT cursor
    /* MSHR (single) */
    logic                   miss, fill;
    logic             [7:0] mis_req;
    logic            [63:0] mis_add, mis_csr;
    logic   [way-1:0]       mis_vld, fil_vld, fnc_vld;
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
    always_comb for (int i = 0; i < chn; i++) for (int j = 0; j < way; j++) set_eql[i][j] =
        (set_tag[i][j][67:52] == (rfence[0] ? rasid        : b_satp[i][59:44]) | rfence[0] & rfence[2]) &
         set_tag[i][j][51:0]  == (rfence[0] ? rvadd[63:12] : b_vadd[i][63:12]);
    always_comb begin
        fnc_vld = set_vld[0];
        for (int i = 0; i < way; i++) if (set_eql[0][i]) fnc_vld[i] = 0; // clear equal entries
    end
    always_comb for (int i = 0; i < chn; i++) begin
        for (int j = 0; j < way; j++) set_hit[i][j] = set_vld[i][j] & set_eql[i][j];
        set_hit[i][0] |= ~|b_satp[i][63:60]; // hit when bare
    end
    always_comb for (int i = 0; i < chn; i++) begin
        new_bdt[i] = set_bdt[i];
        bdt_cur = 0;
        for (int j = $clog2(way) - 1; j >= 0; j--) begin
            new_bdt[i][bdt_cur] = ~set_hitpos[i][j];
            bdt_cur = (bdt_cur << 1) + (set_hitpos[i][j] ? 2 : 1);
        end
        bdt_cur = 0;
        for (int j = $clog2(way) - 1; j >= 0; j--) begin
            bdt_pos[i][j] = tlb_bdt[rindex[i]][bdt_cur];
            bdt_cur = (bdt_cur << 1) + (bdt_pos[i][j] ? 2 : 1);
        end
    end
    always_comb for (int i = 0; i < chn; i++)
        rindex[i]      = $clog2(set)'( fence[0] ? fvadd[63:12] : s_vadd[i][63:12]);
    always_comb windex = $clog2(set)'(rfence[0] ? rvadd[63:12] : m_vadd   [63:12]);
    always_ff @(posedge clk) if (rst) rfence <= 0; else rfence <= fence;
    always_ff @(posedge clk) rasid <= fasid;
    always_ff @(posedge clk) rvadd <= fvadd;
    always_ff @(posedge clk) if (rst | rfence[0] & rfence[1]) tlb_vld <= 0;
        else if (rfence[0]) // clear entry of flushed address
            tlb_vld[windex] <= fnc_vld;
        else if (|m_resp & |m_perm) begin // TLB fill
            tlb_vld[windex] <= fil_vld;
            tlb_dat[windex] <= fil_dat;
            tlb_tag[windex] <= fil_tag;
            tlb_prm[windex] <= fil_prm;
        end
    always_ff @(posedge clk) for (int i = 0; i < chn; i++)
        if (~rfence[0] & |b_rqst[i] & set_hitpos[i][$clog2(way)])
            tlb_bdt[$clog2(set)'(b_vadd[i][63:12])] <= new_bdt[i];
    always_ff @(posedge clk) for (int i = 0; i < chn; i++) begin
        set_dat[i] <= tlb_dat[rindex[i]];
        set_tag[i] <= tlb_tag[rindex[i]];
        set_prm[i] <= tlb_prm[rindex[i]];
        set_vld[i] <= tlb_vld[rindex[i]];
        set_bdt[i] <= tlb_bdt[rindex[i]];
        set_ptr[i] <= bdt_pos[i];
        for (int j = way - 1; j >= 0; j--)
            if (~tlb_vld[rindex[i]][j]) set_ptr[i] <= $clog2(way)'(j);
    end
    always_ff @(posedge clk) if (rst) fill <= 0; // also includes page fault
        else if (|m_resp) fill <= 1; else fill <= 0;
    always_ff @(posedge clk) if (rst | flush[mis_req]) {miss, mis_req} <= 0;
        else begin
            if (|m_resp) mis_req <= 0; // master interface handled
            if (fill)    miss    <= 0; // filling handled
            if (~miss) for (int i = 0; i < chn; i++)
                if (|b_rqst[i] & ~set_hitpos[i][$clog2(way)]) begin
                    miss    <= flush[b_rqst[i]] ? 0 : 1;
                    mis_req <= flush[b_rqst[i]] ? 0 : b_rqst[i];
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
endmodule
