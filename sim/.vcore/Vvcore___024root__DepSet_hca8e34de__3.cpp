// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvcore.h for the primary calling header

#include "Vvcore__pch.h"
#include "Vvcore___024root.h"

VL_INLINE_OPT void Vvcore___024root___nba_sequent__TOP__3(Vvcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*0:0*/ vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT____Vlvbound_ha1d0d9ad__0;
    vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT____Vlvbound_ha1d0d9ad__0 = 0;
    QData/*51:0*/ vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT____Vlvbound_hdd761258__0;
    vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT____Vlvbound_hdd761258__0 = 0;
    CData/*0:0*/ vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT____Vlvbound_ha1d0d9ad__0;
    vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT____Vlvbound_ha1d0d9ad__0 = 0;
    QData/*51:0*/ vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT____Vlvbound_h113e237c__0;
    vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT____Vlvbound_h113e237c__0 = 0;
    CData/*0:0*/ vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT____Vlvbound_ha1d0d9ad__0;
    vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT____Vlvbound_ha1d0d9ad__0 = 0;
    CData/*0:0*/ vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT____Vlvbound_ha1d0d9ad__0;
    vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT____Vlvbound_ha1d0d9ad__0 = 0;
    CData/*2:0*/ vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_hc698b519__0;
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_hc698b519__0 = 0;
    CData/*2:0*/ vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h1b836c55__0;
    vcore__DOT__inst__DOT__lsu_inst__DOT____Vlvbound_h1b836c55__0 = 0;
    VlWide<16>/*511:0*/ __Vtemp_7;
    VlWide<16>/*511:0*/ __Vtemp_10;
    // Body
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
        = ((3U == (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))
            ? vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir
            : ((0x8000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                ? ((0x4000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                    ? ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? 0U : (0x13023U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? (0x1063U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x1cU) 
                                              | ((0xc000000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                        << 0x17U)) 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU) 
                                                       | ((0xc00U 
                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir) 
                                                          | ((0x300U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                 << 5U)) 
                                                             | (0x80U 
                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                   >> 5U)))))))))
                                : (0x3023U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? 0U : (0x12023U | 
                                        (((0xc000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xe00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? (0x63U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                            >> 0xcU)))) 
                                             << 0x1cU) 
                                            | ((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                      << 0x17U)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                           >> 7U)))))))
                                                        : 0U) 
                                                      << 0xfU) 
                                                     | ((0xc00U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir) 
                                                        | ((0x300U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                               << 5U)) 
                                                           | (0x80U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                 >> 5U)))))))))
                                : (0x2023U | (((0x4000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | ((0xc00U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir) 
                                                 | (0x200U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                       << 3U))))))))
                    : ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? 0U : (0x13027U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? (0x6fU | ((0x80000000U 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                << 0x13U)) 
                                            | ((0x40000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x16U)) 
                                               | ((0x30000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                      << 0x13U)) 
                                                  | ((0x8000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                         << 0x15U)) 
                                                     | ((0x4000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                            << 0x13U)) 
                                                        | ((0x2000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                               << 0x17U)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  << 0xdU)) 
                                                              | ((0xe00000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                     << 0x12U)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                        << 8U)) 
                                                                    | (0xff000U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 0xcU)))) 
                                                                          << 0xcU))))))))))))
                                : (0x3027U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? 0U : ((0x1000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                         ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0x100073U
                                                 : 
                                                (0xe7U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | ((0xf8000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 8U)) 
                                                      | (0xf80U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)))))
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0U
                                                 : 
                                                (0x67U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | (0xf80U 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                ? ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                    ? ((0x400U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                        ? ((0x1000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                            ? ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                ? 0U
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                    ? 
                                                   (0x3bU 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))))
                                            : ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                    ? 
                                                   (0x7033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                    ? 
                                                   (0x4033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))))
                                        : (0x7013U 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x19U) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                     << 0x12U)) 
                                                 | ((((0x27U 
                                                       >= 
                                                       (0x3fU 
                                                        & ((IData)(5U) 
                                                           * 
                                                           (7U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                          >> 7U)))))))
                                                       : 0U) 
                                                     << 0xfU) 
                                                    | (((0x27U 
                                                         >= 
                                                         (0x3fU 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                            >> 7U)))))))
                                                         : 0U) 
                                                       << 7U))))))
                                    : (0x5013U | ((0xc0000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                      << 0x14U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                         << 0xdU)) 
                                                     | ((0x1f00000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                            << 0x12U)) 
                                                        | ((((0x27U 
                                                              >= 
                                                              (0x3fU 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                              : 0U) 
                                                            << 0xfU) 
                                                           | (((0x27U 
                                                                >= 
                                                                (0x3fU 
                                                                 & ((IData)(5U) 
                                                                    * 
                                                                    (7U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                : 0U) 
                                                              << 7U)))))))
                                : 0U)))) : ((0x4000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                             ? ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13003U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                         >> 7U)))
                                                     ? 
                                                    (0x10113U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x1dU) 
                                                        | ((0x18000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                               << 0x18U)) 
                                                           | ((0x4000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                  << 0x15U)) 
                                                              | ((0x2000000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                     << 0x17U)) 
                                                                 | (0x1000000U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                       << 0x12U)))))))
                                                     : 
                                                    (0x37U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x11U) 
                                                        | ((0x1f000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                               << 0xaU)) 
                                                           | (0xf80U 
                                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))))
                                                   : 
                                                  (0x3003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x12003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1c00000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | (0xf80U 
                                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))
                                                   : 
                                                  (0x2003U 
                                                   | ((0x4000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                << 0x10U)) 
                                                            | ((((0x27U 
                                                                  >= 
                                                                  (0x3fU 
                                                                   & ((IData)(5U) 
                                                                      * 
                                                                      (7U 
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                  : 0U) 
                                                                << 0xfU) 
                                                               | (((0x27U 
                                                                    >= 
                                                                    (0x3fU 
                                                                     & ((IData)(5U) 
                                                                        * 
                                                                        (7U 
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                    : 0U) 
                                                                  << 7U)))))))))
                                             : ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13007U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 
                                                  (0x1bU 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)))))
                                                   : 
                                                  (0x3007U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   (0x1013U 
                                                    | (((0x2000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                            << 0xdU)) 
                                                        | (0x1f00000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                              << 0x12U))) 
                                                       | ((0xf8000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                              << 8U)) 
                                                          | (0xf80U 
                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir)))))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                        >> 5U)))
                                                    ? 0U
                                                    : 
                                                   (0x10013U 
                                                    | ((0x3c000000U 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                           << 0x13U)) 
                                                       | ((0x3000000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                              << 0xdU)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                 << 0x12U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                    << 0x10U)) 
                                                                | (((0x27U 
                                                                     >= 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
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
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                     : 0U) 
                                                                   << 7U)))))))))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
        = ((3U == (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))
            ? vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir
            : ((0x8000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                ? ((0x4000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                    ? ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? 0U : (0x13023U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? (0x1063U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x1cU) 
                                              | ((0xc000000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                        << 0x17U)) 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU) 
                                                       | ((0xc00U 
                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir) 
                                                          | ((0x300U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                 << 5U)) 
                                                             | (0x80U 
                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                   >> 5U)))))))))
                                : (0x3023U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? 0U : (0x12023U | 
                                        (((0xc000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xe00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? (0x63U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                            >> 0xcU)))) 
                                             << 0x1cU) 
                                            | ((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                      << 0x17U)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                           >> 7U)))))))
                                                        : 0U) 
                                                      << 0xfU) 
                                                     | ((0xc00U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir) 
                                                        | ((0x300U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                               << 5U)) 
                                                           | (0x80U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                 >> 5U)))))))))
                                : (0x2023U | (((0x4000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | ((0xc00U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir) 
                                                 | (0x200U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                       << 3U))))))))
                    : ((0x2000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                        ? ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? 0U : (0x13027U | 
                                        (((0x1c000000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                              << 0x13U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                 << 0xdU)) 
                                             | (0x1f00000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x12U)))) 
                                         | (0xc00U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? (0x6fU | ((0x80000000U 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                << 0x13U)) 
                                            | ((0x40000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x16U)) 
                                               | ((0x30000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                      << 0x13U)) 
                                                  | ((0x8000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                         << 0x15U)) 
                                                     | ((0x4000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                            << 0x13U)) 
                                                        | ((0x2000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                               << 0x17U)) 
                                                           | ((0x1000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  << 0xdU)) 
                                                              | ((0xe00000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                     << 0x12U)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                        << 8U)) 
                                                                    | (0xff000U 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 0xcU)))) 
                                                                          << 0xcU))))))))))))
                                : (0x3027U | (((0xc000000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                      << 0xdU)) 
                                                  | ((((0x27U 
                                                        >= 
                                                        (0x3fU 
                                                         & ((IData)(5U) 
                                                            * 
                                                            (7U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                           >> 2U)))))))
                                                        : 0U) 
                                                      << 0x14U) 
                                                     | (((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 7U)))))))
                                                          : 0U) 
                                                        << 0xfU)))) 
                                              | (0xc00U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)))))
                        : ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                            ? ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? 0U : ((0x1000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                         ? ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0x100073U
                                                 : 
                                                (0xe7U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | ((0xf8000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 8U)) 
                                                      | (0xf80U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)))))
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                 >> 2U)))
                                             ? ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                     >> 7U)))
                                                 ? 0U
                                                 : 
                                                (0x67U 
                                                 | (0xf8000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                       << 8U))))
                                             : (0x33U 
                                                | ((0x1f00000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                       << 0x12U)) 
                                                   | (0xf80U 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))))
                            : ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                ? ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                    ? ((0x400U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                        ? ((0x1000U 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                            ? ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                ? 0U
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                    ? 
                                                   (0x3bU 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U))))))
                                            : ((0x40U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                    ? 
                                                   (0x7033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))
                                                : (
                                                   (0x20U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                    ? 
                                                   (0x4033U 
                                                    | ((((0x27U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(5U) 
                                                              * 
                                                              (7U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                             >> 2U)))))))
                                                          : 0U) 
                                                        << 0x14U) 
                                                       | ((((0x27U 
                                                             >= 
                                                             (0x3fU 
                                                              & ((IData)(5U) 
                                                                 * 
                                                                 (7U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                             : 0U) 
                                                           << 0xfU) 
                                                          | (((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 7U)))))))
                                        : (0x7013U 
                                           | (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                              >> 0xcU)))) 
                                               << 0x19U) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                     << 0x12U)) 
                                                 | ((((0x27U 
                                                       >= 
                                                       (0x3fU 
                                                        & ((IData)(5U) 
                                                           * 
                                                           (7U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                          >> 7U)))))))
                                                       : 0U) 
                                                     << 0xfU) 
                                                    | (((0x27U 
                                                         >= 
                                                         (0x3fU 
                                                          & ((IData)(5U) 
                                                             * 
                                                             (7U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                            >> 7U)))))))
                                                         : 0U) 
                                                       << 7U))))))
                                    : (0x5013U | ((0xc0000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                      << 0x14U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                         << 0xdU)) 
                                                     | ((0x1f00000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                            << 0x12U)) 
                                                        | ((((0x27U 
                                                              >= 
                                                              (0x3fU 
                                                               & ((IData)(5U) 
                                                                  * 
                                                                  (7U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                              : 0U) 
                                                            << 0xfU) 
                                                           | (((0x27U 
                                                                >= 
                                                                (0x3fU 
                                                                 & ((IData)(5U) 
                                                                    * 
                                                                    (7U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                : 0U) 
                                                              << 7U)))))))
                                : 0U)))) : ((0x4000U 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                             ? ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13003U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                         >> 7U)))
                                                     ? 
                                                    (0x10113U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x1dU) 
                                                        | ((0x18000000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                               << 0x18U)) 
                                                           | ((0x4000000U 
                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                  << 0x15U)) 
                                                              | ((0x2000000U 
                                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                     << 0x17U)) 
                                                                 | (0x1000000U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                       << 0x12U)))))))
                                                     : 
                                                    (0x37U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                        >> 0xcU)))) 
                                                         << 0x11U) 
                                                        | ((0x1f000U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                               << 0xaU)) 
                                                           | (0xf80U 
                                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))))
                                                   : 
                                                  (0x3003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x12003U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1c00000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | (0xf80U 
                                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))
                                                   : 
                                                  (0x2003U 
                                                   | ((0x4000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x400000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                << 0x10U)) 
                                                            | ((((0x27U 
                                                                  >= 
                                                                  (0x3fU 
                                                                   & ((IData)(5U) 
                                                                      * 
                                                                      (7U 
                                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                                  : 0U) 
                                                                << 0xfU) 
                                                               | (((0x27U 
                                                                    >= 
                                                                    (0x3fU 
                                                                     & ((IData)(5U) 
                                                                        * 
                                                                        (7U 
                                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                    : 0U) 
                                                                  << 7U)))))))))
                                             : ((0x2000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  (0x13007U 
                                                   | ((0x1c000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 0x18U)) 
                                                      | ((0x2000000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((0x1800000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                << 0x12U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 
                                                  (0x1bU 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)))))
                                                   : 
                                                  (0x3007U 
                                                   | ((0xc000000U 
                                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                          << 0x15U)) 
                                                      | ((0x3800000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0xdU)) 
                                                         | ((((0x27U 
                                                               >= 
                                                               (0x3fU 
                                                                & ((IData)(5U) 
                                                                   * 
                                                                   (7U 
                                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 7U)))))))
                                                               : 0U) 
                                                             << 0xfU) 
                                                            | (((0x27U 
                                                                 >= 
                                                                 (0x3fU 
                                                                  & ((IData)(5U) 
                                                                     * 
                                                                     (7U 
                                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                 : 0U) 
                                                               << 7U)))))))
                                                 : 
                                                ((2U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 0U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    ((0x20U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                         >> 7U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                           >> 2U))))
                                                    ? 0U
                                                    : 
                                                   (0x1013U 
                                                    | (((0x2000000U 
                                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                            << 0xdU)) 
                                                        | (0x1f00000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                              << 0x12U))) 
                                                       | ((0xf8000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                              << 8U)) 
                                                          | (0xf80U 
                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir))))))
                                                  : 
                                                 ((1U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)
                                                   ? 
                                                  (0x13U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                      >> 0xcU)))) 
                                                       << 0x19U) 
                                                      | ((0x1f00000U 
                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                             << 0x12U)) 
                                                         | ((0xf8000U 
                                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                << 8U)) 
                                                            | (0xf80U 
                                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir)))))
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                        >> 5U)))
                                                    ? 0U
                                                    : 
                                                   (0x10013U 
                                                    | ((0x3c000000U 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                           << 0x13U)) 
                                                       | ((0x3000000U 
                                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                              << 0xdU)) 
                                                          | ((0x800000U 
                                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                 << 0x12U)) 
                                                             | ((0x400000U 
                                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                    << 0x10U)) 
                                                                | (((0x27U 
                                                                     >= 
                                                                     (0x3fU 
                                                                      & ((IData)(5U) 
                                                                         * 
                                                                         (7U 
                                                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
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
                                                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
                                                                                >> 2U)))))))
                                                                     : 0U) 
                                                                   << 7U)))))))))))));
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
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[0U] 
        = (IData)((((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_dat[
                                      (((IData)(0x33U) 
                                        + (0x1ffU & 
                                           ((IData)(0x34U) 
                                            * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))))) 
                                       >> 5U)])) << 
                      ((0U == (0x1fU & ((IData)(0x34U) 
                                        * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos)))))
                        ? 0x20U : ((IData)(0x40U) - 
                                   (0x1fU & ((IData)(0x34U) 
                                             * (7U 
                                                & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))))))) 
                     | (((0U == (0x1fU & ((IData)(0x34U) 
                                          * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos)))))
                          ? 0ULL : ((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_dat[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x34U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))))) 
                                                     >> 5U)])) 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x34U) 
                                            * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))))))) 
                        | ((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_dat[
                                           (0xfU & 
                                            (((IData)(0x34U) 
                                              * (7U 
                                                 & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))) 
                                             >> 5U))])) 
                           >> (0x1fU & ((IData)(0x34U) 
                                        * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))))))) 
                    << 0xcU) | (QData)((IData)((0xfffU 
                                                & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[0U])))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[1U] 
        = (IData)(((((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_dat[
                                       (((IData)(0x33U) 
                                         + (0x1ffU 
                                            & ((IData)(0x34U) 
                                               * (7U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))))) 
                                        >> 5U)])) << 
                       ((0U == (0x1fU & ((IData)(0x34U) 
                                         * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos)))))
                         ? 0x20U : ((IData)(0x40U) 
                                    - (0x1fU & ((IData)(0x34U) 
                                                * (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))))))) 
                      | (((0U == (0x1fU & ((IData)(0x34U) 
                                           * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos)))))
                           ? 0ULL : ((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_dat[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x34U) 
                                                           * 
                                                           (7U 
                                                            & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))))) 
                                                      >> 5U)])) 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x34U) 
                                             * (7U 
                                                & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))))))) 
                         | ((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_dat[
                                            (0xfU & 
                                             (((IData)(0x34U) 
                                               * (7U 
                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))) 
                                              >> 5U))])) 
                            >> (0x1fU & ((IData)(0x34U) 
                                         * (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))))))) 
                     << 0xcU) | (QData)((IData)((0xfffU 
                                                 & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[0U])))) 
                   >> 0x20U));
    if ((1U & (~ (IData)((0U != (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_satp[1U] 
                                 >> 0x1cU)))))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[0U] 
            = (IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[0U]))));
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[1U] 
            = (IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[0U]))) 
                       >> 0x20U));
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[2U] 
        = (IData)(((((0x33fU >= (0x3ffU & ((IData)(0x1a0U) 
                                           + (0x1ffU 
                                              & ((IData)(0x34U) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                     >> 4U)))))))
                      ? (0xfffffffffffffULL & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_dat[
                                                                (((IData)(0x33U) 
                                                                  + 
                                                                  (0x3ffU 
                                                                   & ((IData)(0x1a0U) 
                                                                      + 
                                                                      (0x1ffU 
                                                                       & ((IData)(0x34U) 
                                                                          * 
                                                                          (7U 
                                                                           & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                              >> 4U))))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x1a0U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x34U) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                              >> 4U)))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1a0U) 
                                                      + 
                                                      (0x1ffU 
                                                       & ((IData)(0x34U) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                              >> 4U))))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x1a0U) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(0x34U) 
                                                            * 
                                                            (7U 
                                                             & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                >> 4U)))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_dat[
                                                                    (((IData)(0x1fU) 
                                                                      + 
                                                                      (0x3ffU 
                                                                       & ((IData)(0x1a0U) 
                                                                          + 
                                                                          (0x1ffU 
                                                                           & ((IData)(0x34U) 
                                                                              * 
                                                                              (7U 
                                                                               & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                                >> 4U))))))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x1a0U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x34U) 
                                                             * 
                                                             (7U 
                                                              & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                 >> 4U))))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_dat[
                                                                     (0x1fU 
                                                                      & (((IData)(0x1a0U) 
                                                                          + 
                                                                          (0x1ffU 
                                                                           & ((IData)(0x34U) 
                                                                              * 
                                                                              (7U 
                                                                               & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                                >> 4U))))) 
                                                                         >> 5U))])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x1a0U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x34U) 
                                                             * 
                                                             (7U 
                                                              & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                 >> 4U))))))))))
                      : 0ULL) << 0xcU) | (QData)((IData)(
                                                         (0xfffU 
                                                          & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[2U])))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[3U] 
        = (IData)((((((0x33fU >= (0x3ffU & ((IData)(0x1a0U) 
                                            + (0x1ffU 
                                               & ((IData)(0x34U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                      >> 4U)))))))
                       ? (0xfffffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_dat[
                                                                 (((IData)(0x33U) 
                                                                   + 
                                                                   (0x3ffU 
                                                                    & ((IData)(0x1a0U) 
                                                                       + 
                                                                       (0x1ffU 
                                                                        & ((IData)(0x34U) 
                                                                           * 
                                                                           (7U 
                                                                            & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                               >> 4U))))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x1a0U) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x34U) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                               >> 4U)))))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x1a0U) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x34U) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                               >> 4U))))))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x1a0U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x34U) 
                                                             * 
                                                             (7U 
                                                              & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                 >> 4U)))))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_dat[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0x3ffU 
                                                                        & ((IData)(0x1a0U) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x34U) 
                                                                               * 
                                                                               (7U 
                                                                                & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                                >> 4U))))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x1a0U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x34U) 
                                                              * 
                                                              (7U 
                                                               & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                  >> 4U))))))))) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_dat[
                                                                      (0x1fU 
                                                                       & (((IData)(0x1a0U) 
                                                                           + 
                                                                           (0x1ffU 
                                                                            & ((IData)(0x34U) 
                                                                               * 
                                                                               (7U 
                                                                                & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                                >> 4U))))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x1a0U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x34U) 
                                                              * 
                                                              (7U 
                                                               & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                  >> 4U))))))))))
                       : 0ULL) << 0xcU) | (QData)((IData)(
                                                          (0xfffU 
                                                           & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[2U])))) 
                   >> 0x20U));
    if (vlSelf->__Vdlyvset__vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__ptr__v0) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__ptr[vlSelf->__Vdlyvdim0__vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__ptr__v0] 
            = vlSelf->__Vdlyvval__vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__ptr__v0;
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_ofst 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__b_addr;
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[1U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[1U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[2U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[2U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[3U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[3U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[4U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[4U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[5U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[5U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[6U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[6U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[7U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[7U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[8U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[8U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[9U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[9U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xaU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0xaU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xbU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0xbU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xcU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0xcU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xdU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0xdU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xeU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0xeU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xfU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0xfU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_miss 
        = ((8U & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U])
            ? 0U : (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__b_rqst)));
    if (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_valid) 
         & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_addr
             [0U] >> 6U) == (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__b_addr 
                             >> 6U)))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_miss 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rqst
            [0U];
    }
    if ((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_valid) 
          >> 1U) & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_addr
                     [1U] >> 6U) == (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__b_addr 
                                     >> 6U)))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_miss 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rqst
            [1U];
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_resp 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__b_rqst;
    if (((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
          >> 3U) & (0U != vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__b_strb))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_resp = 0U;
    }
    if ((1U & ((~ (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                   >> 3U)) & (~ ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_i_inst__DOT__sel) 
                                 >> 5U))))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_resp = 0U;
    }
    if ((IData)((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__fill) 
                  >> 6U) | (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__stale)))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_resp = 0U;
    }
    if (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_out) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_ofst 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_addr
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][0U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[1U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][1U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[2U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][2U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[3U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][3U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[4U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][4U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[5U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][5U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[6U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][6U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[7U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][7U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[8U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][8U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[9U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][9U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xaU] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][0xaU];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xbU] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][0xbU];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xcU] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][0xcU];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xdU] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][0xdU];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xeU] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][0xeU];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xfU] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rdat
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))][0xfU];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_miss = 0U;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_resp 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rqst
            [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_o_inst__DOT__sel) 
                    >> 4U))];
    }
    vlSelf->del_gpra[0U] = (0x3fU & (vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0U] 
                                     >> 3U));
    vlSelf->del_gpra[1U] = (0x3fU & (vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[4U] 
                                     >> 0x17U));
    vlSelf->del_gpra[2U] = (0x3fU & (vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[9U] 
                                     >> 0xbU));
    vlSelf->del_gpra[3U] = (0x3fU & ((vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0xeU] 
                                      << 1U) | (vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0xdU] 
                                                >> 0x1fU)));
    vlSelf->cmt_pc[0U] = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[3U])) 
                           << 0x24U) | (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[2U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[1U])) 
                                                   >> 0x1cU)));
    vlSelf->cmt_pc[1U] = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[8U])) 
                           << 0x30U) | (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[7U])) 
                                         << 0x10U) 
                                        | ((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[6U])) 
                                           >> 0x10U)));
    vlSelf->cmt_pc[2U] = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0xdU])) 
                           << 0x3cU) | (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0xcU])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0xbU])) 
                                           >> 4U)));
    vlSelf->cmt_pc[3U] = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0x11U])) 
                           << 0x28U) | (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0x10U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0xfU])) 
                                                   >> 0x18U)));
    vlSelf->cmt_ir[0U] = ((vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[1U] 
                           << 4U) | (vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0U] 
                                     >> 0x1cU));
    vlSelf->cmt_ir[1U] = ((vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[6U] 
                           << 0x10U) | (vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[5U] 
                                        >> 0x10U));
    vlSelf->cmt_ir[2U] = ((vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0xbU] 
                           << 0x1cU) | (vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0xaU] 
                                        >> 4U));
    vlSelf->cmt_ir[3U] = ((vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0xfU] 
                           << 8U) | (vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_rvalue[0xeU] 
                                     >> 0x18U));
    if (((~ (IData)(vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__rollback)) 
         & (0U != (0x4040U & vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__exe_last[0U])))) {
        vlSelf->cmt_pc[0U] = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_last[3U])) 
                               << 0x24U) | (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_last[2U])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_last[1U])) 
                                               >> 0x1cU)));
        vlSelf->cmt_ir[0U] = ((vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_last[1U] 
                               << 4U) | (vlSelf->vcore__DOT__inst__DOT__com_inst__DOT__dec_last[0U] 
                                         >> 0x1cU));
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_ready 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_rqst_b)))) 
                 | ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_rqst_b) 
                    == (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_resp_m))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm 
        = ((0xff00U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm)) 
           | (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(6,32,32, 
                                                      (7U 
                                                       & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos)), 3U)))
                         ? 0U : (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_prm[
                                 (((IData)(7U) + (0x3fU 
                                                  & VL_SHIFTL_III(6,32,32, 
                                                                  (7U 
                                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos)), 3U))) 
                                  >> 5U)] << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(6,32,32, 
                                                                 (7U 
                                                                  & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos)), 3U))))) 
                       | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_prm[
                          (1U & (VL_SHIFTL_III(6,32,32, 
                                               (7U 
                                                & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos)), 3U) 
                                 >> 5U))] >> (0x1fU 
                                              & VL_SHIFTL_III(6,32,32, 
                                                              (7U 
                                                               & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos)), 3U))))));
    if ((1U & (~ (IData)((0U != (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_satp[1U] 
                                 >> 0x1cU)))))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm 
            = (0xffU | (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm));
    }
    if ((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_resp_m) 
          == (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_rqst))) 
         & (~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_prm)))))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm 
            = (0xff00U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm));
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm 
        = ((0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm)) 
           | (0xff00U & ((((0U == (0x1fU & ((IData)(0x40U) 
                                            + (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, 
                                                               (7U 
                                                                & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                   >> 4U)), 3U)))))
                            ? 0U : (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_prm[
                                    (((IData)(7U) + 
                                      (0x7fU & ((IData)(0x40U) 
                                                + (0x3fU 
                                                   & VL_SHIFTL_III(6,32,32, 
                                                                   (7U 
                                                                    & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                       >> 4U)), 3U))))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x40U) 
                                                     + 
                                                     (0x3fU 
                                                      & VL_SHIFTL_III(6,32,32, 
                                                                      (7U 
                                                                       & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                          >> 4U)), 3U))))))) 
                          | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_prm[
                             (3U & (((IData)(0x40U) 
                                     + (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                              (7U 
                                                               & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                  >> 4U)), 3U))) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x40U) 
                                                    + 
                                                    (0x3fU 
                                                     & VL_SHIFTL_III(6,32,32, 
                                                                     (7U 
                                                                      & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos) 
                                                                         >> 4U)), 3U)))))) 
                         << 8U)));
    if ((1U & (~ (IData)((0U != (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_satp[3U] 
                                 >> 0x1cU)))))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[2U] 
            = (IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[2U]))));
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[3U] 
            = (IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[2U]))) 
                       >> 0x20U));
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm 
            = (0xff00U | (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm));
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp 
        = ((0xff00U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp)) 
           | ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))
               ? (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_rqst))
               : 0U));
    if ((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_resp_m) 
          == (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_rqst))) 
         & (~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_prm)))))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp 
            = ((0xff00U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp)) 
               | (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_rqst)));
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp 
        = ((0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp)) 
           | (((0x80U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__set_hitpos))
                ? (0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_rqst) 
                            >> 8U)) : 0U) << 8U));
    if ((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_resp_m) 
          == (0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_rqst) 
                       >> 8U))) & (~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_prm)))))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm 
            = (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm));
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp 
            = ((0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp)) 
               | (0xff00U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_rqst)));
    }
    if (vlSelf->__Vdlyvset__vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr__v0) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[vlSelf->__Vdlyvdim0__vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr__v0] 
            = vlSelf->__Vdlyvval__vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr__v0;
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_ofst 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_addr;
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[1U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[1U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[2U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[2U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[3U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[3U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[4U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[4U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[5U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[5U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[6U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[6U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[7U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[7U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[8U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[8U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[9U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[9U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xaU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xaU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xbU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xbU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xcU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xcU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xdU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xdU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xeU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xeU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xfU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xfU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_miss 
        = ((8U & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U])
            ? 0U : (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_rqst)));
    if (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_valid) 
         & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_addr
             [0U] >> 6U) == (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_addr 
                             >> 6U)))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_miss 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rqst
            [0U];
    }
    if ((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_valid) 
          >> 1U) & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_addr
                     [1U] >> 6U) == (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_addr 
                                     >> 6U)))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_miss 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rqst
            [1U];
    }
    if ((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_valid) 
          >> 2U) & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_addr
                     [2U] >> 6U) == (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_addr 
                                     >> 6U)))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_miss 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rqst
            [2U];
    }
    if ((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_valid) 
          >> 3U) & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_addr
                     [3U] >> 6U) == (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_addr 
                                     >> 6U)))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_miss 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rqst
            [3U];
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_resp 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_rqst;
    if (((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
          >> 3U) & (0U != vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_strb))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_resp = 0U;
    }
    if ((1U & ((~ (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                   >> 3U)) & (~ (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_i_inst__DOT__sel 
                                         >> 0x1aU)))))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_resp = 0U;
    }
    if ((IData)((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill) 
                  >> 6U) | (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__stale)))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_resp = 0U;
    }
    if (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_out) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_ofst 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_addr
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][0U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[1U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][1U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[2U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][2U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[3U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][3U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[4U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][4U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[5U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][5U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[6U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][6U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[7U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][7U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[8U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][8U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[9U] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][9U];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xaU] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][0xaU];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xbU] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][0xbU];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xcU] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][0xcU];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xdU] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][0xdU];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xeU] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][0xeU];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xfU] 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))][0xfU];
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_miss = 0U;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_resp 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rqst
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                            >> 0x18U)))];
    }
    if ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_rqst))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_m 
            = (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_rqst));
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_addr_m 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_addr;
    } else {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_m 
            = (0xffU & ((1U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                                       >> 0x1aU))) ? 
                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rqst
                        [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                                        >> 0x18U)))]
                         : 0U));
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_addr_m 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_addr
            [(3U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                            >> 0x18U)))];
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
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat[0U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_dat[0U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat[1U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_dat[1U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat[2U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_dat[2U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat[3U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_dat[3U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat[4U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_dat[4U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat[5U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_dat[5U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat[6U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_dat[6U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat[7U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_dat[7U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat[8U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_dat[8U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat[9U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_dat[9U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat[0xaU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_dat[0xaU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat[0xbU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_dat[0xbU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat[0xcU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_dat[0xcU];
    vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT____Vlvbound_hdd761258__0 
        = (0xfffffffffffffULL & (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[0U]))));
    if ((0x19fU >= (0x1ffU & ((IData)(0x34U) * (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_ptr))))) {
        VL_ASSIGNSEL_WQ(416,52,(0x1ffU & ((IData)(0x34U) 
                                          * (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_ptr))), vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_dat, vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT____Vlvbound_hdd761258__0);
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[1U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[1U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[2U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[2U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[3U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[3U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[4U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[4U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[5U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[5U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[6U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[6U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[7U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[7U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[8U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[8U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[9U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[9U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xaU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xaU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xbU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xbU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xcU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xcU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xdU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xdU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xeU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xeU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xfU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xfU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x10U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x10U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x11U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x11U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x12U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x12U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x13U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x13U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x14U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x14U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x15U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x15U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x16U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x16U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x17U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x17U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x18U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x18U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x19U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x19U];
    vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT____Vlvbound_h113e237c__0 
        = (0xfffffffffffffULL & (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[2U]))));
    if ((0x33fU >= (0x3ffU & ((IData)(0x34U) * (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_ptr))))) {
        VL_ASSIGNSEL_WQ(832,52,(0x3ffU & ((IData)(0x34U) 
                                          * (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_ptr))), vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat, vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT____Vlvbound_h113e237c__0);
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[0U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[0U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[1U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[1U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[2U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[2U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[3U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[3U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[4U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[4U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[5U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[5U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[6U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[6U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[7U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[7U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[8U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[8U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[9U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[9U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[0xaU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[0xaU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[0xbU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[0xbU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[0xcU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[0xcU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[0xdU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[0xdU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[0xeU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[0xeU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag[0xfU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_tag[0xfU];
    VL_ASSIGN_W(4096,vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_dat, vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_dat);
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__fill))) {
        VL_ASSIGNSEL_WQ(512,64,(0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_ptr), 6U)), vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_tag, vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__fill_tag);
        VL_ASSIGNSEL_WW(4096,512,(0xfffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_ptr), 9U)), vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_dat, vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__fill_dat);
    } else {
        __Vtemp_7[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0U] 
                          & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[0U])) 
                         | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[0U]);
        __Vtemp_7[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[1U] 
                          & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[1U])) 
                         | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[1U]);
        __Vtemp_7[2U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[2U] 
                          & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[2U])) 
                         | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[2U]);
        __Vtemp_7[3U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[3U] 
                          & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[3U])) 
                         | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[3U]);
        __Vtemp_7[4U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[4U] 
                          & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[4U])) 
                         | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[4U]);
        __Vtemp_7[5U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[5U] 
                          & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[5U])) 
                         | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[5U]);
        __Vtemp_7[6U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[6U] 
                          & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[6U])) 
                         | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[6U]);
        __Vtemp_7[7U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[7U] 
                          & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[7U])) 
                         | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[7U]);
        __Vtemp_7[8U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[8U] 
                          & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[8U])) 
                         | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[8U]);
        __Vtemp_7[9U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[9U] 
                          & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[9U])) 
                         | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[9U]);
        __Vtemp_7[0xaU] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0xaU] 
                            & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[0xaU])) 
                           | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[0xaU]);
        __Vtemp_7[0xbU] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0xbU] 
                            & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[0xbU])) 
                           | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[0xbU]);
        __Vtemp_7[0xcU] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0xcU] 
                            & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[0xcU])) 
                           | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[0xcU]);
        __Vtemp_7[0xdU] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0xdU] 
                            & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[0xdU])) 
                           | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[0xdU]);
        __Vtemp_7[0xeU] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0xeU] 
                            & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[0xeU])) 
                           | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[0xeU]);
        __Vtemp_7[0xfU] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitrdat[0xfU] 
                            & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitmask[0xfU])) 
                           | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__set_hitwdat[0xfU]);
        VL_ASSIGNSEL_WW(4096,512,(0xfffU & VL_SHIFTL_III(12,32,32, 
                                                         (7U 
                                                          & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U]), 9U)), vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__new_dat, __Vtemp_7);
    }
    vlSelf->vcore__DOT__inst__DOT__ic_rdat = (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[
                                                               (((IData)(0x3fU) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_offset), 3U))) 
                                                                >> 5U)])) 
                                               << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_offset), 3U)))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_offset), 3U))))) 
                                              | (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_offset), 3U)))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_offset), 3U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_offset), 3U))))) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[
                                                                    (0xfU 
                                                                     & (VL_SHIFTL_III(9,9,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_offset), 3U) 
                                                                        >> 5U))])) 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(9,9,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_offset), 3U)))));
    vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT____Vlvbound_ha1d0d9ad__0 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__b_rqst)))) 
                 | (0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_resp))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__b_ready 
        = vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT____Vlvbound_ha1d0d9ad__0;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_hb22dde62__0 
        = ((~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_miss)))) 
           & (0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_resp)));
    vlSelf->vcore__DOT__inst__DOT__ic_resp = ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_miss))
                                               ? 0U
                                               : (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_resp));
    if (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_ready) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_vadd_f 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_vadd_m;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_rqst_f 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_rqst_m;
    } else {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_vadd_f 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_vadd_b;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_rqst_f 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_rqst_b;
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_prm 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_prm;
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_prm 
        = (((~ (0xffULL << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_ptr), 3U)))) 
            & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__fil_prm) 
           | ((QData)((IData)((0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm)))) 
              << (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__req_ptr), 3U))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[0U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[0U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[1U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[1U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[2U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[2U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[3U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[3U];
    VL_ASSIGNSEL_WI(128,8,(0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_ptr), 3U)), vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm, 
                    (0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm) 
                              >> 8U)));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_perm 
        = (0xffU & (((0U == (0x1fU & VL_SHIFTL_III(7,32,32, 
                                                   (0xfU 
                                                    & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xaU]), 3U)))
                      ? 0U : (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[
                              (((IData)(7U) + (0x7fU 
                                               & VL_SHIFTL_III(7,32,32, 
                                                               (0xfU 
                                                                & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xaU]), 3U))) 
                               >> 5U)] << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & VL_SHIFTL_III(7,32,32, 
                                                              (0xfU 
                                                               & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xaU]), 3U))))) 
                    | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[
                       (3U & (VL_SHIFTL_III(7,32,32, 
                                            (0xfU & 
                                             vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xaU]), 3U) 
                              >> 5U))] >> (0x1fU & 
                                           VL_SHIFTL_III(7,32,32, 
                                                         (0xfU 
                                                          & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xaU]), 3U)))));
    if ((1U & (~ (IData)((0U != (0xfU & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_satp 
                                                 >> 0x3cU)))))))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_perm = 0xffU;
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready 
        = ((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready)) 
           | (1U & ((~ (IData)((0U != (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_rqst))))) 
                    | (0U != (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp))))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready 
        = ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready)) 
           | ((1U & ((0U != (0xff00U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp))) 
                     | (~ (IData)((0U != (0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_rqst) 
                                                   >> 8U))))))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__itlb__s_resp 
        = ((8U & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U])
            ? (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__b_rqst))
            : 0U);
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_resp 
        = ((0x10U & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xaU])
            ? (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_rqst))
            : 0U);
    if ((((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp) 
                    >> 8U)) == (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_rqst)) 
         & (~ (IData)((0U != (0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm) 
                                       >> 8U))))))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_perm = 0U;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_resp 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_rqst;
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__itlb__s_perm 
        = (0xffU & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__set_prm 
                            >> (0x3fU & VL_SHIFTL_III(6,32,32, 
                                                      (7U 
                                                       & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U]), 3U)))));
    if ((1U & (~ (IData)((0U != (0xfU & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__b_satp 
                                                 >> 0x3cU)))))))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__itlb__s_perm = 0xffU;
    }
    if ((((0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp)) 
          == (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__b_rqst)) 
         & (~ (IData)((0U != (0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm))))))) {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__itlb__s_resp 
            = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__b_rqst;
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__itlb__s_perm = 0U;
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[1U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[1U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[2U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[2U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[3U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[3U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[4U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[4U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[5U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[5U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[6U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[6U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[7U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[7U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[8U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[8U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[9U] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[9U];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0xaU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0xaU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0xbU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0xbU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0xcU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0xcU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0xdU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0xdU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0xeU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0xeU];
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0xfU] 
        = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0xfU];
    VL_ASSIGN_W(4096,vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat, vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat);
    if ((0x40U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill))) {
        VL_ASSIGNSEL_WQ(512,64,(0x1ffU & VL_SHIFTL_III(9,32,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_ptr), 6U)), vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag, vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_tag);
        VL_ASSIGNSEL_WW(4096,512,(0xfffU & VL_SHIFTL_III(12,32,32, (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_ptr), 9U)), vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat, vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat);
    } else {
        __Vtemp_10[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0U] 
                           & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0U])) 
                          | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0U]);
        __Vtemp_10[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[1U] 
                           & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[1U])) 
                          | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[1U]);
        __Vtemp_10[2U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[2U] 
                           & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[2U])) 
                          | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[2U]);
        __Vtemp_10[3U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[3U] 
                           & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[3U])) 
                          | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[3U]);
        __Vtemp_10[4U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[4U] 
                           & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[4U])) 
                          | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[4U]);
        __Vtemp_10[5U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[5U] 
                           & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[5U])) 
                          | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[5U]);
        __Vtemp_10[6U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[6U] 
                           & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[6U])) 
                          | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[6U]);
        __Vtemp_10[7U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[7U] 
                           & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[7U])) 
                          | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[7U]);
        __Vtemp_10[8U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[8U] 
                           & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[8U])) 
                          | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[8U]);
        __Vtemp_10[9U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[9U] 
                           & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[9U])) 
                          | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[9U]);
        __Vtemp_10[0xaU] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xaU] 
                             & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xaU])) 
                            | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xaU]);
        __Vtemp_10[0xbU] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xbU] 
                             & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xbU])) 
                            | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xbU]);
        __Vtemp_10[0xcU] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xcU] 
                             & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xcU])) 
                            | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xcU]);
        __Vtemp_10[0xdU] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xdU] 
                             & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xdU])) 
                            | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xdU]);
        __Vtemp_10[0xeU] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xeU] 
                             & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xeU])) 
                            | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xeU]);
        __Vtemp_10[0xfU] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xfU] 
                             & (~ vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xfU])) 
                            | vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xfU]);
        VL_ASSIGNSEL_WW(4096,512,(0xfffU & VL_SHIFTL_III(12,32,32, 
                                                         (7U 
                                                          & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U]), 9U)), vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat, __Vtemp_10);
    }
    vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT____Vlvbound_ha1d0d9ad__0 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_rqst)))) 
                 | (0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_resp))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready 
        = vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT____Vlvbound_ha1d0d9ad__0;
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_resp_m 
        = ((2U == (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_resp) 
                         >> 6U))) ? (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_resp)
            : 0U);
    if ((3U == (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_resp) 
                      >> 6U)))) {
        vlSelf->vcore__DOT__inst__DOT__dc_rdat = (((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[
                                                                   (((IData)(0x3fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_ofst)), 3U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(9,9,32, 
                                                                      (0x3fU 
                                                                       & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_ofst)), 3U)))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(9,9,32, 
                                                                      (0x3fU 
                                                                       & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_ofst)), 3U))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(9,9,32, 
                                                                        (0x3fU 
                                                                         & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_ofst)), 3U)))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[
                                                                       (((IData)(0x1fU) 
                                                                         + 
                                                                         (0x1ffU 
                                                                          & VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_ofst)), 3U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(9,9,32, 
                                                                         (0x3fU 
                                                                          & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_ofst)), 3U))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[
                                                                        (0xfU 
                                                                         & (VL_SHIFTL_III(9,9,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_ofst)), 3U) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(9,9,32, 
                                                                         (0x3fU 
                                                                          & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_ofst)), 3U)))));
        vlSelf->vcore__DOT__inst__DOT__dc_miss = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_miss;
        vlSelf->vcore__DOT__inst__DOT__dc_resp = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_resp;
    } else {
        if (((6U == (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_stt)) 
             & (0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_thr)))) {
            vlSelf->vcore__DOT__inst__DOT__dc_rdat 
                = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0U])));
            vlSelf->vcore__DOT__inst__DOT__dc_resp 
                = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_thr;
        } else {
            vlSelf->vcore__DOT__inst__DOT__dc_rdat = 0ULL;
            vlSelf->vcore__DOT__inst__DOT__dc_resp = 0U;
        }
        vlSelf->vcore__DOT__inst__DOT__dc_miss = 0U;
    }
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
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h4ca04b6f__0 
        = ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_acc) 
           + ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_hb22dde62__0)
               ? 1U : 0U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1done 
        = (1U < ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_acc) 
                 + ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__ic_resp))
                     ? 1U : 0U)));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0done 
        = (0U < ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_acc) 
                 + ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__ic_resp))
                     ? 1U : 0U)));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__f_rqst 
        = ((0xff00U & (((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready))
                         ? ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_rqst) 
                            >> 8U) : ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_rqst) 
                                      >> 8U)) << 8U)) 
           | (0xffU & ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready))
                        ? (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_rqst)
                        : (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_rqst))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__f_vadd[0U] 
        = (IData)(((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready))
                    ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_vadd[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_vadd[0U])))
                    : (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[0U])))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__f_vadd[1U] 
        = (IData)((((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready))
                     ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_vadd[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_vadd[0U])))
                     : (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[0U])))) 
                   >> 0x20U));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__f_vadd[2U] 
        = (IData)(((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready))
                    ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_vadd[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_vadd[2U])))
                    : (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[2U])))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__f_vadd[3U] 
        = (IData)((((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready))
                     ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_vadd[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_vadd[2U])))
                     : (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_vadd[2U])))) 
                   >> 0x20U));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__f_satp[0U] 
        = (IData)(((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready))
                    ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_satp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_satp[0U])))
                    : (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_satp[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_satp[0U])))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__f_satp[1U] 
        = (IData)((((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready))
                     ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_satp[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_satp[0U])))
                     : (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_satp[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_satp[0U])))) 
                   >> 0x20U));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__f_satp[2U] 
        = (IData)(((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready))
                    ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_satp[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_satp[2U])))
                    : (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_satp[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_satp[2U])))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__f_satp[3U] 
        = (IData)((((2U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_ready))
                     ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_satp[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__stlb__s_satp[2U])))
                     : (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_satp[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__stlb__DOT__b_satp[2U])))) 
                   >> 0x20U));
    vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT____Vlvbound_ha1d0d9ad__0 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__b_rqst)))) 
                 | (0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__itlb__s_resp))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT__b_ready 
        = vcore__DOT__inst__DOT__mmu_inst__DOT__itlb__DOT____Vlvbound_ha1d0d9ad__0;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h7c6ab34c__0 
        = ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_trn) 
           + ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__itlb__s_resp))
               ? 1U : 0U));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_trans_fwd 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_trans;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[0U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[0U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[1U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[1U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[2U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[2U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[3U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[3U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[4U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[4U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[5U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[5U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[6U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[6U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[7U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[7U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[8U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[8U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[9U] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[9U];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[0xaU] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[0xaU];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[0xbU] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[0xbU];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[0xcU] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[0xcU];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[0xdU] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[0xdU];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[0xeU] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[0xeU];
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd[0xfU] 
        = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd[0xfU];
    vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT____Vlvbound_ha1d0d9ad__0 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_rqst)))) 
                 | (0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_resp))));
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_ready 
        = vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT____Vlvbound_ha1d0d9ad__0;
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd 
        = ((0xfeU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd)) 
           | (1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_trans) 
                    & (~ (IData)((0U != (3U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck))))))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd 
        = ((0xfdU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd)) 
           | (2U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_trans) 
                    & ((~ (IData)((0U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                                                >> 2U))))) 
                       << 1U))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd 
        = ((0xfbU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd)) 
           | (4U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_trans) 
                    & ((~ (IData)((0U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                                                >> 4U))))) 
                       << 2U))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd 
        = ((0xf7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd)) 
           | (8U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_trans) 
                    & ((~ (IData)((0U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                                                >> 6U))))) 
                       << 3U))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd 
        = ((0xefU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd)) 
           | (0x10U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_trans) 
                       & ((~ (IData)((0U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                                                   >> 8U))))) 
                          << 4U))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd 
        = ((0xdfU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd)) 
           | (0x20U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_trans) 
                       & ((~ (IData)((0U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                                                   >> 0xaU))))) 
                          << 5U))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd 
        = ((0xbfU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd)) 
           | (0x40U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_trans) 
                       & ((~ (IData)((0U != (3U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                                                   >> 0xcU))))) 
                          << 6U))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd 
        = ((0x7fU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd)) 
           | ((IData)((((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_trans) 
                        >> 7U) & (~ (IData)((0U != 
                                             (3U & 
                                              ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_chck) 
                                               >> 0xeU))))))) 
              << 7U));
    if ((2U == (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_resp) 
                      >> 5U)))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd 
            = ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd) 
               | (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_resp)))));
    }
    if ((6U == (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_resp) 
                      >> 5U)))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd 
            = ((~ ((IData)(1U) << (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_resp)))) 
               & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_chckd));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans 
        = ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_valid) 
           & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_trans)));
    if ((2U == (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_resp) 
                      >> 5U)))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans 
            = ((~ ((IData)(1U) << (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_resp)))) 
               & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off 
        = ((0xfcU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off)) 
           | ((2U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans) 
                      >> (7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_front)))) 
                     << 1U)) | (1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans) 
                                      >> (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_front)))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off 
        = ((0xf3U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off)) 
           | ((8U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans) 
                      >> (7U & ((IData)(3U) + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_front)))) 
                     << 3U)) | (4U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans) 
                                       >> (7U & ((IData)(2U) 
                                                 + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_front)))) 
                                      << 2U))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off 
        = ((0xcfU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off)) 
           | ((0x20U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans) 
                         >> (7U & ((IData)(5U) + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_front)))) 
                        << 5U)) | (0x10U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans) 
                                             >> (7U 
                                                 & ((IData)(4U) 
                                                    + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_front)))) 
                                            << 4U))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off 
        = ((0x3fU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans_off)) 
           | ((0x80U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans) 
                         >> (7U & ((IData)(7U) + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_front)))) 
                        << 7U)) | (0x40U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_to_trans) 
                                             >> (7U 
                                                 & ((IData)(6U) 
                                                    + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_front)))) 
                                            << 6U))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans 
        = ((((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_valid) 
             & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_trans))) 
            & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_csr))) 
           & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_fence)));
    if ((3U == (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_resp) 
                      >> 5U)))) {
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_trans_fwd 
            = ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_trans_fwd) 
               | (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_resp)))));
        VL_ASSIGNSEL_WQ(512,64,(0x1ffU & VL_SHIFTL_III(9,32,32, 
                                                       (7U 
                                                        & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_resp)), 6U)), vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_padd_fwd, vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_padd);
        vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans 
            = ((~ ((IData)(1U) << (7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dtlb__s_resp)))) 
               & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans));
    }
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off 
        = ((0xfcU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off)) 
           | ((2U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans) 
                      >> (7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
                     << 1U)) | (1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans) 
                                      >> (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off 
        = ((0xf3U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off)) 
           | ((8U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans) 
                      >> (7U & ((IData)(3U) + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
                     << 3U)) | (4U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans) 
                                       >> (7U & ((IData)(2U) 
                                                 + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
                                      << 2U))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off 
        = ((0xcfU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off)) 
           | ((0x20U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans) 
                         >> (7U & ((IData)(5U) + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
                        << 5U)) | (0x10U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans) 
                                             >> (7U 
                                                 & ((IData)(4U) 
                                                    + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
                                            << 4U))));
    vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off 
        = ((0x3fU & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans_off)) 
           | ((0x80U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans) 
                         >> (7U & ((IData)(7U) + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
                        << 7U)) | (0x40U & (((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_to_trans) 
                                             >> (7U 
                                                 & ((IData)(6U) 
                                                    + (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front)))) 
                                            << 6U))));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f1pgft 
        = (1U & ((1U < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_trn))
                  ? vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_pgft
                 [(7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front)))]
                  : (~ ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__itlb__s_perm) 
                        >> 3U))));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0pgft 
        = (1U & ((0U < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_trn))
                  ? vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_pgft
                 [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_front]
                  : (~ ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__itlb__s_perm) 
                        >> 3U))));
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
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__icache__s_rqst 
        = ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h4ca04b6f__0 
            < vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h7c6ab34c__0)
            ? 0x80U : 0U);
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
}
