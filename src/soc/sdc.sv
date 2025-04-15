/**
 * sdc.sv:
 *   This file wraps SD card controller module with AXI
 */

module sdc #(
    parameter blk = 64 // cache block size
)(
    input  logic clk,
    input  logic rst,
    output logic intr,
    /* DMA coherence interface */
    input  logic        s_coh_lock,
    input  logic  [7:0] s_coh_rqst,
    input  logic  [7:0] s_coh_trsc,
    input  logic [63:0] s_coh_addr,
    output logic  [7:0] s_coh_resp,
    output logic  [7:0] s_coh_mesi,
    output logic        m_coh_lock,
    output logic  [7:0] m_coh_rqst,
    output logic  [7:0] m_coh_trsc,
    output logic [63:0] m_coh_addr,
    input  logic  [7:0] m_coh_resp,
    input  logic  [7:0] m_coh_mesi,
    /* slave interface for SDC */
    input  logic [15:0] s_axi_awaddr,
    input  logic        s_axi_awvalid,
    output logic        s_axi_awready,
    input  logic [31:0] s_axi_wdata,
    input  logic        s_axi_wvalid,
    output logic        s_axi_wready,
    output logic  [1:0] s_axi_bresp,
    output logic        s_axi_bvalid,
    input  logic        s_axi_bready,
    input  logic [15:0] s_axi_araddr,
    input  logic        s_axi_arvalid,
    output logic        s_axi_arready,
    output logic [31:0] s_axi_rdata,
    output logic  [1:0] s_axi_rresp,
    output logic        s_axi_rvalid,
    input  logic        s_axi_rready,
    /* master interface for SDC */
    output logic [31:0] m_axi_awaddr,
    output logic  [7:0] m_axi_awlen,
    output logic  [2:0] m_axi_awsize,
    output logic  [1:0] m_axi_awburst,
    output logic        m_axi_awvalid,
    input  logic        m_axi_awready,
    output logic [31:0] m_axi_wdata,
    output logic  [3:0] m_axi_wstrb,
    output logic        m_axi_wlast,
    output logic        m_axi_wvalid,
    input  logic        m_axi_wready,
    input  logic  [1:0] m_axi_bresp,
    input  logic        m_axi_bvalid,
    output logic        m_axi_bready,
    output logic [31:0] m_axi_araddr,
    output logic  [7:0] m_axi_arlen,
    output logic  [2:0] m_axi_arsize,
    output logic  [1:0] m_axi_arburst,
    output logic        m_axi_arvalid,
    input  logic        m_axi_arready,
    input  logic [31:0] m_axi_rdata,
    input  logic        m_axi_rlast,
    input  logic  [1:0] m_axi_rresp,
    input  logic        m_axi_rvalid,
    output logic        m_axi_rready,
    /* SD card interface */
    input  logic       sd_cd,
    output logic       sd_cmd_t,
    input  logic       sd_cmd_i,
    output logic       sd_cmd_o,
    output logic       sd_dat_t,
    input  logic [3:0] sd_dat_i,
    output logic [3:0] sd_dat_o,
    output logic       sd_reset,
    output logic       sd_sclk
);
    /* coherence master interface */
    localparam reqid = 1;
    localparam maxb = 1024 / blk + 1;
    logic [maxb-1:0] own, req, snt; // maximum burst 1024B in total
    logic     [31:0] base;
    logic            locked;
    logic [$clog2(maxb):0] index;
    logic arvalid, awvalid, arready, awready;
    always_comb locked = m_coh_lock & s_coh_lock;
    always_comb begin
        index = 0;
        for (int i = maxb - 1; i >= 0; i--)
            if (req[i] & ~own[i]) index = {1'b1, $clog2(maxb)'(i)};
    end
    always_comb m_coh_lock = |req; // lock until AXI transaction finished
    always_comb m_coh_rqst = index[$clog2(maxb)] & ~snt[$clog2(maxb)'(index)] ? reqid : 0;
    always_comb m_coh_addr = 64'(base) + 64'($clog2(maxb)'(index)) * blk;
    always_comb m_coh_trsc = 1; // own GetV
    always_ff @(posedge clk) if (rst) {req, own, snt} <= 0; else begin
        /* todo: can read and write channel work simutaneously? */
        if (m_axi_rvalid & m_axi_rready & m_axi_rlast) req <= 0;
        if (m_axi_bvalid & m_axi_bready)               req <= 0;
        if (arvalid & ~|req) begin
            base <= m_axi_araddr;
            req <= (1 << (32'(m_axi_arlen) + 1 >> $clog2(blk) - 2) + 1) - 1;
            own <= 0;
            snt <= 0;
        end
        if (awvalid & ~|req) begin
            base <= m_axi_awaddr;
            req <= (1 << (32'(m_axi_awlen) + 1 >> $clog2(blk) - 2) + 1) - 1;
            own <= 0;
            snt <= 0;
        end
        if (m_coh_rqst == reqid) snt[$clog2(maxb)'(index)] <= 1;
        if (m_coh_resp == reqid) own[$clog2(maxb)'(index)] <= 1;
        if (|s_coh_resp) own <= 0; // request from ports with higher priority
    end

    /* coherence slave interface */
    logic  [7:0] coh_rqst_sb;
    always_comb s_coh_resp = locked ? 0 : coh_rqst_sb;
    always_comb s_coh_mesi = 0; // no cached data
    always_ff @(posedge clk) if (rst) coh_rqst_sb <= 0;
        else if (|s_coh_rqst) coh_rqst_sb <= s_coh_rqst;
        else if (|s_coh_resp) coh_rqst_sb <= 0;

    /* instance */
    sdc_controller sdc_inst(
        .clock(clk),
        .async_resetn(~rst),
        .interrupt(intr),
        .s_axi_awaddr(s_axi_awaddr),
        .s_axi_awvalid(s_axi_awvalid),
        .s_axi_awready(s_axi_awready),
        .s_axi_wdata(s_axi_wdata),
        .s_axi_wvalid(s_axi_wvalid),
        .s_axi_wready(s_axi_wready),
        .s_axi_bresp(s_axi_bresp),
        .s_axi_bvalid(s_axi_bvalid),
        .s_axi_bready(s_axi_bready),
        .s_axi_araddr(s_axi_araddr),
        .s_axi_arvalid(s_axi_arvalid),
        .s_axi_arready(s_axi_arready),
        .s_axi_rdata(s_axi_rdata),
        .s_axi_rresp(s_axi_rresp),
        .s_axi_rvalid(s_axi_rvalid),
        .s_axi_rready(s_axi_rready),
        .m_axi_awaddr(m_axi_awaddr),
        .m_axi_awlen(m_axi_awlen),
        .m_axi_awvalid(awvalid),
        .m_axi_awready(awready),
        .m_axi_wdata(m_axi_wdata),
        .m_axi_wlast(m_axi_wlast),
        .m_axi_wvalid(m_axi_wvalid),
        .m_axi_wready(m_axi_wready),
        .m_axi_bresp(m_axi_bresp),
        .m_axi_bvalid(m_axi_bvalid),
        .m_axi_bready(m_axi_bready),
        .m_axi_araddr(m_axi_araddr),
        .m_axi_arlen(m_axi_arlen),
        .m_axi_arvalid(arvalid),
        .m_axi_arready(arready),
        .m_axi_rdata(m_axi_rdata),
        .m_axi_rlast(m_axi_rlast),
        .m_axi_rresp(m_axi_rresp),
        .m_axi_rvalid(m_axi_rvalid),
        .m_axi_rready(m_axi_rready),
        .sdio_cd(sd_cd),
        .sd_cmd_reg_t(sd_cmd_t),
        .sd_cmd_i(sd_cmd_i),
        .sd_cmd_reg_o(sd_cmd_o),
        .sd_dat_reg_t(sd_dat_t),
        .sd_dat_i(sd_dat_i),
        .sd_dat_reg_o(sd_dat_o),
        .sdio_reset(sd_reset),
        .sdio_clk(sd_sclk)
    );
    always_comb m_axi_awsize = 2;  // 32-bit
    always_comb m_axi_awburst = 1; // INCR
    always_comb m_axi_arsize = 2;
    always_comb m_axi_arburst = 1;
    always_comb m_axi_wstrb = 'hf;
    always_comb arready = m_axi_arready & |req & (req == (req & own));
    always_comb awready = m_axi_awready & |req & (req == (req & own));
    always_comb m_axi_arvalid = arvalid & |req & (req == (req & own));
    always_comb m_axi_awvalid = awvalid & |req & (req == (req & own));
endmodule
