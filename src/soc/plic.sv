/**
 * plic.sv:
 *   This file includes platform-level interrupt controller module
 *   with AXI slave interface.
 */

module plic #(
    parameter ndev = 8,
    parameter ctxt = 2,
    parameter plic = 64'hc000000
)(
    input logic clk,
    input logic rst,
    /* interrupt signals */
    input  logic [ndev-1:0] int_vect, // interrupt vector
    output logic     [63:0] int_pend, // interrupt pending bits
    /* slave interface for PLIC */
    input  logic  [7:0] s_axi_awid,
    input  logic [27:0] s_axi_awaddr,
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
    input  logic [31:0] s_axi_wdata,
    input  logic  [7:0] s_axi_wstrb,
    input  logic        s_axi_wlast,
    input  logic        s_axi_wvalid,
    output logic        s_axi_wready,
    output logic  [7:0] s_axi_bid,
    output logic  [1:0] s_axi_bresp,
    output logic        s_axi_bvalid,
    input  logic        s_axi_bready,
    input  logic  [7:0] s_axi_arid,
    input  logic [27:0] s_axi_araddr,
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
    output logic [31:0] s_axi_rdata,
    output logic  [1:0] s_axi_rresp,
    output logic        s_axi_rlast,
    output logic        s_axi_rvalid,
    input  logic        s_axi_rready
);
    localparam wdev = (ndev - 1 >> 5) + 1 <= 2 ? 2 : (ndev - 1 >> 5) + 1;
    logic             [31:0] prioriti [ndev-1:0];
    logic   [wdev-1:0][31:0] pending;
    logic   [wdev-1:0][31:0] enable   [ctxt-1:0];
    logic             [31:0] threshold[ctxt-1:0];
    logic             [27:0] waddr;
    logic             [31:0] wdata;
    logic [$clog2(ctxt)-1:0] ct;
    logic [$clog2(ndev)-1:0] index[ctxt-1:0];
    always_comb s_axi_bid = 0;
    always_comb s_axi_bresp = 0;
    always_comb s_axi_rid = 0;
    always_comb s_axi_rresp = 0;
    always_comb s_axi_rlast = 1;
    always_comb for (int c = 0; c < ctxt; c++) begin
        /* search for interriupt with maximal priority */
        index[c] = 0;
        for (int i = 0; i < ndev; i++)
            if (pending[i >> 5][i & 31] & enable[c][i >> 5][i & 31] & prioriti[i] > threshold[c] &
                (index[c] == 0 | prioriti[i] > prioriti[index[c]]))
                index[c] = $clog2(ndev)'(i);
    end
    always_comb ct = $clog2(ctxt)'(s_axi_araddr >> 12);
    always_ff @(posedge clk) if (rst) begin
        s_axi_arready <= 1;
        s_axi_rvalid  <= 0;
        s_axi_bvalid  <= 0;
        s_axi_awready <= 1;
        s_axi_wready  <= 1;
        pending       <= 0;
        int_pend      <= 0;
    end else begin
        /* interrupt detection */
        for (int i = 1; i < ndev; i++) if (int_vect[i]) pending[i >> 5][i & 31] <= 1;
        /* AXI transition handling */
        if (s_axi_arvalid & s_axi_arready) begin // AR handshake
            s_axi_arready <= 0;
            s_axi_rvalid  <= 1;
            if (s_axi_araddr < 28'hc001000)
                s_axi_rdata <= prioriti[$clog2(ndev)'(s_axi_araddr >> 2)];
            else if (s_axi_araddr >= 28'hc001000 & s_axi_araddr < 28'hc002000)
                s_axi_rdata <= pending[$clog2(wdev)'(s_axi_araddr >> 5)];
            else if (s_axi_araddr >= 28'hc002000 & s_axi_araddr < 28'hc200000)
                s_axi_rdata <= enable[$clog2(ctxt)'(s_axi_araddr >> 7)][$clog2(wdev)'(s_axi_araddr >> 5)];
            else if (s_axi_araddr >= 28'hc200000)
                if      (s_axi_araddr[3:0] == 4'h0) s_axi_rdata <= threshold[ct];
                else if (s_axi_araddr[3:0] == 4'h4) begin // claim
                    s_axi_rdata <= 32'(index[ct]);
                    pending[32'(index[ct]) >> 5][32'(index[ct]) & 31] <= 0;
                end
        end
        if (~s_axi_awready & ~s_axi_wready) begin // AW and W handshake done
            s_axi_bvalid <= 1;
            if (waddr < 28'hc001000)
                prioriti[$clog2(ndev)'(waddr >> 2)] <= wdata;
            else if (waddr >= 28'hc002000 & waddr < 28'hc200000)
                enable[$clog2(ctxt)'(waddr >> 7)][$clog2(wdev)'(waddr >> 5)] <= wdata;
            else if (waddr >= 28'hc200000)
                if      (waddr[3:0] == 4'h0) threshold[$clog2(ctxt)'(waddr >> 12)] <= wdata;
                else if (waddr[3:0] == 4'h4) // completion
                    /* todo: should PLIC do something here like atomic maintenance? */
                    ;
        end
        if (s_axi_rvalid  & s_axi_rready)  {s_axi_rvalid, s_axi_arready}               <= 1; // R  handshake
        if (s_axi_bvalid  & s_axi_bready)  {s_axi_bvalid, s_axi_awready, s_axi_wready} <= 3; // B  handshake
        if (s_axi_awvalid & s_axi_awready) {s_axi_awready, waddr} <= {1'b0, s_axi_awaddr};   // AW handshake
        if (s_axi_wvalid  & s_axi_wready)  {s_axi_wready,  wdata} <= {1'b0, s_axi_wdata};    // W  handshake
        /* interrupt generation */
        int_pend <= 0;
        for (int c = 0; c < ctxt; c++)
            int_pend[c[0] ? 9 : 11] <= |index[c];
    end
endmodule
