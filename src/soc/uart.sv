/**
 * uart.sv:
 *   This file wraps UART controller module with AXI-Lite
 */

module uart #(
    parameter cpufreq = 100000000, // CPU frequency
    parameter baud    =    115200  // Baud rate
)(
    input  logic clk,
    input  logic rst,
    output logic intr,
    /* AXI slave interface */
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
    /* RS232 interface */
    output logic TxD,
    input  logic RxD,
    output logic RTSn,
    input  logic CTSn
);
    axi_uart #(.CPU_FREQ(cpufreq), .BAUD_RATE(baud)) axi_uart_inst(
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
        .TxD(TxD),
        .RxD(RxD),
        .RTSn(RTSn),
        .CTSn(CTSn)
    );
endmodule
