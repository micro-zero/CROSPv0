// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vintc.h for the primary calling header

#include "Vintc__pch.h"
#include "Vintc___024root.h"

VL_ATTR_COLD void Vintc___024root___eval_static(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vintc___024root___eval_initial__TOP(Vintc___024root* vlSelf);

VL_ATTR_COLD void Vintc___024root___eval_initial(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___eval_initial\n"); );
    // Body
    Vintc___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vintc___024root___eval_initial__TOP(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->s_axi_bid = 0U;
    vlSelf->s_axi_bresp = 0U;
    vlSelf->s_axi_rid = 0U;
    vlSelf->s_axi_rresp = 0U;
    vlSelf->s_axi_rlast = 1U;
}

VL_ATTR_COLD void Vintc___024root___eval_final(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vintc___024root___eval_triggers__stl(Vintc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vintc___024root___dump_triggers__stl(Vintc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vintc___024root___eval_stl(Vintc___024root* vlSelf);

VL_ATTR_COLD void Vintc___024root___eval_settle(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vintc___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vintc___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../src/soc/intc.sv", 7, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vintc___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vintc___024root___dump_triggers__stl(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vintc___024root___stl_sequent__TOP__0(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___stl_sequent__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void Vintc___024root___eval_stl(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vintc___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vintc___024root___dump_triggers__act(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vintc___024root___dump_triggers__nba(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vintc___024root___ctor_var_reset(Vintc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->int_pend = VL_RAND_RESET_Q(64);
    vlSelf->int_time = VL_RAND_RESET_Q(64);
    vlSelf->s_axi_awid = VL_RAND_RESET_I(8);
    vlSelf->s_axi_awaddr = VL_RAND_RESET_Q(64);
    vlSelf->s_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->s_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->s_axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->s_axi_awlock = VL_RAND_RESET_I(1);
    vlSelf->s_axi_awcache = VL_RAND_RESET_I(4);
    vlSelf->s_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->s_axi_awregion = VL_RAND_RESET_I(4);
    vlSelf->s_axi_awqos = VL_RAND_RESET_I(4);
    vlSelf->s_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_awready = VL_RAND_RESET_I(1);
    vlSelf->s_axi_wdata = VL_RAND_RESET_Q(64);
    vlSelf->s_axi_wstrb = VL_RAND_RESET_I(8);
    vlSelf->s_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->s_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_wready = VL_RAND_RESET_I(1);
    vlSelf->s_axi_bid = VL_RAND_RESET_I(8);
    vlSelf->s_axi_bresp = VL_RAND_RESET_I(2);
    vlSelf->s_axi_bvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->s_axi_arid = VL_RAND_RESET_I(8);
    vlSelf->s_axi_araddr = VL_RAND_RESET_Q(64);
    vlSelf->s_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->s_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->s_axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->s_axi_arlock = VL_RAND_RESET_I(1);
    vlSelf->s_axi_arcache = VL_RAND_RESET_I(4);
    vlSelf->s_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->s_axi_arregion = VL_RAND_RESET_I(4);
    vlSelf->s_axi_arqos = VL_RAND_RESET_I(4);
    vlSelf->s_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_arready = VL_RAND_RESET_I(1);
    vlSelf->s_axi_rid = VL_RAND_RESET_I(8);
    vlSelf->s_axi_rdata = VL_RAND_RESET_Q(64);
    vlSelf->s_axi_rresp = VL_RAND_RESET_I(2);
    vlSelf->s_axi_rlast = VL_RAND_RESET_I(1);
    vlSelf->s_axi_rvalid = VL_RAND_RESET_I(1);
    vlSelf->s_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->intc__DOT__msip = VL_RAND_RESET_I(1);
    vlSelf->intc__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->intc__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->intc__DOT__timer = VL_RAND_RESET_Q(64);
    vlSelf->intc__DOT__waddr = VL_RAND_RESET_Q(64);
    vlSelf->intc__DOT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
