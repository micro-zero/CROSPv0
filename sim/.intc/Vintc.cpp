// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vintc__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vintc::Vintc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vintc__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , s_axi_awid{vlSymsp->TOP.s_axi_awid}
    , s_axi_awlen{vlSymsp->TOP.s_axi_awlen}
    , s_axi_awsize{vlSymsp->TOP.s_axi_awsize}
    , s_axi_awburst{vlSymsp->TOP.s_axi_awburst}
    , s_axi_awlock{vlSymsp->TOP.s_axi_awlock}
    , s_axi_awcache{vlSymsp->TOP.s_axi_awcache}
    , s_axi_awprot{vlSymsp->TOP.s_axi_awprot}
    , s_axi_awregion{vlSymsp->TOP.s_axi_awregion}
    , s_axi_awqos{vlSymsp->TOP.s_axi_awqos}
    , s_axi_awvalid{vlSymsp->TOP.s_axi_awvalid}
    , s_axi_awready{vlSymsp->TOP.s_axi_awready}
    , s_axi_wstrb{vlSymsp->TOP.s_axi_wstrb}
    , s_axi_wlast{vlSymsp->TOP.s_axi_wlast}
    , s_axi_wvalid{vlSymsp->TOP.s_axi_wvalid}
    , s_axi_wready{vlSymsp->TOP.s_axi_wready}
    , s_axi_bid{vlSymsp->TOP.s_axi_bid}
    , s_axi_bresp{vlSymsp->TOP.s_axi_bresp}
    , s_axi_bvalid{vlSymsp->TOP.s_axi_bvalid}
    , s_axi_bready{vlSymsp->TOP.s_axi_bready}
    , s_axi_arid{vlSymsp->TOP.s_axi_arid}
    , s_axi_arlen{vlSymsp->TOP.s_axi_arlen}
    , s_axi_arsize{vlSymsp->TOP.s_axi_arsize}
    , s_axi_arburst{vlSymsp->TOP.s_axi_arburst}
    , s_axi_arlock{vlSymsp->TOP.s_axi_arlock}
    , s_axi_arcache{vlSymsp->TOP.s_axi_arcache}
    , s_axi_arprot{vlSymsp->TOP.s_axi_arprot}
    , s_axi_arregion{vlSymsp->TOP.s_axi_arregion}
    , s_axi_arqos{vlSymsp->TOP.s_axi_arqos}
    , s_axi_arvalid{vlSymsp->TOP.s_axi_arvalid}
    , s_axi_arready{vlSymsp->TOP.s_axi_arready}
    , s_axi_rid{vlSymsp->TOP.s_axi_rid}
    , s_axi_rresp{vlSymsp->TOP.s_axi_rresp}
    , s_axi_rlast{vlSymsp->TOP.s_axi_rlast}
    , s_axi_rvalid{vlSymsp->TOP.s_axi_rvalid}
    , s_axi_rready{vlSymsp->TOP.s_axi_rready}
    , int_pend{vlSymsp->TOP.int_pend}
    , int_time{vlSymsp->TOP.int_time}
    , s_axi_awaddr{vlSymsp->TOP.s_axi_awaddr}
    , s_axi_wdata{vlSymsp->TOP.s_axi_wdata}
    , s_axi_araddr{vlSymsp->TOP.s_axi_araddr}
    , s_axi_rdata{vlSymsp->TOP.s_axi_rdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vintc::Vintc(const char* _vcname__)
    : Vintc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vintc::~Vintc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vintc___024root___eval_debug_assertions(Vintc___024root* vlSelf);
#endif  // VL_DEBUG
void Vintc___024root___eval_static(Vintc___024root* vlSelf);
void Vintc___024root___eval_initial(Vintc___024root* vlSelf);
void Vintc___024root___eval_settle(Vintc___024root* vlSelf);
void Vintc___024root___eval(Vintc___024root* vlSelf);

void Vintc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vintc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vintc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vintc___024root___eval_static(&(vlSymsp->TOP));
        Vintc___024root___eval_initial(&(vlSymsp->TOP));
        Vintc___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vintc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vintc::eventsPending() { return false; }

uint64_t Vintc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vintc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vintc___024root___eval_final(Vintc___024root* vlSelf);

VL_ATTR_COLD void Vintc::final() {
    Vintc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vintc::hierName() const { return vlSymsp->name(); }
const char* Vintc::modelName() const { return "Vintc"; }
unsigned Vintc::threads() const { return 1; }
void Vintc::prepareClone() const { contextp()->prepareClone(); }
void Vintc::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vintc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vintc___024root__trace_init_top(Vintc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vintc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintc___024root*>(voidSelf);
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vintc___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vintc___024root__trace_register(Vintc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vintc::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vintc::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vintc___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

//============================================================
// Model serialization

VerilatedSerialize& operator<<(VerilatedSerialize& os, Vintc& rhs) {
    Verilated::quiesce();
    rhs.vlSymsp->__Vserialize(os);
    return os;
}

VerilatedDeserialize& operator>>(VerilatedDeserialize& os, Vintc& rhs) {
    Verilated::quiesce();
    rhs.vlSymsp->__Vdeserialize(os);
    return os;
}
