/**
 * intc.sv:
 *   This file includes interrupt controller module with AXI
 *   as slave interface.
 */

module intc #(
    parameter cpufreq = 20000000, // CPU clock frequency
    parameter tbfreq  = 10000000, // time base frequency
    parameter clint   = 64'h2000000
)(
    input logic clk,
    input logic rst,
    /* interrupt signals */
    output logic [63:0] int_pend, // interrupt pending bits
    output logic [63:0] int_time, // value of CSR "mtime"
    /* slave interface for INTC */
    input  logic  [7:0] s_axi_awid,
    input  logic [63:0] s_axi_awaddr,
    input  logic  [7:0] s_axi_awlen,
    input  logic  [2:0] s_axi_awsize,
    input  logic  [1:0] s_axi_awburst,
    input  logic        s_axi_awlock,
    input  logic  [3:0] s_axi_awcache,
    input  logic  [2:0] s_axi_awprot,
    input  logic  [3:0] s_axi_awregion,
    input  logic  [3:0] s_axi_awqos,
    input  logic        s_axi_awvalid,
    output logic        s_axi_awready,
    input  logic [63:0] s_axi_wdata,
    input  logic  [7:0] s_axi_wstrb,
    input  logic        s_axi_wlast,
    input  logic        s_axi_wvalid,
    output logic        s_axi_wready,
    output logic  [7:0] s_axi_bid,
    output logic  [1:0] s_axi_bresp,
    output logic        s_axi_bvalid,
    input  logic        s_axi_bready,
    input  logic  [7:0] s_axi_arid,
    input  logic [63:0] s_axi_araddr,
    input  logic  [7:0] s_axi_arlen,
    input  logic  [2:0] s_axi_arsize,
    input  logic  [1:0] s_axi_arburst,
    input  logic        s_axi_arlock,
    input  logic  [3:0] s_axi_arcache,
    input  logic  [2:0] s_axi_arprot,
    input  logic  [3:0] s_axi_arregion,
    input  logic  [3:0] s_axi_arqos,
    input  logic        s_axi_arvalid,
    output logic        s_axi_arready,
    output logic  [7:0] s_axi_rid,
    output logic [63:0] s_axi_rdata,
    output logic  [1:0] s_axi_rresp,
    output logic        s_axi_rlast,
    output logic        s_axi_rvalid,
    input  logic        s_axi_rready
);
    /* CLINT */
    logic        msip;            // machine software interrupt
    logic [63:0] mtime, mtimecmp; // memory-mapped CSR "mtime/mtimecmp"
    logic [63:0] timer;           // time counter
    logic [63:0] waddr, wdata;    // AXI write address and data
    always_comb begin
        int_pend = 0;
        int_pend[3] = msip;             // MSIP
        int_pend[7] = mtime > mtimecmp; // MTIP
    end
    always_comb int_time = mtime; // to support extension "zicntr"
    always_ff @(posedge clk) if (rst) begin
        s_axi_arready <= 1;
        s_axi_rvalid  <= 0;
        s_axi_bvalid  <= 0;
        s_axi_awready <= 1;
        s_axi_wready  <= 1;
        timer         <= 0;
        msip          <= 0;
        mtimecmp      <= -64'd1;
        mtime         <= 0;
    end else begin
        /* timer increment */
        if (timer >= cpufreq / tbfreq - 1) begin
            timer <= 0;
            mtime <= mtime + 1;
        end else timer <= timer + 1;
        /* AXI transition handling */
        if (s_axi_arvalid & s_axi_arready) begin // AR handshake
            s_axi_arready <= 0;
            s_axi_rvalid  <= 1;
            case (s_axi_araddr)
                clint + 64'h0000: s_axi_rdata <= 64'(msip);
                clint + 64'h4000: s_axi_rdata <= mtimecmp;
                clint + 64'hbff8: s_axi_rdata <= mtime;
            endcase
        end
        if (~s_axi_awready & ~s_axi_wready) begin // AW and W handshake done
            s_axi_bvalid <= 1;
            case (waddr)
                clint + 64'h0000: msip     <= wdata[0];
                clint + 64'h4000: mtimecmp <= wdata;
                clint + 64'hbff8: mtime    <= wdata;
            endcase
        end
        if (s_axi_rvalid  & s_axi_rready)  {s_axi_rvalid, s_axi_arready}               <= 1; // R  handshake
        if (s_axi_bvalid  & s_axi_bready)  {s_axi_bvalid, s_axi_awready, s_axi_wready} <= 3; // B  handshake
        if (s_axi_awvalid & s_axi_awready) {s_axi_awready, waddr} <= {1'b0, s_axi_awaddr};   // AW handshake
        if (s_axi_wvalid  & s_axi_wready)  {s_axi_wready,  wdata} <= {1'b0, s_axi_wdata};    // W  handshake
    end

    /* PLIC */

    always_comb s_axi_bid = 0;
    always_comb s_axi_bresp = 0;
    always_comb s_axi_rid = 0;
    always_comb s_axi_rresp = 0;
    always_comb s_axi_rlast = 1;
endmodule
