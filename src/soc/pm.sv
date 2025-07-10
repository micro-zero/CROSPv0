/**
 * pm.sv:
 *   This file includes performance monitor module with AXI as slave interface.
 */

module epm #(
    parameter evnum = 64 // event number
)(
    input  logic                  clk,
    input  logic                  rst,
    input  logic            [1:0] level,  // privilege level
    input  logic           [31:0] pid,    // process ID
    input  logic [evnum-1:0][3:0] events, // numbers of each event
    /* AXI slave interface */
    input  logic [15:0] s_axi_awaddr,
    input  logic        s_axi_awvalid,
    output logic        s_axi_awready,
    input  logic [63:0] s_axi_wdata,
    input  logic        s_axi_wvalid,
    output logic        s_axi_wready,
    output logic  [1:0] s_axi_bresp,
    output logic        s_axi_bvalid,
    input  logic        s_axi_bready,
    input  logic [15:0] s_axi_araddr,
    input  logic        s_axi_arvalid,
    output logic        s_axi_arready,
    output logic [63:0] s_axi_rdata,
    output logic  [1:0] s_axi_rresp,
    output logic        s_axi_rvalid,
    input  logic        s_axi_rready
);
    /*------------ address map ------------*\
    | 0:           sample counter 0         |
    | 8:           sample counter 1         |
    |    ...                                |
    | 8*(evnum-1): sample counter evnum - 1 |
    | 8* evnum:    control register         |
    | 8*(evnum+1): sample event selector    |
    | 8*(evnum+2): sample event comparator  |
    \*-------------------------------------*/
    logic [evnum-1:0][63:0] counter, sample;
    logic            [63:0] ctrl, sel, comp;
    logic            [15:0] waddr; // AXI write address
    logic            [63:0] wdata; // AXI write data
    always_comb s_axi_rresp = 0;
    always_comb s_axi_bresp = 0;
    always_ff @(posedge clk) if (rst) begin
        sample        <= 0;
        ctrl          <= 0; // [0] data valid, [7:4] level inhibit, [63:32] pid
        sel           <= 0;
        comp          <= -64'd1;
        s_axi_arready <= 1;
        s_axi_awready <= 1;
        s_axi_wready  <= 1;
        s_axi_rvalid  <= 0;
        s_axi_bvalid  <= 0;
    end else begin
        /* sample */
        if (~ctrl[0] & counter[$clog2(evnum)'(sel)] >= comp) begin
            sample  <= counter;
            ctrl[0] <= 1;
        end
        /* handle AXI transaction */
        if (s_axi_arvalid & s_axi_arready) begin // AR handshake
            s_axi_arready <= 0;
            s_axi_rvalid  <= 1;
            if      (s_axi_araddr <  8 *  evnum)      s_axi_rdata <= sample[32'(s_axi_araddr) >> 3];
            else if (s_axi_araddr == 8 *  evnum)      s_axi_rdata <= ctrl;
            else if (s_axi_araddr == 8 * (evnum + 1)) s_axi_rdata <= sel;
            else if (s_axi_araddr == 8 * (evnum + 2)) s_axi_rdata <= comp;
        end
        if (~s_axi_awready & ~s_axi_wready) begin // AW and W handshake done
            s_axi_bvalid <= 1;
            if      (waddr == 8 *  evnum)      ctrl <= wdata;
            else if (waddr == 8 * (evnum + 1)) sel  <= wdata;
            else if (waddr == 8 * (evnum + 2)) comp <= wdata;
        end
        if (s_axi_rvalid  & s_axi_rready)  {s_axi_rvalid, s_axi_arready}               <= 1; // R  handshake
        if (s_axi_bvalid  & s_axi_bready)  {s_axi_bvalid, s_axi_awready, s_axi_wready} <= 3; // B  handshake
        if (s_axi_awvalid & s_axi_awready) {s_axi_awready, waddr} <= {1'b0, s_axi_awaddr};   // AW handshake
        if (s_axi_wvalid  & s_axi_wready)  {s_axi_wready,  wdata} <= {1'b0, s_axi_wdata};    // W  handshake
    end
    always_ff @(posedge clk) if (rst) counter <= 0; else
        for (int i = 0; i < evnum; i++)
            if (~ctrl[32'(level)+4] & pid == ctrl[63:32])
                counter[i] <= counter[i] + 64'(events[i]);
endmodule
