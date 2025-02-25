// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvcore.h for the primary calling header

#include "Vvcore__pch.h"
#include "Vvcore___024root.h"

void Vvcore___024root___nba_sequent__TOP__0(Vvcore___024root* vlSelf);
void Vvcore___024root___nba_sequent__TOP__1(Vvcore___024root* vlSelf);
void Vvcore___024root___nba_sequent__TOP__2(Vvcore___024root* vlSelf);
void Vvcore___024root___nba_sequent__TOP__3(Vvcore___024root* vlSelf);
void Vvcore___024root___nba_sequent__TOP__4(Vvcore___024root* vlSelf);
void Vvcore___024root___nba_sequent__TOP__5(Vvcore___024root* vlSelf);
void Vvcore___024root___nba_sequent__TOP__6(Vvcore___024root* vlSelf);
void Vvcore___024root___nba_sequent__TOP__7(Vvcore___024root* vlSelf);

void Vvcore___024root___eval_nba(Vvcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vvcore___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vvcore___024root___nba_sequent__TOP__1(vlSelf);
        Vvcore___024root___nba_sequent__TOP__2(vlSelf);
        Vvcore___024root___nba_sequent__TOP__3(vlSelf);
        Vvcore___024root___nba_sequent__TOP__4(vlSelf);
        Vvcore___024root___nba_sequent__TOP__5(vlSelf);
        Vvcore___024root___nba_sequent__TOP__6(vlSelf);
        Vvcore___024root___nba_sequent__TOP__7(vlSelf);
    }
}

void Vvcore___024root___eval_triggers__ico(Vvcore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvcore___024root___dump_triggers__ico(Vvcore___024root* vlSelf);
#endif  // VL_DEBUG
void Vvcore___024root___eval_ico(Vvcore___024root* vlSelf);
void Vvcore___024root___eval_triggers__act(Vvcore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvcore___024root___dump_triggers__act(Vvcore___024root* vlSelf);
#endif  // VL_DEBUG
void Vvcore___024root___eval_act(Vvcore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvcore___024root___dump_triggers__nba(Vvcore___024root* vlSelf);
#endif  // VL_DEBUG

void Vvcore___024root___eval(Vvcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vvcore___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vvcore___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vcore.sv", 21, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vvcore___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vvcore___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vvcore___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vcore.sv", 21, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vvcore___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vvcore___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vcore.sv", 21, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vvcore___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vvcore___024root___eval_debug_assertions(Vvcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->m_axi_awready & 0xfeU))) {
        Verilated::overWidthError("m_axi_awready");}
    if (VL_UNLIKELY((vlSelf->m_axi_wready & 0xfeU))) {
        Verilated::overWidthError("m_axi_wready");}
    if (VL_UNLIKELY((vlSelf->m_axi_bresp & 0xfcU))) {
        Verilated::overWidthError("m_axi_bresp");}
    if (VL_UNLIKELY((vlSelf->m_axi_bvalid & 0xfeU))) {
        Verilated::overWidthError("m_axi_bvalid");}
    if (VL_UNLIKELY((vlSelf->m_axi_arready & 0xfeU))) {
        Verilated::overWidthError("m_axi_arready");}
    if (VL_UNLIKELY((vlSelf->m_axi_rresp & 0xfcU))) {
        Verilated::overWidthError("m_axi_rresp");}
    if (VL_UNLIKELY((vlSelf->m_axi_rlast & 0xfeU))) {
        Verilated::overWidthError("m_axi_rlast");}
    if (VL_UNLIKELY((vlSelf->m_axi_rvalid & 0xfeU))) {
        Verilated::overWidthError("m_axi_rvalid");}
}
#endif  // VL_DEBUG
