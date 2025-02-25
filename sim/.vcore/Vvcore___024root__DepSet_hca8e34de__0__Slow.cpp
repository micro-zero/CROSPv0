// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvcore.h for the primary calling header

#include "Vvcore__pch.h"
#include "Vvcore___024root.h"

VL_ATTR_COLD void Vvcore___024root___eval_static(Vvcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vvcore___024root___eval_initial__TOP(Vvcore___024root* vlSelf);

VL_ATTR_COLD void Vvcore___024root___eval_initial(Vvcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root___eval_initial\n"); );
    // Body
    Vvcore___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vvcore___024root___eval_initial__TOP(Vvcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__pcg_inst__DOT__unnamedblk4__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1000U, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__pcg_inst__DOT__unnamedblk4__DOT__i)) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__pcg_inst__DOT__pht[(0xfffU 
                                                                         & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__pcg_inst__DOT__unnamedblk4__DOT__i)] = 0U;
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__pcg_inst__DOT__unnamedblk4__DOT__i 
            = ((IData)(1U) + vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__pcg_inst__DOT__unnamedblk4__DOT__i);
    }
    vlSelf->m_axi_awid = 0U;
    vlSelf->m_axi_awsize = 3U;
    vlSelf->m_axi_awburst = 1U;
    vlSelf->m_axi_awlock = 0U;
    vlSelf->m_axi_awcache = 0U;
    vlSelf->m_axi_awprot = 0U;
    vlSelf->m_axi_awqos = 0U;
    vlSelf->m_axi_arid = 0U;
    vlSelf->m_axi_arsize = 3U;
    vlSelf->m_axi_arburst = 1U;
    vlSelf->m_axi_arlock = 0U;
    vlSelf->m_axi_arcache = 0U;
    vlSelf->m_axi_arprot = 0U;
    vlSelf->m_axi_arqos = 0U;
}

VL_ATTR_COLD void Vvcore___024root___eval_final(Vvcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vvcore___024root___eval_triggers__stl(Vvcore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvcore___024root___dump_triggers__stl(Vvcore___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vvcore___024root___eval_stl(Vvcore___024root* vlSelf);

VL_ATTR_COLD void Vvcore___024root___eval_settle(Vvcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vvcore___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vvcore___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vcore.sv", 21, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vvcore___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvcore___024root___dump_triggers__stl(Vvcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvcore___024root___stl_sequent__TOP__2(Vvcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root___stl_sequent__TOP__2\n"); );
    // Init
    CData/*5:0*/ vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT____Vlvbound_h9cab34c8__0;
    vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT____Vlvbound_h9cab34c8__0 = 0;
    CData/*7:0*/ vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hfda717e4__0;
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hfda717e4__0 = 0;
    CData/*0:0*/ vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3af50a00__0;
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3af50a00__0 = 0;
    IData/*31:0*/ vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0;
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0 = 0;
    CData/*0:0*/ vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0;
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0 = 0;
    CData/*0:0*/ vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h334c0db5__0;
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h334c0db5__0 = 0;
    QData/*63:0*/ vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0;
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 = 0;
    CData/*1:0*/ vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h1e5aa469__0;
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h1e5aa469__0 = 0;
    IData/*31:0*/ vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h5011a869__0;
    vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h5011a869__0 = 0;
    CData/*2:0*/ vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_hd062b32e__0;
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_hd062b32e__0 = 0;
    CData/*2:0*/ vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h8fa3d737__0;
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h8fa3d737__0 = 0;
    CData/*2:0*/ vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_ha1ff9e03__0;
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_ha1ff9e03__0 = 0;
    CData/*2:0*/ vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_hc698b519__0;
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_hc698b519__0 = 0;
    CData/*2:0*/ vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h1b836c55__0;
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h1b836c55__0 = 0;
    CData/*2:0*/ vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h980a4816__0;
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h980a4816__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_339;
    VlWide<5>/*159:0*/ __Vtemp_340;
    VlWide<3>/*95:0*/ __Vtemp_368;
    VlWide<5>/*159:0*/ __Vtemp_369;
    VlWide<3>/*95:0*/ __Vtemp_389;
    VlWide<5>/*159:0*/ __Vtemp_390;
    VlWide<3>/*95:0*/ __Vtemp_418;
    VlWide<5>/*159:0*/ __Vtemp_419;
    VlWide<3>/*95:0*/ __Vtemp_439;
    VlWide<5>/*159:0*/ __Vtemp_440;
    // Body
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
        = ((3U == (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))
            ? vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir
            : ((0x8000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                ? ((0x4000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                    ? ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? 0U : (0x13023U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? (0x1063U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x1cU) 
                                              | ((0xc000000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                        << 0x17U)) 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU) 
                                                       | ((0xc00U 
                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir) 
                                                          | ((0x300U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                 << 5U)) 
                                                             | (0x80U 
                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                   >> 5U)))))))))
                                : (0x3023U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? 0U : (0x12023U | 
                                        (((0xc000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xe00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? (0x63U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                            >> 0xcU)))) 
                                             << 0x1cU) 
                                            | ((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                      << 0x17U)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                >> 7U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                           >> 7U)))))))
                                                        : 0U) 
                                                      << 0xfU) 
                                                     | ((0xc00U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir) 
                                                        | ((0x300U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                               << 5U)) 
                                                           | (0x80U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                 >> 5U)))))))))
                                : (0x2023U | (((0x4000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | ((0xc00U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir) 
                                                 | (0x200U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                       << 3U))))))))
                    : ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? 0U : (0x13027U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? (0x6fU | ((0x80000000U 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                << 0x13U)) 
                                            | ((0x40000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x16U)) 
                                               | ((0x30000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                      << 0x13U)) 
                                                  | ((0x8000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                         << 0x15U)) 
                                                     | ((0x4000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                            << 0x13U)) 
                                                        | ((0x2000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                               << 0x17U)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  << 0xdU)) 
                                                              | ((0xe00000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     << 0x12U)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                        << 8U)) 
                                                                    | (0xff000U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 0xcU)))) 
                                                                          << 0xcU))))))))))))
                                : (0x3027U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                >> 2U)))))
                                                        ? 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (0x7b9ac5a928ULL 
                                                                   >> 
                                                                   (0x3fU 
                                                                    & ((IData)(5U) 
                                                                       * 
                                                                       (7U 
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 7U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? 0U : ((0x1000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                         ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0x100073U
                                                 : 
                                                (0xe7U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | ((0xf8000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 8U)) 
                                                      | (0xf80U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)))))
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0U
                                                 : 
                                                (0x67U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | (0xf80U 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                ? ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                    ? ((0x400U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                        ? ((0x1000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                            ? ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                ? 0U
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                    ? 
                                                   (0x3bU 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x4000003bU 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))))
                                            : ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                    ? 
                                                   (0x7033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x6033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                    ? 
                                                   (0x4033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))
                                                    : 
                                                   (0x40000033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  >> 2U)))))
                                                          ? 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (0x7b9ac5a928ULL 
                                                                     >> 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     >> 7U)))))
                                                             ? 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (0x7b9ac5a928ULL 
                                                                        >> 
                                                                        (0x3fU 
                                                                         & ((IData)(5U) 
                                                                            * 
                                                                            (7U 
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))))
                                        : (0x7013U 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x19U) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                     << 0x12U)) 
                                                 | ((((0x27U 
                                                       >= 
                                                       (0x3fU 
                                                        & ((IData)(5U) 
                                                           * 
                                                           (7U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                               >> 7U)))))
                                                       ? 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (0x7b9ac5a928ULL 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & ((IData)(5U) 
                                                                      * 
                                                                      (7U 
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                          >> 7U)))))))
                                                       : 0U) 
                                                     << 0xfU) 
                                                    | (((0x27U 
                                                         >= 
                                                         (0x3fU 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                 >> 7U)))))
                                                         ? 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (0x7b9ac5a928ULL 
                                                                    >> 
                                                                    (0x3fU 
                                                                     & ((IData)(5U) 
                                                                        * 
                                                                        (7U 
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                            >> 7U)))))))
                                                         : 0U) 
                                                       << 7U))))))
                                    : (0x5013U | ((0xc0000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                      << 0x14U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                         << 0xdU)) 
                                                     | ((0x1f00000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                            << 0x12U)) 
                                                        | ((((0x27U 
                                                              >= 
                                                              (0x3fU 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                      >> 7U)))))
                                                              ? 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (0x7b9ac5a928ULL 
                                                                         >> 
                                                                         (0x3fU 
                                                                          & ((IData)(5U) 
                                                                             * 
                                                                             (7U 
                                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                              : 0U) 
                                                            << 0xfU) 
                                                           | (((0x27U 
                                                                >= 
                                                                (0x3fU 
                                                                 & ((IData)(5U) 
                                                                    * 
                                                                    (7U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                        >> 7U)))))
                                                                ? 
                                                               (0x1fU 
                                                                & (IData)(
                                                                          (0x7b9ac5a928ULL 
                                                                           >> 
                                                                           (0x3fU 
                                                                            & ((IData)(5U) 
                                                                               * 
                                                                               (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                : 0U) 
                                                              << 7U)))))))
                                : 0U)))) : ((0x4000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                             ? ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13003U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                         >> 7U)))
                                                     ? 
                                                    (0x10113U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x1dU) 
                                                        | ((0x18000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                               << 0x18U)) 
                                                           | ((0x4000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                  << 0x15U)) 
                                                              | ((0x2000000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                     << 0x17U)) 
                                                                 | (0x1000000U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       << 0x12U)))))))
                                                     : 
                                                    (0x37U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x11U) 
                                                        | ((0x1f000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                               << 0xaU)) 
                                                           | (0xf80U 
                                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))))
                                                   : 
                                                  (0x3003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                         >> 2U)))))
                                                                 ? 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (0x7b9ac5a928ULL 
                                                                            >> 
                                                                            (0x3fU 
                                                                             & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x12003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1c00000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | (0xf80U 
                                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))
                                                   : 
                                                  (0x2003U 
                                                   | ((0x4000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                << 0x10U)) 
                                                            | ((((0x27U 
                                                                  >= 
                                                                  (0x3fU 
                                                                   & ((IData)(5U) 
                                                                      * 
                                                                      (7U 
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                          >> 7U)))))
                                                                  ? 
                                                                 (0x1fU 
                                                                  & (IData)(
                                                                            (0x7b9ac5a928ULL 
                                                                             >> 
                                                                             (0x3fU 
                                                                              & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                  : 0U) 
                                                                << 0xfU) 
                                                               | (((0x27U 
                                                                    >= 
                                                                    (0x3fU 
                                                                     & ((IData)(5U) 
                                                                        * 
                                                                        (7U 
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                            >> 2U)))))
                                                                    ? 
                                                                   (0x1fU 
                                                                    & (IData)(
                                                                              (0x7b9ac5a928ULL 
                                                                               >> 
                                                                               (0x3fU 
                                                                                & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                    : 0U) 
                                                                  << 7U)))))))))
                                             : ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13007U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 
                                                  (0x1bU 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)))))
                                                   : 
                                                  (0x3007U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                       >> 7U)))))
                                                               ? 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (0x7b9ac5a928ULL 
                                                                          >> 
                                                                          (0x3fU 
                                                                           & ((IData)(5U) 
                                                                              * 
                                                                              (7U 
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                         >> 2U)))))
                                                                 ? 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (0x7b9ac5a928ULL 
                                                                            >> 
                                                                            (0x3fU 
                                                                             & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   (0x1013U 
                                                    | (((0x2000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                            << 0xdU)) 
                                                        | (0x1f00000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                              << 0x12U))) 
                                                       | ((0xf8000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                              << 8U)) 
                                                          | (0xf80U 
                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir)))))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                        >> 5U)))
                                                    ? 0U
                                                    : 
                                                   (0x10013U 
                                                    | ((0x3c000000U 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                           << 0x13U)) 
                                                       | ((0x3000000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                              << 0xdU)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                 << 0x12U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                    << 0x10U)) 
                                                                | (((0x27U 
                                                                     >= 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                             >> 2U)))))
                                                                     ? 
                                                                    (0x1fU 
                                                                     & (IData)(
                                                                               (0x7b9ac5a928ULL 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & ((IData)(5U) 
                                                                                * 
                                                                                (7U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                     : 0U) 
                                                                   << 7U)))))))))))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_ready 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_rqst_b)))) 
                 | ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_rqst_b) 
                    == (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_resp_m))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_pend_bits 
        = ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_valid) 
           & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_ready)));
    if (((~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_miss)))) 
         & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rqst
            [0U] == (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_resp_m)))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_pend_bits 
            = (2U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_pend_bits));
    }
    if (((~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_miss)))) 
         & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rqst
            [1U] == (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_resp_m)))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_pend_bits 
            = (1U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_pend_bits));
    }
    vlSelf->del_mema = (((QData)((IData)(vlSelf->vcore__DOT__st_addr[
                                         (((IData)(0x3fU) 
                                           + (0x1ffU 
                                              & VL_SHIFTL_III(9,32,32, 
                                                              (7U 
                                                               & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U))) 
                                          >> 5U)])) 
                         << ((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                           (7U 
                                                            & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U)))
                              ? 0x20U : ((IData)(0x40U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(9,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U))))) 
                        | (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U)))
                             ? 0ULL : ((QData)((IData)(
                                                       vlSelf->vcore__DOT__st_addr[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x1ffU 
                                                          & VL_SHIFTL_III(9,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U))) 
                                                        >> 5U)])) 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(9,32,32, 
                                                              (7U 
                                                               & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U))))) 
                           | ((QData)((IData)(vlSelf->vcore__DOT__st_addr[
                                              (0xfU 
                                               & (VL_SHIFTL_III(9,32,32, 
                                                                (7U 
                                                                 & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U) 
                                                  >> 5U))])) 
                              >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                        (7U 
                                                         & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U)))));
    vlSelf->del_memv = (((QData)((IData)(vlSelf->vcore__DOT__st_data[
                                         (((IData)(0x3fU) 
                                           + (0x1ffU 
                                              & VL_SHIFTL_III(9,32,32, 
                                                              (7U 
                                                               & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U))) 
                                          >> 5U)])) 
                         << ((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                           (7U 
                                                            & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U)))
                              ? 0x20U : ((IData)(0x40U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(9,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U))))) 
                        | (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                          (7U 
                                                           & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U)))
                             ? 0ULL : ((QData)((IData)(
                                                       vlSelf->vcore__DOT__st_data[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x1ffU 
                                                          & VL_SHIFTL_III(9,32,32, 
                                                                          (7U 
                                                                           & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U))) 
                                                        >> 5U)])) 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(9,32,32, 
                                                              (7U 
                                                               & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U))))) 
                           | ((QData)((IData)(vlSelf->vcore__DOT__st_data[
                                              (0xfU 
                                               & (VL_SHIFTL_III(9,32,32, 
                                                                (7U 
                                                                 & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U) 
                                                  >> 5U))])) 
                              >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                                        (7U 
                                                         & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 6U)))));
    vlSelf->del_memw = ((IData)(((0xe0U == (0xe0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp))) 
                                 & (3U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dc_miss) 
                                                 >> 6U)))))
                         ? (0xffU & (IData)((vlSelf->vcore__DOT__st_size 
                                             >> (0x3fU 
                                                 & VL_SHIFTL_III(6,32,32, 
                                                                 (7U 
                                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)), 3U)))))
                         : 0U);
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wena 
        = ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wena)) 
           | (6U == (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp) 
                           >> 5U))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wena 
        = ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wena)) 
           | ((IData)(((0xc0U == (0xe0U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_resp))) 
                       & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[2U])) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_ready 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_b)))) 
                 | ((IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp) 
                    == (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_b))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
        = ((0xfeU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd)) 
           | ((0U != (3U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck))) 
              & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_accsd))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
        = ((0xfdU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd)) 
           | (((0U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                             >> 2U))) & (~ ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_accsd) 
                                            >> 1U))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
        = ((0xfbU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd)) 
           | (((0U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                             >> 4U))) & (~ ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_accsd) 
                                            >> 2U))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
        = ((0xf7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd)) 
           | (((0U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                             >> 6U))) & (~ ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_accsd) 
                                            >> 3U))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
        = ((0xefU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd)) 
           | (((0U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                             >> 8U))) & (~ ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_accsd) 
                                            >> 4U))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
        = ((0xdfU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd)) 
           | (((0U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                             >> 0xaU))) & (~ ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_accsd) 
                                              >> 5U))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
        = ((0xbfU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd)) 
           | (((0U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                             >> 0xcU))) & (~ ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_accsd) 
                                              >> 6U))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
        = ((0x7fU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd)) 
           | (((0U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                             >> 0xeU))) & (~ ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_accsd) 
                                              >> 7U))) 
              << 7U));
    if ((((1U == (3U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck))) 
          & ((7U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_stid) 
             != (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front))) 
         | (3U == (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_miss 
                                 >> 6U)))))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
            = (0xfeU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd));
    }
    if (((IData)(((4U == (0xcU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck))) 
                  & ((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_stid 
                            >> 3U)) != (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
         | (3U == (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_miss 
                                 >> 0xeU)))))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
            = (0xfdU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd));
    }
    if (((IData)(((0x10U == (0x30U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck))) 
                  & ((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_stid 
                            >> 6U)) != (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
         | (3U == (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_miss 
                                 >> 0x16U)))))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
            = (0xfbU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd));
    }
    if (((IData)(((0x40U == (0xc0U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck))) 
                  & ((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_stid 
                            >> 9U)) != (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
         | (3U == (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_miss 
                                 >> 0x1eU)))))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
            = (0xf7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd));
    }
    if (((IData)(((0x100U == (0x300U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck))) 
                  & ((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_stid 
                            >> 0xcU)) != (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
         | (3U == (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_miss 
                                 >> 0x26U)))))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
            = (0xefU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd));
    }
    if (((IData)(((0x400U == (0xc00U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck))) 
                  & ((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_stid 
                            >> 0xfU)) != (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
         | (3U == (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_miss 
                                 >> 0x2eU)))))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
            = (0xdfU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd));
    }
    if (((IData)(((0x1000U == (0x3000U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck))) 
                  & ((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_stid 
                            >> 0x12U)) != (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
         | (3U == (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_miss 
                                 >> 0x36U)))))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
            = (0xbfU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd));
    }
    if (((IData)(((0x4000U == (0xc000U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck))) 
                  & ((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_stid 
                            >> 0x15U)) != (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
         | (3U == (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_miss 
                                 >> 0x3eU)))))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
            = (0x7fU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd));
    }
    if ((IData)(((0xc0U == (0xe0U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_resp))) 
                 & (~ vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[2U])))) {
        if (((1U != (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_rslt)) 
             | (((0x17U >= (0x1fU & ((IData)(3U) * 
                                     (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_resp)))))
                  ? (7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_stid 
                           >> (0x1fU & ((IData)(3U) 
                                        * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_resp))))))
                  : 0U) == (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) {
            vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
                = ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd) 
                   | (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_resp)))));
        }
    }
    if ((6U == (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp) 
                      >> 5U)))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd 
            = ((~ ((IData)(1U) << (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)))) 
               & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd));
    }
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_hc698b519__0 
        = (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr 
        = ((0x38U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)) 
           | (IData)(vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_hc698b519__0));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wvalue[0U] 
        = (IData)((((0x17U >= (0x1fU & ((IData)(3U) 
                                        * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                     ? (4U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                              >> (0x1fU & ((IData)(3U) 
                                           * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                     : 0U) ? (((0x17U >= (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                                ? (2U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                         >> (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                                : 0U) ? (((0x17U >= 
                                           (0x1fU & 
                                            ((IData)(3U) 
                                             * (7U 
                                                & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                                           ? (1U & 
                                              (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                               >> (0x1fU 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                                           : 0U) ? vlSelf->vcore__DOT__inst__DOT__dc_rdat
                                          : (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat)))
                               : (((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                                    ? (1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                                    : 0U) ? (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat))))
                                   : (QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat))))))
                    : (((0x17U >= (0x1fU & ((IData)(3U) 
                                            * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                         ? (2U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                  >> (0x1fU & ((IData)(3U) 
                                               * (7U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                         : 0U) ? (((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                                    ? (1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                                    : 0U) ? vlSelf->vcore__DOT__inst__DOT__dc_rdat
                                   : (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->vcore__DOT__inst__DOT__dc_rdat 
                                                                              >> 0x1fU))))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat))))
                        : (((0x17U >= (0x1fU & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                             ? (1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                             : 0U) ? (((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->vcore__DOT__inst__DOT__dc_rdat 
                                                                      >> 0xfU)))))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat)))))
                            : (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->vcore__DOT__inst__DOT__dc_rdat 
                                                               >> 7U)))))) 
                                << 8U) | (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat)))))))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wvalue[1U] 
        = (IData)(((((0x17U >= (0x1fU & ((IData)(3U) 
                                         * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                      ? (4U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                               >> (0x1fU & ((IData)(3U) 
                                            * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                      : 0U) ? (((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                                 ? (2U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                                 : 0U) ? (((0x17U >= 
                                            (0x1fU 
                                             & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                                            ? (1U & 
                                               (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                                            : 0U) ? vlSelf->vcore__DOT__inst__DOT__dc_rdat
                                           : (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat)))
                                : (((0x17U >= (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                                     ? (1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                              >> (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                                     : 0U) ? (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat))))
                                    : (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat))))))
                     : (((0x17U >= (0x1fU & ((IData)(3U) 
                                             * (7U 
                                                & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                          ? (2U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                   >> (0x1fU & ((IData)(3U) 
                                                * (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                          : 0U) ? (((0x17U >= (0x1fU 
                                               & ((IData)(3U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                                     ? (1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                              >> (0x1fU 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                                     : 0U) ? vlSelf->vcore__DOT__inst__DOT__dc_rdat
                                    : (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->vcore__DOT__inst__DOT__dc_rdat 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat))))
                         : (((0x17U >= (0x1fU & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)))))
                              ? (1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                       >> (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))))))
                              : 0U) ? (((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->vcore__DOT__inst__DOT__dc_rdat 
                                                                       >> 0xfU)))))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat)))))
                             : (((- (QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->vcore__DOT__inst__DOT__dc_rdat 
                                                                >> 7U)))))) 
                                 << 8U) | (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_rdat)))))))) 
                   >> 0x20U));
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h1b836c55__0 
        = (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_resp));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr 
        = ((7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr)) 
           | ((IData)(vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h1b836c55__0) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wvalue[2U] 
        = (IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U]))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wvalue[3U] 
        = (IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U]))) 
                   >> 0x20U));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wvalue[2U] 
        = (IData)(((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                    ? ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                        ? ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                            ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U])))
                            : (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U])))
                        : ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                            ? (QData)((IData)((0xffffU 
                                               & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U])))
                            : (QData)((IData)((0xffU 
                                               & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U])))))
                    : ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                        ? ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                            ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U])))
                            : (((QData)((IData)((- (IData)(
                                                           (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U] 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U]))))
                        : ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                            ? (((- (QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U] 
                                                       >> 0xfU))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U]))))
                            : (((- (QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U] 
                                                       >> 7U))))) 
                                << 8U) | (QData)((IData)(
                                                         (0xffU 
                                                          & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U]))))))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wvalue[3U] 
        = (IData)((((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                     ? ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                         ? ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                             ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U])))
                             : (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U])))
                         : ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                             ? (QData)((IData)((0xffffU 
                                                & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U])))
                             : (QData)((IData)((0xffU 
                                                & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U])))))
                     : ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                         ? ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                             ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U])))
                             : (((QData)((IData)((- (IData)(
                                                            (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U] 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U]))))
                         : ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits))
                             ? (((- (QData)((IData)(
                                                    (1U 
                                                     & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U] 
                                                        >> 0xfU))))) 
                                 << 0x10U) | (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U]))))
                             : (((- (QData)((IData)(
                                                    (1U 
                                                     & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U] 
                                                        >> 7U))))) 
                                 << 8U) | (QData)((IData)(
                                                          (0xffU 
                                                           & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw[0U]))))))) 
                   >> 0x20U));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_exect 
        = (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_valid) 
            & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_accsd)) 
           | (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_fail));
    if ((IData)(((0xc0U == (0xe0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp))) 
                 & (3U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dc_miss) 
                                 >> 6U)))))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_exect 
            = ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_exect) 
               | (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dc_resp)))));
    }
    if (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_succ) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_exect 
            = ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_exect) 
               | (0xffU & ((IData)(1U) << (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_front))));
    }
    vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[4U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[5U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[6U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[7U] = 0U;
    if ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__rr_num))) {
        vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[7U] 
            = ((0xffffU & vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[7U]) 
               | (0xffff0000U & ((vlSelf->__VdfgTmp_hb256d2b6__0[0x11U] 
                                  << 0x15U) | (0x1f0000U 
                                               & (vlSelf->__VdfgTmp_hb256d2b6__0[0x10U] 
                                                  >> 0xbU)))));
    }
    vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[2U] 
        = ((0xffffU & vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[2U]) 
           | ((IData)(vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__r) 
              << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[3U] 
        = (((IData)(vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__r) 
            >> 0x10U) | ((IData)((vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__r 
                                  >> 0x20U)) << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[4U] 
        = (((IData)((vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__r 
                     >> 0x20U)) >> 0x10U) | (0xffff0000U 
                                             & vlSelf->__VdfgTmp_hb256d2b6__0[0U]));
    vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[5U] 
        = ((0xffffU & (IData)(((((QData)((IData)(vlSelf->__VdfgTmp_hb256d2b6__0[0xdU])) 
                                 << 0x3eU) | (((QData)((IData)(
                                                               vlSelf->__VdfgTmp_hb256d2b6__0[0xcU])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__VdfgTmp_hb256d2b6__0[0xbU])) 
                                                 >> 2U))) 
                               + (QData)((IData)((7U 
                                                  & (vlSelf->__VdfgTmp_hb256d2b6__0[0x10U] 
                                                     >> 8U))))))) 
           | (0xffff0000U & (IData)(((((QData)((IData)(
                                                       vlSelf->__VdfgTmp_hb256d2b6__0[0xdU])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlSelf->__VdfgTmp_hb256d2b6__0[0xcU])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlSelf->__VdfgTmp_hb256d2b6__0[0xbU])) 
                                        >> 2U))) + (QData)((IData)(
                                                                   (7U 
                                                                    & (vlSelf->__VdfgTmp_hb256d2b6__0[0x10U] 
                                                                       >> 8U))))))));
    vlSelf->vcore__DOT__inst__DOT__fpu_inst__DOT__result[6U] 
        = ((0xffffU & (IData)((((((QData)((IData)(vlSelf->__VdfgTmp_hb256d2b6__0[0xdU])) 
                                  << 0x3eU) | (((QData)((IData)(
                                                                vlSelf->__VdfgTmp_hb256d2b6__0[0xcU])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__VdfgTmp_hb256d2b6__0[0xbU])) 
                                                  >> 2U))) 
                                + (QData)((IData)((7U 
                                                   & (vlSelf->__VdfgTmp_hb256d2b6__0[0x10U] 
                                                      >> 8U))))) 
                               >> 0x20U))) | (0xffff0000U 
                                              & (IData)(
                                                        (((((QData)((IData)(
                                                                            vlSelf->__VdfgTmp_hb256d2b6__0[0xdU])) 
                                                            << 0x3eU) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__VdfgTmp_hb256d2b6__0[0xcU])) 
                                                               << 0x1eU) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->__VdfgTmp_hb256d2b6__0[0xbU])) 
                                                                 >> 2U))) 
                                                          + (QData)((IData)(
                                                                            (7U 
                                                                             & (vlSelf->__VdfgTmp_hb256d2b6__0[0x10U] 
                                                                                >> 8U))))) 
                                                         >> 0x20U))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__itlb__s_rqst 
        = ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h7c6ab34c__0 
            < ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_num) 
               + ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_push)
                   ? 1U : 0U))) ? 2U : 0U);
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__itlb__s_vadd 
        = ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h7c6ab34c__0 
            < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_num))
            ? vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
           [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__pos_trn) 
                   + ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__itlb__s_resp))
                       ? 1U : 0U)))] : (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__pcg_bundle[3U])) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__pcg_bundle[2U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__pcg_bundle[1U])) 
                                              >> 8U))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] = 0U;
    if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
            = (8U | (0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U]));
    }
    if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
            = (0x90U | (0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U]));
    }
    if ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
            = (0xa00U | (0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U]));
    }
    if ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
            = (0xb000U | (0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U]));
    }
    if ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
            = (0xc0000U | (0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U]));
    }
    if ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
            = (0xd00000U | (0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U]));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
            = (0xe000000U | (0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U]));
    }
    if ((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
            = (0xf0000000U | vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U]);
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                      >> 4U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                       >> 8U)));
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                           >> 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                        >> 0xcU)));
    if ((0x80000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                            >> 8U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                         >> 0x10U)));
    if ((0x8000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                             >> 0xcU)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                      >> 4U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                       >> 8U)));
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                           >> 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                        >> 0xcU)));
    if ((0x80000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                            >> 8U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                         >> 0x10U)));
    if ((0x8000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                             >> 0xcU)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                      >> 4U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                       >> 8U)));
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                           >> 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                        >> 0xcU)));
    if ((0x80000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                            >> 8U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                         >> 0x10U)));
    if ((0x8000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                             >> 0xcU)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] = 0U;
    if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
            = (8U | (0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U]));
    }
    if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
            = (0x90U | (0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U]));
    }
    if ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
            = (0xa00U | (0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U]));
    }
    if ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
            = (0xb000U | (0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U]));
    }
    if ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
            = (0xc0000U | (0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U]));
    }
    if ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
            = (0xd00000U | (0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U]));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
            = (0xe000000U | (0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U]));
    }
    if ((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
            = (0xf0000000U | vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U]);
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                      >> 4U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                       >> 8U)));
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                           >> 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                        >> 0xcU)));
    if ((0x80000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                            >> 8U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                         >> 0x10U)));
    if ((0x8000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                             >> 0xcU)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                      >> 4U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                       >> 8U)));
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                           >> 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                        >> 0xcU)));
    if ((0x80000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                            >> 8U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                         >> 0x10U)));
    if ((0x8000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                             >> 0xcU)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                      >> 4U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                       >> 8U)));
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                           >> 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                        >> 0xcU)));
    if ((0x80000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                            >> 8U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                         >> 0x10U)));
    if ((0x8000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                             >> 0xcU)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] = 0U;
    if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
            = (8U | (0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U]));
    }
    if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
            = (0x90U | (0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U]));
    }
    if ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
            = (0xa00U | (0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U]));
    }
    if ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
            = (0xb000U | (0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U]));
    }
    if ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
            = (0xc0000U | (0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U]));
    }
    if ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
            = (0xd00000U | (0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U]));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
            = (0xe000000U | (0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U]));
    }
    if ((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
            = (0xf0000000U | vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U]);
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                      >> 4U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                       >> 8U)));
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                           >> 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                        >> 0xcU)));
    if ((0x80000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                            >> 8U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                         >> 0x10U)));
    if ((0x8000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                             >> 0xcU)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                      >> 4U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                       >> 8U)));
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                           >> 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                        >> 0xcU)));
    if ((0x80000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                            >> 8U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                         >> 0x10U)));
    if ((0x8000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                             >> 0xcU)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                      >> 4U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                       >> 8U)));
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                           >> 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                        >> 0xcU)));
    if ((0x80000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                            >> 8U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                         >> 0x10U)));
    if ((0x8000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                             >> 0xcU)));
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__icache__s_rqst 
        = ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h4ca04b6f__0 
            < vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h7c6ab34c__0)
            ? 0x80U : 0U);
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__icache__s_addr 
        = ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h4ca04b6f__0 
            < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_trn))
            ? vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_ppc
           [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__pos_acc) 
                   + ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_hb22dde62__0)
                       ? 1U : 0U)))] : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__itlb__s_padd);
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1size 
        = ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1done)
            ? vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_size
           [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))]
            : 0U);
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size 
        = ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0done)
            ? (0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h9b70fb4b__0) 
                        - (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_cur)))
            : 0U);
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfffffffcU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((1U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                >> 2U))) << 1U) | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                       >> 2U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfffffff3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((3U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                >> 2U))) << 3U) | (
                                                   (2U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xffffffcfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((5U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                >> 2U))) << 5U) | (
                                                   (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 4U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xffffff3fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((7U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                >> 2U))) << 7U) | (
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 6U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfffffcffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((9U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                >> 2U))) << 9U) | (
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 8U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfffff3ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0xbU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                  >> 2U))) << 0xbU) 
              | ((0xaU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                    >> 2U))) << 0xaU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0xdU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                  >> 2U))) << 0xdU) 
              | ((0xcU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                    >> 2U))) << 0xcU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xffff3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0xfU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                  >> 2U))) << 0xfU) 
              | ((0xeU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                    >> 2U))) << 0xeU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfffcffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x11U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x11U) 
              | ((0x10U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x10U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfff3ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x13U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x13U) 
              | ((0x12U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x12U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xffcfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x15U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x15U) 
              | ((0x14U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x14U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xff3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x17U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x17U) 
              | ((0x16U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x16U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xfcffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x19U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x19U) 
              | ((0x18U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x18U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xf3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x1bU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x1bU) 
              | ((0x1aU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x1aU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x1dU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x1dU) 
              | ((0x1cU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x1cU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op) 
           | (((0x1fU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 2U))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 2U))) << 0x1eU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfffffffcU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((1U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                >> 2U))) << 1U) | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                       >> 2U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfffffff3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((3U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                >> 2U))) << 3U) | (
                                                   (2U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xffffffcfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((5U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                >> 2U))) << 5U) | (
                                                   (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 4U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xffffff3fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((7U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                >> 2U))) << 7U) | (
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 6U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfffffcffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((9U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                >> 2U))) << 9U) | (
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 8U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfffff3ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0xbU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                  >> 2U))) << 0xbU) 
              | ((0xaU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                    >> 2U))) << 0xaU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0xdU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                  >> 2U))) << 0xdU) 
              | ((0xcU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                    >> 2U))) << 0xcU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xffff3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0xfU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                  >> 2U))) << 0xfU) 
              | ((0xeU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                    >> 2U))) << 0xeU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfffcffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x11U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x11U) 
              | ((0x10U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x10U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfff3ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x13U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x13U) 
              | ((0x12U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x12U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xffcfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x15U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x15U) 
              | ((0x14U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x14U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xff3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x17U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x17U) 
              | ((0x16U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x16U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xfcffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x19U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x19U) 
              | ((0x18U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x18U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xf3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x1bU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x1bU) 
              | ((0x1aU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x1aU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x1dU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x1dU) 
              | ((0x1cU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x1cU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op) 
           | (((0x1fU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 2U))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 2U))) << 0x1eU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfffffffcU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((1U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                >> 2U))) << 1U) | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                       >> 2U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfffffff3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((3U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                >> 2U))) << 3U) | (
                                                   (2U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xffffffcfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((5U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                >> 2U))) << 5U) | (
                                                   (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 4U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xffffff3fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((7U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                >> 2U))) << 7U) | (
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 6U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfffffcffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((9U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                >> 2U))) << 9U) | (
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 8U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfffff3ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0xbU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                  >> 2U))) << 0xbU) 
              | ((0xaU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                    >> 2U))) << 0xaU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0xdU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                  >> 2U))) << 0xdU) 
              | ((0xcU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                    >> 2U))) << 0xcU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xffff3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0xfU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                  >> 2U))) << 0xfU) 
              | ((0xeU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                    >> 2U))) << 0xeU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfffcffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x11U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x11U) 
              | ((0x10U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x10U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfff3ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x13U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x13U) 
              | ((0x12U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x12U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xffcfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x15U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x15U) 
              | ((0x14U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x14U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xff3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x17U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x17U) 
              | ((0x16U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x16U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xfcffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x19U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x19U) 
              | ((0x18U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x18U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xf3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x1bU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x1bU) 
              | ((0x1aU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x1aU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x1dU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x1dU) 
              | ((0x1cU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x1cU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op) 
           | (((0x1fU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 2U))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 2U))) << 0x1eU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfffffffcU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((1U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                >> 2U))) << 1U) | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                       >> 2U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfffffff3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((3U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                >> 2U))) << 3U) | (
                                                   (2U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xffffffcfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((5U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                >> 2U))) << 5U) | (
                                                   (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 4U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xffffff3fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((7U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                >> 2U))) << 7U) | (
                                                   (6U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 6U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfffffcffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((9U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                >> 2U))) << 9U) | (
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 2U))) 
                                                   << 8U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfffff3ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0xbU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                  >> 2U))) << 0xbU) 
              | ((0xaU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                    >> 2U))) << 0xaU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0xdU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                  >> 2U))) << 0xdU) 
              | ((0xcU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                    >> 2U))) << 0xcU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xffff3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0xfU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                  >> 2U))) << 0xfU) 
              | ((0xeU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                    >> 2U))) << 0xeU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfffcffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x11U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x11U) 
              | ((0x10U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x10U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfff3ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x13U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x13U) 
              | ((0x12U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x12U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xffcfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x15U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x15U) 
              | ((0x14U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x14U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xff3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x17U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x17U) 
              | ((0x16U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x16U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xfcffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x19U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x19U) 
              | ((0x18U == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x18U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xf3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x1bU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x1bU) 
              | ((0x1aU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x1aU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x1dU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x1dU) 
              | ((0x1cU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x1cU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op) 
           | (((0x1fU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 2U))) << 0x1fU) 
              | ((0x1eU == (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 2U))) << 0x1eU)));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel = 0U;
    if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_pend_bits))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel 
            = (2U | (0xfcU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel)));
    }
    if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_pend_bits))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel 
            = (0xcU | (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel));
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel 
        = ((0xcfU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel)) 
           | (0x30U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel) 
                       << 2U)));
    if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel 
            = ((0xcfU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel)) 
               | (0x30U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel) 
                           << 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] = 0U;
    if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
            = (8U | (0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U]));
    }
    if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
            = (0x90U | (0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U]));
    }
    if ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
            = (0xa00U | (0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U]));
    }
    if ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
            = (0xb000U | (0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U]));
    }
    if ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
            = (0xc0000U | (0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U]));
    }
    if ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
            = (0xd00000U | (0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U]));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
            = (0xe000000U | (0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U]));
    }
    if ((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_accsd))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
            = (0xf0000000U | vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U]);
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                      >> 4U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                       >> 8U)));
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                           >> 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                        >> 0xcU)));
    if ((0x80000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                            >> 8U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                         >> 0x10U)));
    if ((0x8000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                             >> 0xcU)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                      >> 4U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                       >> 8U)));
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                           >> 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                        >> 0xcU)));
    if ((0x80000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                            >> 8U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                         >> 0x10U)));
    if ((0x8000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                             >> 0xcU)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                      >> 4U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                       >> 8U)));
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                           >> 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                        >> 0xcU)));
    if ((0x80000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                            >> 8U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                         >> 0x10U)));
    if ((0x8000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                             >> 0xcU)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xeU] = 0U;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xfU] = 0U;
    if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_exect))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
            = (8U | (0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U]));
    }
    if ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_exect))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
            = (0x90000U | (0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U]));
    }
    if ((4U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_exect))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
            = (0xaU | (0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U]));
    }
    if ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_exect))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
            = (0xb0000U | (0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U]));
    }
    if ((0x10U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_exect))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
            = (0xcU | (0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U]));
    }
    if ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_exect))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
            = (0xd0000U | (0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U]));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_exect))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
            = (0xeU | (0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U]));
    }
    if ((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_exect))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
            = (0xf0000U | vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U]);
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                      >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                       >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                           >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                        >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                            >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                            >> 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf00U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                         >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                             >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                             >> 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                             >> 4U)));
    }
    if ((0x8000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
        = ((0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
           | (0xf0000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf0000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                              << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
        = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
           | (0xf00000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf00000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                               << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf00000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                               << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
        = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
           | (0xf000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                << 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
        = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
           | (0xf0000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                 << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                 << 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                 << 0xcU)));
    }
    if ((0x8000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                 << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                      >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                       >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                           >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                        >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                            >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                            >> 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf00U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                         >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                             >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                             >> 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                             >> 4U)));
    }
    if ((0x8000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
        = ((0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
           | (0xf0000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf0000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                              << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
        = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
           | (0xf00000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf00000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                               << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf00000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                               << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
        = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
           | (0xf000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                << 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
        = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
           | (0xf0000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                 << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                 << 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                 << 0xcU)));
    }
    if ((0x8000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                 << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                      >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                       >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                           >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                        >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                            >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                            >> 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf00U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                         >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                             >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                             >> 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                             >> 4U)));
    }
    if ((0x8000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
        = ((0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
           | (0xf0000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf0000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                              << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
        = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
           | (0xf00000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf00000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                               << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf00000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                               << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
        = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
           | (0xf000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                << 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
        = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
           | (0xf0000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                 << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                 << 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                 << 0xcU)));
    }
    if ((0x8000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                 << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                      >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                       >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                           >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                        >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                            >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                            >> 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf00U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                         >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                             >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                             >> 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                             >> 4U)));
    }
    if ((0x8000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
        = ((0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
           | (0xf0000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf0000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                              << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
        = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
           | (0xf00000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf00000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                               << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf00000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                               << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
        = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
           | (0xf000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                << 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
        = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
           | (0xf0000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                 << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                 << 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                 << 0xcU)));
    }
    if ((0x8000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                 << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                      >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                       >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                           >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                        >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                            >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                            >> 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf00U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                         >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                             >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                             >> 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                             >> 4U)));
    }
    if ((0x8000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
        = ((0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
           | (0xf0000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf0000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                              << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
        = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
           | (0xf00000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf00000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                               << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf00000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                               << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
        = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
           | (0xf000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                << 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
        = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
           | (0xf0000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                 << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                 << 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                 << 0xcU)));
    }
    if ((0x8000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                 << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
           | (0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                      >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
        = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
           | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                       >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf0U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                           >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xffffff0fU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf0U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
        = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
           | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                        >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                            >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf00U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                            >> 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xfffff0ffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf00U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
        = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
           | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                         >> 0x10U)));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                             >> 0xcU)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                             >> 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                             >> 4U)));
    }
    if ((0x8000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xffff0fffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU]));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
        = ((0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
           | (0xf0000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xfff0ffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf0000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                              << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
        = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
           | (0xf00000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf00000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                               << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xff0fffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf00000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                               << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
        = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
           | (0xf000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                << 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xf0ffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
        = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
           | (0xf0000000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU]));
    if ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                 << 4U)));
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                 << 8U)));
    }
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                 << 0xcU)));
    }
    if ((0x8000U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU])) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
            = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU]) 
               | (0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                 << 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__f_vadd 
        = ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__b_ready)
            ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__itlb__s_vadd
            : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__b_vadd);
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_strb 
        = (0xffU & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_strb 
                            >> (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                      (7U 
                                                       & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]), 3U)))));
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h980a4816__0 
        = ((0x17U >= (0x1fU & ((IData)(3U) * (7U & 
                                              vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]))))
            ? (7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_stid 
                     >> (0x1fU & ((IData)(3U) * (7U 
                                                 & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U])))))
            : 0U);
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_stid 
        = vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h980a4816__0;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_padd 
        = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_padd[
                            (((IData)(0x3fU) + (0x1ffU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                (7U 
                                                                 & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]), 6U))) 
                             >> 5U)])) << ((0U == (0x1fU 
                                                   & VL_SHIFTL_III(9,32,32, 
                                                                   (7U 
                                                                    & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]), 6U)))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & VL_SHIFTL_III(9,32,32, 
                                                                  (7U 
                                                                   & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]), 6U))))) 
           | (((0U == (0x1fU & VL_SHIFTL_III(9,32,32, 
                                             (7U & 
                                              vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]), 6U)))
                ? 0ULL : ((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_padd[
                                          (((IData)(0x1fU) 
                                            + (0x1ffU 
                                               & VL_SHIFTL_III(9,32,32, 
                                                               (7U 
                                                                & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]), 6U))) 
                                           >> 5U)])) 
                          << ((IData)(0x20U) - (0x1fU 
                                                & VL_SHIFTL_III(9,32,32, 
                                                                (7U 
                                                                 & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]), 6U))))) 
              | ((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_padd[
                                 (0xfU & (VL_SHIFTL_III(9,32,32, 
                                                        (7U 
                                                         & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]), 6U) 
                                          >> 5U))])) 
                 >> (0x1fU & VL_SHIFTL_III(9,32,32, 
                                           (7U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]), 6U)))));
    if ((IData)(((0x40U == (0xe0U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_resp))) 
                 & ((0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_resp)) 
                    == (7U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U]))))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_padd 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_padd;
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_pos_trans 
        = ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U]) 
           | (7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
                    + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_front))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_pos_trans 
        = ((8U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U]) 
           | (7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
                    + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front))));
    vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT____Vlvbound_h9cab34c8__0 
        = (0x3fU & (IData)((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__b_ready)
                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__icache__s_addr
                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__b_addr) 
                            >> 6U)));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__index 
        = vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT____Vlvbound_h9cab34c8__0;
    if ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__index 
            = (0x3fU & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_addr
                                [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                                        >> 4U))] >> 6U)));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__fill))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__index 
            = (0x3fU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__fill));
    }
    vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h5011a869__0 
        = ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
           + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1size));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[0U] 
        = (IData)((VL_SHIFTL_QQI(64,64,12, ((1U < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_acc))
                                             ? vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_data
                                            [(7U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))]
                                             : vlSelf->vcore__DOT__inst__DOT__ic_rdat), 
                                 ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                  << 4U)) | (VL_SHIFTR_QQI(64,64,12, 
                                                           ((0U 
                                                             < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_acc))
                                                             ? 
                                                            vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_data
                                                            [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front]
                                                             : vlSelf->vcore__DOT__inst__DOT__ic_rdat), 
                                                           ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_cur) 
                                                            << 4U)) 
                                             & (VL_SHIFTL_QQI(64,64,12, 1ULL, 
                                                              ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                               << 4U)) 
                                                - 1ULL))));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[1U] 
        = (IData)(((VL_SHIFTL_QQI(64,64,12, ((1U < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_acc))
                                              ? vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_data
                                             [(7U & 
                                               ((IData)(1U) 
                                                + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))]
                                              : vlSelf->vcore__DOT__inst__DOT__ic_rdat), 
                                  ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                   << 4U)) | (VL_SHIFTR_QQI(64,64,12, 
                                                            ((0U 
                                                              < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_acc))
                                                              ? 
                                                             vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_data
                                                             [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front]
                                                              : vlSelf->vcore__DOT__inst__DOT__ic_rdat), 
                                                            ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_cur) 
                                                             << 4U)) 
                                              & (VL_SHIFTL_QQI(64,64,12, 1ULL, 
                                                               ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                << 4U)) 
                                                 - 1ULL))) 
                   >> 0x20U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4ee143b4__0 
        = (IData)((0U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h79b41f55__0 
        = (IData)((0U != (0x300U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he18594f7__0 
        = (IData)((0U != (0xf0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct = 0ULL;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
           | (0x3ffffe0U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                              >> 6U) & ((1U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 5U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                    >> 6U) 
                                                   & ((0U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      << 5U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
           | (0x7ffffc00U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                              >> 1U) & ((4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xaU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
           | (0xffffc000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                              << 3U) & ((0xcU == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                        << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
           | (0xffffe000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                              << 2U) & ((8U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xdU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
        = ((0xffdfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
           | (0xffe00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                               << 0xaU) & ((0x10U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x15U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                 << 0xaU) & ((0x18U 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x15U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
        = ((0xffbfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
           | (0xffc00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                               << 0xbU) & ((0x14U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x16U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                 << 0xbU) & ((0x1cU 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x16U)))));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                    << 0x1bU) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                 >> 5U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] 
            = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                    >> 0xbU) & (0x2000U == (0x7000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
                  << 9U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] 
            = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U]) 
               | (0x100U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                             >> 3U) & ((~ (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                           >> 0x1eU)) 
                                       << 8U))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (0x6000000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                             << 9U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                       << 7U))));
    if ((0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                               << 7U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
                                         >> 0x19U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
            = ((0xfffc3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U]) 
               | (0xffffc000U & ((0x20000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                              >> 8U)) 
                                 | (0x1c000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                << 2U)))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
        = ((0x1ff7fffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                >> 0xbU) & (0U != (0x1fffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                         >> 5U))))))) 
              << 0x17U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | (1U & (((IData)((0U != (0xa002020U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
                     | (IData)(((0U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)) 
                                & (0U != (0x50U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))) 
                    | (IData)(((0U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)) 
                               & (0U != (0x5000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | (2U & ((0x1feU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                               >> 0x17U)) | ((IData)(
                                                     ((0x40000000U 
                                                       == 
                                                       (0xfe007000U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)) 
                                                      & (0U 
                                                         != 
                                                         (0x5000U 
                                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)))) 
                                             << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x1000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | (IData)(((0x1000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x2000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                   >> 0xcU) & (0x2000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x3000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                   >> 0xcU) & (0x3000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x4000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                   >> 0xcU) & (0x4000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x5000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | (IData)(((0x5000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x40005000U == (0xfc007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | (IData)(((0x40005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x6000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                   >> 0xcU) & (0x6000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 4U) & (0x7000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                   >> 0xcU) & (0x7000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 3U) & (0x1000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | (0x3c000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                           >> 0xeU) & ((9U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                               >> 0x19U)) 
                                       << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | (0xfffff000U & (((0x73U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir) 
                              << 0xdU) | ((0x100073U 
                                           == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir) 
                                          << 0xcU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0x1fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | (((0x200073U == (0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))
                ? (7U & (4U | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 0x1cU)))) : 0U) 
              << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
           | ((0x10500073U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir) 
              << 0xbU));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
            = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
               | ((IData)((0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
                  << 4U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
            = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                    >> 0x1eU) & (0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
                  << 3U));
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] 
                = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
                   | (((0U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 0xdU))) << 2U) 
                      | (((2U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                        >> 0xdU))) 
                          << 1U) | (3U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                 >> 0xdU))))));
        }
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
                = ((0xefffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
                   | (0x10000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     << 0x10U)));
        }
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
            = ((0xf7ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
               | ((IData)((0U != (0xa000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U] 
                >> 5U) | (IData)((0x640U == (0x640U 
                                             & vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
            = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
               | (0x6000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U] 
                                << 0x14U)));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct 
        = ((0x7ffeU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
               >> 0xcU) & (0x2000000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct 
        = ((0x7ffdU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xcU) & (0x2001000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct 
        = ((0x7ffbU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xcU) & (0x2002000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct 
        = ((0x7ff7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xcU) & (0x2003000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct 
        = ((0x7fefU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xeU) & (0x2000000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xfffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
               >> 0xcU) & (0x2004000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xfffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xcU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xfffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xcU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xfffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xcU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xeU) & (0x2004000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xeU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xeU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
        = ((0xffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0xeU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
               >> 0x14U) & (0U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 0x1aU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (0x1ffeU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                          >> 0x13U) & ((2U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | ((1U & ((0U != (0x30000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) 
                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                         >> 0x14U) & (4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                             >> 0x1aU))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | ((IData)((0U != (0xc0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (0xfff0U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                          >> 0x10U) & ((6U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 4U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x58000000U == (0xfdf00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x20000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x20001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x20002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x28000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x28001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xaU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0xa0002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffefffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0xa0001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0xa0000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0xe0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0xe0001000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffeffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0xf0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffdffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (0x1ffe0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                              >> 3U) & ((0x30U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x11U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfffbffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (0x3ffc0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                              >> 2U) & ((0x34U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x12U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xfff7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x40100000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
        = ((0xffefffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                >> 0x14U) & (0x42000000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
              << 0x14U));
    if ((0U != (0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
            = ((0xfe1fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]) 
               | (0xffe00000U & ((0x1000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                >> 1U)) 
                                 | (0xe00000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                 << 9U)))));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
            = ((0xfe03ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]) 
               | ((IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr) 
                  << 0x12U));
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
            = ((0x3ffffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
               | ((QData)((IData)((8U | ((0x70U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                   >> 8U)) 
                                         | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                  >> 0x19U)))))) 
                  << 0x1aU));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
        = ((0x1fffffffeULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
           | (IData)((IData)((1U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                     | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                        >> 1U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                    >> 0xbU) 
                                                   & ((2U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      | (0U 
                                                         != 
                                                         (0x1fffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                              << 0x1bU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                                >> 5U)))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
        = ((0x1fffffffdULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
           | ((QData)((IData)((1U & ((IData)((0U != 
                                              (0x300U 
                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
                                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                         >> 0xbU) & 
                                        (3U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                >> 0x1bU))))))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
        = ((0x1fffffff7ULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                >> 0x1cU) & (0U != 
                                             (3U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                               >> 0xcU)))))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
        = ((0x1fffffffbULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                >> 3U) & (0U == (0x7000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))))) 
              << 2U));
    if ((IData)((0ULL != (0xcULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
            = (2ULL | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct);
    }
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
            = ((0x1fffff8ffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
               | ((QData)((IData)((7U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                         >> 0xcU)))) 
                  << 8U));
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                = ((0x1ffffff3fULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((((IData)((0U 
                                                 != 
                                                 (0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                        >> 5U))))) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                                     << 0x1bU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                                       >> 5U)))))))))) 
                      << 6U));
        }
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                             >> 0x19U)))) 
                      << 4U));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                           >> 2U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
                   | ((QData)((IData)(((IData)((0x1200000U 
                                                == 
                                                (0x1200000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) 
                                       << 1U))) << 4U));
        }
    }
    if ((3U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct = 0U;
    }
    if ((1U & ((IData)((0U != (0x1f0202U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
               & (~ (IData)((0U != (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 0xdU))))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct = 0U;
    }
    if ((1U & (~ ((0U != (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
                            | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U]) 
                           | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U]) 
                          | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U])) 
                  | ((0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct) 
                     | ((0U != ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
                                 | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U]) 
                                | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U])) 
                        | ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)) 
                           | (0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct)))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
            = (0x400U | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U]);
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hce7da2ac__0 
        = (IData)((0U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he67e0d8d__0 
        = (IData)((0U != (0x300U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2ca3528e__0 
        = (IData)((0U != (0xf0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct = 0ULL;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
           | (0x3ffffe0U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                              >> 6U) & ((1U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 5U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                    >> 6U) 
                                                   & ((0U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      << 5U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
           | (0x7ffffc00U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                              >> 1U) & ((4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xaU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
           | (0xffffc000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                              << 3U) & ((0xcU == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                        << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
           | (0xffffe000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                              << 2U) & ((8U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xdU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
        = ((0xffdfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
           | (0xffe00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                               << 0xaU) & ((0x10U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x15U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                 << 0xaU) & ((0x18U 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x15U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
        = ((0xffbfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
           | (0xffc00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                               << 0xbU) & ((0x14U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x16U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                 << 0xbU) & ((0x1cU 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x16U)))));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                    << 0x1bU) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                 >> 5U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] 
            = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                    >> 0xbU) & (0x2000U == (0x7000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
                  << 9U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] 
            = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U]) 
               | (0x100U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                             >> 3U) & ((~ (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                           >> 0x1eU)) 
                                       << 8U))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (0x6000000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                             << 9U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                       << 7U))));
    if ((0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                               << 7U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
                                         >> 0x19U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
            = ((0xfffc3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U]) 
               | (0xffffc000U & ((0x20000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                              >> 8U)) 
                                 | (0x1c000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                << 2U)))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
        = ((0x1ff7fffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                >> 0xbU) & (0U != (0x1fffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                         >> 5U))))))) 
              << 0x17U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | (1U & (((IData)((0U != (0xa002020U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
                     | (IData)(((0U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)) 
                                & (0U != (0x50U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))) 
                    | (IData)(((0U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)) 
                               & (0U != (0x5000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | (2U & ((0x1feU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                               >> 0x17U)) | ((IData)(
                                                     ((0x40000000U 
                                                       == 
                                                       (0xfe007000U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)) 
                                                      & (0U 
                                                         != 
                                                         (0x5000U 
                                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))) 
                                             << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x1000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | (IData)(((0x1000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x2000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                   >> 0xcU) & (0x2000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x3000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                   >> 0xcU) & (0x3000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x4000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                   >> 0xcU) & (0x4000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x5000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | (IData)(((0x5000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x40005000U == (0xfc007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | (IData)(((0x40005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x6000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                   >> 0xcU) & (0x6000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 4U) & (0x7000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                   >> 0xcU) & (0x7000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 3U) & (0x1000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | (0x3c000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                           >> 0xeU) & ((9U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                               >> 0x19U)) 
                                       << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | (0xfffff000U & (((0x73U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir) 
                              << 0xdU) | ((0x100073U 
                                           == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir) 
                                          << 0xcU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0x1fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | (((0x200073U == (0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))
                ? (7U & (4U | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 0x1cU)))) : 0U) 
              << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
           | ((0x10500073U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir) 
              << 0xbU));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
            = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
               | ((IData)((0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
                  << 4U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
            = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                    >> 0x1eU) & (0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
                  << 3U));
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] 
                = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
                   | (((0U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     >> 0xdU))) << 2U) 
                      | (((2U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                        >> 0xdU))) 
                          << 1U) | (3U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                 >> 0xdU))))));
        }
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
                = ((0xefffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
                   | (0x10000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                     << 0x10U)));
        }
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
            = ((0xf7ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
               | ((IData)((0U != (0xa000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                >> 0xfU) | (IData)((0x190000U == (0x190000U 
                                                  & vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
            = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
               | (0x6000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                                << 0xaU)));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct 
        = ((0x7ffeU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
               >> 0xcU) & (0x2000000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct 
        = ((0x7ffdU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xcU) & (0x2001000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct 
        = ((0x7ffbU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xcU) & (0x2002000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct 
        = ((0x7ff7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xcU) & (0x2003000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct 
        = ((0x7fefU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xeU) & (0x2000000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xfffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
               >> 0xcU) & (0x2004000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xfffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xcU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xfffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xcU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xfffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xcU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xeU) & (0x2004000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xeU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xeU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
        = ((0xffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0xeU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
               >> 0x14U) & (0U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 0x1aU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (0x1ffeU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                          >> 0x13U) & ((2U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | ((1U & ((0U != (0x30000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) 
                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                         >> 0x14U) & (4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                             >> 0x1aU))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | ((IData)((0U != (0xc0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (0xfff0U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                          >> 0x10U) & ((6U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 4U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x58000000U == (0xfdf00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x20000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x20001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x20002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x28000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x28001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xaU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0xa0002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffefffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0xa0001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0xa0000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0xe0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0xe0001000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffeffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0xf0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffdffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (0x1ffe0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                              >> 3U) & ((0x30U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x11U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfffbffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (0x3ffc0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                              >> 2U) & ((0x34U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x12U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xfff7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x40100000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
        = ((0xffefffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                >> 0x14U) & (0x42000000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
              << 0x14U));
    if ((0U != (0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
            = ((0xfe1fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]) 
               | (0xffe00000U & ((0x1000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                >> 1U)) 
                                 | (0xe00000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                 << 9U)))));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
            = ((0xfe03ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]) 
               | ((IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr) 
                  << 0x12U));
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
            = ((0x3ffffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
               | ((QData)((IData)((8U | ((0x70U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                   >> 8U)) 
                                         | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                  >> 0x19U)))))) 
                  << 0x1aU));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
        = ((0x1fffffffeULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
           | (IData)((IData)((1U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                     | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                        >> 1U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                    >> 0xbU) 
                                                   & ((2U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      | (0U 
                                                         != 
                                                         (0x1fffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                              << 0x1bU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                                >> 5U)))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
        = ((0x1fffffffdULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
           | ((QData)((IData)((1U & ((IData)((0U != 
                                              (0x300U 
                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
                                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                         >> 0xbU) & 
                                        (3U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                >> 0x1bU))))))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
        = ((0x1fffffff7ULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                >> 0x1cU) & (0U != 
                                             (3U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                               >> 0xcU)))))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
        = ((0x1fffffffbULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                >> 3U) & (0U == (0x7000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))))) 
              << 2U));
    if ((IData)((0ULL != (0xcULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
            = (2ULL | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct);
    }
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
            = ((0x1fffff8ffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
               | ((QData)((IData)((7U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                         >> 0xcU)))) 
                  << 8U));
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                = ((0x1ffffff3fULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((((IData)((0U 
                                                 != 
                                                 (0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                        >> 5U))))) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                                     << 0x1bU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                                       >> 5U)))))))))) 
                      << 6U));
        }
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                             >> 0x19U)))) 
                      << 4U));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                           >> 2U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
                   | ((QData)((IData)(((IData)((0x1200000U 
                                                == 
                                                (0x1200000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) 
                                       << 1U))) << 4U));
        }
    }
    if ((3U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct = 0U;
    }
    if ((1U & ((IData)((0U != (0x1f0202U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
               & (~ (IData)((0U != (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 0xdU))))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct = 0U;
    }
    if ((1U & (~ ((0U != (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
                            | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U]) 
                           | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U]) 
                          | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U])) 
                  | ((0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct) 
                     | ((0U != ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
                                 | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U]) 
                                | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U])) 
                        | ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)) 
                           | (0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct)))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
            = (0x400U | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U]);
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h3a46cadc__0 
        = (IData)((0U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2181d1bd__0 
        = (IData)((0U != (0x300U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hf98edd2f__0 
        = (IData)((0U != (0xf0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct = 0ULL;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
           | (0x3ffffe0U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                              >> 6U) & ((1U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 5U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                    >> 6U) 
                                                   & ((0U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      << 5U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
           | (0x7ffffc00U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                              >> 1U) & ((4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xaU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
           | (0xffffc000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                              << 3U) & ((0xcU == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                        << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
           | (0xffffe000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                              << 2U) & ((8U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xdU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
        = ((0xffdfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
           | (0xffe00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                               << 0xaU) & ((0x10U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x15U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                 << 0xaU) & ((0x18U 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x15U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
        = ((0xffbfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
           | (0xffc00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                               << 0xbU) & ((0x14U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x16U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                 << 0xbU) & ((0x1cU 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x16U)))));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                    << 0x1bU) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                 >> 5U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] 
            = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                    >> 0xbU) & (0x2000U == (0x7000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
                  << 9U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] 
            = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U]) 
               | (0x100U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                             >> 3U) & ((~ (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                           >> 0x1eU)) 
                                       << 8U))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (0x6000000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                             << 9U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                       << 7U))));
    if ((0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                               << 7U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
                                         >> 0x19U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
            = ((0xfffc3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U]) 
               | (0xffffc000U & ((0x20000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                              >> 8U)) 
                                 | (0x1c000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                << 2U)))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
        = ((0x1ff7fffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                >> 0xbU) & (0U != (0x1fffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                         >> 5U))))))) 
              << 0x17U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | (1U & (((IData)((0U != (0xa002020U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
                     | (IData)(((0U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)) 
                                & (0U != (0x50U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))) 
                    | (IData)(((0U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)) 
                               & (0U != (0x5000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | (2U & ((0x1feU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                               >> 0x17U)) | ((IData)(
                                                     ((0x40000000U 
                                                       == 
                                                       (0xfe007000U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)) 
                                                      & (0U 
                                                         != 
                                                         (0x5000U 
                                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)))) 
                                             << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x1000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | (IData)(((0x1000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x2000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                   >> 0xcU) & (0x2000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x3000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                   >> 0xcU) & (0x3000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x4000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                   >> 0xcU) & (0x4000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x5000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | (IData)(((0x5000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x40005000U == (0xfc007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | (IData)(((0x40005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x6000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                   >> 0xcU) & (0x6000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 4U) & (0x7000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                   >> 0xcU) & (0x7000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 3U) & (0x1000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | (0x3c000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                           >> 0xeU) & ((9U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                               >> 0x19U)) 
                                       << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | (0xfffff000U & (((0x73U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir) 
                              << 0xdU) | ((0x100073U 
                                           == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir) 
                                          << 0xcU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0x1fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | (((0x200073U == (0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))
                ? (7U & (4U | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 0x1cU)))) : 0U) 
              << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
           | ((0x10500073U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir) 
              << 0xbU));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
            = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
               | ((IData)((0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
                  << 4U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
            = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                    >> 0x1eU) & (0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
                  << 3U));
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] 
                = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
                   | (((0U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     >> 0xdU))) << 2U) 
                      | (((2U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                        >> 0xdU))) 
                          << 1U) | (3U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                 >> 0xdU))))));
        }
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
                = ((0xefffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
                   | (0x10000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                     << 0x10U)));
        }
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
            = ((0xf7ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
               | ((IData)((0U != (0xa000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                >> 0x19U) | (IData)((0x64000000U == 
                                     (0x64000000U & 
                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
            = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
               | (0x6000000U & vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U]));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct 
        = ((0x7ffeU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
               >> 0xcU) & (0x2000000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct 
        = ((0x7ffdU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xcU) & (0x2001000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct 
        = ((0x7ffbU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xcU) & (0x2002000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct 
        = ((0x7ff7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xcU) & (0x2003000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct 
        = ((0x7fefU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xeU) & (0x2000000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xfffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
               >> 0xcU) & (0x2004000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xfffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xcU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xfffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xcU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xfffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xcU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xeU) & (0x2004000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xeU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xeU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
        = ((0xffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0xeU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
               >> 0x14U) & (0U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 0x1aU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (0x1ffeU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                          >> 0x13U) & ((2U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | ((1U & ((0U != (0x30000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) 
                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                         >> 0x14U) & (4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                             >> 0x1aU))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | ((IData)((0U != (0xc0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (0xfff0U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                          >> 0x10U) & ((6U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 4U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x58000000U == (0xfdf00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x20000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x20001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x20002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x28000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x28001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xaU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0xa0002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffefffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0xa0001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0xa0000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0xe0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0xe0001000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffeffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0xf0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffdffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (0x1ffe0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                              >> 3U) & ((0x30U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x11U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfffbffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (0x3ffc0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                              >> 2U) & ((0x34U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x12U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xfff7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x40100000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
        = ((0xffefffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                >> 0x14U) & (0x42000000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
              << 0x14U));
    if ((0U != (0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
            = ((0xfe1fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]) 
               | (0xffe00000U & ((0x1000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                >> 1U)) 
                                 | (0xe00000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                 << 9U)))));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
            = ((0xfe03ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]) 
               | ((IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr) 
                  << 0x12U));
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
            = ((0x3ffffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
               | ((QData)((IData)((8U | ((0x70U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                   >> 8U)) 
                                         | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                  >> 0x19U)))))) 
                  << 0x1aU));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
        = ((0x1fffffffeULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
           | (IData)((IData)((1U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                     | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                        >> 1U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                    >> 0xbU) 
                                                   & ((2U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      | (0U 
                                                         != 
                                                         (0x1fffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                              << 0x1bU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                                >> 5U)))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
        = ((0x1fffffffdULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
           | ((QData)((IData)((1U & ((IData)((0U != 
                                              (0x300U 
                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
                                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                         >> 0xbU) & 
                                        (3U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                >> 0x1bU))))))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
        = ((0x1fffffff7ULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                >> 0x1cU) & (0U != 
                                             (3U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                               >> 0xcU)))))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
        = ((0x1fffffffbULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                >> 3U) & (0U == (0x7000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))))) 
              << 2U));
    if ((IData)((0ULL != (0xcULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
            = (2ULL | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct);
    }
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
            = ((0x1fffff8ffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
               | ((QData)((IData)((7U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                         >> 0xcU)))) 
                  << 8U));
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                = ((0x1ffffff3fULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((((IData)((0U 
                                                 != 
                                                 (0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                        >> 5U))))) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                                     << 0x1bU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                                       >> 5U)))))))))) 
                      << 6U));
        }
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                             >> 0x19U)))) 
                      << 4U));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                           >> 2U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
                   | ((QData)((IData)(((IData)((0x1200000U 
                                                == 
                                                (0x1200000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) 
                                       << 1U))) << 4U));
        }
    }
    if ((3U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct = 0U;
    }
    if ((1U & ((IData)((0U != (0x1f0202U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
               & (~ (IData)((0U != (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 0xdU))))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct = 0U;
    }
    if ((1U & (~ ((0U != (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
                            | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U]) 
                           | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U]) 
                          | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U])) 
                  | ((0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct) 
                     | ((0U != ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
                                 | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U]) 
                                | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U])) 
                        | ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)) 
                           | (0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct)))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
            = (0x400U | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U]);
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4fca5eea__0 
        = (IData)((0U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h98fad58f__0 
        = (IData)((0U != (0x300U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h82d79c39__0 
        = (IData)((0U != (0xf0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct = 0ULL;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
           | (0x3ffffe0U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                              >> 6U) & ((1U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 5U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                    >> 6U) 
                                                   & ((0U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      << 5U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
           | (0x7ffffc00U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                              >> 1U) & ((4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xaU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
           | (0xffffc000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                              << 3U) & ((0xcU == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                        << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
           | (0xffffe000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                              << 2U) & ((8U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                >> 0x1bU)) 
                                        << 0xdU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
        = ((0xffdfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
           | (0xffe00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                               << 0xaU) & ((0x10U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x15U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                 << 0xaU) & ((0x18U 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x15U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
        = ((0xffbfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
           | (0xffc00000U & (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                               << 0xbU) & ((0x14U == 
                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                             >> 0x1bU)) 
                                           << 0x16U)) 
                             | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                 << 0xbU) & ((0x1cU 
                                              == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                  >> 0x1bU)) 
                                             << 0x16U)))));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                    << 0x1bU) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                 >> 5U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] 
            = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                    >> 0xbU) & (0x2000U == (0x7000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
                  << 9U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] 
            = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U]) 
               | (0x100U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                             >> 3U) & ((~ (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                           >> 0x1eU)) 
                                       << 8U))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (0x6000000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                             << 9U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                       << 7U))));
    if ((0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                               << 7U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
                                         >> 0x19U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
            = ((0xfffc3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U]) 
               | (0xffffc000U & ((0x20000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                              >> 8U)) 
                                 | (0x1c000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                << 2U)))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
        = ((0x1ff7fffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                >> 0xbU) & (0U != (0x1fffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                         >> 5U))))))) 
              << 0x17U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | (1U & (((IData)((0U != (0xa002020U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                     | (IData)(((0U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)) 
                                & (0U != (0x50U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))) 
                    | (IData)(((0U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)) 
                               & (0U != (0x5000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | (2U & ((0x1feU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                               >> 0x17U)) | ((IData)(
                                                     ((0x40000000U 
                                                       == 
                                                       (0xfe007000U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)) 
                                                      & (0U 
                                                         != 
                                                         (0x5000U 
                                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)))) 
                                             << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x1000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | (IData)(((0x1000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x2000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                   >> 0xcU) & (0x2000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x3000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                   >> 0xcU) & (0x3000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x4000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                   >> 0xcU) & (0x4000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x5000U == (0xfc007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | (IData)(((0x5000U == (0xfe007000U 
                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x40005000U == (0xfc007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | (IData)(((0x40005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)) 
                          & (0U != (0x5040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x6000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                   >> 0xcU) & (0x6000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 4U) & (0x7000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
               | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                   >> 0xcU) & (0x7000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 3U) & (0x1000U == (0x7000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | (0x3c000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                           >> 0xeU) & ((9U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                               >> 0x19U)) 
                                       << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | (0xfffff000U & (((0x73U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir) 
                              << 0xdU) | ((0x100073U 
                                           == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir) 
                                          << 0xcU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0x1fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | (((0x200073U == (0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))
                ? (7U & (4U | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 0x1cU)))) : 0U) 
              << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
           | ((0x10500073U == vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir) 
              << 0xbU));
    if ((0U != (0x1fffffffffULL & (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
            = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
               | ((IData)((0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                  << 4U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
            = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
               | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                    >> 0x1eU) & (0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                  << 3U));
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] 
                = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
                   | (((0U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     >> 0xdU))) << 2U) 
                      | (((2U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                        >> 0xdU))) 
                          << 1U) | (3U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                 >> 0xdU))))));
        }
        if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
                = ((0xefffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
                   | (0x10000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                     << 0x10U)));
        }
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
            = ((0xf7ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
               | ((IData)((0U != (0xa000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU] 
                >> 3U) | (IData)((0x190U == (0x190U 
                                             & vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU])))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
            = ((0xf9ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
               | (0x6000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU] 
                                << 0x16U)));
    }
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
            = ((0xfe03ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]) 
               | ((IData)(vlSelf->vcore__DOT__inst__DOT__csr_intr) 
                  << 0x12U));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct 
        = ((0x7ffeU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
               >> 0xcU) & (0x2000000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct 
        = ((0x7ffdU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xcU) & (0x2001000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct 
        = ((0x7ffbU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xcU) & (0x2002000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct 
        = ((0x7ff7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xcU) & (0x2003000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct 
        = ((0x7fefU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xeU) & (0x2000000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xfffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
               >> 0xcU) & (0x2004000U == (0xfe007000U 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xfffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xcU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xfffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xcU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xfffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xcU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xeU) & (0x2004000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xeU) & (0x2005000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xeU) & (0x2006000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
        = ((0xffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0xeU) & (0x2007000U == (0xfe007000U 
                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
               >> 0x14U) & (0U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 0x1aU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (0x1ffeU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                          >> 0x13U) & ((2U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffffbU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | ((1U & ((0U != (0x30000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) 
                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                         >> 0x14U) & (4U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                             >> 0x1aU))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | ((IData)((0U != (0xc0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (0xfff0U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                          >> 0x10U) & ((6U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                               >> 0x1aU)) 
                                       << 4U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x58000000U == (0xfdf00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x20000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x20001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffeffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x20002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x28000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffffbffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x28001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xaU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffff7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0xa0002000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffefffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0xa0001000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffdfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0xa0000000U == (0xfc007000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffffbfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0xe0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0xe0001000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffeffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0xf0000000U == (0xfdf07000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffdffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (0x1ffe0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                              >> 3U) & ((0x30U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x11U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfffbffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (0x3ffc0000U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                              >> 2U) & ((0x34U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                   >> 0x1aU)) 
                                        << 0x12U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xfff7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x40100000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
        = ((0xffefffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
           | (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                >> 0x14U) & (0x42000000U == (0xfff00000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
              << 0x14U));
    if ((0U != (0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
            = ((0xfe1fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]) 
               | (0xffe00000U & ((0x1000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                >> 1U)) 
                                 | (0xe00000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                 << 9U)))));
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
            = ((0x3ffffffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
               | ((QData)((IData)((8U | ((0x70U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                   >> 8U)) 
                                         | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                  >> 0x19U)))))) 
                  << 0x1aU));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
        = ((0x1fffffffeULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
           | (IData)((IData)((1U & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                     | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                        >> 1U)) | (
                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                    >> 0xbU) 
                                                   & ((2U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 0x1bU)) 
                                                      | (0U 
                                                         != 
                                                         (0x1fffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                              << 0x1bU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                                >> 5U)))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
        = ((0x1fffffffdULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
           | ((QData)((IData)((1U & ((IData)((0U != 
                                              (0x300U 
                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                                     | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                         >> 0xbU) & 
                                        (3U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                >> 0x1bU))))))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
        = ((0x1fffffff7ULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                >> 0x1cU) & (0U != 
                                             (3U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                               >> 0xcU)))))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
        = ((0x1fffffffbULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
           | ((QData)((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                >> 3U) & (0U == (0x7000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))))) 
              << 2U));
    if ((IData)((0ULL != (0xcULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
            = (2ULL | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct);
    }
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
            = ((0x1fffff8ffULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
               | ((QData)((IData)((7U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                         >> 0xcU)))) 
                  << 8U));
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                = ((0x1ffffff3fULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((((IData)((0U 
                                                 != 
                                                 (0x1fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                        >> 5U))))) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                                     << 0x1bU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                                       >> 5U)))))))))) 
                      << 6U));
        }
        if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
                   | ((QData)((IData)((3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                             >> 0x19U)))) 
                      << 4U));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                           >> 2U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                = ((0x1ffffffcfULL & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
                   | ((QData)((IData)(((IData)((0x1200000U 
                                                == 
                                                (0x1200000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) 
                                       << 1U))) << 4U));
        }
    }
    if ((3U != (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct = 0U;
    }
    if ((1U & ((IData)((0U != (0x1f0202U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
               & (~ (IData)((0U != (3U & (IData)((vlSelf->vcore__DOT__inst__DOT__csr_inst__DOT__mstatus 
                                                  >> 0xdU))))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct = 0ULL;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U] = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct = 0U;
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct = 0U;
    }
    if ((1U & (~ ((0U != (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
                            | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U]) 
                           | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U]) 
                          | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U])) 
                  | ((0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct) 
                     | ((0U != ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
                                 | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U]) 
                                | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U])) 
                        | ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)) 
                           | (0U != vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct)))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
            = (0x400U | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U]);
    }
    if (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_ready) {
        if ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__rep_rqst))) {
            vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_addr_f 
                = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__rep_addr;
            vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_rqst_f 
                = (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__rep_rqst));
        } else {
            vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_addr_f 
                = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_addr
                [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel) 
                        >> 4U))];
            vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_rqst_f 
                = (0xffU & ((0x20U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel))
                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rqst
                            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel) 
                                    >> 4U))] : 0U));
        }
    } else {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_addr_f 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_addr_b;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_rqst_f 
            = (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_rqst_b));
    }
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h8fa3d737__0 
        = (7U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU]);
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr 
        = ((0xff8U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr)) 
           | (IData)(vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h8fa3d737__0));
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h8fa3d737__0 
        = (7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
                 >> 4U));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr 
        = ((0xfc7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr)) 
           | ((IData)(vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h8fa3d737__0) 
              << 3U));
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h8fa3d737__0 
        = (7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
                 >> 8U));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr 
        = ((0xe3fU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr)) 
           | ((IData)(vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h8fa3d737__0) 
              << 6U));
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h8fa3d737__0 
        = (7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
                 >> 0xcU));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr 
        = ((0x1ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr)) 
           | ((IData)(vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h8fa3d737__0) 
              << 9U));
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_ha1ff9e03__0 
        = (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_pos_trans));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_raddr 
        = vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_ha1ff9e03__0;
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_hd062b32e__0 
        = (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_pos_trans));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_raddr 
        = (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front) 
            << 3U) | (IData)(vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_hd062b32e__0));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fsize 
        = ((0U == (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_num))
            ? 0U : (0xffU & ((1U == (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_num))
                              ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size)
                              : ((4U < vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h5011a869__0)
                                  ? 4U : vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h5011a869__0))));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos[0U] = 0U;
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hfda717e4__0 
        = (0xffU & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                    [0U] + ((3U == ((0x4fU >= (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                               [0U], 4U)))
                                     ? (3U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                 [0U], 4U)))
                                                ? 0U
                                                : (
                                                   vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                   (((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & VL_SHIFTL_III(7,32,32, 
                                                                      vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                      [0U], 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                     [0U], 4U))))) 
                                              | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                 (3U 
                                                  & (VL_SHIFTL_III(7,32,32, 
                                                                   vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                   [0U], 4U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                  [0U], 4U)))))
                                     : 0U)) ? 2U : 1U)));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos[1U] 
        = vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hfda717e4__0;
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hfda717e4__0 
        = (0xffU & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                    [1U] + ((3U == ((0x4fU >= (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                               [1U], 4U)))
                                     ? (3U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                 [1U], 4U)))
                                                ? 0U
                                                : (
                                                   vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                   (((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & VL_SHIFTL_III(7,32,32, 
                                                                      vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                      [1U], 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                     [1U], 4U))))) 
                                              | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                 (3U 
                                                  & (VL_SHIFTL_III(7,32,32, 
                                                                   vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                   [1U], 4U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                  [1U], 4U)))))
                                     : 0U)) ? 2U : 1U)));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos[2U] 
        = vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hfda717e4__0;
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hfda717e4__0 
        = (0xffU & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                    [2U] + ((3U == ((0x4fU >= (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                               [2U], 4U)))
                                     ? (3U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                 [2U], 4U)))
                                                ? 0U
                                                : (
                                                   vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                   (((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & VL_SHIFTL_III(7,32,32, 
                                                                      vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                      [2U], 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                     [2U], 4U))))) 
                                              | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                 (3U 
                                                  & (VL_SHIFTL_III(7,32,32, 
                                                                   vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                   [2U], 4U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                  [2U], 4U)))))
                                     : 0U)) ? 2U : 1U)));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos[3U] 
        = vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hfda717e4__0;
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hfda717e4__0 
        = (0xffU & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                    [3U] + ((3U == ((0x4fU >= (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                               [3U], 4U)))
                                     ? (3U & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_SHIFTL_III(7,32,32, 
                                                                 vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                 [3U], 4U)))
                                                ? 0U
                                                : (
                                                   vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                   (((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & VL_SHIFTL_III(7,32,32, 
                                                                      vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                      [3U], 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                     [3U], 4U))))) 
                                              | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                 (3U 
                                                  & (VL_SHIFTL_III(7,32,32, 
                                                                   vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                   [3U], 4U) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_SHIFTL_III(7,32,32, 
                                                                  vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                                  [3U], 4U)))))
                                     : 0U)) ? 2U : 1U)));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos[4U] 
        = vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hfda717e4__0;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__imm 
        = (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                  >> 0x1fU)))) << 0xbU) 
             | (QData)((IData)((0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                          >> 0x14U))))) 
            & (- (QData)((IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4ee143b4__0) 
                                  | (0U != (0x12000058U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))))) 
           | (((((QData)((IData)((- (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                             >> 0x1fU))))) 
                 << 0x20U) | (QData)((IData)((0xfffff000U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir)))) 
               & (- (QData)((IData)((0U != (0x2020U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)))))) 
              | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                        >> 0x1fU)))) 
                    << 0xbU) | (QData)((IData)(((0x7e0U 
                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                      >> 7U)))))) 
                  & (- (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h79b41f55__0)))) 
                 | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                           >> 0x1fU)))) 
                       << 0xcU) | (QData)((IData)((
                                                   (0x800U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                            >> 7U))))))) 
                     & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                 >> 0x18U)))))) 
                    | ((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                             >> 0x1fU)))) 
                         << 0x14U) | (QData)((IData)(
                                                     ((0xff000U 
                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir) 
                                                      | ((0x800U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                               >> 0x14U))))))) 
                       & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                   >> 0x1bU))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hea62c44b__0[0U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he18594f7__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hea62c44b__0[1U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he18594f7__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hea62c44b__0[2U] 
        = (1U & (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he18594f7__0) 
                                  | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                     >> 0x14U))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum 
        = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum)) 
           | ((1U & ((0U != (7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                     | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U] 
                        >> 0x1bU))) ? 1U : 0U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
        = (0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum));
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct)))) {
        if ((1U & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum))));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                  >> 0xbU))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                              >> 0xbU))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum))));
        }
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
        = (0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum));
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct)))) {
        if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum))));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                  >> 0xbU))))) {
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                           >> 0xbU)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum))));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                              >> 0x16U))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum))));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                           >> 0x16U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum))));
        }
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__imm 
        = (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                  >> 0x1fU)))) << 0xbU) 
             | (QData)((IData)((0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                          >> 0x14U))))) 
            & (- (QData)((IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hce7da2ac__0) 
                                  | (0U != (0x12000058U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))))) 
           | (((((QData)((IData)((- (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                             >> 0x1fU))))) 
                 << 0x20U) | (QData)((IData)((0xfffff000U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)))) 
               & (- (QData)((IData)((0U != (0x2020U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))))) 
              | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                        >> 0x1fU)))) 
                    << 0xbU) | (QData)((IData)(((0x7e0U 
                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                      >> 7U)))))) 
                  & (- (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he67e0d8d__0)))) 
                 | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                           >> 0x1fU)))) 
                       << 0xcU) | (QData)((IData)((
                                                   (0x800U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                            >> 7U))))))) 
                     & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                 >> 0x18U)))))) 
                    | ((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                             >> 0x1fU)))) 
                         << 0x14U) | (QData)((IData)(
                                                     ((0xff000U 
                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir) 
                                                      | ((0x800U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                               >> 0x14U))))))) 
                       & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                   >> 0x1bU))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h7a4a58c0__0[0U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2ca3528e__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h7a4a58c0__0[1U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2ca3528e__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h7a4a58c0__0[2U] 
        = (1U & (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2ca3528e__0) 
                                  | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                     >> 0x14U))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum 
        = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum)) 
           | (((1U & ((0U != (7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                      | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U] 
                         >> 0x1bU))) ? 1U : 0U) << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
        = (0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum));
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct)))) {
        if ((1U & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                               >> 4U)) 
                               << 4U)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                  >> 0xbU))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                              >> 0xbU))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                               >> 4U)) 
                               << 4U)));
        }
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
        = (0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum));
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct)))) {
        if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum) 
                                               >> 4U)) 
                               << 4U)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                  >> 0xbU))))) {
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                           >> 0xbU)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum) 
                                               >> 4U)) 
                               << 4U)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                              >> 0x16U))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                               >> 4U)) 
                               << 4U)));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                           >> 0x16U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum) 
                                               >> 4U)) 
                               << 4U)));
        }
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__imm 
        = (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                  >> 0x1fU)))) << 0xbU) 
             | (QData)((IData)((0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                          >> 0x14U))))) 
            & (- (QData)((IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h3a46cadc__0) 
                                  | (0U != (0x12000058U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))))) 
           | (((((QData)((IData)((- (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                             >> 0x1fU))))) 
                 << 0x20U) | (QData)((IData)((0xfffff000U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir)))) 
               & (- (QData)((IData)((0U != (0x2020U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)))))) 
              | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                        >> 0x1fU)))) 
                    << 0xbU) | (QData)((IData)(((0x7e0U 
                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                      >> 7U)))))) 
                  & (- (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2181d1bd__0)))) 
                 | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                           >> 0x1fU)))) 
                       << 0xcU) | (QData)((IData)((
                                                   (0x800U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                            >> 7U))))))) 
                     & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                 >> 0x18U)))))) 
                    | ((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                             >> 0x1fU)))) 
                         << 0x14U) | (QData)((IData)(
                                                     ((0xff000U 
                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir) 
                                                      | ((0x800U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                               >> 0x14U))))))) 
                       & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                   >> 0x1bU))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_ha45b1a1c__0[0U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hf98edd2f__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_ha45b1a1c__0[1U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hf98edd2f__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_ha45b1a1c__0[2U] 
        = (1U & (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hf98edd2f__0) 
                                  | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                     >> 0x14U))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum 
        = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum)) 
           | (((1U & ((0U != (7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                      | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U] 
                         >> 0x1bU))) ? 1U : 0U) << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
        = (0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum));
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct)))) {
        if ((1U & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf00U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                                >> 8U)) 
                                << 8U)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                  >> 0xbU))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                              >> 0xbU))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf00U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                                >> 8U)) 
                                << 8U)));
        }
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
        = (0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum));
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct)))) {
        if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xf00U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum) 
                                                >> 8U)) 
                                << 8U)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                  >> 0xbU))))) {
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                           >> 0xbU)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xf00U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum) 
                                                >> 8U)) 
                                << 8U)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                              >> 0x16U))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf00U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                                >> 8U)) 
                                << 8U)));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                           >> 0x16U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xf00U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum) 
                                                >> 8U)) 
                                << 8U)));
        }
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__imm 
        = (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                  >> 0x1fU)))) << 0xbU) 
             | (QData)((IData)((0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                          >> 0x14U))))) 
            & (- (QData)((IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4fca5eea__0) 
                                  | (0U != (0x12000058U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))))) 
           | (((((QData)((IData)((- (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                             >> 0x1fU))))) 
                 << 0x20U) | (QData)((IData)((0xfffff000U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir)))) 
               & (- (QData)((IData)((0U != (0x2020U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)))))) 
              | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                        >> 0x1fU)))) 
                    << 0xbU) | (QData)((IData)(((0x7e0U 
                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                      >> 7U)))))) 
                  & (- (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h98fad58f__0)))) 
                 | (((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                           >> 0x1fU)))) 
                       << 0xcU) | (QData)((IData)((
                                                   (0x800U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                            >> 7U))))))) 
                     & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                 >> 0x18U)))))) 
                    | ((((- (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                             >> 0x1fU)))) 
                         << 0x14U) | (QData)((IData)(
                                                     ((0xff000U 
                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir) 
                                                      | ((0x800U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                               >> 0x14U))))))) 
                       & (- (QData)((IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                   >> 0x1bU))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hae679114__0[0U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h82d79c39__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hae679114__0[1U] 
        = (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h82d79c39__0) 
                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                               >> 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hae679114__0[2U] 
        = (1U & (- (IData)((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h82d79c39__0) 
                                  | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                     >> 0x14U))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum 
        = ((0xfffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum)) 
           | (((1U & ((0U != (7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                      | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U] 
                         >> 0x1bU))) ? 1U : 0U) << 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
        = (0xfffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum));
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct)))) {
        if ((1U & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xfffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf000U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                                 >> 0xcU)) 
                                 << 0xcU)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                  >> 0xbU))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                              >> 0xbU))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xfffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf000U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                                 >> 0xcU)) 
                                 << 0xcU)));
        }
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
        = (0xfffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum));
    if ((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct)))) {
        if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xfffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xf000U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum) 
                                                 >> 0xcU)) 
                                 << 0xcU)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                  >> 0xbU))))) {
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                           >> 0xbU)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xfffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xf000U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum) 
                                                 >> 0xcU)) 
                                 << 0xcU)));
        }
    }
    if ((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                  >> 0x16U))))) {
        if ((1U & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                              >> 0x16U))))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum 
                = ((0xfffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum)) 
                   | (0xf000U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                                 >> 0xcU)) 
                                 << 0xcU)));
        }
        if ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                           >> 0x16U)))) {
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum 
                = ((0xfffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum)) 
                   | (0xf000U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum) 
                                                 >> 0xcU)) 
                                 << 0xcU)));
        }
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[2U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[2U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[2U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[2U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[2U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[2U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[2U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[2U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[3U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[3U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[3U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[3U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[3U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[3U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[3U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[3U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 3U))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[0U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[0U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[0U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[0U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[0U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[0U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[0U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[0U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[1U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[1U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[1U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[1U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[1U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[1U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[1U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[1U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[2U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[2U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[2U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[2U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[2U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[2U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[2U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[2U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[3U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[3U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[3U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[3U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[3U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[3U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[3U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[3U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 6U))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[0U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[0U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[0U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[0U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[0U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[0U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[0U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[0U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[1U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[1U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[1U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[1U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[1U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[1U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[1U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[1U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[2U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[2U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[2U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[2U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[2U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[2U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[2U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[2U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[3U][0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[3U][1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[3U][2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[3U][3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[3U][4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[3U][5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[3U][6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[3U][7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                >> 9U))][7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_raddr];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_raddr];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_raddr];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_raddr];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_raddr))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_raddr))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_raddr))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_raddr))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_raddr) 
                >> 3U))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_raddr) 
                >> 3U))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_raddr) 
                >> 3U))];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs
        [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_raddr) 
                >> 3U))];
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br = 0U;
    if ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
         [1U] == (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br 
            = ((0xffffff00U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br) 
               | vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_br
               [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front]);
    }
    if (((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
          [1U] == (0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                            + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1size)))) 
         & (0U != (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1size)))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br 
            = ((0xffffff00U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br) 
               | vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_br
               [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))]);
    }
    if ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
         [2U] == (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br 
            = ((0xffff00ffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br) 
               | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_br
                  [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                  << 8U));
    }
    if (((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
          [2U] == (0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                            + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1size)))) 
         & (0U != (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1size)))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br 
            = ((0xffff00ffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br) 
               | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_br
                  [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))] 
                  << 8U));
    }
    if ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
         [3U] == (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br 
            = ((0xff00ffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br) 
               | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_br
                  [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                  << 0x10U));
    }
    if (((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
          [3U] == (0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                            + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1size)))) 
         & (0U != (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1size)))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br 
            = ((0xff00ffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br) 
               | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_br
                  [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))] 
                  << 0x10U));
    }
    if ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
         [4U] == (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br 
            = ((0xffffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br) 
               | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_br
                  [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                  << 0x18U));
    }
    if (((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
          [4U] == (0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                            + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1size)))) 
         & (0U != (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1size)))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br 
            = ((0xffffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br) 
               | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_br
                  [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))] 
                  << 0x18U));
    }
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__incomp = 0U;
    if ((((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
           [0U] == ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                    - (IData)(1U))) & (3U == ((0x4fU 
                                               >= (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                    - (IData)(1U)), 4U)))
                                               ? (3U 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                         - (IData)(1U)), 4U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x7fU 
                                                          & VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                           - (IData)(1U)), 4U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                          - (IData)(1U)), 4U))))) 
                                                     | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                        (3U 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                           - (IData)(1U)), 4U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                          - (IData)(1U)), 4U)))))
                                               : 0U))) 
         & ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
             [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
             + (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_size
                                [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                                << 1U)))) != vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
            [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))]))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__incomp 
            = (1U | (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__incomp));
    }
    if ((((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
           [1U] == ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                    - (IData)(1U))) & (3U == ((0x4fU 
                                               >= (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                    - (IData)(1U)), 4U)))
                                               ? (3U 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                         - (IData)(1U)), 4U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x7fU 
                                                          & VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                           - (IData)(1U)), 4U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                          - (IData)(1U)), 4U))))) 
                                                     | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                        (3U 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                           - (IData)(1U)), 4U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                          - (IData)(1U)), 4U)))))
                                               : 0U))) 
         & ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
             [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
             + (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_size
                                [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                                << 1U)))) != vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
            [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))]))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__incomp 
            = (2U | (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__incomp));
    }
    if ((((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
           [2U] == ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                    - (IData)(1U))) & (3U == ((0x4fU 
                                               >= (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                    - (IData)(1U)), 4U)))
                                               ? (3U 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                         - (IData)(1U)), 4U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x7fU 
                                                          & VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                           - (IData)(1U)), 4U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                          - (IData)(1U)), 4U))))) 
                                                     | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                        (3U 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                           - (IData)(1U)), 4U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                          - (IData)(1U)), 4U)))))
                                               : 0U))) 
         & ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
             [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
             + (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_size
                                [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                                << 1U)))) != vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
            [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))]))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__incomp 
            = (4U | (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__incomp));
    }
    if ((((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
           [3U] == ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                    - (IData)(1U))) & (3U == ((0x4fU 
                                               >= (0x7fU 
                                                   & VL_SHIFTL_III(7,32,32, 
                                                                   ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                    - (IData)(1U)), 4U)))
                                               ? (3U 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(7,32,32, 
                                                                        ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                         - (IData)(1U)), 4U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x7fU 
                                                          & VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                           - (IData)(1U)), 4U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                          - (IData)(1U)), 4U))))) 
                                                     | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                                                        (3U 
                                                         & (VL_SHIFTL_III(7,32,32, 
                                                                          ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                           - (IData)(1U)), 4U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(7,32,32, 
                                                                         ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                          - (IData)(1U)), 4U)))))
                                               : 0U))) 
         & ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
             [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
             + (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_size
                                [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                                << 1U)))) != vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
            [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))]))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__incomp 
            = (8U | (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__incomp));
    }
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[1U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[2U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[4U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[5U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[7U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[8U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[9U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xaU] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xbU] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xcU] = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xdU] = 0U;
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3af50a00__0 
        = (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
           [1U] <= (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fsize));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3af50a00__0) 
              << 9U));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0 
        = ((0x4fU >= (0x7fU & VL_SHIFTL_III(7,32,32, 
                                            vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                            [0U], 4U)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                              vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                              [0U], 4U)))
                 ? 0U : (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                         (((IData)(0x1fU) + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                             [0U], 4U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                               vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                               [0U], 4U))))) 
               | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                  (3U & (VL_SHIFTL_III(7,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                       [0U], 4U) >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                            vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                            [0U], 4U))))
            : 0U);
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0U] 
        = ((0x1ffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0U]) 
           | (vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[1U] 
        = ((0xfffffe00U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[1U]) 
           | (vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0 
              >> 0x17U));
    if ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
         [0U] < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))) {
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0 
            = (1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0done)
                      ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0pgft)
                      : 0U));
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
            = ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
                [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                + (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                   [0U] << 1U)))) + (QData)((IData)(
                                                                    ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_cur) 
                                                                     << 1U))));
    } else {
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0 
            = (1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1done)
                      ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1pgft)
                      : 0U));
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
            = ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
                [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))] 
                + (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                   [0U] << 1U)))) - (QData)((IData)(
                                                                    ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                     << 1U))));
    }
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0) 
              << 5U));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h334c0db5__0 
        = (1U & ((((IData)(1U) + vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                   [0U]) < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))
                  ? ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0done)
                      ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0pgft)
                      : 0U) : ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1done)
                                ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1pgft)
                                : 0U)));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0U] 
        = ((0xffffffbfU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h334c0db5__0) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[1U] 
        = ((0x1ffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[1U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[2U] 
        = (((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0) 
            >> 0x17U) | ((IData)((vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
                                  >> 0x20U)) << 9U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U] 
        = ((0xfffffe00U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U]) 
           | ((IData)((vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
                       >> 0x20U)) >> 0x17U));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h1e5aa469__0 
        = (3U & ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                  [1U] <= (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))
                  ? (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_pat
                     [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                     >> (7U & VL_SHIFTL_III(3,32,32, 
                                            ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                              [1U] 
                                              + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_cur)) 
                                             - (IData)(1U)), 1U)))
                  : (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_pat
                     [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))] 
                     >> (7U & VL_SHIFTL_III(3,32,32, 
                                            ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                              [1U] 
                                              - (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size)) 
                                             - (IData)(1U)), 1U)))));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0U] 
        = ((0xfffffe7fU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h1e5aa469__0) 
              << 7U));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3af50a00__0 
        = (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
           [2U] <= (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fsize));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U] 
        = ((0xfff7ffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3af50a00__0) 
              << 0x13U));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0 
        = ((0x4fU >= (0x7fU & VL_SHIFTL_III(7,32,32, 
                                            vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                            [1U], 4U)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                              vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                              [1U], 4U)))
                 ? 0U : (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                         (((IData)(0x1fU) + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                             [1U], 4U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                               vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                               [1U], 4U))))) 
               | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                  (3U & (VL_SHIFTL_III(7,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                       [1U], 4U) >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                            vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                            [1U], 4U))))
            : 0U);
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U] 
        = ((0x7ffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U]) 
           | (vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[4U] 
        = ((0xfff80000U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[4U]) 
           | (vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0 
              >> 0xdU));
    if ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
         [1U] < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))) {
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0 
            = (1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0done)
                      ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0pgft)
                      : 0U));
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
            = ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
                [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                + (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                   [1U] << 1U)))) + (QData)((IData)(
                                                                    ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_cur) 
                                                                     << 1U))));
    } else {
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0 
            = (1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1done)
                      ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1pgft)
                      : 0U));
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
            = ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
                [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))] 
                + (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                   [1U] << 1U)))) - (QData)((IData)(
                                                                    ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                     << 1U))));
    }
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U] 
        = ((0xffff7fffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0) 
              << 0xfU));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h334c0db5__0 
        = (1U & ((((IData)(1U) + vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                   [1U]) < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))
                  ? ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0done)
                      ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0pgft)
                      : 0U) : ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1done)
                                ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1pgft)
                                : 0U)));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U] 
        = ((0xfffeffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h334c0db5__0) 
              << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[4U] 
        = ((0x7ffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[4U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0) 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[5U] 
        = (((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0) 
            >> 0xdU) | ((IData)((vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
                                 >> 0x20U)) << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U] 
        = ((0xfff80000U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U]) 
           | ((IData)((vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
                       >> 0x20U)) >> 0xdU));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h1e5aa469__0 
        = (3U & ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                  [2U] <= (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))
                  ? (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_pat
                     [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                     >> (7U & VL_SHIFTL_III(3,32,32, 
                                            ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                              [2U] 
                                              + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_cur)) 
                                             - (IData)(1U)), 1U)))
                  : (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_pat
                     [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))] 
                     >> (7U & VL_SHIFTL_III(3,32,32, 
                                            ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                              [2U] 
                                              - (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size)) 
                                             - (IData)(1U)), 1U)))));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U] 
        = ((0xfff9ffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h1e5aa469__0) 
              << 0x11U));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3af50a00__0 
        = (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
           [3U] <= (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fsize));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[9U] 
        = ((0xdfffffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[9U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3af50a00__0) 
              << 0x1dU));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0 
        = ((0x4fU >= (0x7fU & VL_SHIFTL_III(7,32,32, 
                                            vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                            [2U], 4U)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                              vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                              [2U], 4U)))
                 ? 0U : (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                         (((IData)(0x1fU) + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                             [2U], 4U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                               vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                               [2U], 4U))))) 
               | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                  (3U & (VL_SHIFTL_III(7,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                       [2U], 4U) >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                            vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                            [2U], 4U))))
            : 0U);
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U] 
        = ((0x1fffffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U]) 
           | (vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0 
              << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[7U] 
        = ((0xe0000000U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[7U]) 
           | (vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0 
              >> 3U));
    if ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
         [2U] < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))) {
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0 
            = (1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0done)
                      ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0pgft)
                      : 0U));
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
            = ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
                [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                + (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                   [2U] << 1U)))) + (QData)((IData)(
                                                                    ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_cur) 
                                                                     << 1U))));
    } else {
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0 
            = (1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1done)
                      ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1pgft)
                      : 0U));
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
            = ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
                [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))] 
                + (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                   [2U] << 1U)))) - (QData)((IData)(
                                                                    ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                     << 1U))));
    }
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U] 
        = ((0xfdffffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0) 
              << 0x19U));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h334c0db5__0 
        = (1U & ((((IData)(1U) + vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                   [2U]) < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))
                  ? ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0done)
                      ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0pgft)
                      : 0U) : ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1done)
                                ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1pgft)
                                : 0U)));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U] 
        = ((0xfbffffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h334c0db5__0) 
              << 0x1aU));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[7U] 
        = ((0x1fffffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[7U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0) 
              << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[8U] 
        = (((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0) 
            >> 3U) | ((IData)((vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
                               >> 0x20U)) << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[9U] 
        = ((0xe0000000U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[9U]) 
           | ((IData)((vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
                       >> 0x20U)) >> 3U));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h1e5aa469__0 
        = (3U & ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                  [3U] <= (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))
                  ? (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_pat
                     [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                     >> (7U & VL_SHIFTL_III(3,32,32, 
                                            ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                              [3U] 
                                              + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_cur)) 
                                             - (IData)(1U)), 1U)))
                  : (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_pat
                     [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))] 
                     >> (7U & VL_SHIFTL_III(3,32,32, 
                                            ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                              [3U] 
                                              - (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size)) 
                                             - (IData)(1U)), 1U)))));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U] 
        = ((0xe7ffffffU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h1e5aa469__0) 
              << 0x1bU));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3af50a00__0 
        = (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
           [4U] <= (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fsize));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xdU] 
        = ((0x7fU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xdU]) 
           | (0xffU & ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3af50a00__0) 
                       << 7U)));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0 
        = ((0x4fU >= (0x7fU & VL_SHIFTL_III(7,32,32, 
                                            vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                            [3U], 4U)))
            ? (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                              vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                              [3U], 4U)))
                 ? 0U : (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                         (((IData)(0x1fU) + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, 
                                                             vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                             [3U], 4U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                               vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                                               [3U], 4U))))) 
               | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fdata[
                  (3U & (VL_SHIFTL_III(7,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                       [3U], 4U) >> 5U))] 
                  >> (0x1fU & VL_SHIFTL_III(7,32,32, 
                                            vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                            [3U], 4U))))
            : 0U);
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xaU] 
        = ((0x7fU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xaU]) 
           | (vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xbU] 
        = ((0xffffff80U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xbU]) 
           | (vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h0bc096eb__0 
              >> 0x19U));
    if ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
         [3U] < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))) {
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0 
            = (1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0done)
                      ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0pgft)
                      : 0U));
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
            = ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
                [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                + (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                   [3U] << 1U)))) + (QData)((IData)(
                                                                    ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_cur) 
                                                                     << 1U))));
    } else {
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0 
            = (1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1done)
                      ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1pgft)
                      : 0U));
        vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
            = ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_vpc
                [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))] 
                + (QData)((IData)((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                   [3U] << 1U)))) - (QData)((IData)(
                                                                    ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size) 
                                                                     << 1U))));
    }
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xaU] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xaU]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h3349674b__0) 
              << 3U));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h334c0db5__0 
        = (1U & ((((IData)(1U) + vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                   [3U]) < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))
                  ? ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0done)
                      ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0pgft)
                      : 0U) : ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1done)
                                ? (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1pgft)
                                : 0U)));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xaU] 
        = ((0xffffffefU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xaU]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h334c0db5__0) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xbU] 
        = ((0x7fU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xbU]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xcU] 
        = (((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0) 
            >> 0x19U) | ((IData)((vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
                                  >> 0x20U)) << 7U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xdU] 
        = ((0x80U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xdU]) 
           | (0xffU & ((IData)((vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_hda5b4215__0 
                                >> 0x20U)) >> 0x19U)));
    vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h1e5aa469__0 
        = (3U & ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                  [4U] <= (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size))
                  ? (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_pat
                     [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front] 
                     >> (7U & VL_SHIFTL_III(3,32,32, 
                                            ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                              [4U] 
                                              + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_cur)) 
                                             - (IData)(1U)), 1U)))
                  : (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_pat
                     [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))] 
                     >> (7U & VL_SHIFTL_III(3,32,32, 
                                            ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                                              [4U] 
                                              - (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0size)) 
                                             - (IData)(1U)), 1U)))));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xaU] 
        = ((0xffffff9fU & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xaU]) 
           | ((IData)(vcore__DOT__inst__DOT__fe_inst__DOT____Vlvbound_h1e5aa469__0) 
              << 5U));
    if ((0U != (0x50000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]))) {
        __Vtemp_339[0U] = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                    >> 0xfU));
        __Vtemp_339[1U] = 0U;
    } else {
        __Vtemp_339[0U] = (((IData)((QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 0xfU))))) 
                            & (- (IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4ee143b4__0) 
                                          | (0U != 
                                             (0x11005b50U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)))))) 
                           | (((0x20U | (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                  >> 0xfU))) 
                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hea62c44b__0[0U]) 
                              | ((IData)((((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                                           << 0x37U) 
                                          | (((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                              << 0x17U) 
                                             | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                >> 9U)))) 
                                 & (- (IData)((IData)(
                                                      (0U 
                                                       != 
                                                       (0xa000020U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))))));
        __Vtemp_339[1U] = (((IData)(((QData)((IData)(
                                                     (0x1fU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                         >> 0xfU)))) 
                                     >> 0x20U)) & (- (IData)(
                                                             ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4ee143b4__0) 
                                                              | (0U 
                                                                 != 
                                                                 (0x11005b50U 
                                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)))))) 
                           | ((IData)(((((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                            << 0x17U) 
                                           | ((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                              >> 9U))) 
                                       >> 0x20U)) & 
                              (- (IData)((IData)((0U 
                                                  != 
                                                  (0xa000020U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)))))));
    }
    __Vtemp_340[2U] = ((0x80U & ((- (IData)((1U & (~ 
                                                   ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                     >> 0xbU) 
                                                    & (1U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                        >> 0x1bU))))))) 
                                 << 1U)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000U 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U])))
                                             ? 1U : 
                                            (1U & (
                                                   ((~ 
                                                     ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                       >> 0x1cU) 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                         >> 0xeU))) 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4ee143b4__0) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x11005b50U 
                                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)))))) 
                                                   | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hea62c44b__0[2U]))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[0U] 
        = __Vtemp_339[0U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[1U] 
        = __Vtemp_339[1U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[2U] 
        = __Vtemp_340[2U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[4U] 
        = ((0x7cU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                      >> 0xdU) & ((- (IData)((1U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                               >> 0xbU)))) 
                                  << 2U))) | (2U & 
                                              ((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                                >> 0xbU) 
                                                               & (1U 
                                                                  == 
                                                                  (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                                   >> 0x1bU))))))) 
                                               << 1U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[5U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[6U] 
        = (4U & ((- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                   >> 0xbU)))) << 2U));
    __Vtemp_369[2U] = (((0x3eU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 0x13U) & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                               >> 0xbU)))) 
                                                << 1U))) 
                        | ((0x40U | (0x3eU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                              >> 0x1aU))) 
                           & ((- (IData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he18594f7__0))) 
                              << 1U))) | ((IData)((0U 
                                                   != 
                                                   (0x60000U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U])))
                                           ? 0U : (1U 
                                                   & ((- (IData)((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x1105000U 
                                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))) 
                                                      | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hea62c44b__0[2U]))));
    if ((0U != (0x60000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]))) {
        __Vtemp_368[0U] = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                    >> 0x14U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[0U] 
            = __Vtemp_368[0U];
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[1U] = 0U;
    } else {
        __Vtemp_368[0U] = ((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                      >> 0x14U) & (- (IData)((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x1105000U 
                                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))))) 
                           | (((0x20U | (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                  >> 0x14U))) 
                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hea62c44b__0[0U]) 
                              | (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__imm) 
                                  & (- (IData)((1U 
                                                & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0x1000207bU 
                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) 
                                                           | (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h79b41f55__0))))))) 
                                 | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__delta) 
                                    & (- (IData)((IData)(
                                                         (0U 
                                                          != 
                                                          (0xa000000U 
                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)))))))));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[0U] 
            = __Vtemp_368[0U];
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[1U] 
            = ((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__imm 
                        >> 0x20U)) & (- (IData)((1U 
                                                 & (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x1000207bU 
                                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) 
                                                            | (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h79b41f55__0)))))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[2U] 
        = __Vtemp_369[2U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[4U] 
        = ((((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__imm) 
             & (- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                 >> 0xbU))))) << 2U) 
           | (2U & (((- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                       >> 0xbU)))) 
                     | (- (IData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he18594f7__0)))) 
                    << 1U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[5U] 
        = ((((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__imm) 
             & (- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                 >> 0xbU))))) >> 0x1eU) 
           | (((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__imm 
                        >> 0x20U)) & (- (IData)((1U 
                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                    >> 0xbU))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[6U] 
        = (((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__imm 
                     >> 0x20U)) & (- (IData)((1U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                               >> 0xbU))))) 
           >> 0x1eU);
    if ((0U != (0x50000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]))) {
        __Vtemp_389[0U] = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                    >> 0xfU));
        __Vtemp_389[1U] = 0U;
    } else {
        __Vtemp_389[0U] = (((IData)((QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 0xfU))))) 
                            & (- (IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hce7da2ac__0) 
                                          | (0U != 
                                             (0x11005b50U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))))) 
                           | (((0x20U | (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                  >> 0xfU))) 
                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h7a4a58c0__0[0U]) 
                              | ((IData)((((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                                           << 0x2dU) 
                                          | (((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                              << 0xdU) 
                                             | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                >> 0x13U)))) 
                                 & (- (IData)((IData)(
                                                      (0U 
                                                       != 
                                                       (0xa000020U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))))));
        __Vtemp_389[1U] = (((IData)(((QData)((IData)(
                                                     (0x1fU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                         >> 0xfU)))) 
                                     >> 0x20U)) & (- (IData)(
                                                             ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hce7da2ac__0) 
                                                              | (0U 
                                                                 != 
                                                                 (0x11005b50U 
                                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))))) 
                           | ((IData)(((((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                            << 0xdU) 
                                           | ((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                              >> 0x13U))) 
                                       >> 0x20U)) & 
                              (- (IData)((IData)((0U 
                                                  != 
                                                  (0xa000020U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))))));
    }
    __Vtemp_390[2U] = ((0x80U & ((- (IData)((1U & (~ 
                                                   ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                     >> 0xbU) 
                                                    & (1U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                        >> 0x1bU))))))) 
                                 << 1U)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000U 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U])))
                                             ? 1U : 
                                            (1U & (
                                                   ((~ 
                                                     ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                       >> 0x1cU) 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                         >> 0xeU))) 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hce7da2ac__0) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x11005b50U 
                                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))))) 
                                                   | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h7a4a58c0__0[2U]))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[0U] 
        = __Vtemp_389[0U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[1U] 
        = __Vtemp_389[1U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[2U] 
        = __Vtemp_390[2U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[4U] 
        = ((0x7cU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                      >> 0xdU) & ((- (IData)((1U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                               >> 0xbU)))) 
                                  << 2U))) | (2U & 
                                              ((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                                >> 0xbU) 
                                                               & (1U 
                                                                  == 
                                                                  (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                                   >> 0x1bU))))))) 
                                               << 1U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[5U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[6U] 
        = (4U & ((- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                   >> 0xbU)))) << 2U));
    __Vtemp_419[2U] = (((0x3eU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 0x13U) & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                               >> 0xbU)))) 
                                                << 1U))) 
                        | ((0x40U | (0x3eU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                              >> 0x1aU))) 
                           & ((- (IData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2ca3528e__0))) 
                              << 1U))) | ((IData)((0U 
                                                   != 
                                                   (0x60000U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U])))
                                           ? 0U : (1U 
                                                   & ((- (IData)((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x1105000U 
                                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))) 
                                                      | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h7a4a58c0__0[2U]))));
    if ((0U != (0x60000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]))) {
        __Vtemp_418[0U] = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                    >> 0x14U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[0U] 
            = __Vtemp_418[0U];
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[1U] = 0U;
    } else {
        __Vtemp_418[0U] = ((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                      >> 0x14U) & (- (IData)((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x1105000U 
                                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))))) 
                           | (((0x20U | (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                  >> 0x14U))) 
                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h7a4a58c0__0[0U]) 
                              | (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__imm) 
                                  & (- (IData)((1U 
                                                & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0x1000207bU 
                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) 
                                                           | (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he67e0d8d__0))))))) 
                                 | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__delta) 
                                    & (- (IData)((IData)(
                                                         (0U 
                                                          != 
                                                          (0xa000000U 
                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))))))));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[0U] 
            = __Vtemp_418[0U];
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[1U] 
            = ((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__imm 
                        >> 0x20U)) & (- (IData)((1U 
                                                 & (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x1000207bU 
                                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) 
                                                            | (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_he67e0d8d__0)))))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[2U] 
        = __Vtemp_419[2U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[4U] 
        = ((((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__imm) 
             & (- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                 >> 0xbU))))) << 2U) 
           | (2U & (((- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                       >> 0xbU)))) 
                     | (- (IData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2ca3528e__0)))) 
                    << 1U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[5U] 
        = ((((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__imm) 
             & (- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                 >> 0xbU))))) >> 0x1eU) 
           | (((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__imm 
                        >> 0x20U)) & (- (IData)((1U 
                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                    >> 0xbU))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[6U] 
        = (((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__imm 
                     >> 0x20U)) & (- (IData)((1U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                               >> 0xbU))))) 
           >> 0x1eU);
    if ((0U != (0x50000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]))) {
        __Vtemp_439[0U] = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                    >> 0xfU));
        __Vtemp_439[1U] = 0U;
    } else {
        __Vtemp_439[0U] = (((IData)((QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 0xfU))))) 
                            & (- (IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h3a46cadc__0) 
                                          | (0U != 
                                             (0x11005b50U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)))))) 
                           | (((0x20U | (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                  >> 0xfU))) 
                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_ha45b1a1c__0[0U]) 
                              | ((IData)((((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                                           << 0x23U) 
                                          | (((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                >> 0x1dU)))) 
                                 & (- (IData)((IData)(
                                                      (0U 
                                                       != 
                                                       (0xa000020U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))))));
        __Vtemp_439[1U] = (((IData)(((QData)((IData)(
                                                     (0x1fU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                         >> 0xfU)))) 
                                     >> 0x20U)) & (- (IData)(
                                                             ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h3a46cadc__0) 
                                                              | (0U 
                                                                 != 
                                                                 (0x11005b50U 
                                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)))))) 
                           | ((IData)(((((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                                         << 0x23U) 
                                        | (((QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                            << 3U) 
                                           | ((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                              >> 0x1dU))) 
                                       >> 0x20U)) & 
                              (- (IData)((IData)((0U 
                                                  != 
                                                  (0xa000020U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)))))));
    }
    __Vtemp_440[2U] = ((0x80U & ((- (IData)((1U & (~ 
                                                   ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                     >> 0xbU) 
                                                    & (1U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                        >> 0x1bU))))))) 
                                 << 1U)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000U 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U])))
                                             ? 1U : 
                                            (1U & (
                                                   ((~ 
                                                     ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                       >> 0x1cU) 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                         >> 0xeU))) 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h3a46cadc__0) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x11005b50U 
                                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)))))) 
                                                   | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_ha45b1a1c__0[2U]))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[0U] 
        = __Vtemp_439[0U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[1U] 
        = __Vtemp_439[1U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[2U] 
        = __Vtemp_440[2U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[4U] 
        = ((0x7cU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                      >> 0xdU) & ((- (IData)((1U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                               >> 0xbU)))) 
                                  << 2U))) | (2U & 
                                              ((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                                >> 0xbU) 
                                                               & (1U 
                                                                  == 
                                                                  (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                                   >> 0x1bU))))))) 
                                               << 1U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[5U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[6U] 
        = (4U & ((- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                   >> 0xbU)))) << 2U));
}
