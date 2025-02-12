/**
 * mmu.sv:
 *   Top module of memory management unit. It mainly consists
 *   of connection of sub-modules and a page table walker.
 */

module mmu (
    input  logic clk,
    input  logic rst,
    input  logic fnci, // fence.i committed
    input  logic fncv, // sfence.vma committed
    /* ITLB interface */
    input  logic  [7:0] s_it_rqst, // instruction TLB request ID
    input  logic [63:0] s_it_vadd, // instruction TLB virtual address
    input  logic [63:0] s_it_satp, // instruction TLB SATP for translation
    output logic  [7:0] s_it_resp, // instruction TLB response ID
    output logic  [7:0] s_it_perm, // instruction TLB access permission
    output logic [63:0] s_it_padd, // instruction TLB physical address
    /* DTLB interface */
    input  logic  [7:0] s_dt_rqst, // data TLB request ID
    input  logic [63:0] s_dt_vadd, // data TLB virtual address
    input  logic [63:0] s_dt_satp, // data TLB SATP for translation
    output logic  [7:0] s_dt_resp, // data TLB response ID
    output logic  [7:0] s_dt_perm, // data TLB access permission
    output logic [63:0] s_dt_padd, // data TLB physical address
    /* ICACHE interface */
    input  logic        s_ic_flsh, // instruction cache flush signal
    input  logic  [7:0] s_ic_rqst, // instruction cache request ID
    input  logic [63:0] s_ic_addr, // instruction cache physical address
    output logic  [7:0] s_ic_resp, // instruction cache response ID
    output logic [63:0] s_ic_rdat, // instruction cache read data
    /* DCACHE interface */
    input  logic        s_dc_flsh, // data cache flush signal
    input  logic  [7:0] s_dc_rqst, // data cache request ID
    input  logic [63:0] s_dc_addr, // data cache physical address
    input  logic  [7:0] s_dc_strb, // data cache write strobe
    input  logic [63:0] s_dc_wdat, // data cache write data
    output logic  [7:0] s_dc_resp, // data cache response ID
    output logic  [7:0] s_dc_miss, // data cache miss signal
    output logic [63:0] s_dc_rdat, // data cache read data
    /* AXI master interface */
    /* write address channel */
    output logic  [7:0] m_axi_awid,
    output logic [63:0] m_axi_awaddr,
    output logic  [7:0] m_axi_awlen,
    output logic  [2:0] m_axi_awsize,
    output logic  [1:0] m_axi_awburst,
    output logic        m_axi_awlock,
    output logic  [3:0] m_axi_awcache,
    output logic  [2:0] m_axi_awprot,
    output logic  [3:0] m_axi_awqos,
    output logic        m_axi_awvalid,
    input  logic        m_axi_awready,
    /* write data channel */
    output logic [63:0] m_axi_wdata,
    output logic  [7:0] m_axi_wstrb,
    output logic        m_axi_wlast,
    output logic        m_axi_wvalid,
    input  logic        m_axi_wready,
    /* write response channel */
    input  logic  [7:0] m_axi_bid,
    input  logic  [1:0] m_axi_bresp,
    input  logic        m_axi_bvalid,
    output logic        m_axi_bready,
    /* read address channel */
    output logic  [7:0] m_axi_arid,
    output logic [63:0] m_axi_araddr,
    output logic  [7:0] m_axi_arlen,
    output logic  [2:0] m_axi_arsize,
    output logic  [1:0] m_axi_arburst,
    output logic        m_axi_arlock,
    output logic  [3:0] m_axi_arcache,
    output logic  [2:0] m_axi_arprot,
    output logic  [3:0] m_axi_arqos,
    output logic        m_axi_arvalid,
    input  logic        m_axi_arready,
    /* read data channel */
    input  logic  [7:0] m_axi_rid,
    input  logic [63:0] m_axi_rdata,
    input  logic  [1:0] m_axi_rresp,
    input  logic        m_axi_rlast,
    input  logic        m_axi_rvalid,
    output logic        m_axi_rready
);
    /* request ID catalog:
     *   8'b0000_0000: no request
     *   8'b0000_0001: ITLB request
     *   8'b01xx_xxxx: DTLB request
     *   8'b10xx_xxxx: ICACHE requests
     *   8'b11xx_xxxx: DCACHE requests
     */

    /* ITLB */
    logic  [7:0] it_rqst_m;
    logic [63:0] it_vadd_m;
    logic [63:0] it_satp_m;
    logic  [7:0] it_resp_m;
    logic  [7:0] it_perm_m;
    logic [63:0] it_padd_m;
    tlb #(.chn(1), .set(2), .way(8)) itlb (
        .clk(clk), .rst(rst), .flush(s_ic_flsh),
        .s_rqst(s_it_rqst), .m_rqst(it_rqst_m),
        .s_vadd(s_it_vadd), .m_vadd(it_vadd_m),
        .s_satp(s_it_satp), .m_satp(it_satp_m),
        .s_resp(s_it_resp), .m_resp(it_resp_m),
        .s_perm(s_it_perm), .m_perm(it_perm_m),
        .s_padd(s_it_padd), .m_padd(it_padd_m)
    );

    /* DTLB */
    logic  [7:0] dt_rqst_m;
    logic [63:0] dt_vadd_m;
    logic [63:0] dt_satp_m;
    logic  [7:0] dt_resp_m;
    logic  [7:0] dt_perm_m;
    logic [63:0] dt_padd_m;
    tlb #(.chn(1), .set(2), .way(16)) dtlb (
        .clk(clk), .rst(rst), .flush(s_dc_flsh),
        .s_rqst(s_dt_rqst), .m_rqst(dt_rqst_m),
        .s_vadd(s_dt_vadd), .m_vadd(dt_vadd_m),
        .s_satp(s_dt_satp), .m_satp(dt_satp_m),
        .s_resp(s_dt_resp), .m_resp(dt_resp_m),
        .s_perm(s_dt_perm), .m_perm(dt_perm_m),
        .s_padd(s_dt_padd), .m_padd(dt_padd_m)
    );

    /* STLB */
    logic [1:0] [7:0] st_rqst_s; logic  [7:0] st_rqst_m;
    logic [1:0][63:0] st_vadd_s; logic [63:0] st_vadd_m;
    logic [1:0][63:0] st_satp_s; logic [63:0] st_satp_m;
    logic [1:0] [7:0] st_resp_s; logic  [7:0] st_resp_m;
    logic [1:0] [7:0] st_perm_s; logic  [7:0] st_perm_m;
    logic [1:0][63:0] st_padd_s; logic [63:0] st_padd_m;
    logic             st_ready;
    logic       [7:0] st_rqst_b, st_rqst_f;
    logic      [63:0] st_vadd_b, st_vadd_f;
    tlb #(.chn(2), .set(64), .way(8)) stlb (
        .clk(clk), .rst(rst), .flush(0),
        .s_rqst({dt_rqst_m, it_rqst_m}), .m_rqst(st_rqst_m),
        .s_vadd({dt_vadd_m, it_vadd_m}), .m_vadd(st_vadd_m),
        .s_satp({dt_satp_m, it_satp_m}), .m_satp(st_satp_m),
        .s_resp({dt_resp_m, it_resp_m}), .m_resp(st_resp_m),
        .s_perm({dt_perm_m, it_perm_m}), .m_perm(st_perm_m),
        .s_padd({dt_padd_m, it_padd_m}), .m_padd(st_padd_m)
    );
    always_comb st_ready = ~|st_rqst_b | st_rqst_b == st_resp_m;
    always_comb st_rqst_f = st_ready ? st_rqst_m : st_rqst_b;
    always_comb st_vadd_f = st_ready ? st_vadd_m : st_vadd_b;
    always_ff @(posedge clk) st_rqst_b <= rst | 0 ? 0 : st_rqst_f;
    always_ff @(posedge clk) st_vadd_b <= st_vadd_f;

    /* cache definitions */
    logic       [7:0] dc_rqst_s, dc_rqst_m; logic       [7:0] ic_rqst_s, ic_rqst_m;
    logic      [63:0] dc_strb_s, dc_strb_m; logic      [63:0] ic_strb_s, ic_strb_m;
    logic      [63:0] dc_addr_s, dc_addr_m; logic      [63:0] ic_addr_s, ic_addr_m;
    logic [63:0][7:0] dc_wdat_s, dc_wdat_m; logic [63:0][7:0] ic_wdat_s, ic_wdat_m;
    logic       [7:0] dc_resp_s, dc_resp_m; logic       [7:0] ic_resp_s, ic_resp_m;
    logic       [7:0] dc_miss_s, dc_miss_m; logic       [7:0] ic_miss_s, ic_miss_m;
    logic [63:0][7:0] dc_rdat_s, dc_rdat_m; logic [63:0][7:0] ic_rdat_s, ic_rdat_m;
    logic             dc_ready;             logic             ic_ready;
    logic       [7:0] dc_rqst_b, dc_rqst_f; logic       [7:0] ic_rqst_b, ic_rqst_f;
    logic      [63:0] dc_addr_b, dc_addr_f; logic      [63:0] ic_addr_b, ic_addr_f;
    logic      [63:0] dc_strb_b, dc_strb_f;
    logic [63:0][7:0] dc_wdat_b, dc_wdat_f; logic       [5:0] ic_offset;

    /* instruction cache */
    cache #(.chn(1), .set(64), .way(8), .blk(64), .mshrsz(2)) icache (
        .clk(clk), .rst(rst), .flush(s_ic_flsh),
        .s_rqst(ic_rqst_s), .m_rqst(ic_rqst_m),
        .s_strb(ic_strb_s), .m_strb(ic_strb_m),
        .s_addr(ic_addr_s), .m_addr(ic_addr_m),
        .s_wdat(ic_wdat_s), .m_wdat(ic_wdat_m),
        .s_resp(ic_resp_s), .m_resp(ic_resp_m),
        .s_miss(ic_miss_s), .m_miss(ic_miss_m),
        .s_rdat(ic_rdat_s), .m_rdat(ic_rdat_m)
    );
    always_comb ic_rqst_s = s_ic_rqst;
    always_comb ic_addr_s = s_ic_addr;
    always_comb ic_strb_s = 0;
    always_comb ic_wdat_s = 0;
    always_comb s_ic_resp = |ic_miss_s ? 0 : ic_resp_s;
    always_comb s_ic_rdat = ic_rdat_s[ic_offset+7-:8];
    always_comb ic_ready = ~|ic_rqst_b | ic_rqst_b == ic_resp_m;
    always_comb ic_rqst_f = ic_ready ? ic_rqst_m : ic_rqst_b;
    always_comb ic_addr_f = ic_ready ? ic_addr_m : ic_addr_b;
    always_comb ic_resp_m = dc_resp_s[7:6] == 2'b10 ? dc_resp_s : 0;
    always_comb ic_miss_m = dc_miss_s;
    always_comb ic_rdat_m = dc_rdat_m;
    always_ff @(posedge clk) ic_rqst_b <= rst | s_ic_flsh ? 0 : ic_rqst_f;
    always_ff @(posedge clk) ic_addr_b <= ic_addr_f;
    always_ff @(posedge clk) ic_offset <= ic_addr_s[5:0];

    /* data cache */
    cache #(.chn(1), .set(64), .way(8), .blk(64), .mshrsz(4)) dcache (
        .clk(clk), .rst(rst), .flush(s_dc_flsh),
        .s_rqst(dc_rqst_s), .m_rqst(dc_rqst_m),
        .s_strb(dc_strb_s), .m_strb(dc_strb_m),
        .s_addr(dc_addr_s), .m_addr(dc_addr_m),
        .s_wdat(dc_wdat_s), .m_wdat(dc_wdat_m),
        .s_resp(dc_resp_s), .m_resp(dc_resp_m),
        .s_miss(dc_miss_s), .m_miss(dc_miss_m),
        .s_rdat(dc_rdat_s), .m_rdat(dc_rdat_m)
    );
    always_comb if (|dc_rqst_f) begin // DCACHE request arbiter
        dc_rqst_s = dc_rqst_f; dc_strb_s = dc_strb_f;
        dc_addr_s = dc_addr_f; dc_wdat_s = dc_wdat_f;
    end else if (|ic_rqst_f) begin
        dc_rqst_s = ic_rqst_f; dc_strb_s = 0;
        dc_addr_s = ic_addr_f; dc_wdat_s = 0;
    end else if (|st_rqst_f) begin
        dc_rqst_s = st_rqst_f; dc_strb_s = 0;
        dc_addr_s = st_vadd_f; dc_wdat_s = 0;
    end else begin
        dc_rqst_s = 0; dc_strb_s = 0;
        dc_addr_s = 0; dc_wdat_s = 0;
    end
    always_comb s_dc_resp = dc_resp_s[7:6] == 2'b11 ? dc_resp_s : 0;
    always_comb s_dc_miss = dc_miss_s;
    always_comb s_dc_rdat = dc_rdat_s[6'(dc_addr_b)+7-:8];
    always_comb dc_ready = ~|dc_rqst_b | dc_rqst_b == s_dc_resp;
    always_comb dc_rqst_f = dc_ready ? s_dc_rqst : dc_rqst_b;
    always_comb dc_addr_f = dc_ready ? s_dc_addr : dc_addr_b;
    always_comb dc_strb_f = dc_ready ?  64'(s_dc_strb) << (6'(s_dc_addr[5:3]) << 3) : dc_strb_b;
    always_comb dc_wdat_f = dc_ready ? 512'(s_dc_wdat) << (9'(s_dc_addr[5:3]) << 6) : dc_wdat_b;
    always_ff @(posedge clk) dc_rqst_b <= rst | s_dc_flsh ? 0 : dc_rqst_f;
    always_ff @(posedge clk) dc_strb_b <= dc_strb_f;
    always_ff @(posedge clk) dc_addr_b <= dc_addr_f;
    always_ff @(posedge clk) dc_wdat_b <= dc_wdat_f;

    /* page table walk */
    logic      [7:0] ptw_req; // page table walk request
    logic [4:0][8:0] ptw_vpn; // virtual page numbers
    logic     [43:0] ptw_ppn; // physical page number
    logic     [63:0] ptw_pte; // physical page number and page table entry
    logic     [63:0] ptw_add; // page table walk address
    logic      [7:0] ptw_stt; // state of page table walk
    logic      [2:0] ptw_num; // page table walk number
    logic      [7:0] ptw_prm; // permission of page table entry
    logic            ptw_mis; // DCACHE access miss
    always_comb st_resp_m = ptw_stt == 4 ? ptw_req : 0;
    always_comb st_perm_m = ptw_prm;
    always_comb st_padd_m = {52'(ptw_ppn), 12'd0};
    always_ff @(posedge clk) if (rst) ptw_stt <= 0;
        else case (ptw_stt)
            0: // waiting for STLB request
                if (|st_rqst_m) begin
                    ptw_req <= st_rqst_m;
                    ptw_vpn <= st_vadd_m[56:12];
                    ptw_ppn <= st_satp_m[43:0];
                    ptw_stt <= 1;
                    ptw_mis <= 0;
                    if      (st_satp_m[63:60] == 4'd8)  ptw_num <= 2;
                    else if (st_satp_m[63:60] == 4'd9)  ptw_num <= 3;
                    else if (st_satp_m[63:60] == 4'd10) ptw_num <= 4;
                    else {ptw_prm, ptw_stt} <= 4; // page fault when SATP is invalid
                end
            1: begin // STLB request detected, setting address
                ptw_add <= {8'd0, ptw_ppn, ptw_vpn[ptw_num], 3'd0};
                ptw_stt <= 2;
            end
            2: // address set, waiting for response
                if (dc_resp_s == ptw_req)
                    if (|dc_miss_s) ptw_mis <= 1;
                    else begin
                        ptw_stt <= 3;
                        ptw_mis <= 0;
                        ptw_pte <= dc_rdat_s[6'(ptw_add)+7-:8];
                    end
            3: begin // response received
                ptw_ppn <= ptw_pte[53:10];
                ptw_stt <= ptw_num == 0 ? 3 : 0;
                if (ptw_pte[1] | ptw_pte[3]) begin // leaf node
                    ptw_stt <= 4;
                    for (int i = 0; i < 4 & i < ptw_num; i++)
                        if (~|ptw_pte[i*9+18-:9]) ptw_ppn[i*9+8-:9] <= ptw_vpn[i]; // super page
                        else {ptw_prm, ptw_stt} <= 4;                              // misaligned super page
                    if (~ptw_pte[6]) {ptw_prm, ptw_stt} <= 4;                      // access unaccessed page
                    if (~ptw_pte[7] & st_perm_m[2]) {ptw_prm, ptw_stt} <= 4;       // write to clean page
                    if ((ptw_pte[3:0] | st_perm_m[3:0]) != ptw_pte[3:0])           // permission violation
                        {ptw_prm, ptw_stt} <= 4;
                end
                if (~ptw_pte[0]) {ptw_prm, ptw_stt} <= 4; // invalid bit
                ptw_num <= ptw_num - 1;
            end
            4: {ptw_prm, ptw_stt} <= 0; // page table walk done
        endcase

    /* AXI state machine */
    logic             axi_fls, axi_ccl; // flush and cancel signal
    logic       [7:0] axi_stt, axi_cnt; // AXI state and counter
    logic       [7:0] axi_req;          // AXI request ID
    logic [63:0][7:0] axi_buf;          // buffer of cache line
    logic      [63:0] axi_str;          // write strobe
    always_comb axi_fls = 0;
    always_comb dc_resp_m = ~axi_ccl & axi_stt == 6 ? axi_req : 0;
    always_comb dc_miss_m = 0;
    always_ff @(posedge clk) if (rst | ~|axi_stt) axi_ccl <= 0; else if (axi_fls) axi_ccl <= 1;
    always_ff @(posedge clk) if (rst) begin
        axi_stt       <= 0;
        m_axi_arvalid <= 0;
        m_axi_awvalid <= 0;
        m_axi_rready  <= 0;
        m_axi_wvalid  <= 0;
        m_axi_bready  <= 0;
    end else case (axi_stt)
        0: // initial state
            if (axi_fls) axi_stt <= 0;
            else if (|dc_rqst_m) begin
                axi_stt       <= 1;
                axi_cnt       <= 0;
                axi_req       <= dc_rqst_m;
                axi_str       <= dc_strb_m;
                axi_buf       <= dc_wdat_m;
                m_axi_arvalid <= 1;
                m_axi_araddr  <= dc_addr_m;
                if (dc_rqst_m    == 3) m_axi_arlen <= 0; // STLB
                if (dc_rqst_m[7] == 1) m_axi_arlen <= 7; // CACHE
            end
        1: // AXI port request detected, waiting for read address handshake
            if (m_axi_arready) begin
                axi_stt <= 2;
                m_axi_arvalid <= 0;
                m_axi_rready  <= 1;
            end
        2: // read address sent, waiting for response
            if (m_axi_rvalid) begin
                dc_rdat_m[axi_cnt+7-:8] <= m_axi_rdata[63:0];
                axi_cnt <= axi_cnt + 8;
                if (m_axi_rlast) m_axi_rready <= 0;
                if (m_axi_rlast)
                    if (|axi_str) begin
                        axi_stt       <= 3;
                        axi_cnt       <= 0;
                        m_axi_awvalid <= 1;
                        m_axi_awaddr  <= m_axi_araddr;
                        m_axi_awlen   <= m_axi_arlen;
                    end else axi_stt <= 6;
            end
        3: // writing enabled, waiting for AW handshake
            if (m_axi_awready) begin
                axi_stt <= 4;
                m_axi_awvalid <= 0;
                m_axi_wvalid  <= 1;
                m_axi_wdata   <= axi_buf[7:0];
                m_axi_wlast   <= 0;
                m_axi_wstrb   <= axi_str[7:0];
                axi_cnt       <= axi_cnt + 8;
            end
        4: // address sent, transferring data
            if (m_axi_wready) begin
                axi_cnt <= axi_cnt + 8;
                m_axi_wdata <= axi_buf[axi_cnt+7-:8];
                m_axi_wstrb <= axi_str[axi_cnt+7-:8];
                if (axi_cnt == m_axi_arlen     << 3) m_axi_wlast <= 1;
                if (axi_cnt == m_axi_arlen + 1 << 3) begin
                    m_axi_wvalid <= 0;
                    m_axi_wdata  <= 0;
                    m_axi_wlast  <= 0;
                    m_axi_bready <= 1;
                    axi_stt <= 5;
                end
            end
        5: // waiting for B handshake
            if (m_axi_bvalid) {m_axi_bready, axi_stt} <= 6;
        6: // transaction done, ready for response
            axi_stt <= 0;
    endcase
    always_comb m_axi_arid    = 0;
    always_comb m_axi_arburst = 'b01;  // INCR burst
    always_comb m_axi_arsize  = 'b011; // 8 bytes
    always_comb m_axi_arlock  = 0;
    always_comb m_axi_arcache = 0;
    always_comb m_axi_arprot  = 0;
    always_comb m_axi_arqos   = 0;
    always_comb m_axi_awid    = 0;
    always_comb m_axi_awburst = 'b01;  // INCR burst
    always_comb m_axi_awsize  = 'b011; // 8 bytes
    always_comb m_axi_awlock  = 0;
    always_comb m_axi_awcache = 0;
    always_comb m_axi_awprot  = 0;
    always_comb m_axi_awqos   = 0;
endmodule
