// DESCRIPTION: Verilator generated Verilog
// Wrapper module for DPI protected library
// This module requires libvcore.a or libvcore.so to work
// See instructions in your simulator for how to use DPI libraries

module vcore (
        input logic clk
        , input logic rst
        , input logic [7:0]  s_coh_rqst
        , input logic [7:0]  s_coh_trsc
        , output logic [7:0]  s_coh_resp
        , output logic [7:0]  m_coh_rqst
        , output logic [7:0]  m_coh_trsc
        , input logic [7:0]  m_coh_resp
        , output logic [7:0]  m_axi_awid
        , output logic [7:0]  m_axi_awlen
        , output logic [2:0]  m_axi_awsize
        , output logic [1:0]  m_axi_awburst
        , output logic m_axi_awlock
        , output logic [3:0]  m_axi_awcache
        , output logic [2:0]  m_axi_awprot
        , output logic [3:0]  m_axi_awqos
        , output logic m_axi_awvalid
        , input logic m_axi_awready
        , output logic [7:0]  m_axi_wstrb
        , output logic m_axi_wlast
        , output logic m_axi_wvalid
        , input logic m_axi_wready
        , input logic [7:0]  m_axi_bid
        , input logic [1:0]  m_axi_bresp
        , input logic m_axi_bvalid
        , output logic m_axi_bready
        , output logic [7:0]  m_axi_arid
        , output logic [7:0]  m_axi_arlen
        , output logic [2:0]  m_axi_arsize
        , output logic [1:0]  m_axi_arburst
        , output logic m_axi_arlock
        , output logic [3:0]  m_axi_arcache
        , output logic [2:0]  m_axi_arprot
        , output logic [3:0]  m_axi_arqos
        , output logic m_axi_arvalid
        , input logic m_axi_arready
        , input logic [7:0]  m_axi_rid
        , input logic [1:0]  m_axi_rresp
        , input logic m_axi_rlast
        , input logic m_axi_rvalid
        , output logic m_axi_rready
        , output logic cmt_mexc
        , output logic cmt_sexc
        , output logic cmt_int
        , output logic cmt_ret
        , output logic del_csrw
        , output logic [7:0]  del_memw
        , output logic [11:0]  del_csra
        , input logic [63:0]  mip_ext
        , input logic [63:0]  mtime
        , input logic [63:0]  s_coh_addr
        , output logic [63:0]  m_coh_addr
        , output logic [63:0]  m_axi_awaddr
        , output logic [63:0]  m_axi_wdata
        , output logic [63:0]  m_axi_araddr
        , input logic [63:0]  m_axi_rdata
        , output logic [63:0]  cmt_mstatus
        , output logic [63:0]  cmt_misa
        , output logic [63:0]  cmt_mtvec
        , output logic [63:0]  cmt_mcause
        , output logic [63:0]  cmt_mepc
        , output logic [63:0]  cmt_mtval
        , output logic [63:0]  cmt_stvec
        , output logic [63:0]  cmt_scause
        , output logic [63:0]  cmt_sepc
        , output logic [63:0]  cmt_stval
        , output logic [63:0]  cmt_mip
        , output logic [63:0]  cmt_mcycle
        , output logic [63:0]  cmt_minstret
        , output logic [63:0]  cmt_mtime
        , output logic [63:0]  del_csrv
        , output logic [63:0]  del_mema
        , output logic [63:0]  del_memv
        , output logic [63:0]  stallpc
        , output logic [63:0]  bmisp
        , output logic [63:0]  fmisp
        , output logic [63:0]  brmisp
        , output logic [63:0]  jmisp
        , output logic [63:0]  jrmisp
        , output logic [63:0]  icmiss
        , output logic [63:0]  dcmiss
        , output logic [63:0]  stmiss
        , output logic [63:0]  itmiss
        , output logic [63:0]  dtmiss
        , output logic [63:0]  loads
        , output logic [63:0]  stores
        , output logic cmt[3:0]
        , output logic [1:0]  cmt_level[3:0]
        , output logic [63:0]  cmt_pc[3:0]
        , output logic [31:0]  cmt_ir[3:0]
        , output logic cmt_gpr[3:0]
        , output logic cmt_csr[3:0]
        , output logic cmt_mem[3:0]
        , output logic del_gprw[3:0]
        , output logic [5:0]  del_gpra[3:0]
        , output logic [63:0]  del_gprv[3:0]
    );
    
    // Precision of submodule (commented out to avoid requiring timescale on all modules)
    // timeunit 1ps;
    // timeprecision 1ps;
    
    // Checks to make sure the .sv wrapper and library agree
    import "DPI-C" function void vcore_protectlib_check_hash(int protectlib_hash__V);
    
    // Creates an instance of the library module at initial-time
    // (one for each instance in the user's design) also evaluates
    // the library module's initial process
    import "DPI-C" function chandle vcore_protectlib_create(string scope__V);
    
    // Updates all non-clock inputs and retrieves the results
    import "DPI-C" function longint vcore_protectlib_combo_update (
        chandle handle__V
        , input logic rst
        , input logic [7:0]  s_coh_rqst
        , input logic [7:0]  s_coh_trsc
        , output logic [7:0]  s_coh_resp
        , output logic [7:0]  m_coh_rqst
        , output logic [7:0]  m_coh_trsc
        , input logic [7:0]  m_coh_resp
        , output logic [7:0]  m_axi_awid
        , output logic [7:0]  m_axi_awlen
        , output logic [2:0]  m_axi_awsize
        , output logic [1:0]  m_axi_awburst
        , output logic m_axi_awlock
        , output logic [3:0]  m_axi_awcache
        , output logic [2:0]  m_axi_awprot
        , output logic [3:0]  m_axi_awqos
        , output logic m_axi_awvalid
        , input logic m_axi_awready
        , output logic [7:0]  m_axi_wstrb
        , output logic m_axi_wlast
        , output logic m_axi_wvalid
        , input logic m_axi_wready
        , input logic [7:0]  m_axi_bid
        , input logic [1:0]  m_axi_bresp
        , input logic m_axi_bvalid
        , output logic m_axi_bready
        , output logic [7:0]  m_axi_arid
        , output logic [7:0]  m_axi_arlen
        , output logic [2:0]  m_axi_arsize
        , output logic [1:0]  m_axi_arburst
        , output logic m_axi_arlock
        , output logic [3:0]  m_axi_arcache
        , output logic [2:0]  m_axi_arprot
        , output logic [3:0]  m_axi_arqos
        , output logic m_axi_arvalid
        , input logic m_axi_arready
        , input logic [7:0]  m_axi_rid
        , input logic [1:0]  m_axi_rresp
        , input logic m_axi_rlast
        , input logic m_axi_rvalid
        , output logic m_axi_rready
        , output logic cmt_mexc
        , output logic cmt_sexc
        , output logic cmt_int
        , output logic cmt_ret
        , output logic del_csrw
        , output logic [7:0]  del_memw
        , output logic [11:0]  del_csra
        , input logic [63:0]  mip_ext
        , input logic [63:0]  mtime
        , input logic [63:0]  s_coh_addr
        , output logic [63:0]  m_coh_addr
        , output logic [63:0]  m_axi_awaddr
        , output logic [63:0]  m_axi_wdata
        , output logic [63:0]  m_axi_araddr
        , input logic [63:0]  m_axi_rdata
        , output logic [63:0]  cmt_mstatus
        , output logic [63:0]  cmt_misa
        , output logic [63:0]  cmt_mtvec
        , output logic [63:0]  cmt_mcause
        , output logic [63:0]  cmt_mepc
        , output logic [63:0]  cmt_mtval
        , output logic [63:0]  cmt_stvec
        , output logic [63:0]  cmt_scause
        , output logic [63:0]  cmt_sepc
        , output logic [63:0]  cmt_stval
        , output logic [63:0]  cmt_mip
        , output logic [63:0]  cmt_mcycle
        , output logic [63:0]  cmt_minstret
        , output logic [63:0]  cmt_mtime
        , output logic [63:0]  del_csrv
        , output logic [63:0]  del_mema
        , output logic [63:0]  del_memv
        , output logic [63:0]  stallpc
        , output logic [63:0]  bmisp
        , output logic [63:0]  fmisp
        , output logic [63:0]  brmisp
        , output logic [63:0]  jmisp
        , output logic [63:0]  jrmisp
        , output logic [63:0]  icmiss
        , output logic [63:0]  dcmiss
        , output logic [63:0]  stmiss
        , output logic [63:0]  itmiss
        , output logic [63:0]  dtmiss
        , output logic [63:0]  loads
        , output logic [63:0]  stores
        , output logic cmt[3:0]
        , output logic [1:0]  cmt_level[3:0]
        , output logic [63:0]  cmt_pc[3:0]
        , output logic [31:0]  cmt_ir[3:0]
        , output logic cmt_gpr[3:0]
        , output logic cmt_csr[3:0]
        , output logic cmt_mem[3:0]
        , output logic del_gprw[3:0]
        , output logic [5:0]  del_gpra[3:0]
        , output logic [63:0]  del_gprv[3:0]
    );
    
    // Updates all clocks and retrieves the results
    import "DPI-C" function longint vcore_protectlib_seq_update(
        chandle handle__V
        , input logic clk
        , output logic [7:0]  s_coh_resp
        , output logic [7:0]  m_coh_rqst
        , output logic [7:0]  m_coh_trsc
        , output logic [7:0]  m_axi_awid
        , output logic [7:0]  m_axi_awlen
        , output logic [2:0]  m_axi_awsize
        , output logic [1:0]  m_axi_awburst
        , output logic m_axi_awlock
        , output logic [3:0]  m_axi_awcache
        , output logic [2:0]  m_axi_awprot
        , output logic [3:0]  m_axi_awqos
        , output logic m_axi_awvalid
        , output logic [7:0]  m_axi_wstrb
        , output logic m_axi_wlast
        , output logic m_axi_wvalid
        , output logic m_axi_bready
        , output logic [7:0]  m_axi_arid
        , output logic [7:0]  m_axi_arlen
        , output logic [2:0]  m_axi_arsize
        , output logic [1:0]  m_axi_arburst
        , output logic m_axi_arlock
        , output logic [3:0]  m_axi_arcache
        , output logic [2:0]  m_axi_arprot
        , output logic [3:0]  m_axi_arqos
        , output logic m_axi_arvalid
        , output logic m_axi_rready
        , output logic cmt_mexc
        , output logic cmt_sexc
        , output logic cmt_int
        , output logic cmt_ret
        , output logic del_csrw
        , output logic [7:0]  del_memw
        , output logic [11:0]  del_csra
        , output logic [63:0]  m_coh_addr
        , output logic [63:0]  m_axi_awaddr
        , output logic [63:0]  m_axi_wdata
        , output logic [63:0]  m_axi_araddr
        , output logic [63:0]  cmt_mstatus
        , output logic [63:0]  cmt_misa
        , output logic [63:0]  cmt_mtvec
        , output logic [63:0]  cmt_mcause
        , output logic [63:0]  cmt_mepc
        , output logic [63:0]  cmt_mtval
        , output logic [63:0]  cmt_stvec
        , output logic [63:0]  cmt_scause
        , output logic [63:0]  cmt_sepc
        , output logic [63:0]  cmt_stval
        , output logic [63:0]  cmt_mip
        , output logic [63:0]  cmt_mcycle
        , output logic [63:0]  cmt_minstret
        , output logic [63:0]  cmt_mtime
        , output logic [63:0]  del_csrv
        , output logic [63:0]  del_mema
        , output logic [63:0]  del_memv
        , output logic [63:0]  stallpc
        , output logic [63:0]  bmisp
        , output logic [63:0]  fmisp
        , output logic [63:0]  brmisp
        , output logic [63:0]  jmisp
        , output logic [63:0]  jrmisp
        , output logic [63:0]  icmiss
        , output logic [63:0]  dcmiss
        , output logic [63:0]  stmiss
        , output logic [63:0]  itmiss
        , output logic [63:0]  dtmiss
        , output logic [63:0]  loads
        , output logic [63:0]  stores
        , output logic cmt[3:0]
        , output logic [1:0]  cmt_level[3:0]
        , output logic [63:0]  cmt_pc[3:0]
        , output logic [31:0]  cmt_ir[3:0]
        , output logic cmt_gpr[3:0]
        , output logic cmt_csr[3:0]
        , output logic cmt_mem[3:0]
        , output logic del_gprw[3:0]
        , output logic [5:0]  del_gpra[3:0]
        , output logic [63:0]  del_gprv[3:0]
    );
    
    // Need to convince some simulators that the input to the module
    // must be evaluated before evaluating the clock edge
    import "DPI-C" function void vcore_protectlib_combo_ignore(
        chandle handle__V
        , input logic rst
        , input logic [7:0]  s_coh_rqst
        , input logic [7:0]  s_coh_trsc
        , input logic [7:0]  m_coh_resp
        , input logic m_axi_awready
        , input logic m_axi_wready
        , input logic [7:0]  m_axi_bid
        , input logic [1:0]  m_axi_bresp
        , input logic m_axi_bvalid
        , input logic m_axi_arready
        , input logic [7:0]  m_axi_rid
        , input logic [1:0]  m_axi_rresp
        , input logic m_axi_rlast
        , input logic m_axi_rvalid
        , input logic [63:0]  mip_ext
        , input logic [63:0]  mtime
        , input logic [63:0]  s_coh_addr
        , input logic [63:0]  m_axi_rdata
    );
    
    // Evaluates the library module's final process
    import "DPI-C" function void vcore_protectlib_final(chandle handle__V);
    
    `ifdef verilator
    // Enables the library module's tracing
    // Only usable when used with called from Verilator
    import "DPI-C" function void vcore_protectlib_trace(chandle handle__V, chandle tfp, int levels, int options) /*verilator trace_init_task*/;
    `endif  // verilator

    // verilator tracing_off
    chandle handle__V;
    time last_combo_seqnum__V;
    time last_seq_seqnum__V;

    logic [7:0]  s_coh_resp_combo__V;
    logic [7:0]  m_coh_rqst_combo__V;
    logic [7:0]  m_coh_trsc_combo__V;
    logic [7:0]  m_axi_awid_combo__V;
    logic [7:0]  m_axi_awlen_combo__V;
    logic [2:0]  m_axi_awsize_combo__V;
    logic [1:0]  m_axi_awburst_combo__V;
    logic m_axi_awlock_combo__V;
    logic [3:0]  m_axi_awcache_combo__V;
    logic [2:0]  m_axi_awprot_combo__V;
    logic [3:0]  m_axi_awqos_combo__V;
    logic m_axi_awvalid_combo__V;
    logic [7:0]  m_axi_wstrb_combo__V;
    logic m_axi_wlast_combo__V;
    logic m_axi_wvalid_combo__V;
    logic m_axi_bready_combo__V;
    logic [7:0]  m_axi_arid_combo__V;
    logic [7:0]  m_axi_arlen_combo__V;
    logic [2:0]  m_axi_arsize_combo__V;
    logic [1:0]  m_axi_arburst_combo__V;
    logic m_axi_arlock_combo__V;
    logic [3:0]  m_axi_arcache_combo__V;
    logic [2:0]  m_axi_arprot_combo__V;
    logic [3:0]  m_axi_arqos_combo__V;
    logic m_axi_arvalid_combo__V;
    logic m_axi_rready_combo__V;
    logic cmt_mexc_combo__V;
    logic cmt_sexc_combo__V;
    logic cmt_int_combo__V;
    logic cmt_ret_combo__V;
    logic del_csrw_combo__V;
    logic [7:0]  del_memw_combo__V;
    logic [11:0]  del_csra_combo__V;
    logic [63:0]  m_coh_addr_combo__V;
    logic [63:0]  m_axi_awaddr_combo__V;
    logic [63:0]  m_axi_wdata_combo__V;
    logic [63:0]  m_axi_araddr_combo__V;
    logic [63:0]  cmt_mstatus_combo__V;
    logic [63:0]  cmt_misa_combo__V;
    logic [63:0]  cmt_mtvec_combo__V;
    logic [63:0]  cmt_mcause_combo__V;
    logic [63:0]  cmt_mepc_combo__V;
    logic [63:0]  cmt_mtval_combo__V;
    logic [63:0]  cmt_stvec_combo__V;
    logic [63:0]  cmt_scause_combo__V;
    logic [63:0]  cmt_sepc_combo__V;
    logic [63:0]  cmt_stval_combo__V;
    logic [63:0]  cmt_mip_combo__V;
    logic [63:0]  cmt_mcycle_combo__V;
    logic [63:0]  cmt_minstret_combo__V;
    logic [63:0]  cmt_mtime_combo__V;
    logic [63:0]  del_csrv_combo__V;
    logic [63:0]  del_mema_combo__V;
    logic [63:0]  del_memv_combo__V;
    logic [63:0]  stallpc_combo__V;
    logic [63:0]  bmisp_combo__V;
    logic [63:0]  fmisp_combo__V;
    logic [63:0]  brmisp_combo__V;
    logic [63:0]  jmisp_combo__V;
    logic [63:0]  jrmisp_combo__V;
    logic [63:0]  icmiss_combo__V;
    logic [63:0]  dcmiss_combo__V;
    logic [63:0]  stmiss_combo__V;
    logic [63:0]  itmiss_combo__V;
    logic [63:0]  dtmiss_combo__V;
    logic [63:0]  loads_combo__V;
    logic [63:0]  stores_combo__V;
    logic cmt_combo__V[3:0];
    logic [1:0]  cmt_level_combo__V[3:0];
    logic [63:0]  cmt_pc_combo__V[3:0];
    logic [31:0]  cmt_ir_combo__V[3:0];
    logic cmt_gpr_combo__V[3:0];
    logic cmt_csr_combo__V[3:0];
    logic cmt_mem_combo__V[3:0];
    logic del_gprw_combo__V[3:0];
    logic [5:0]  del_gpra_combo__V[3:0];
    logic [63:0]  del_gprv_combo__V[3:0];
    logic [7:0]  s_coh_resp_seq__V;
    logic [7:0]  m_coh_rqst_seq__V;
    logic [7:0]  m_coh_trsc_seq__V;
    logic [7:0]  m_axi_awid_seq__V;
    logic [7:0]  m_axi_awlen_seq__V;
    logic [2:0]  m_axi_awsize_seq__V;
    logic [1:0]  m_axi_awburst_seq__V;
    logic m_axi_awlock_seq__V;
    logic [3:0]  m_axi_awcache_seq__V;
    logic [2:0]  m_axi_awprot_seq__V;
    logic [3:0]  m_axi_awqos_seq__V;
    logic m_axi_awvalid_seq__V;
    logic [7:0]  m_axi_wstrb_seq__V;
    logic m_axi_wlast_seq__V;
    logic m_axi_wvalid_seq__V;
    logic m_axi_bready_seq__V;
    logic [7:0]  m_axi_arid_seq__V;
    logic [7:0]  m_axi_arlen_seq__V;
    logic [2:0]  m_axi_arsize_seq__V;
    logic [1:0]  m_axi_arburst_seq__V;
    logic m_axi_arlock_seq__V;
    logic [3:0]  m_axi_arcache_seq__V;
    logic [2:0]  m_axi_arprot_seq__V;
    logic [3:0]  m_axi_arqos_seq__V;
    logic m_axi_arvalid_seq__V;
    logic m_axi_rready_seq__V;
    logic cmt_mexc_seq__V;
    logic cmt_sexc_seq__V;
    logic cmt_int_seq__V;
    logic cmt_ret_seq__V;
    logic del_csrw_seq__V;
    logic [7:0]  del_memw_seq__V;
    logic [11:0]  del_csra_seq__V;
    logic [63:0]  m_coh_addr_seq__V;
    logic [63:0]  m_axi_awaddr_seq__V;
    logic [63:0]  m_axi_wdata_seq__V;
    logic [63:0]  m_axi_araddr_seq__V;
    logic [63:0]  cmt_mstatus_seq__V;
    logic [63:0]  cmt_misa_seq__V;
    logic [63:0]  cmt_mtvec_seq__V;
    logic [63:0]  cmt_mcause_seq__V;
    logic [63:0]  cmt_mepc_seq__V;
    logic [63:0]  cmt_mtval_seq__V;
    logic [63:0]  cmt_stvec_seq__V;
    logic [63:0]  cmt_scause_seq__V;
    logic [63:0]  cmt_sepc_seq__V;
    logic [63:0]  cmt_stval_seq__V;
    logic [63:0]  cmt_mip_seq__V;
    logic [63:0]  cmt_mcycle_seq__V;
    logic [63:0]  cmt_minstret_seq__V;
    logic [63:0]  cmt_mtime_seq__V;
    logic [63:0]  del_csrv_seq__V;
    logic [63:0]  del_mema_seq__V;
    logic [63:0]  del_memv_seq__V;
    logic [63:0]  stallpc_seq__V;
    logic [63:0]  bmisp_seq__V;
    logic [63:0]  fmisp_seq__V;
    logic [63:0]  brmisp_seq__V;
    logic [63:0]  jmisp_seq__V;
    logic [63:0]  jrmisp_seq__V;
    logic [63:0]  icmiss_seq__V;
    logic [63:0]  dcmiss_seq__V;
    logic [63:0]  stmiss_seq__V;
    logic [63:0]  itmiss_seq__V;
    logic [63:0]  dtmiss_seq__V;
    logic [63:0]  loads_seq__V;
    logic [63:0]  stores_seq__V;
    logic cmt_seq__V[3:0];
    logic [1:0]  cmt_level_seq__V[3:0];
    logic [63:0]  cmt_pc_seq__V[3:0];
    logic [31:0]  cmt_ir_seq__V[3:0];
    logic cmt_gpr_seq__V[3:0];
    logic cmt_csr_seq__V[3:0];
    logic cmt_mem_seq__V[3:0];
    logic del_gprw_seq__V[3:0];
    logic [5:0]  del_gpra_seq__V[3:0];
    logic [63:0]  del_gprv_seq__V[3:0];
    logic [7:0]  s_coh_resp_tmp__V;
    logic [7:0]  m_coh_rqst_tmp__V;
    logic [7:0]  m_coh_trsc_tmp__V;
    logic [7:0]  m_axi_awid_tmp__V;
    logic [7:0]  m_axi_awlen_tmp__V;
    logic [2:0]  m_axi_awsize_tmp__V;
    logic [1:0]  m_axi_awburst_tmp__V;
    logic m_axi_awlock_tmp__V;
    logic [3:0]  m_axi_awcache_tmp__V;
    logic [2:0]  m_axi_awprot_tmp__V;
    logic [3:0]  m_axi_awqos_tmp__V;
    logic m_axi_awvalid_tmp__V;
    logic [7:0]  m_axi_wstrb_tmp__V;
    logic m_axi_wlast_tmp__V;
    logic m_axi_wvalid_tmp__V;
    logic m_axi_bready_tmp__V;
    logic [7:0]  m_axi_arid_tmp__V;
    logic [7:0]  m_axi_arlen_tmp__V;
    logic [2:0]  m_axi_arsize_tmp__V;
    logic [1:0]  m_axi_arburst_tmp__V;
    logic m_axi_arlock_tmp__V;
    logic [3:0]  m_axi_arcache_tmp__V;
    logic [2:0]  m_axi_arprot_tmp__V;
    logic [3:0]  m_axi_arqos_tmp__V;
    logic m_axi_arvalid_tmp__V;
    logic m_axi_rready_tmp__V;
    logic cmt_mexc_tmp__V;
    logic cmt_sexc_tmp__V;
    logic cmt_int_tmp__V;
    logic cmt_ret_tmp__V;
    logic del_csrw_tmp__V;
    logic [7:0]  del_memw_tmp__V;
    logic [11:0]  del_csra_tmp__V;
    logic [63:0]  m_coh_addr_tmp__V;
    logic [63:0]  m_axi_awaddr_tmp__V;
    logic [63:0]  m_axi_wdata_tmp__V;
    logic [63:0]  m_axi_araddr_tmp__V;
    logic [63:0]  cmt_mstatus_tmp__V;
    logic [63:0]  cmt_misa_tmp__V;
    logic [63:0]  cmt_mtvec_tmp__V;
    logic [63:0]  cmt_mcause_tmp__V;
    logic [63:0]  cmt_mepc_tmp__V;
    logic [63:0]  cmt_mtval_tmp__V;
    logic [63:0]  cmt_stvec_tmp__V;
    logic [63:0]  cmt_scause_tmp__V;
    logic [63:0]  cmt_sepc_tmp__V;
    logic [63:0]  cmt_stval_tmp__V;
    logic [63:0]  cmt_mip_tmp__V;
    logic [63:0]  cmt_mcycle_tmp__V;
    logic [63:0]  cmt_minstret_tmp__V;
    logic [63:0]  cmt_mtime_tmp__V;
    logic [63:0]  del_csrv_tmp__V;
    logic [63:0]  del_mema_tmp__V;
    logic [63:0]  del_memv_tmp__V;
    logic [63:0]  stallpc_tmp__V;
    logic [63:0]  bmisp_tmp__V;
    logic [63:0]  fmisp_tmp__V;
    logic [63:0]  brmisp_tmp__V;
    logic [63:0]  jmisp_tmp__V;
    logic [63:0]  jrmisp_tmp__V;
    logic [63:0]  icmiss_tmp__V;
    logic [63:0]  dcmiss_tmp__V;
    logic [63:0]  stmiss_tmp__V;
    logic [63:0]  itmiss_tmp__V;
    logic [63:0]  dtmiss_tmp__V;
    logic [63:0]  loads_tmp__V;
    logic [63:0]  stores_tmp__V;
    logic cmt_tmp__V[3:0];
    logic [1:0]  cmt_level_tmp__V[3:0];
    logic [63:0]  cmt_pc_tmp__V[3:0];
    logic [31:0]  cmt_ir_tmp__V[3:0];
    logic cmt_gpr_tmp__V[3:0];
    logic cmt_csr_tmp__V[3:0];
    logic cmt_mem_tmp__V[3:0];
    logic del_gprw_tmp__V[3:0];
    logic [5:0]  del_gpra_tmp__V[3:0];
    logic [63:0]  del_gprv_tmp__V[3:0];
    // Hash value to make sure this file and the corresponding
    // library agree
    localparam int protectlib_hash__V = 32'd2788900680;

    initial begin
        vcore_protectlib_check_hash(protectlib_hash__V);
        handle__V = vcore_protectlib_create($sformatf("%m"));
    end
    
    // Combinatorialy evaluate changes to inputs
    always @* begin
        last_combo_seqnum__V = vcore_protectlib_combo_update(
            handle__V
            , rst
            , s_coh_rqst
            , s_coh_trsc
            , s_coh_resp_combo__V
            , m_coh_rqst_combo__V
            , m_coh_trsc_combo__V
            , m_coh_resp
            , m_axi_awid_combo__V
            , m_axi_awlen_combo__V
            , m_axi_awsize_combo__V
            , m_axi_awburst_combo__V
            , m_axi_awlock_combo__V
            , m_axi_awcache_combo__V
            , m_axi_awprot_combo__V
            , m_axi_awqos_combo__V
            , m_axi_awvalid_combo__V
            , m_axi_awready
            , m_axi_wstrb_combo__V
            , m_axi_wlast_combo__V
            , m_axi_wvalid_combo__V
            , m_axi_wready
            , m_axi_bid
            , m_axi_bresp
            , m_axi_bvalid
            , m_axi_bready_combo__V
            , m_axi_arid_combo__V
            , m_axi_arlen_combo__V
            , m_axi_arsize_combo__V
            , m_axi_arburst_combo__V
            , m_axi_arlock_combo__V
            , m_axi_arcache_combo__V
            , m_axi_arprot_combo__V
            , m_axi_arqos_combo__V
            , m_axi_arvalid_combo__V
            , m_axi_arready
            , m_axi_rid
            , m_axi_rresp
            , m_axi_rlast
            , m_axi_rvalid
            , m_axi_rready_combo__V
            , cmt_mexc_combo__V
            , cmt_sexc_combo__V
            , cmt_int_combo__V
            , cmt_ret_combo__V
            , del_csrw_combo__V
            , del_memw_combo__V
            , del_csra_combo__V
            , mip_ext
            , mtime
            , s_coh_addr
            , m_coh_addr_combo__V
            , m_axi_awaddr_combo__V
            , m_axi_wdata_combo__V
            , m_axi_araddr_combo__V
            , m_axi_rdata
            , cmt_mstatus_combo__V
            , cmt_misa_combo__V
            , cmt_mtvec_combo__V
            , cmt_mcause_combo__V
            , cmt_mepc_combo__V
            , cmt_mtval_combo__V
            , cmt_stvec_combo__V
            , cmt_scause_combo__V
            , cmt_sepc_combo__V
            , cmt_stval_combo__V
            , cmt_mip_combo__V
            , cmt_mcycle_combo__V
            , cmt_minstret_combo__V
            , cmt_mtime_combo__V
            , del_csrv_combo__V
            , del_mema_combo__V
            , del_memv_combo__V
            , stallpc_combo__V
            , bmisp_combo__V
            , fmisp_combo__V
            , brmisp_combo__V
            , jmisp_combo__V
            , jrmisp_combo__V
            , icmiss_combo__V
            , dcmiss_combo__V
            , stmiss_combo__V
            , itmiss_combo__V
            , dtmiss_combo__V
            , loads_combo__V
            , stores_combo__V
            , cmt_combo__V
            , cmt_level_combo__V
            , cmt_pc_combo__V
            , cmt_ir_combo__V
            , cmt_gpr_combo__V
            , cmt_csr_combo__V
            , cmt_mem_combo__V
            , del_gprw_combo__V
            , del_gpra_combo__V
            , del_gprv_combo__V
        );
    end
    
    // Evaluate clock edges
    always @(posedge clk or negedge clk) begin
        vcore_protectlib_combo_ignore(
            handle__V
            , rst
            , s_coh_rqst
            , s_coh_trsc
            , m_coh_resp
            , m_axi_awready
            , m_axi_wready
            , m_axi_bid
            , m_axi_bresp
            , m_axi_bvalid
            , m_axi_arready
            , m_axi_rid
            , m_axi_rresp
            , m_axi_rlast
            , m_axi_rvalid
            , mip_ext
            , mtime
            , s_coh_addr
            , m_axi_rdata
        );
        last_seq_seqnum__V <= vcore_protectlib_seq_update(
            handle__V
            , clk
            , s_coh_resp_tmp__V
            , m_coh_rqst_tmp__V
            , m_coh_trsc_tmp__V
            , m_axi_awid_tmp__V
            , m_axi_awlen_tmp__V
            , m_axi_awsize_tmp__V
            , m_axi_awburst_tmp__V
            , m_axi_awlock_tmp__V
            , m_axi_awcache_tmp__V
            , m_axi_awprot_tmp__V
            , m_axi_awqos_tmp__V
            , m_axi_awvalid_tmp__V
            , m_axi_wstrb_tmp__V
            , m_axi_wlast_tmp__V
            , m_axi_wvalid_tmp__V
            , m_axi_bready_tmp__V
            , m_axi_arid_tmp__V
            , m_axi_arlen_tmp__V
            , m_axi_arsize_tmp__V
            , m_axi_arburst_tmp__V
            , m_axi_arlock_tmp__V
            , m_axi_arcache_tmp__V
            , m_axi_arprot_tmp__V
            , m_axi_arqos_tmp__V
            , m_axi_arvalid_tmp__V
            , m_axi_rready_tmp__V
            , cmt_mexc_tmp__V
            , cmt_sexc_tmp__V
            , cmt_int_tmp__V
            , cmt_ret_tmp__V
            , del_csrw_tmp__V
            , del_memw_tmp__V
            , del_csra_tmp__V
            , m_coh_addr_tmp__V
            , m_axi_awaddr_tmp__V
            , m_axi_wdata_tmp__V
            , m_axi_araddr_tmp__V
            , cmt_mstatus_tmp__V
            , cmt_misa_tmp__V
            , cmt_mtvec_tmp__V
            , cmt_mcause_tmp__V
            , cmt_mepc_tmp__V
            , cmt_mtval_tmp__V
            , cmt_stvec_tmp__V
            , cmt_scause_tmp__V
            , cmt_sepc_tmp__V
            , cmt_stval_tmp__V
            , cmt_mip_tmp__V
            , cmt_mcycle_tmp__V
            , cmt_minstret_tmp__V
            , cmt_mtime_tmp__V
            , del_csrv_tmp__V
            , del_mema_tmp__V
            , del_memv_tmp__V
            , stallpc_tmp__V
            , bmisp_tmp__V
            , fmisp_tmp__V
            , brmisp_tmp__V
            , jmisp_tmp__V
            , jrmisp_tmp__V
            , icmiss_tmp__V
            , dcmiss_tmp__V
            , stmiss_tmp__V
            , itmiss_tmp__V
            , dtmiss_tmp__V
            , loads_tmp__V
            , stores_tmp__V
            , cmt_tmp__V
            , cmt_level_tmp__V
            , cmt_pc_tmp__V
            , cmt_ir_tmp__V
            , cmt_gpr_tmp__V
            , cmt_csr_tmp__V
            , cmt_mem_tmp__V
            , del_gprw_tmp__V
            , del_gpra_tmp__V
            , del_gprv_tmp__V
        );
        s_coh_resp_seq__V <= s_coh_resp_tmp__V;
        m_coh_rqst_seq__V <= m_coh_rqst_tmp__V;
        m_coh_trsc_seq__V <= m_coh_trsc_tmp__V;
        m_axi_awid_seq__V <= m_axi_awid_tmp__V;
        m_axi_awlen_seq__V <= m_axi_awlen_tmp__V;
        m_axi_awsize_seq__V <= m_axi_awsize_tmp__V;
        m_axi_awburst_seq__V <= m_axi_awburst_tmp__V;
        m_axi_awlock_seq__V <= m_axi_awlock_tmp__V;
        m_axi_awcache_seq__V <= m_axi_awcache_tmp__V;
        m_axi_awprot_seq__V <= m_axi_awprot_tmp__V;
        m_axi_awqos_seq__V <= m_axi_awqos_tmp__V;
        m_axi_awvalid_seq__V <= m_axi_awvalid_tmp__V;
        m_axi_wstrb_seq__V <= m_axi_wstrb_tmp__V;
        m_axi_wlast_seq__V <= m_axi_wlast_tmp__V;
        m_axi_wvalid_seq__V <= m_axi_wvalid_tmp__V;
        m_axi_bready_seq__V <= m_axi_bready_tmp__V;
        m_axi_arid_seq__V <= m_axi_arid_tmp__V;
        m_axi_arlen_seq__V <= m_axi_arlen_tmp__V;
        m_axi_arsize_seq__V <= m_axi_arsize_tmp__V;
        m_axi_arburst_seq__V <= m_axi_arburst_tmp__V;
        m_axi_arlock_seq__V <= m_axi_arlock_tmp__V;
        m_axi_arcache_seq__V <= m_axi_arcache_tmp__V;
        m_axi_arprot_seq__V <= m_axi_arprot_tmp__V;
        m_axi_arqos_seq__V <= m_axi_arqos_tmp__V;
        m_axi_arvalid_seq__V <= m_axi_arvalid_tmp__V;
        m_axi_rready_seq__V <= m_axi_rready_tmp__V;
        cmt_mexc_seq__V <= cmt_mexc_tmp__V;
        cmt_sexc_seq__V <= cmt_sexc_tmp__V;
        cmt_int_seq__V <= cmt_int_tmp__V;
        cmt_ret_seq__V <= cmt_ret_tmp__V;
        del_csrw_seq__V <= del_csrw_tmp__V;
        del_memw_seq__V <= del_memw_tmp__V;
        del_csra_seq__V <= del_csra_tmp__V;
        m_coh_addr_seq__V <= m_coh_addr_tmp__V;
        m_axi_awaddr_seq__V <= m_axi_awaddr_tmp__V;
        m_axi_wdata_seq__V <= m_axi_wdata_tmp__V;
        m_axi_araddr_seq__V <= m_axi_araddr_tmp__V;
        cmt_mstatus_seq__V <= cmt_mstatus_tmp__V;
        cmt_misa_seq__V <= cmt_misa_tmp__V;
        cmt_mtvec_seq__V <= cmt_mtvec_tmp__V;
        cmt_mcause_seq__V <= cmt_mcause_tmp__V;
        cmt_mepc_seq__V <= cmt_mepc_tmp__V;
        cmt_mtval_seq__V <= cmt_mtval_tmp__V;
        cmt_stvec_seq__V <= cmt_stvec_tmp__V;
        cmt_scause_seq__V <= cmt_scause_tmp__V;
        cmt_sepc_seq__V <= cmt_sepc_tmp__V;
        cmt_stval_seq__V <= cmt_stval_tmp__V;
        cmt_mip_seq__V <= cmt_mip_tmp__V;
        cmt_mcycle_seq__V <= cmt_mcycle_tmp__V;
        cmt_minstret_seq__V <= cmt_minstret_tmp__V;
        cmt_mtime_seq__V <= cmt_mtime_tmp__V;
        del_csrv_seq__V <= del_csrv_tmp__V;
        del_mema_seq__V <= del_mema_tmp__V;
        del_memv_seq__V <= del_memv_tmp__V;
        stallpc_seq__V <= stallpc_tmp__V;
        bmisp_seq__V <= bmisp_tmp__V;
        fmisp_seq__V <= fmisp_tmp__V;
        brmisp_seq__V <= brmisp_tmp__V;
        jmisp_seq__V <= jmisp_tmp__V;
        jrmisp_seq__V <= jrmisp_tmp__V;
        icmiss_seq__V <= icmiss_tmp__V;
        dcmiss_seq__V <= dcmiss_tmp__V;
        stmiss_seq__V <= stmiss_tmp__V;
        itmiss_seq__V <= itmiss_tmp__V;
        dtmiss_seq__V <= dtmiss_tmp__V;
        loads_seq__V <= loads_tmp__V;
        stores_seq__V <= stores_tmp__V;
        cmt_seq__V <= cmt_tmp__V;
        cmt_level_seq__V <= cmt_level_tmp__V;
        cmt_pc_seq__V <= cmt_pc_tmp__V;
        cmt_ir_seq__V <= cmt_ir_tmp__V;
        cmt_gpr_seq__V <= cmt_gpr_tmp__V;
        cmt_csr_seq__V <= cmt_csr_tmp__V;
        cmt_mem_seq__V <= cmt_mem_tmp__V;
        del_gprw_seq__V <= del_gprw_tmp__V;
        del_gpra_seq__V <= del_gpra_tmp__V;
        del_gprv_seq__V <= del_gprv_tmp__V;
    end
    
    // Select between combinatorial and sequential results
    always @* begin
        if (last_seq_seqnum__V > last_combo_seqnum__V) begin
            s_coh_resp = s_coh_resp_seq__V;
            m_coh_rqst = m_coh_rqst_seq__V;
            m_coh_trsc = m_coh_trsc_seq__V;
            m_axi_awid = m_axi_awid_seq__V;
            m_axi_awlen = m_axi_awlen_seq__V;
            m_axi_awsize = m_axi_awsize_seq__V;
            m_axi_awburst = m_axi_awburst_seq__V;
            m_axi_awlock = m_axi_awlock_seq__V;
            m_axi_awcache = m_axi_awcache_seq__V;
            m_axi_awprot = m_axi_awprot_seq__V;
            m_axi_awqos = m_axi_awqos_seq__V;
            m_axi_awvalid = m_axi_awvalid_seq__V;
            m_axi_wstrb = m_axi_wstrb_seq__V;
            m_axi_wlast = m_axi_wlast_seq__V;
            m_axi_wvalid = m_axi_wvalid_seq__V;
            m_axi_bready = m_axi_bready_seq__V;
            m_axi_arid = m_axi_arid_seq__V;
            m_axi_arlen = m_axi_arlen_seq__V;
            m_axi_arsize = m_axi_arsize_seq__V;
            m_axi_arburst = m_axi_arburst_seq__V;
            m_axi_arlock = m_axi_arlock_seq__V;
            m_axi_arcache = m_axi_arcache_seq__V;
            m_axi_arprot = m_axi_arprot_seq__V;
            m_axi_arqos = m_axi_arqos_seq__V;
            m_axi_arvalid = m_axi_arvalid_seq__V;
            m_axi_rready = m_axi_rready_seq__V;
            cmt_mexc = cmt_mexc_seq__V;
            cmt_sexc = cmt_sexc_seq__V;
            cmt_int = cmt_int_seq__V;
            cmt_ret = cmt_ret_seq__V;
            del_csrw = del_csrw_seq__V;
            del_memw = del_memw_seq__V;
            del_csra = del_csra_seq__V;
            m_coh_addr = m_coh_addr_seq__V;
            m_axi_awaddr = m_axi_awaddr_seq__V;
            m_axi_wdata = m_axi_wdata_seq__V;
            m_axi_araddr = m_axi_araddr_seq__V;
            cmt_mstatus = cmt_mstatus_seq__V;
            cmt_misa = cmt_misa_seq__V;
            cmt_mtvec = cmt_mtvec_seq__V;
            cmt_mcause = cmt_mcause_seq__V;
            cmt_mepc = cmt_mepc_seq__V;
            cmt_mtval = cmt_mtval_seq__V;
            cmt_stvec = cmt_stvec_seq__V;
            cmt_scause = cmt_scause_seq__V;
            cmt_sepc = cmt_sepc_seq__V;
            cmt_stval = cmt_stval_seq__V;
            cmt_mip = cmt_mip_seq__V;
            cmt_mcycle = cmt_mcycle_seq__V;
            cmt_minstret = cmt_minstret_seq__V;
            cmt_mtime = cmt_mtime_seq__V;
            del_csrv = del_csrv_seq__V;
            del_mema = del_mema_seq__V;
            del_memv = del_memv_seq__V;
            stallpc = stallpc_seq__V;
            bmisp = bmisp_seq__V;
            fmisp = fmisp_seq__V;
            brmisp = brmisp_seq__V;
            jmisp = jmisp_seq__V;
            jrmisp = jrmisp_seq__V;
            icmiss = icmiss_seq__V;
            dcmiss = dcmiss_seq__V;
            stmiss = stmiss_seq__V;
            itmiss = itmiss_seq__V;
            dtmiss = dtmiss_seq__V;
            loads = loads_seq__V;
            stores = stores_seq__V;
            cmt = cmt_seq__V;
            cmt_level = cmt_level_seq__V;
            cmt_pc = cmt_pc_seq__V;
            cmt_ir = cmt_ir_seq__V;
            cmt_gpr = cmt_gpr_seq__V;
            cmt_csr = cmt_csr_seq__V;
            cmt_mem = cmt_mem_seq__V;
            del_gprw = del_gprw_seq__V;
            del_gpra = del_gpra_seq__V;
            del_gprv = del_gprv_seq__V;
        end
        else begin
            s_coh_resp = s_coh_resp_combo__V;
            m_coh_rqst = m_coh_rqst_combo__V;
            m_coh_trsc = m_coh_trsc_combo__V;
            m_axi_awid = m_axi_awid_combo__V;
            m_axi_awlen = m_axi_awlen_combo__V;
            m_axi_awsize = m_axi_awsize_combo__V;
            m_axi_awburst = m_axi_awburst_combo__V;
            m_axi_awlock = m_axi_awlock_combo__V;
            m_axi_awcache = m_axi_awcache_combo__V;
            m_axi_awprot = m_axi_awprot_combo__V;
            m_axi_awqos = m_axi_awqos_combo__V;
            m_axi_awvalid = m_axi_awvalid_combo__V;
            m_axi_wstrb = m_axi_wstrb_combo__V;
            m_axi_wlast = m_axi_wlast_combo__V;
            m_axi_wvalid = m_axi_wvalid_combo__V;
            m_axi_bready = m_axi_bready_combo__V;
            m_axi_arid = m_axi_arid_combo__V;
            m_axi_arlen = m_axi_arlen_combo__V;
            m_axi_arsize = m_axi_arsize_combo__V;
            m_axi_arburst = m_axi_arburst_combo__V;
            m_axi_arlock = m_axi_arlock_combo__V;
            m_axi_arcache = m_axi_arcache_combo__V;
            m_axi_arprot = m_axi_arprot_combo__V;
            m_axi_arqos = m_axi_arqos_combo__V;
            m_axi_arvalid = m_axi_arvalid_combo__V;
            m_axi_rready = m_axi_rready_combo__V;
            cmt_mexc = cmt_mexc_combo__V;
            cmt_sexc = cmt_sexc_combo__V;
            cmt_int = cmt_int_combo__V;
            cmt_ret = cmt_ret_combo__V;
            del_csrw = del_csrw_combo__V;
            del_memw = del_memw_combo__V;
            del_csra = del_csra_combo__V;
            m_coh_addr = m_coh_addr_combo__V;
            m_axi_awaddr = m_axi_awaddr_combo__V;
            m_axi_wdata = m_axi_wdata_combo__V;
            m_axi_araddr = m_axi_araddr_combo__V;
            cmt_mstatus = cmt_mstatus_combo__V;
            cmt_misa = cmt_misa_combo__V;
            cmt_mtvec = cmt_mtvec_combo__V;
            cmt_mcause = cmt_mcause_combo__V;
            cmt_mepc = cmt_mepc_combo__V;
            cmt_mtval = cmt_mtval_combo__V;
            cmt_stvec = cmt_stvec_combo__V;
            cmt_scause = cmt_scause_combo__V;
            cmt_sepc = cmt_sepc_combo__V;
            cmt_stval = cmt_stval_combo__V;
            cmt_mip = cmt_mip_combo__V;
            cmt_mcycle = cmt_mcycle_combo__V;
            cmt_minstret = cmt_minstret_combo__V;
            cmt_mtime = cmt_mtime_combo__V;
            del_csrv = del_csrv_combo__V;
            del_mema = del_mema_combo__V;
            del_memv = del_memv_combo__V;
            stallpc = stallpc_combo__V;
            bmisp = bmisp_combo__V;
            fmisp = fmisp_combo__V;
            brmisp = brmisp_combo__V;
            jmisp = jmisp_combo__V;
            jrmisp = jrmisp_combo__V;
            icmiss = icmiss_combo__V;
            dcmiss = dcmiss_combo__V;
            stmiss = stmiss_combo__V;
            itmiss = itmiss_combo__V;
            dtmiss = dtmiss_combo__V;
            loads = loads_combo__V;
            stores = stores_combo__V;
            cmt = cmt_combo__V;
            cmt_level = cmt_level_combo__V;
            cmt_pc = cmt_pc_combo__V;
            cmt_ir = cmt_ir_combo__V;
            cmt_gpr = cmt_gpr_combo__V;
            cmt_csr = cmt_csr_combo__V;
            cmt_mem = cmt_mem_combo__V;
            del_gprw = del_gprw_combo__V;
            del_gpra = del_gpra_combo__V;
            del_gprv = del_gprv_combo__V;
        end
    end
    
    final vcore_protectlib_final(handle__V);
    
endmodule
