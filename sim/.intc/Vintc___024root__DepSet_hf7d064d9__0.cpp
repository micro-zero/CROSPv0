// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vintc.h for the primary calling header

#include "Vintc__pch.h"
#include "Vintc___024root.h"

void Vintc___024root___eval_act(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vintc___024root___nba_sequent__TOP__0(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__s_axi_arready;
    __Vdly__s_axi_arready = 0;
    CData/*0:0*/ __Vdly__s_axi_rvalid;
    __Vdly__s_axi_rvalid = 0;
    CData/*0:0*/ __Vdly__s_axi_bvalid;
    __Vdly__s_axi_bvalid = 0;
    CData/*0:0*/ __Vdly__s_axi_awready;
    __Vdly__s_axi_awready = 0;
    CData/*0:0*/ __Vdly__s_axi_wready;
    __Vdly__s_axi_wready = 0;
    QData/*63:0*/ __Vdly__intc__DOT__timer;
    __Vdly__intc__DOT__timer = 0;
    CData/*0:0*/ __Vdly__intc__DOT__msip;
    __Vdly__intc__DOT__msip = 0;
    QData/*63:0*/ __Vdly__intc__DOT__mtimecmp;
    __Vdly__intc__DOT__mtimecmp = 0;
    QData/*63:0*/ __Vdly__intc__DOT__mtime;
    __Vdly__intc__DOT__mtime = 0;
    // Body
    __Vdly__intc__DOT__timer = vlSelf->intc__DOT__timer;
    __Vdly__s_axi_wready = vlSelf->s_axi_wready;
    __Vdly__s_axi_awready = vlSelf->s_axi_awready;
    __Vdly__s_axi_bvalid = vlSelf->s_axi_bvalid;
    __Vdly__s_axi_rvalid = vlSelf->s_axi_rvalid;
    __Vdly__s_axi_arready = vlSelf->s_axi_arready;
    __Vdly__intc__DOT__mtimecmp = vlSelf->intc__DOT__mtimecmp;
    __Vdly__intc__DOT__msip = vlSelf->intc__DOT__msip;
    __Vdly__intc__DOT__mtime = vlSelf->intc__DOT__mtime;
    if (vlSelf->rst) {
        __Vdly__s_axi_arready = 1U;
        __Vdly__s_axi_rvalid = 0U;
        __Vdly__s_axi_bvalid = 0U;
        __Vdly__s_axi_awready = 1U;
        __Vdly__s_axi_wready = 1U;
        __Vdly__intc__DOT__timer = 0ULL;
        __Vdly__intc__DOT__msip = 0U;
        __Vdly__intc__DOT__mtimecmp = 0xffffffffffffffffULL;
        __Vdly__intc__DOT__mtime = 0ULL;
    } else {
        if ((1ULL <= vlSelf->intc__DOT__timer)) {
            __Vdly__intc__DOT__mtime = (1ULL + vlSelf->intc__DOT__mtime);
            __Vdly__intc__DOT__timer = 0ULL;
        } else {
            __Vdly__intc__DOT__timer = (1ULL + vlSelf->intc__DOT__timer);
        }
        if (((IData)(vlSelf->s_axi_arvalid) & (IData)(vlSelf->s_axi_arready))) {
            __Vdly__s_axi_arready = 0U;
            __Vdly__s_axi_rvalid = 1U;
            if ((0x2000000ULL == vlSelf->s_axi_araddr)) {
                vlSelf->s_axi_rdata = (QData)((IData)(vlSelf->intc__DOT__msip));
            } else if ((0x2004000ULL == vlSelf->s_axi_araddr)) {
                vlSelf->s_axi_rdata = vlSelf->intc__DOT__mtimecmp;
            } else if ((0x200bff8ULL == vlSelf->s_axi_araddr)) {
                vlSelf->s_axi_rdata = vlSelf->intc__DOT__mtime;
            }
        }
        if ((1U & ((~ (IData)(vlSelf->s_axi_awready)) 
                   & (~ (IData)(vlSelf->s_axi_wready))))) {
            __Vdly__s_axi_bvalid = 1U;
            if ((0x2000000ULL == vlSelf->intc__DOT__waddr)) {
                __Vdly__intc__DOT__msip = (1U & (IData)(vlSelf->intc__DOT__wdata));
            } else if ((0x2004000ULL == vlSelf->intc__DOT__waddr)) {
                __Vdly__intc__DOT__mtimecmp = vlSelf->intc__DOT__wdata;
            } else if ((0x200bff8ULL == vlSelf->intc__DOT__waddr)) {
                __Vdly__intc__DOT__mtime = vlSelf->intc__DOT__wdata;
            }
        }
        if (((IData)(vlSelf->s_axi_rvalid) & (IData)(vlSelf->s_axi_rready))) {
            __Vdly__s_axi_rvalid = 0U;
            __Vdly__s_axi_arready = 1U;
        }
        if (((IData)(vlSelf->s_axi_bvalid) & (IData)(vlSelf->s_axi_bready))) {
            __Vdly__s_axi_bvalid = 0U;
            __Vdly__s_axi_awready = 1U;
            __Vdly__s_axi_wready = 1U;
        }
        if (((IData)(vlSelf->s_axi_awvalid) & (IData)(vlSelf->s_axi_awready))) {
            __Vdly__s_axi_awready = 0U;
            vlSelf->intc__DOT__waddr = vlSelf->s_axi_awaddr;
        }
        if (((IData)(vlSelf->s_axi_wvalid) & (IData)(vlSelf->s_axi_wready))) {
            __Vdly__s_axi_wready = 0U;
            vlSelf->intc__DOT__wdata = vlSelf->s_axi_wdata;
        }
    }
    vlSelf->s_axi_arready = __Vdly__s_axi_arready;
    vlSelf->s_axi_rvalid = __Vdly__s_axi_rvalid;
    vlSelf->s_axi_bvalid = __Vdly__s_axi_bvalid;
    vlSelf->s_axi_awready = __Vdly__s_axi_awready;
    vlSelf->s_axi_wready = __Vdly__s_axi_wready;
    vlSelf->intc__DOT__timer = __Vdly__intc__DOT__timer;
    vlSelf->intc__DOT__msip = __Vdly__intc__DOT__msip;
    vlSelf->intc__DOT__mtimecmp = __Vdly__intc__DOT__mtimecmp;
    vlSelf->intc__DOT__mtime = __Vdly__intc__DOT__mtime;
    vlSelf->int_time = vlSelf->intc__DOT__mtime;
    vlSelf->int_pend = 0ULL;
    vlSelf->int_pend = ((0xfffffffffffffff7ULL & vlSelf->int_pend) 
                        | ((QData)((IData)(vlSelf->intc__DOT__msip)) 
                           << 3U));
    vlSelf->int_pend = ((0xffffffffffffff7fULL & vlSelf->int_pend) 
                        | ((QData)((IData)((vlSelf->intc__DOT__mtime 
                                            > vlSelf->intc__DOT__mtimecmp))) 
                           << 7U));
}

void Vintc___024root___eval_nba(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vintc___024root___eval_triggers__act(Vintc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vintc___024root___dump_triggers__act(Vintc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vintc___024root___dump_triggers__nba(Vintc___024root* vlSelf);
#endif  // VL_DEBUG

void Vintc___024root___eval(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vintc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vintc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../src/soc/intc.sv", 7, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vintc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vintc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../src/soc/intc.sv", 7, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vintc___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vintc___024root___eval_debug_assertions(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->s_axi_awsize & 0xf8U))) {
        Verilated::overWidthError("s_axi_awsize");}
    if (VL_UNLIKELY((vlSelf->s_axi_awburst & 0xfcU))) {
        Verilated::overWidthError("s_axi_awburst");}
    if (VL_UNLIKELY((vlSelf->s_axi_awlock & 0xfeU))) {
        Verilated::overWidthError("s_axi_awlock");}
    if (VL_UNLIKELY((vlSelf->s_axi_awcache & 0xf0U))) {
        Verilated::overWidthError("s_axi_awcache");}
    if (VL_UNLIKELY((vlSelf->s_axi_awprot & 0xf8U))) {
        Verilated::overWidthError("s_axi_awprot");}
    if (VL_UNLIKELY((vlSelf->s_axi_awregion & 0xf0U))) {
        Verilated::overWidthError("s_axi_awregion");}
    if (VL_UNLIKELY((vlSelf->s_axi_awqos & 0xf0U))) {
        Verilated::overWidthError("s_axi_awqos");}
    if (VL_UNLIKELY((vlSelf->s_axi_awvalid & 0xfeU))) {
        Verilated::overWidthError("s_axi_awvalid");}
    if (VL_UNLIKELY((vlSelf->s_axi_wlast & 0xfeU))) {
        Verilated::overWidthError("s_axi_wlast");}
    if (VL_UNLIKELY((vlSelf->s_axi_wvalid & 0xfeU))) {
        Verilated::overWidthError("s_axi_wvalid");}
    if (VL_UNLIKELY((vlSelf->s_axi_bready & 0xfeU))) {
        Verilated::overWidthError("s_axi_bready");}
    if (VL_UNLIKELY((vlSelf->s_axi_arsize & 0xf8U))) {
        Verilated::overWidthError("s_axi_arsize");}
    if (VL_UNLIKELY((vlSelf->s_axi_arburst & 0xfcU))) {
        Verilated::overWidthError("s_axi_arburst");}
    if (VL_UNLIKELY((vlSelf->s_axi_arlock & 0xfeU))) {
        Verilated::overWidthError("s_axi_arlock");}
    if (VL_UNLIKELY((vlSelf->s_axi_arcache & 0xf0U))) {
        Verilated::overWidthError("s_axi_arcache");}
    if (VL_UNLIKELY((vlSelf->s_axi_arprot & 0xf8U))) {
        Verilated::overWidthError("s_axi_arprot");}
    if (VL_UNLIKELY((vlSelf->s_axi_arregion & 0xf0U))) {
        Verilated::overWidthError("s_axi_arregion");}
    if (VL_UNLIKELY((vlSelf->s_axi_arqos & 0xf0U))) {
        Verilated::overWidthError("s_axi_arqos");}
    if (VL_UNLIKELY((vlSelf->s_axi_arvalid & 0xfeU))) {
        Verilated::overWidthError("s_axi_arvalid");}
    if (VL_UNLIKELY((vlSelf->s_axi_rready & 0xfeU))) {
        Verilated::overWidthError("s_axi_rready");}
}
#endif  // VL_DEBUG
