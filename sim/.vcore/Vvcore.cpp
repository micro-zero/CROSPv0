// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvcore__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vvcore::Vvcore(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vvcore__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , s_coh_rqst{vlSymsp->TOP.s_coh_rqst}
    , s_coh_trsc{vlSymsp->TOP.s_coh_trsc}
    , s_coh_resp{vlSymsp->TOP.s_coh_resp}
    , m_coh_rqst{vlSymsp->TOP.m_coh_rqst}
    , m_coh_trsc{vlSymsp->TOP.m_coh_trsc}
    , m_coh_resp{vlSymsp->TOP.m_coh_resp}
    , m_axi_awid{vlSymsp->TOP.m_axi_awid}
    , m_axi_awlen{vlSymsp->TOP.m_axi_awlen}
    , m_axi_awsize{vlSymsp->TOP.m_axi_awsize}
    , m_axi_awburst{vlSymsp->TOP.m_axi_awburst}
    , m_axi_awlock{vlSymsp->TOP.m_axi_awlock}
    , m_axi_awcache{vlSymsp->TOP.m_axi_awcache}
    , m_axi_awprot{vlSymsp->TOP.m_axi_awprot}
    , m_axi_awqos{vlSymsp->TOP.m_axi_awqos}
    , m_axi_awvalid{vlSymsp->TOP.m_axi_awvalid}
    , m_axi_awready{vlSymsp->TOP.m_axi_awready}
    , m_axi_wstrb{vlSymsp->TOP.m_axi_wstrb}
    , m_axi_wlast{vlSymsp->TOP.m_axi_wlast}
    , m_axi_wvalid{vlSymsp->TOP.m_axi_wvalid}
    , m_axi_wready{vlSymsp->TOP.m_axi_wready}
    , m_axi_bid{vlSymsp->TOP.m_axi_bid}
    , m_axi_bresp{vlSymsp->TOP.m_axi_bresp}
    , m_axi_bvalid{vlSymsp->TOP.m_axi_bvalid}
    , m_axi_bready{vlSymsp->TOP.m_axi_bready}
    , m_axi_arid{vlSymsp->TOP.m_axi_arid}
    , m_axi_arlen{vlSymsp->TOP.m_axi_arlen}
    , m_axi_arsize{vlSymsp->TOP.m_axi_arsize}
    , m_axi_arburst{vlSymsp->TOP.m_axi_arburst}
    , m_axi_arlock{vlSymsp->TOP.m_axi_arlock}
    , m_axi_arcache{vlSymsp->TOP.m_axi_arcache}
    , m_axi_arprot{vlSymsp->TOP.m_axi_arprot}
    , m_axi_arqos{vlSymsp->TOP.m_axi_arqos}
    , m_axi_arvalid{vlSymsp->TOP.m_axi_arvalid}
    , m_axi_arready{vlSymsp->TOP.m_axi_arready}
    , m_axi_rid{vlSymsp->TOP.m_axi_rid}
    , m_axi_rresp{vlSymsp->TOP.m_axi_rresp}
    , m_axi_rlast{vlSymsp->TOP.m_axi_rlast}
    , m_axi_rvalid{vlSymsp->TOP.m_axi_rvalid}
    , m_axi_rready{vlSymsp->TOP.m_axi_rready}
    , cmt_mexc{vlSymsp->TOP.cmt_mexc}
    , cmt_sexc{vlSymsp->TOP.cmt_sexc}
    , cmt_int{vlSymsp->TOP.cmt_int}
    , cmt_ret{vlSymsp->TOP.cmt_ret}
    , del_csrw{vlSymsp->TOP.del_csrw}
    , del_memw{vlSymsp->TOP.del_memw}
    , del_csra{vlSymsp->TOP.del_csra}
    , mip_ext{vlSymsp->TOP.mip_ext}
    , mtime{vlSymsp->TOP.mtime}
    , s_coh_addr{vlSymsp->TOP.s_coh_addr}
    , m_coh_addr{vlSymsp->TOP.m_coh_addr}
    , m_axi_awaddr{vlSymsp->TOP.m_axi_awaddr}
    , m_axi_wdata{vlSymsp->TOP.m_axi_wdata}
    , m_axi_araddr{vlSymsp->TOP.m_axi_araddr}
    , m_axi_rdata{vlSymsp->TOP.m_axi_rdata}
    , cmt_mstatus{vlSymsp->TOP.cmt_mstatus}
    , cmt_misa{vlSymsp->TOP.cmt_misa}
    , cmt_mtvec{vlSymsp->TOP.cmt_mtvec}
    , cmt_mcause{vlSymsp->TOP.cmt_mcause}
    , cmt_mepc{vlSymsp->TOP.cmt_mepc}
    , cmt_mtval{vlSymsp->TOP.cmt_mtval}
    , cmt_stvec{vlSymsp->TOP.cmt_stvec}
    , cmt_scause{vlSymsp->TOP.cmt_scause}
    , cmt_sepc{vlSymsp->TOP.cmt_sepc}
    , cmt_stval{vlSymsp->TOP.cmt_stval}
    , cmt_mip{vlSymsp->TOP.cmt_mip}
    , cmt_mcycle{vlSymsp->TOP.cmt_mcycle}
    , cmt_minstret{vlSymsp->TOP.cmt_minstret}
    , cmt_mtime{vlSymsp->TOP.cmt_mtime}
    , del_csrv{vlSymsp->TOP.del_csrv}
    , del_mema{vlSymsp->TOP.del_mema}
    , del_memv{vlSymsp->TOP.del_memv}
    , stallpc{vlSymsp->TOP.stallpc}
    , bmisp{vlSymsp->TOP.bmisp}
    , fmisp{vlSymsp->TOP.fmisp}
    , brmisp{vlSymsp->TOP.brmisp}
    , jmisp{vlSymsp->TOP.jmisp}
    , jrmisp{vlSymsp->TOP.jrmisp}
    , icmiss{vlSymsp->TOP.icmiss}
    , dcmiss{vlSymsp->TOP.dcmiss}
    , stmiss{vlSymsp->TOP.stmiss}
    , itmiss{vlSymsp->TOP.itmiss}
    , dtmiss{vlSymsp->TOP.dtmiss}
    , loads{vlSymsp->TOP.loads}
    , stores{vlSymsp->TOP.stores}
    , cmt{vlSymsp->TOP.cmt}
    , cmt_level{vlSymsp->TOP.cmt_level}
    , cmt_pc{vlSymsp->TOP.cmt_pc}
    , cmt_ir{vlSymsp->TOP.cmt_ir}
    , cmt_gpr{vlSymsp->TOP.cmt_gpr}
    , cmt_csr{vlSymsp->TOP.cmt_csr}
    , cmt_mem{vlSymsp->TOP.cmt_mem}
    , del_gprw{vlSymsp->TOP.del_gprw}
    , del_gpra{vlSymsp->TOP.del_gpra}
    , del_gprv{vlSymsp->TOP.del_gprv}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vvcore::Vvcore(const char* _vcname__)
    : Vvcore(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vvcore::~Vvcore() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vvcore___024root___eval_debug_assertions(Vvcore___024root* vlSelf);
#endif  // VL_DEBUG
void Vvcore___024root___eval_static(Vvcore___024root* vlSelf);
void Vvcore___024root___eval_initial(Vvcore___024root* vlSelf);
void Vvcore___024root___eval_settle(Vvcore___024root* vlSelf);
void Vvcore___024root___eval(Vvcore___024root* vlSelf);

void Vvcore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvcore::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvcore___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vvcore___024root___eval_static(&(vlSymsp->TOP));
        Vvcore___024root___eval_initial(&(vlSymsp->TOP));
        Vvcore___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vvcore___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vvcore::eventsPending() { return false; }

uint64_t Vvcore::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vvcore::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vvcore___024root___eval_final(Vvcore___024root* vlSelf);

VL_ATTR_COLD void Vvcore::final() {
    Vvcore___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vvcore::hierName() const { return vlSymsp->name(); }
const char* Vvcore::modelName() const { return "Vvcore"; }
unsigned Vvcore::threads() const { return 1; }
void Vvcore::prepareClone() const { contextp()->prepareClone(); }
void Vvcore::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vvcore::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vvcore___024root__trace_init_top(Vvcore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vvcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvcore___024root*>(voidSelf);
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vvcore___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vvcore___024root__trace_register(Vvcore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vvcore::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vvcore::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vvcore___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

//============================================================
// Model serialization

VerilatedSerialize& operator<<(VerilatedSerialize& os, Vvcore& rhs) {
    Verilated::quiesce();
    rhs.vlSymsp->__Vserialize(os);
    return os;
}

VerilatedDeserialize& operator>>(VerilatedDeserialize& os, Vvcore& rhs) {
    Verilated::quiesce();
    rhs.vlSymsp->__Vdeserialize(os);
    return os;
}
