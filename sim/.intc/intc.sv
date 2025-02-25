// DESCRIPTION: Verilator generated Verilog
// Wrapper module for DPI protected library
// This module requires libintc.a or libintc.so to work
// See instructions in your simulator for how to use DPI libraries

module intc (
        input logic clk
        , input logic rst
        , input logic [7:0]  s_axi_awid
        , input logic [7:0]  s_axi_awlen
        , input logic [2:0]  s_axi_awsize
        , input logic [1:0]  s_axi_awburst
        , input logic s_axi_awlock
        , input logic [3:0]  s_axi_awcache
        , input logic [2:0]  s_axi_awprot
        , input logic [3:0]  s_axi_awregion
        , input logic [3:0]  s_axi_awqos
        , input logic s_axi_awvalid
        , output logic s_axi_awready
        , input logic [7:0]  s_axi_wstrb
        , input logic s_axi_wlast
        , input logic s_axi_wvalid
        , output logic s_axi_wready
        , output logic [7:0]  s_axi_bid
        , output logic [1:0]  s_axi_bresp
        , output logic s_axi_bvalid
        , input logic s_axi_bready
        , input logic [7:0]  s_axi_arid
        , input logic [7:0]  s_axi_arlen
        , input logic [2:0]  s_axi_arsize
        , input logic [1:0]  s_axi_arburst
        , input logic s_axi_arlock
        , input logic [3:0]  s_axi_arcache
        , input logic [2:0]  s_axi_arprot
        , input logic [3:0]  s_axi_arregion
        , input logic [3:0]  s_axi_arqos
        , input logic s_axi_arvalid
        , output logic s_axi_arready
        , output logic [7:0]  s_axi_rid
        , output logic [1:0]  s_axi_rresp
        , output logic s_axi_rlast
        , output logic s_axi_rvalid
        , input logic s_axi_rready
        , output logic [63:0]  int_pend
        , output logic [63:0]  int_time
        , input logic [63:0]  s_axi_awaddr
        , input logic [63:0]  s_axi_wdata
        , input logic [63:0]  s_axi_araddr
        , output logic [63:0]  s_axi_rdata
    );
    
    // Precision of submodule (commented out to avoid requiring timescale on all modules)
    // timeunit 1ps;
    // timeprecision 1ps;
    
    // Checks to make sure the .sv wrapper and library agree
    import "DPI-C" function void intc_protectlib_check_hash(int protectlib_hash__V);
    
    // Creates an instance of the library module at initial-time
    // (one for each instance in the user's design) also evaluates
    // the library module's initial process
    import "DPI-C" function chandle intc_protectlib_create(string scope__V);
    
    // Updates all non-clock inputs and retrieves the results
    import "DPI-C" function longint intc_protectlib_combo_update (
        chandle handle__V
        , input logic rst
        , input logic [7:0]  s_axi_awid
        , input logic [7:0]  s_axi_awlen
        , input logic [2:0]  s_axi_awsize
        , input logic [1:0]  s_axi_awburst
        , input logic s_axi_awlock
        , input logic [3:0]  s_axi_awcache
        , input logic [2:0]  s_axi_awprot
        , input logic [3:0]  s_axi_awregion
        , input logic [3:0]  s_axi_awqos
        , input logic s_axi_awvalid
        , output logic s_axi_awready
        , input logic [7:0]  s_axi_wstrb
        , input logic s_axi_wlast
        , input logic s_axi_wvalid
        , output logic s_axi_wready
        , output logic [7:0]  s_axi_bid
        , output logic [1:0]  s_axi_bresp
        , output logic s_axi_bvalid
        , input logic s_axi_bready
        , input logic [7:0]  s_axi_arid
        , input logic [7:0]  s_axi_arlen
        , input logic [2:0]  s_axi_arsize
        , input logic [1:0]  s_axi_arburst
        , input logic s_axi_arlock
        , input logic [3:0]  s_axi_arcache
        , input logic [2:0]  s_axi_arprot
        , input logic [3:0]  s_axi_arregion
        , input logic [3:0]  s_axi_arqos
        , input logic s_axi_arvalid
        , output logic s_axi_arready
        , output logic [7:0]  s_axi_rid
        , output logic [1:0]  s_axi_rresp
        , output logic s_axi_rlast
        , output logic s_axi_rvalid
        , input logic s_axi_rready
        , output logic [63:0]  int_pend
        , output logic [63:0]  int_time
        , input logic [63:0]  s_axi_awaddr
        , input logic [63:0]  s_axi_wdata
        , input logic [63:0]  s_axi_araddr
        , output logic [63:0]  s_axi_rdata
    );
    
    // Updates all clocks and retrieves the results
    import "DPI-C" function longint intc_protectlib_seq_update(
        chandle handle__V
        , input logic clk
        , output logic s_axi_awready
        , output logic s_axi_wready
        , output logic [7:0]  s_axi_bid
        , output logic [1:0]  s_axi_bresp
        , output logic s_axi_bvalid
        , output logic s_axi_arready
        , output logic [7:0]  s_axi_rid
        , output logic [1:0]  s_axi_rresp
        , output logic s_axi_rlast
        , output logic s_axi_rvalid
        , output logic [63:0]  int_pend
        , output logic [63:0]  int_time
        , output logic [63:0]  s_axi_rdata
    );
    
    // Need to convince some simulators that the input to the module
    // must be evaluated before evaluating the clock edge
    import "DPI-C" function void intc_protectlib_combo_ignore(
        chandle handle__V
        , input logic rst
        , input logic [7:0]  s_axi_awid
        , input logic [7:0]  s_axi_awlen
        , input logic [2:0]  s_axi_awsize
        , input logic [1:0]  s_axi_awburst
        , input logic s_axi_awlock
        , input logic [3:0]  s_axi_awcache
        , input logic [2:0]  s_axi_awprot
        , input logic [3:0]  s_axi_awregion
        , input logic [3:0]  s_axi_awqos
        , input logic s_axi_awvalid
        , input logic [7:0]  s_axi_wstrb
        , input logic s_axi_wlast
        , input logic s_axi_wvalid
        , input logic s_axi_bready
        , input logic [7:0]  s_axi_arid
        , input logic [7:0]  s_axi_arlen
        , input logic [2:0]  s_axi_arsize
        , input logic [1:0]  s_axi_arburst
        , input logic s_axi_arlock
        , input logic [3:0]  s_axi_arcache
        , input logic [2:0]  s_axi_arprot
        , input logic [3:0]  s_axi_arregion
        , input logic [3:0]  s_axi_arqos
        , input logic s_axi_arvalid
        , input logic s_axi_rready
        , input logic [63:0]  s_axi_awaddr
        , input logic [63:0]  s_axi_wdata
        , input logic [63:0]  s_axi_araddr
    );
    
    // Evaluates the library module's final process
    import "DPI-C" function void intc_protectlib_final(chandle handle__V);
    
    `ifdef verilator
    // Enables the library module's tracing
    // Only usable when used with called from Verilator
    import "DPI-C" function void intc_protectlib_trace(chandle handle__V, chandle tfp, int levels, int options) /*verilator trace_init_task*/;
    `endif  // verilator

    // verilator tracing_off
    chandle handle__V;
    time last_combo_seqnum__V;
    time last_seq_seqnum__V;

    logic s_axi_awready_combo__V;
    logic s_axi_wready_combo__V;
    logic [7:0]  s_axi_bid_combo__V;
    logic [1:0]  s_axi_bresp_combo__V;
    logic s_axi_bvalid_combo__V;
    logic s_axi_arready_combo__V;
    logic [7:0]  s_axi_rid_combo__V;
    logic [1:0]  s_axi_rresp_combo__V;
    logic s_axi_rlast_combo__V;
    logic s_axi_rvalid_combo__V;
    logic [63:0]  int_pend_combo__V;
    logic [63:0]  int_time_combo__V;
    logic [63:0]  s_axi_rdata_combo__V;
    logic s_axi_awready_seq__V;
    logic s_axi_wready_seq__V;
    logic [7:0]  s_axi_bid_seq__V;
    logic [1:0]  s_axi_bresp_seq__V;
    logic s_axi_bvalid_seq__V;
    logic s_axi_arready_seq__V;
    logic [7:0]  s_axi_rid_seq__V;
    logic [1:0]  s_axi_rresp_seq__V;
    logic s_axi_rlast_seq__V;
    logic s_axi_rvalid_seq__V;
    logic [63:0]  int_pend_seq__V;
    logic [63:0]  int_time_seq__V;
    logic [63:0]  s_axi_rdata_seq__V;
    logic s_axi_awready_tmp__V;
    logic s_axi_wready_tmp__V;
    logic [7:0]  s_axi_bid_tmp__V;
    logic [1:0]  s_axi_bresp_tmp__V;
    logic s_axi_bvalid_tmp__V;
    logic s_axi_arready_tmp__V;
    logic [7:0]  s_axi_rid_tmp__V;
    logic [1:0]  s_axi_rresp_tmp__V;
    logic s_axi_rlast_tmp__V;
    logic s_axi_rvalid_tmp__V;
    logic [63:0]  int_pend_tmp__V;
    logic [63:0]  int_time_tmp__V;
    logic [63:0]  s_axi_rdata_tmp__V;
    // Hash value to make sure this file and the corresponding
    // library agree
    localparam int protectlib_hash__V = 32'd1882607743;

    initial begin
        intc_protectlib_check_hash(protectlib_hash__V);
        handle__V = intc_protectlib_create($sformatf("%m"));
    end
    
    // Combinatorialy evaluate changes to inputs
    always @* begin
        last_combo_seqnum__V = intc_protectlib_combo_update(
            handle__V
            , rst
            , s_axi_awid
            , s_axi_awlen
            , s_axi_awsize
            , s_axi_awburst
            , s_axi_awlock
            , s_axi_awcache
            , s_axi_awprot
            , s_axi_awregion
            , s_axi_awqos
            , s_axi_awvalid
            , s_axi_awready_combo__V
            , s_axi_wstrb
            , s_axi_wlast
            , s_axi_wvalid
            , s_axi_wready_combo__V
            , s_axi_bid_combo__V
            , s_axi_bresp_combo__V
            , s_axi_bvalid_combo__V
            , s_axi_bready
            , s_axi_arid
            , s_axi_arlen
            , s_axi_arsize
            , s_axi_arburst
            , s_axi_arlock
            , s_axi_arcache
            , s_axi_arprot
            , s_axi_arregion
            , s_axi_arqos
            , s_axi_arvalid
            , s_axi_arready_combo__V
            , s_axi_rid_combo__V
            , s_axi_rresp_combo__V
            , s_axi_rlast_combo__V
            , s_axi_rvalid_combo__V
            , s_axi_rready
            , int_pend_combo__V
            , int_time_combo__V
            , s_axi_awaddr
            , s_axi_wdata
            , s_axi_araddr
            , s_axi_rdata_combo__V
        );
    end
    
    // Evaluate clock edges
    always @(posedge clk or negedge clk) begin
        intc_protectlib_combo_ignore(
            handle__V
            , rst
            , s_axi_awid
            , s_axi_awlen
            , s_axi_awsize
            , s_axi_awburst
            , s_axi_awlock
            , s_axi_awcache
            , s_axi_awprot
            , s_axi_awregion
            , s_axi_awqos
            , s_axi_awvalid
            , s_axi_wstrb
            , s_axi_wlast
            , s_axi_wvalid
            , s_axi_bready
            , s_axi_arid
            , s_axi_arlen
            , s_axi_arsize
            , s_axi_arburst
            , s_axi_arlock
            , s_axi_arcache
            , s_axi_arprot
            , s_axi_arregion
            , s_axi_arqos
            , s_axi_arvalid
            , s_axi_rready
            , s_axi_awaddr
            , s_axi_wdata
            , s_axi_araddr
        );
        last_seq_seqnum__V <= intc_protectlib_seq_update(
            handle__V
            , clk
            , s_axi_awready_tmp__V
            , s_axi_wready_tmp__V
            , s_axi_bid_tmp__V
            , s_axi_bresp_tmp__V
            , s_axi_bvalid_tmp__V
            , s_axi_arready_tmp__V
            , s_axi_rid_tmp__V
            , s_axi_rresp_tmp__V
            , s_axi_rlast_tmp__V
            , s_axi_rvalid_tmp__V
            , int_pend_tmp__V
            , int_time_tmp__V
            , s_axi_rdata_tmp__V
        );
        s_axi_awready_seq__V <= s_axi_awready_tmp__V;
        s_axi_wready_seq__V <= s_axi_wready_tmp__V;
        s_axi_bid_seq__V <= s_axi_bid_tmp__V;
        s_axi_bresp_seq__V <= s_axi_bresp_tmp__V;
        s_axi_bvalid_seq__V <= s_axi_bvalid_tmp__V;
        s_axi_arready_seq__V <= s_axi_arready_tmp__V;
        s_axi_rid_seq__V <= s_axi_rid_tmp__V;
        s_axi_rresp_seq__V <= s_axi_rresp_tmp__V;
        s_axi_rlast_seq__V <= s_axi_rlast_tmp__V;
        s_axi_rvalid_seq__V <= s_axi_rvalid_tmp__V;
        int_pend_seq__V <= int_pend_tmp__V;
        int_time_seq__V <= int_time_tmp__V;
        s_axi_rdata_seq__V <= s_axi_rdata_tmp__V;
    end
    
    // Select between combinatorial and sequential results
    always @* begin
        if (last_seq_seqnum__V > last_combo_seqnum__V) begin
            s_axi_awready = s_axi_awready_seq__V;
            s_axi_wready = s_axi_wready_seq__V;
            s_axi_bid = s_axi_bid_seq__V;
            s_axi_bresp = s_axi_bresp_seq__V;
            s_axi_bvalid = s_axi_bvalid_seq__V;
            s_axi_arready = s_axi_arready_seq__V;
            s_axi_rid = s_axi_rid_seq__V;
            s_axi_rresp = s_axi_rresp_seq__V;
            s_axi_rlast = s_axi_rlast_seq__V;
            s_axi_rvalid = s_axi_rvalid_seq__V;
            int_pend = int_pend_seq__V;
            int_time = int_time_seq__V;
            s_axi_rdata = s_axi_rdata_seq__V;
        end
        else begin
            s_axi_awready = s_axi_awready_combo__V;
            s_axi_wready = s_axi_wready_combo__V;
            s_axi_bid = s_axi_bid_combo__V;
            s_axi_bresp = s_axi_bresp_combo__V;
            s_axi_bvalid = s_axi_bvalid_combo__V;
            s_axi_arready = s_axi_arready_combo__V;
            s_axi_rid = s_axi_rid_combo__V;
            s_axi_rresp = s_axi_rresp_combo__V;
            s_axi_rlast = s_axi_rlast_combo__V;
            s_axi_rvalid = s_axi_rvalid_combo__V;
            int_pend = int_pend_combo__V;
            int_time = int_time_combo__V;
            s_axi_rdata = s_axi_rdata_combo__V;
        end
    end
    
    final intc_protectlib_final(handle__V);
    
endmodule
