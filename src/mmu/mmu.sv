/**
 * mmu.sv:
 *   Top module of memory management unit. It mainly consists
 *   of connection of sub-modules and a page table walker.
 */

module mmu(
    input  logic         clk,
    input  logic         rst,
    input  logic         fnci,      // fence.i committed
    input  logic   [2:0] fncv,      // sfence.vma committed
    input  logic  [15:0] fncv_asid, // sfence.vma ASID
    input  logic  [63:0] fncv_vadd, // sfence.vma virtual address
    input  logic [255:0] flush,     // flush bitmap
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
    input  logic  [7:0] s_ic_rqst, // instruction cache request ID
    input  logic [63:0] s_ic_addr, // instruction cache physical address
    output logic  [7:0] s_ic_resp, // instruction cache response ID
    output logic [63:0] s_ic_rdat, // instruction cache read data
    /* DCACHE interface */
    input  logic  [7:0] s_dc_rqst, // data cache request ID
    input  logic [63:0] s_dc_addr, // data cache physical address
    input  logic  [2:0] s_dc_bits, // data cache functional bits ([2]: R/W [1:0]: width)
    input  logic [63:0] s_dc_wdat, // data cache write data
    output logic  [7:0] s_dc_resp, // data cache response ID
    output logic  [7:0] s_dc_miss, // data cache miss signal
    output logic [63:0] s_dc_rdat, // data cache read data
    /* coherence interface */
    input  logic        s_coh_lock, // slave coherence lock
    input  logic  [7:0] s_coh_rqst, // slave coherence request ID
    input  logic  [7:0] s_coh_trsc, // slave coherence transaction
    input  logic [63:0] s_coh_addr, // slave coherence physical address
    output logic  [7:0] s_coh_resp, // slave coherence response ID
    output logic  [7:0] s_coh_mesi, // slave coherence state
    output logic        m_coh_lock, // master coherence lock
    output logic  [7:0] m_coh_rqst, // master coherence request ID
    output logic  [7:0] m_coh_trsc, // master coherence transaction
    output logic [63:0] m_coh_addr, // master coherence physical address
    input  logic  [7:0] m_coh_resp, // master coherence response ID
    input  logic  [7:0] m_coh_mesi, // master coherence state
    /* AXI master interface */
    /* write address channel */
    output logic [63:0] m_axi_awaddr,
    output logic  [7:0] m_axi_awlen,
    output logic  [2:0] m_axi_awsize,
    output logic  [1:0] m_axi_awburst,
    output logic        m_axi_awvalid,
    input  logic        m_axi_awready,
    /* write data channel */
    output logic [63:0] m_axi_wdata,
    output logic  [7:0] m_axi_wstrb,
    output logic        m_axi_wlast,
    output logic        m_axi_wvalid,
    input  logic        m_axi_wready,
    /* write response channel */
    input  logic  [1:0] m_axi_bresp,
    input  logic        m_axi_bvalid,
    output logic        m_axi_bready,
    /* read address channel */
    output logic [63:0] m_axi_araddr,
    output logic  [7:0] m_axi_arlen,
    output logic  [2:0] m_axi_arsize,
    output logic  [1:0] m_axi_arburst,
    output logic        m_axi_arvalid,
    input  logic        m_axi_arready,
    /* read data channel */
    input  logic [63:0] m_axi_rdata,
    input  logic  [1:0] m_axi_rresp,
    input  logic        m_axi_rlast,
    input  logic        m_axi_rvalid,
    output logic        m_axi_rready
);
    /* request ID catalog:
     *   8'b0000_0000: no request
     *   8'b0000_0001: coherence request
     *   8'b0000_0010: DCACHE replacement
     *   8'b100x_xxxx: ITLB requests
     *   8'b101x_xxxx: ICACHE requests
     *   8'b110x_xxxx: DTLB requests
     *   8'b111x_xxxx: DCACHE requests
     * to support LQ/SQ of more than 16 entries, ID width needs extension
     */
    `include "pma.sv"

    /* ITLB */
    logic  [7:0] it_rqst_m;
    logic [63:0] it_vadd_m;
    logic [63:0] it_satp_m;
    logic  [7:0] it_resp_m;
    logic  [7:0] it_perm_m;
    logic [63:0] it_padd_m;
    tlb #(.chn(1), .set(2), .way(8)) itlb (
        .clk(clk), .rst(rst), .flush(flush),
        .fence(fncv), .fasid(fncv_asid), .fvadd(fncv_vadd),
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
    tlb #(.chn(1), .set(2), .way(8)) dtlb (
        .clk(clk), .rst(rst), .flush(flush),
        .fence(fncv), .fasid(fncv_asid), .fvadd(fncv_vadd),
        .s_rqst(s_dt_rqst), .m_rqst(dt_rqst_m),
        .s_vadd(s_dt_vadd), .m_vadd(dt_vadd_m),
        .s_satp(s_dt_satp), .m_satp(dt_satp_m),
        .s_resp(s_dt_resp), .m_resp(dt_resp_m),
        .s_perm(s_dt_perm), .m_perm(dt_perm_m),
        .s_padd(s_dt_padd), .m_padd(dt_padd_m)
    );

    /* STLB */
    logic  [7:0] st_rqst_m;
    logic [63:0] st_vadd_m;
    logic [63:0] st_satp_m;
    logic  [7:0] st_resp_m;
    logic  [7:0] st_perm_m;
    logic [63:0] st_padd_m;
    logic             st_ready;
    logic       [7:0] st_rqst_b, st_rqst_f;
    logic      [63:0] st_vadd_b, st_vadd_f;
    tlb #(.chn(2), .set(64), .way(4)) stlb (
        .clk(clk), .rst(rst), .flush(flush),
        .fence(fncv), .fasid(fncv_asid), .fvadd(fncv_vadd),
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
    always_ff @(posedge clk) st_rqst_b <= rst | flush[st_rqst_f] ? 0 : st_rqst_f;
    always_ff @(posedge clk) st_vadd_b <= st_vadd_f;

    /* cache definitions */
    logic       [7:0] dc_trsc_s, dc_trsc_m; logic       [7:0] ic_trsc_s, ic_trsc_m;
    logic       [7:0] dc_rqst_s, dc_rqst_m; logic       [7:0] ic_rqst_s, ic_rqst_m;
    logic      [63:0] dc_strb_s, dc_strb_m; logic      [63:0] ic_strb_s, ic_strb_m;
    logic      [63:0] dc_addr_s, dc_addr_m; logic      [63:0] ic_addr_s, ic_addr_m;
    logic [63:0][7:0] dc_wdat_s, dc_wdat_m; logic [63:0][7:0] ic_wdat_s, ic_wdat_m;
    logic       [7:0] dc_resp_s, dc_resp_m; logic       [7:0] ic_resp_s, ic_resp_m;
    logic       [7:0] dc_miss_s, dc_miss_m; logic       [7:0] ic_miss_s, ic_miss_m;
    logic      [63:0] dc_ofst_s, dc_ofst_m; logic      [63:0] ic_ofst_s, ic_ofst_m;
    logic [63:0][7:0] dc_rdat_s, dc_rdat_m; logic [63:0][7:0] ic_rdat_s, ic_rdat_m;
    logic             dc_ready;             logic             ic_ready;
    logic       [7:0] dc_rqst_b, dc_rqst_f; logic       [7:0] ic_rqst_b, ic_rqst_f;
    logic      [63:0] dc_addr_b, dc_addr_f; logic      [63:0] ic_addr_b, ic_addr_f;
    logic       [2:0] dc_bits_b, dc_bits_f;
    logic      [63:0] dc_strb_b, dc_strb_f;
    logic [63:0][7:0] dc_wdat_b, dc_wdat_f; logic       [5:0] ic_offset;
    /* buffered coherence data:
     *   since slave coherence request will not hold, slave request buffer is used
     *     to store coherence requests from other objects, and slave response buffer
     *     holds cache response of block state change, then to wait for AXI finish
     *   master request data will only hold for one cycle, but the related buffer
     *     will hold until response, and response buffer has the same function with
     *     slave response buffer to wait for AXI handling
     *   slave lock is to assure that before a cache request which requires coherence
     *     request is totally handled, MMU will not answer any coherence request from
     *     other objects to gurantee atomicity
     *   flush also affects master coherence requests, but if a flush occurs after
     *     master request sent and before responsed, this flush should be buffered
     *     and eventually flush master buffer when response received
     */
    logic       [7:0] coh_rqst_sb, coh_trsc_sb, coh_rqst_mb, coh_trsc_mb; // buffered request and response
    logic      [63:0] coh_addr_sb, coh_addr_mb, coh_strb_mb;
    logic       [7:0] coh_resp_sb, coh_mesi_sb, coh_resp_mb, coh_mesi_mb;
    logic [63:0][7:0] coh_rdat_sb, coh_wdat_mb;
    logic       [7:0] coh_lock_sb; // coherence locked request ID
    logic             coh_flsh_mb; // record flush when master coherence request sent but not answered
    logic             coh_takn_mb; // master coherence request taken by AXI

    /* instruction cache */
    cache #(.chn(1), .set(128), .way(4), .blk(64), .mshrsz(2)) icache (
        .clk(clk), .rst(rst | fnci), .rid(0), .flush(flush),
        .s_trsc(ic_trsc_s), .m_trsc(ic_trsc_m),
        .s_rqst(ic_rqst_s), .m_rqst(ic_rqst_m),
        .s_strb(ic_strb_s), .m_strb(ic_strb_m),
        .s_addr(ic_addr_s), .m_addr(ic_addr_m),
        .s_wdat(ic_wdat_s), .m_wdat(ic_wdat_m),
        .s_resp(ic_resp_s), .m_resp(ic_resp_m),
        .s_miss(ic_miss_s), .m_miss(ic_miss_m),
        .s_ofst(ic_ofst_s), .m_ofst(ic_ofst_m),
        .s_rdat(ic_rdat_s), .m_rdat(ic_rdat_m)
    );
    always_comb ic_trsc_s = |coh_rqst_sb ? coh_trsc_sb : 0;
    always_comb ic_rqst_s = |coh_rqst_sb ? coh_rqst_sb : s_ic_rqst;
    always_comb ic_addr_s = |coh_rqst_sb ? coh_addr_sb : s_ic_addr;
    /* It seems that proxy kernel does not exceute FENCE.I after handling
       HTIF system proxy of loading data to code segment, so invalidating
       coherence-related line in instruction cache can issue this problem */
    always_comb ic_strb_s = 0;
    always_comb ic_wdat_s = 0;
    always_comb s_ic_resp = |ic_miss_s ? 0 : ic_resp_s;
    always_comb s_ic_rdat = ic_rdat_s[ic_offset+7-:8];
    always_comb ic_ready = ~|ic_rqst_b | ic_rqst_b == ic_resp_m;
    always_comb ic_rqst_f = ic_ready ? ic_rqst_m : ic_rqst_b;
    always_comb ic_addr_f = ic_ready ? ic_addr_m : ic_addr_b;
    always_comb ic_resp_m = dc_resp_s;
    always_comb ic_miss_m = dc_miss_s;
    always_comb ic_ofst_m = dc_ofst_s;
    always_comb ic_rdat_m = dc_rdat_s;
    always_ff @(posedge clk) ic_rqst_b <= rst | flush[ic_rqst_f] ? 0 : ic_rqst_f;
    always_ff @(posedge clk) ic_addr_b <= ic_addr_f;
    always_ff @(posedge clk) ic_offset <= s_ic_addr[5:0];

    /* data cache */
    logic [63:0] s_dc_strb;
    cache #(.chn(1), .set(128), .way(4), .blk(64), .mshrsz(2)) dcache (
        .clk(clk), .rst(rst), .rid(8'b0000_0010), .flush(flush),
        .s_trsc(dc_trsc_s), .m_trsc(dc_trsc_m),
        .s_rqst(dc_rqst_s), .m_rqst(dc_rqst_m),
        .s_strb(dc_strb_s), .m_strb(dc_strb_m),
        .s_addr(dc_addr_s), .m_addr(dc_addr_m),
        .s_wdat(dc_wdat_s), .m_wdat(dc_wdat_m),
        .s_resp(dc_resp_s), .m_resp(dc_resp_m),
        .s_miss(dc_miss_s), .m_miss(dc_miss_m),
        .s_ofst(dc_ofst_s), .m_ofst(dc_ofst_m),
        .s_rdat(dc_rdat_s), .m_rdat(dc_rdat_m)
    );
    always_comb s_dc_strb = s_dc_bits[2] ? ~(-64'd1 << (6'd1 << 2'(s_dc_bits[1:0]))) << s_dc_addr[2:0] : 0;
    always_comb dc_ready = ~|dc_rqst_b | dc_rqst_b == s_dc_resp;
    always_comb dc_rqst_f = dc_ready ? s_dc_rqst : dc_rqst_b;
    always_comb dc_addr_f = dc_ready ? s_dc_addr : dc_addr_b;
    always_comb dc_bits_f = dc_ready ? s_dc_bits : dc_bits_b;
    always_comb dc_strb_f = dc_ready ?      s_dc_strb  << (6'(s_dc_addr[5:3]) << 3) : dc_strb_b;
    always_comb dc_wdat_f = dc_ready ? 512'(s_dc_wdat) << (9'(s_dc_addr[5:3]) << 6) : dc_wdat_b;
    always_ff @(posedge clk) dc_rqst_b <= rst | flush[dc_rqst_f] ? 0 : dc_rqst_f;
    always_ff @(posedge clk) dc_bits_b <= dc_bits_f;
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
    always_comb st_resp_m = ptw_stt == 4 ? ptw_req : 0;
    always_comb st_perm_m = ptw_prm;
    always_comb st_padd_m = {52'(ptw_ppn), 12'd0};
    always_ff @(posedge clk) if (rst | flush[ptw_req]) {ptw_req, ptw_stt} <= 0;
        else case (ptw_stt)
            0: // waiting for STLB request
                if (|st_rqst_f) begin
                    ptw_stt <= flush[st_rqst_f] ? 0 : 1;
                    ptw_req <= flush[st_rqst_f] ? 0 : st_rqst_f;
                    ptw_vpn <= st_vadd_f[56:12];
                    ptw_ppn <= st_satp_m[43:0];
                    if      (st_satp_m[63:60] == 4'd8)  ptw_num <= 2;
                    else if (st_satp_m[63:60] == 4'd9)  ptw_num <= 3;
                    else if (st_satp_m[63:60] == 4'd10) ptw_num <= 4;
                    else {ptw_prm, ptw_stt} <= 4; // page fault when SATP is invalid
                end
            1: begin // STLB request detected, setting address
                ptw_add <= {8'd0, ptw_ppn, ptw_vpn[ptw_num], 3'd0};
                /* todo: PTW also needs PMA/PMP check */
                ptw_stt <= 2;
            end
            2: // address set, waiting for response
                if (dc_resp_s == ptw_req & ~|dc_miss_s) begin
                    ptw_stt <= 3;
                    ptw_pte <= dc_rdat_s[6'(ptw_add)+7-:8];
                end
            3: begin // response received
                ptw_ppn <= ptw_pte[53:10];
                ptw_stt <= ptw_num == 0 ? 4 : 1;
                if (ptw_pte[1] | ptw_pte[3]) begin // leaf node
                    ptw_prm <= ptw_pte[7:0];
                    ptw_stt <= 4;
                    for (int i = 0; i < 4 & i < ptw_num; i++)
                        if (~|ptw_pte[i*9+18-:9]) ptw_ppn[i*9+8-:9] <= ptw_vpn[i]; // super page
                        else {ptw_prm, ptw_stt} <= 4;                              // misaligned super page
                end
                if (ptw_pte[63]) // NAPOT bit
                    if (ptw_pte[13:10] == 4'b1000)
                        ptw_ppn[3:0] <= ptw_vpn[0][3:0]; // 64-KiB contiguous region
                    else {ptw_prm, ptw_stt} <= 4;
                if (~ptw_pte[0]) {ptw_prm, ptw_stt} <= 4; // invalid bit
                ptw_num <= ptw_num - 1;
            end
            4: {ptw_prm, ptw_stt} <= 0; // page table walk done
        endcase

    /* AXI state machine */
    logic             axi_fls;          // flush signal
    logic       [7:0] axi_stt, axi_cnt; // AXI state and counter
    logic       [7:0] axi_req, axi_thr; // AXI request and through ID
    logic [63:0][7:0] axi_buf;          // buffer of cache line
    logic      [63:0] axi_str;          // write strobe
    always_comb dc_resp_m = axi_stt == 6 & ~axi_fls ? axi_req : 0;
    always_comb dc_miss_m = 0;
    always_ff @(posedge clk) if (rst) begin
        axi_stt       <= 0;
        coh_takn_mb   <= 0;
        m_axi_arvalid <= 0;
        m_axi_awvalid <= 0;
        m_axi_rready  <= 0;
        m_axi_wvalid  <= 0;
        m_axi_bready  <= 0;
    end else begin
        if (|coh_takn_mb & flush[axi_req]) coh_takn_mb <= 0;
        case (axi_stt)
            0: // initial state
                if (|coh_resp_sb & ~flush[coh_resp_sb]) begin
                    if (coh_trsc_sb == 1 & coh_mesi_sb == 1) // other GetV and valid => data response
                        {m_axi_arvalid, axi_stt} <= {1'd1, 8'd1};
                    else {m_axi_arvalid, axi_stt} <= {1'd0, 8'd6};
                    axi_cnt      <= 0;
                    axi_req      <= coh_resp_sb;
                    axi_thr      <= 0;
                    axi_str      <= -64'd1;
                    axi_buf      <= coh_rdat_sb;
                    m_axi_araddr <= coh_addr_sb & ~64'h3f;
                    m_axi_arlen  <= 7;
                    m_axi_arsize <= 3;
                end else if (|coh_resp_mb & ~coh_flsh_mb & ~flush[coh_resp_mb]) begin
                    /* todo: some IO write should skip read transaction */
                    axi_stt       <= 1;
                    axi_cnt       <= 0;
                    axi_req       <= coh_resp_mb;
                    axi_thr       <= 0;
                    axi_str       <= coh_strb_mb;
                    axi_buf       <= coh_wdat_mb;
                    m_axi_arvalid <= 1;
                    m_axi_araddr  <= coh_addr_mb;
                    m_axi_arlen   <= 7;
                    m_axi_arsize  <= 3;
                    coh_takn_mb   <= 1;
                end else if (|dc_rqst_f & ~pma_c(dc_addr_f) & ~flush[dc_rqst_f]) begin
                    axi_stt       <= 1;
                    axi_cnt       <= 0;
                    axi_req       <= 0;
                    axi_thr       <= dc_rqst_f;
                    axi_str       <= dc_strb_f;
                    axi_buf       <= dc_wdat_f;
                    m_axi_arvalid <= 1;
                    m_axi_araddr  <= dc_addr_f;
                    m_axi_arlen   <= 0;
                    m_axi_arsize  <= dc_bits_f & 3;
                end
            1: // AXI port request detected, waiting for read address handshake
                if (m_axi_arready) begin
                    axi_stt <= 2;
                    m_axi_arvalid <= 0;
                    m_axi_rready  <= 1;
                end
            2: // read address sent, waiting for response
                if (m_axi_rvalid) begin
                    dc_ofst_m <= m_axi_araddr;
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
                            m_axi_awsize  <= m_axi_arsize;
                        end else axi_stt <= 6;
                end
            3: // writing enabled, waiting for AW handshake
                if (m_axi_awready) begin
                    axi_stt <= 4;
                    m_axi_awvalid <= 0;
                    m_axi_wvalid  <= 1;
                    m_axi_wdata   <= axi_buf[{m_axi_awaddr[5:3],3'd0}+7-:8];
                    m_axi_wlast   <= m_axi_arlen == 0;
                    m_axi_wstrb   <= axi_str[{m_axi_awaddr[5:3],3'd0}+7-:8];
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
                if (~|axi_thr | axi_thr == s_dc_resp | flush[axi_req] | flush[axi_thr] | axi_fls)
                    {coh_takn_mb, axi_stt} <= 0;
        endcase
    end
    always_ff @(posedge clk) if (rst | axi_stt == 6)           axi_fls <= 0;
        else if (|axi_stt & (flush[axi_req] | flush[axi_thr])) axi_fls <= 1;
    always_comb m_axi_arburst = 'b01; // INCR burst
    always_comb m_axi_awburst = 'b01; // INCR burst

    /* data cache coherence */
    always_comb m_coh_addr = coh_addr_mb;
    always_comb m_coh_trsc = coh_trsc_mb;
    always_comb s_coh_resp = axi_stt == 6 & axi_req == coh_rqst_sb ? coh_resp_sb : 0;
    always_comb s_coh_mesi = axi_stt == 6 & axi_req == coh_rqst_sb ? coh_mesi_sb : 0;
    always_comb m_coh_lock = 0; // not acquire strong bus lock
    always_ff @(posedge clk) begin
        if (rst | |coh_resp_mb & flush[coh_resp_mb]) {m_coh_rqst, coh_rqst_mb, coh_resp_mb} <= 0;
        else if (~|coh_rqst_mb) begin // buffer vacant
            m_coh_rqst  <= ~flush[dc_rqst_m] ? dc_rqst_m : 0;
            coh_rqst_mb <= ~flush[dc_rqst_m] ? dc_rqst_m : 0;
            coh_addr_mb <= dc_addr_m & ~64'h3f;
            coh_strb_mb <= dc_strb_m;
            coh_wdat_mb <= dc_wdat_m;
            coh_trsc_mb <= dc_trsc_m;
        end else if (m_coh_resp == coh_rqst_mb) begin // coherence request responsed
            coh_resp_mb <= m_coh_resp;
            coh_mesi_mb <= m_coh_mesi;
            if (coh_flsh_mb | flush[m_coh_resp]) {coh_rqst_mb, coh_resp_mb} <= 0;
        end else if (dc_resp_m == coh_rqst_mb) begin // cache responsed
            coh_rqst_mb <= 0;
            coh_resp_mb <= 0;
        end
        if (|m_coh_rqst) m_coh_rqst <= 0; // hold for one cycle for port
    end
    always_ff @(posedge clk) if (rst | |m_coh_resp | |coh_resp_mb) coh_flsh_mb <= 0;
        else if (flush[coh_rqst_mb] & ~coh_takn_mb)                coh_flsh_mb <= 1;
    always_ff @(posedge clk)
        if (rst) {coh_rqst_sb, coh_resp_sb} <= 0;
        else if (~|coh_rqst_sb) begin // buffer vacant
            coh_rqst_sb <= s_coh_rqst;
            coh_trsc_sb <= s_coh_trsc;
            coh_addr_sb <= s_coh_addr;
        end else if (dc_resp_s == coh_rqst_sb) begin // data cache responses a coherence request
            coh_resp_sb <= dc_resp_s;
            coh_mesi_sb <= |dc_miss_s ? 0 : 1;
            coh_rdat_sb <= dc_rdat_s;
        end else if (s_coh_resp == coh_rqst_sb) begin // coherence request responsed
            coh_rqst_sb <= 0;
            coh_resp_sb <= 0;
        end
    always_ff @(posedge clk) if (rst | flush[coh_lock_sb]) coh_lock_sb <= 0;
        else if (|m_coh_resp & ~coh_flsh_mb & ~flush[m_coh_resp] & coh_trsc_mb == 1)
            coh_lock_sb <= m_coh_resp;
        /* here use `dc_resp_s` to unlock and there is deadlock possibility.
           To use this lock properly, data path from locking to unlocking
           must be carefully checked. Now locking is when master coherence
           responsed with valid state, unlocking is slave cache response, so
           the path contains AXI transaction, and maybe cache eviction. The
           coherence request of cache eviction is not going to be broadcast
           because of its GetI property, so deadlock is resolved */
        else if (coh_lock_sb == dc_resp_s) coh_lock_sb <= 0;

    /* assemble data cache request and response */
    always_comb if (|coh_rqst_sb & ~|coh_resp_sb & dc_resp_s != coh_rqst_sb & ~|coh_lock_sb & ~|m_coh_resp) begin
        dc_rqst_s = coh_rqst_sb; dc_strb_s = 0;
        dc_addr_s = coh_addr_sb; dc_wdat_s = 0;
        dc_trsc_s = coh_trsc_sb;
    end else if (|dc_rqst_f & pma_c(dc_addr_f)) begin
        dc_rqst_s = dc_rqst_f; dc_strb_s = dc_strb_f;
        dc_addr_s = dc_addr_f; dc_wdat_s = dc_wdat_f;
        dc_trsc_s = 0;
    end else if (|ic_rqst_f) begin
        dc_rqst_s = ic_rqst_f; dc_strb_s = 0;
        dc_addr_s = ic_addr_f; dc_wdat_s = 0;
        dc_trsc_s = 0;
    end else if (ptw_stt == 2 & dc_resp_s != ptw_req) begin
        dc_rqst_s = ptw_req; dc_strb_s = 0;
        dc_addr_s = ptw_add; dc_wdat_s = 0;
        dc_trsc_s = 0;
    end else begin
        dc_rqst_s = 0; dc_strb_s = 0;
        dc_addr_s = 0; dc_wdat_s = 0;
        dc_trsc_s = 0;
    end
    always_comb if (|dc_resp_s) begin
        s_dc_resp = dc_resp_s;
        s_dc_miss = dc_miss_s;
        s_dc_rdat = dc_rdat_s[6'(dc_ofst_s)+7-:8];
    end else if (axi_stt == 6 & |axi_thr & ~axi_fls) begin
        s_dc_resp = axi_thr;
        s_dc_miss = 0;
        s_dc_rdat = dc_rdat_m[7:0] >> (6'(m_axi_araddr[2:0]) << 3);
    end else {s_dc_resp, s_dc_miss, s_dc_rdat} = 0;
endmodule
