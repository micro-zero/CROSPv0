// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VVCORE_H_
#define VERILATED_VVCORE_H_  // guard

#include "verilated.h"
#include "verilated_save.h"

class Vvcore__Syms;
class Vvcore___024root;
class VerilatedVcdC;
class Vvcore___024unit;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vvcore VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vvcore__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_IN8(&s_coh_rqst,7,0);
    VL_IN8(&s_coh_trsc,7,0);
    VL_OUT8(&s_coh_resp,7,0);
    VL_OUT8(&m_coh_rqst,7,0);
    VL_OUT8(&m_coh_trsc,7,0);
    VL_IN8(&m_coh_resp,7,0);
    VL_OUT8(&m_axi_awid,7,0);
    VL_OUT8(&m_axi_awlen,7,0);
    VL_OUT8(&m_axi_awsize,2,0);
    VL_OUT8(&m_axi_awburst,1,0);
    VL_OUT8(&m_axi_awlock,0,0);
    VL_OUT8(&m_axi_awcache,3,0);
    VL_OUT8(&m_axi_awprot,2,0);
    VL_OUT8(&m_axi_awqos,3,0);
    VL_OUT8(&m_axi_awvalid,0,0);
    VL_IN8(&m_axi_awready,0,0);
    VL_OUT8(&m_axi_wstrb,7,0);
    VL_OUT8(&m_axi_wlast,0,0);
    VL_OUT8(&m_axi_wvalid,0,0);
    VL_IN8(&m_axi_wready,0,0);
    VL_IN8(&m_axi_bid,7,0);
    VL_IN8(&m_axi_bresp,1,0);
    VL_IN8(&m_axi_bvalid,0,0);
    VL_OUT8(&m_axi_bready,0,0);
    VL_OUT8(&m_axi_arid,7,0);
    VL_OUT8(&m_axi_arlen,7,0);
    VL_OUT8(&m_axi_arsize,2,0);
    VL_OUT8(&m_axi_arburst,1,0);
    VL_OUT8(&m_axi_arlock,0,0);
    VL_OUT8(&m_axi_arcache,3,0);
    VL_OUT8(&m_axi_arprot,2,0);
    VL_OUT8(&m_axi_arqos,3,0);
    VL_OUT8(&m_axi_arvalid,0,0);
    VL_IN8(&m_axi_arready,0,0);
    VL_IN8(&m_axi_rid,7,0);
    VL_IN8(&m_axi_rresp,1,0);
    VL_IN8(&m_axi_rlast,0,0);
    VL_IN8(&m_axi_rvalid,0,0);
    VL_OUT8(&m_axi_rready,0,0);
    VL_OUT8(&cmt_mexc,0,0);
    VL_OUT8(&cmt_sexc,0,0);
    VL_OUT8(&cmt_int,0,0);
    VL_OUT8(&cmt_ret,0,0);
    VL_OUT8(&del_csrw,0,0);
    VL_OUT8(&del_memw,7,0);
    VL_OUT16(&del_csra,11,0);
    VL_IN64(&mip_ext,63,0);
    VL_IN64(&mtime,63,0);
    VL_IN64(&s_coh_addr,63,0);
    VL_OUT64(&m_coh_addr,63,0);
    VL_OUT64(&m_axi_awaddr,63,0);
    VL_OUT64(&m_axi_wdata,63,0);
    VL_OUT64(&m_axi_araddr,63,0);
    VL_IN64(&m_axi_rdata,63,0);
    VL_OUT64(&cmt_mstatus,63,0);
    VL_OUT64(&cmt_misa,63,0);
    VL_OUT64(&cmt_mtvec,63,0);
    VL_OUT64(&cmt_mcause,63,0);
    VL_OUT64(&cmt_mepc,63,0);
    VL_OUT64(&cmt_mtval,63,0);
    VL_OUT64(&cmt_stvec,63,0);
    VL_OUT64(&cmt_scause,63,0);
    VL_OUT64(&cmt_sepc,63,0);
    VL_OUT64(&cmt_stval,63,0);
    VL_OUT64(&cmt_mip,63,0);
    VL_OUT64(&cmt_mcycle,63,0);
    VL_OUT64(&cmt_minstret,63,0);
    VL_OUT64(&cmt_mtime,63,0);
    VL_OUT64(&del_csrv,63,0);
    VL_OUT64(&del_mema,63,0);
    VL_OUT64(&del_memv,63,0);
    VL_OUT64(&stallpc,63,0);
    VL_OUT64(&bmisp,63,0);
    VL_OUT64(&fmisp,63,0);
    VL_OUT64(&brmisp,63,0);
    VL_OUT64(&jmisp,63,0);
    VL_OUT64(&jrmisp,63,0);
    VL_OUT64(&icmiss,63,0);
    VL_OUT64(&dcmiss,63,0);
    VL_OUT64(&stmiss,63,0);
    VL_OUT64(&itmiss,63,0);
    VL_OUT64(&dtmiss,63,0);
    VL_OUT64(&loads,63,0);
    VL_OUT64(&stores,63,0);
    VL_OUT8((&cmt)[4],0,0);
    VL_OUT8((&cmt_level)[4],1,0);
    VL_OUT64((&cmt_pc)[4],63,0);
    VL_OUT((&cmt_ir)[4],31,0);
    VL_OUT8((&cmt_gpr)[4],0,0);
    VL_OUT8((&cmt_csr)[4],0,0);
    VL_OUT8((&cmt_mem)[4],0,0);
    VL_OUT8((&del_gprw)[4],0,0);
    VL_OUT8((&del_gpra)[4],5,0);
    VL_OUT64((&del_gprv)[4],63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vvcore___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vvcore___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vvcore(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vvcore(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vvcore();
  private:
    VL_UNCOPYABLE(Vvcore);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Serialization functions
    friend VerilatedSerialize& operator<<(VerilatedSerialize& os, Vvcore& rhs);
    friend VerilatedDeserialize& operator>>(VerilatedDeserialize& os, Vvcore& rhs);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
