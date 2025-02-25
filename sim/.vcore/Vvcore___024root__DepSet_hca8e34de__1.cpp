// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvcore.h for the primary calling header

#include "Vvcore__pch.h"
#include "Vvcore___024root.h"

extern const VlWide<47>/*1503:0*/ Vvcore__ConstPool__CONST_h959fe817_0;
extern const VlWide<16>/*511:0*/ Vvcore__ConstPool__CONST_h8b2f9f06_0;
extern const VlWide<16>/*511:0*/ Vvcore__ConstPool__CONST_he05e7219_0;

VL_INLINE_OPT void Vvcore___024root___ico_sequent__TOP__1(Vvcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root___ico_sequent__TOP__1\n"); );
    // Init
    SData/*10:0*/ vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0;
    vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0 = 0;
    IData/*31:0*/ __Vilp;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<5>/*159:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_60;
    VlWide<5>/*159:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_81;
    VlWide<5>/*159:0*/ __Vtemp_82;
    VlWide<3>/*95:0*/ __Vtemp_110;
    VlWide<5>/*159:0*/ __Vtemp_111;
    VlWide<3>/*95:0*/ __Vtemp_131;
    VlWide<5>/*159:0*/ __Vtemp_132;
    VlWide<3>/*95:0*/ __Vtemp_160;
    VlWide<5>/*159:0*/ __Vtemp_161;
    VlWide<3>/*95:0*/ __Vtemp_181;
    VlWide<5>/*159:0*/ __Vtemp_182;
    VlWide<3>/*95:0*/ __Vtemp_210;
    VlWide<5>/*159:0*/ __Vtemp_211;
    VlWide<16>/*511:0*/ __Vtemp_348;
    VlWide<16>/*511:0*/ __Vtemp_356;
    // Body
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
    if ((0U != (0x50000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]))) {
        __Vtemp_31[0U] = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 0xfU));
        __Vtemp_31[1U] = 0U;
    } else {
        __Vtemp_31[0U] = (((IData)((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                       >> 0xfU))))) 
                           & (- (IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4ee143b4__0) 
                                         | (0U != (0x11005b50U 
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
        __Vtemp_31[1U] = (((IData)(((QData)((IData)(
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
                                        << 0x37U) | 
                                       (((QData)((IData)(
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
    __Vtemp_32[2U] = ((0x80U & ((- (IData)((1U & (~ 
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
                                           (1U & ((
                                                   (~ 
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
        = __Vtemp_31[0U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[1U] 
        = __Vtemp_31[1U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[2U] 
        = __Vtemp_32[2U];
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
    __Vtemp_61[2U] = (((0x3eU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
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
        __Vtemp_60[0U] = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                   >> 0x14U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[0U] 
            = __Vtemp_60[0U];
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[1U] = 0U;
    } else {
        __Vtemp_60[0U] = ((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                     >> 0x14U) & (- (IData)((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x1105000U 
                                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))))) 
                          | (((0x20U | (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                 >> 0x14U))) 
                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hea62c44b__0[0U]) 
                             | (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__imm) 
                                 & (- (IData)((1U & (IData)(
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
            = __Vtemp_60[0U];
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
        = __Vtemp_61[2U];
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
        __Vtemp_81[0U] = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                   >> 0xfU));
        __Vtemp_81[1U] = 0U;
    } else {
        __Vtemp_81[0U] = (((IData)((QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                       >> 0xfU))))) 
                           & (- (IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hce7da2ac__0) 
                                         | (0U != (0x11005b50U 
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
        __Vtemp_81[1U] = (((IData)(((QData)((IData)(
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
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                         << 0xdU) | 
                                        ((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                         >> 0x13U))) 
                                      >> 0x20U)) & 
                             (- (IData)((IData)((0U 
                                                 != 
                                                 (0xa000020U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))))));
    }
    __Vtemp_82[2U] = ((0x80U & ((- (IData)((1U & (~ 
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
                                           (1U & ((
                                                   (~ 
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
        = __Vtemp_81[0U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[1U] 
        = __Vtemp_81[1U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[2U] 
        = __Vtemp_82[2U];
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
    __Vtemp_111[2U] = (((0x3eU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
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
        __Vtemp_110[0U] = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                    >> 0x14U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[0U] 
            = __Vtemp_110[0U];
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[1U] = 0U;
    } else {
        __Vtemp_110[0U] = ((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
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
            = __Vtemp_110[0U];
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
        = __Vtemp_111[2U];
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
        __Vtemp_131[0U] = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                    >> 0xfU));
        __Vtemp_131[1U] = 0U;
    } else {
        __Vtemp_131[0U] = (((IData)((QData)((IData)(
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
        __Vtemp_131[1U] = (((IData)(((QData)((IData)(
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
    __Vtemp_132[2U] = ((0x80U & ((- (IData)((1U & (~ 
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
        = __Vtemp_131[0U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[1U] 
        = __Vtemp_131[1U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[2U] 
        = __Vtemp_132[2U];
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
    __Vtemp_161[2U] = (((0x3eU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                   >> 0x13U) & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                               >> 0xbU)))) 
                                                << 1U))) 
                        | ((0x40U | (0x3eU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                              >> 0x1aU))) 
                           & ((- (IData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hf98edd2f__0))) 
                              << 1U))) | ((IData)((0U 
                                                   != 
                                                   (0x60000U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U])))
                                           ? 0U : (1U 
                                                   & ((- (IData)((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x1105000U 
                                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))) 
                                                      | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_ha45b1a1c__0[2U]))));
    if ((0U != (0x60000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]))) {
        __Vtemp_160[0U] = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                    >> 0x14U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[0U] 
            = __Vtemp_160[0U];
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[1U] = 0U;
    } else {
        __Vtemp_160[0U] = ((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                      >> 0x14U) & (- (IData)((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x1105000U 
                                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))))) 
                           | (((0x20U | (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                  >> 0x14U))) 
                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_ha45b1a1c__0[0U]) 
                              | (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__imm) 
                                  & (- (IData)((1U 
                                                & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0x1000207bU 
                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) 
                                                           | (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2181d1bd__0))))))) 
                                 | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__delta) 
                                    & (- (IData)((IData)(
                                                         (0U 
                                                          != 
                                                          (0xa000000U 
                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)))))))));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[0U] 
            = __Vtemp_160[0U];
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[1U] 
            = ((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__imm 
                        >> 0x20U)) & (- (IData)((1U 
                                                 & (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x1000207bU 
                                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) 
                                                            | (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h2181d1bd__0)))))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[2U] 
        = __Vtemp_161[2U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[4U] 
        = ((((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__imm) 
             & (- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                 >> 0xbU))))) << 2U) 
           | (2U & (((- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                       >> 0xbU)))) 
                     | (- (IData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hf98edd2f__0)))) 
                    << 1U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[5U] 
        = ((((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__imm) 
             & (- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                 >> 0xbU))))) >> 0x1eU) 
           | (((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__imm 
                        >> 0x20U)) & (- (IData)((1U 
                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                    >> 0xbU))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[6U] 
        = (((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__imm 
                     >> 0x20U)) & (- (IData)((1U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                               >> 0xbU))))) 
           >> 0x1eU);
    if ((0U != (0x50000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]))) {
        __Vtemp_181[0U] = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                    >> 0xfU));
        __Vtemp_181[1U] = 0U;
    } else {
        __Vtemp_181[0U] = (((IData)((QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 0xfU))))) 
                            & (- (IData)(((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4fca5eea__0) 
                                          | (0U != 
                                             (0x11005b50U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)))))) 
                           | (((0x20U | (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                  >> 0xfU))) 
                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hae679114__0[0U]) 
                              | ((IData)((((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                                           << 0x39U) 
                                          | (((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                              << 0x19U) 
                                             | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                >> 7U)))) 
                                 & (- (IData)((IData)(
                                                      (0U 
                                                       != 
                                                       (0xa000020U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))))));
        __Vtemp_181[1U] = (((IData)(((QData)((IData)(
                                                     (0x1fU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                         >> 0xfU)))) 
                                     >> 0x20U)) & (- (IData)(
                                                             ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4fca5eea__0) 
                                                              | (0U 
                                                                 != 
                                                                 (0x11005b50U 
                                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)))))) 
                           | ((IData)(((((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                                         << 0x39U) 
                                        | (((QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                            << 0x19U) 
                                           | ((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                              >> 7U))) 
                                       >> 0x20U)) & 
                              (- (IData)((IData)((0U 
                                                  != 
                                                  (0xa000020U 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)))))));
    }
    __Vtemp_182[2U] = ((0x80U & ((- (IData)((1U & (~ 
                                                   ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                     >> 0xbU) 
                                                    & (1U 
                                                       == 
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                        >> 0x1bU))))))) 
                                 << 1U)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000U 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U])))
                                             ? 1U : 
                                            (1U & (
                                                   ((~ 
                                                     ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                       >> 0x1cU) 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                         >> 0xeU))) 
                                                    & (- (IData)(
                                                                 ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h4fca5eea__0) 
                                                                  | (0U 
                                                                     != 
                                                                     (0x11005b50U 
                                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)))))) 
                                                   | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hae679114__0[2U]))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[0U] 
        = __Vtemp_181[0U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[1U] 
        = __Vtemp_181[1U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[2U] 
        = __Vtemp_182[2U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[4U] 
        = ((0x7cU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                      >> 0xdU) & ((- (IData)((1U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                               >> 0xbU)))) 
                                  << 2U))) | (2U & 
                                              ((- (IData)(
                                                          (1U 
                                                           & (~ 
                                                              ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                                >> 0xbU) 
                                                               & (1U 
                                                                  == 
                                                                  (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                                   >> 0x1bU))))))) 
                                               << 1U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[5U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[6U] 
        = (4U & ((- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                   >> 0xbU)))) << 2U));
    __Vtemp_211[2U] = (((0x3eU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                   >> 0x13U) & ((- (IData)(
                                                           (1U 
                                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                               >> 0xbU)))) 
                                                << 1U))) 
                        | ((0x40U | (0x3eU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                              >> 0x1aU))) 
                           & ((- (IData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h82d79c39__0))) 
                              << 1U))) | ((IData)((0U 
                                                   != 
                                                   (0x60000U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U])))
                                           ? 0U : (1U 
                                                   & ((- (IData)((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x1105000U 
                                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))) 
                                                      | vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hae679114__0[2U]))));
    if ((0U != (0x60000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]))) {
        __Vtemp_210[0U] = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                    >> 0x14U));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[0U] 
            = __Vtemp_210[0U];
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[1U] = 0U;
    } else {
        __Vtemp_210[0U] = ((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                      >> 0x14U) & (- (IData)((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x1105000U 
                                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))))) 
                           | (((0x20U | (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                  >> 0x14U))) 
                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_hae679114__0[0U]) 
                              | (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__imm) 
                                  & (- (IData)((1U 
                                                & (IData)(
                                                          ((0U 
                                                            != 
                                                            (0x1000207bU 
                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) 
                                                           | (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h98fad58f__0))))))) 
                                 | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__delta) 
                                    & (- (IData)((IData)(
                                                         (0U 
                                                          != 
                                                          (0xa000000U 
                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)))))))));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[0U] 
            = __Vtemp_210[0U];
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[1U] 
            = ((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__imm 
                        >> 0x20U)) & (- (IData)((1U 
                                                 & (IData)(
                                                           ((0U 
                                                             != 
                                                             (0x1000207bU 
                                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) 
                                                            | (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h98fad58f__0)))))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[2U] 
        = __Vtemp_211[2U];
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[3U] = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[4U] 
        = ((((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__imm) 
             & (- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                 >> 0xbU))))) << 2U) 
           | (2U & (((- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                       >> 0xbU)))) 
                     | (- (IData)((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____VdfgTmp_h82d79c39__0)))) 
                    << 1U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[5U] 
        = ((((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__imm) 
             & (- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                 >> 0xbU))))) >> 0x1eU) 
           | (((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__imm 
                        >> 0x20U)) & (- (IData)((1U 
                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                    >> 0xbU))))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[6U] 
        = (((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__imm 
                     >> 0x20U)) & (- (IData)((1U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                               >> 0xbU))))) 
           >> 0x1eU);
    __Vilp = 0U;
    while ((__Vilp <= 0x2dU)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[__Vilp] 
            = Vvcore__ConstPool__CONST_h959fe817_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU] 
        = ((0xfff80000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU]) 
           | Vvcore__ConstPool__CONST_h959fe817_0[0x2eU]);
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xfU] 
        = ((0xfffeffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xfU]) 
           | (0x10000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                          << 7U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xcU] 
        = ((0x1fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xcU]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                        << 0x37U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                      << 0x17U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                   >> 9U)))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xdU] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                      << 0x37U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                    << 0x17U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                 >> 9U)))) 
            >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                                    << 0x37U) | (((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                                  << 0x17U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                    >> 9U))) 
                                  >> 0x20U)) << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xeU] 
        = ((0xffffffe0U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xeU]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                         << 0x37U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                       << 0x17U) | 
                                      ((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                       >> 9U))) >> 0x20U)) 
              >> 0x1bU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbU] 
        = ((0xffffffe7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbU]) 
           | (0x18U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U] 
                       >> 4U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xeU] 
        = ((0xffffff9fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xeU]) 
           | (0x60U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U] 
                       << 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbU] 
        = ((0x1fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbU]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xcU] 
        = ((0xffffffe0U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xcU]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
              >> 0x1bU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbU] 
        = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbU]) 
           | (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__delta));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaU] 
        = ((0xe7ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaU]) 
           | ((((IData)((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct)))) 
                << 1U) | (0U != (0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U])))))) 
              << 0x1bU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaU] 
        = ((0x9fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaU]) 
           | ((((IData)((0U != (0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)))) 
                << 1U) | (0U != (0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U]))) 
              << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaU] 
        = ((0x7fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaU]) 
           | ((IData)((0U != (0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct))) 
              << 0x1fU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[8U] 
        = ((0x7ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[8U]) 
           | ((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U])))) 
                          | (QData)((IData)((0x7ffU 
                                             & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct))))) 
                         | (QData)((IData)((0x1ffffffU 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U])))) 
                        | (QData)((IData)((0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct))))) 
                       | (QData)((IData)((0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct))))) 
              << 0x1bU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[9U] 
        = (((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U])))) 
                        | (QData)((IData)((0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct))))) 
                       | (QData)((IData)((0x1ffffffU 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U])))) 
                      | (QData)((IData)((0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct))))) 
                     | (QData)((IData)((0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct))))) 
            >> 5U) | ((IData)(((((((0x1fffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U])))) 
                                   | (QData)((IData)(
                                                     (0x7ffU 
                                                      & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct))))) 
                                  | (QData)((IData)(
                                                    (0x1ffffffU 
                                                     & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U])))) 
                                 | (QData)((IData)(
                                                   (0x1fU 
                                                    & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct))))) 
                                | (QData)((IData)((0xffU 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct)))) 
                               >> 0x20U)) << 0x1bU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaU] 
        = ((0xf8000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaU]) 
           | ((IData)(((((((0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[0U])))) 
                           | (QData)((IData)((0x7ffU 
                                              & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct))))) 
                          | (QData)((IData)((0x1ffffffU 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U])))) 
                         | (QData)((IData)((0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct))))) 
                        | (QData)((IData)((0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct)))) 
                       >> 0x20U)) >> 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[6U] 
        = ((0x3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[6U]) 
           | (((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)
                ? (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                            >> 0xfU)) : (IData)((((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                                                  << 0x37U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                                     << 0x17U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                       >> 9U))))) 
              << 0x1aU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[7U] 
        = ((((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)
              ? (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                          >> 0xfU)) : (IData)((((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                                                << 0x37U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                                   << 0x17U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                     >> 9U))))) 
            >> 6U) | (((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)
                        ? 0U : (IData)(((((QData)((IData)(
                                                          vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                                          << 0x37U) 
                                         | (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                             << 0x17U) 
                                            | ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                               >> 9U))) 
                                        >> 0x20U))) 
                      << 0x1aU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[8U] 
        = ((0xf8000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[8U]) 
           | ((((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)
                 ? 0U : (IData)(((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                                   << 0x37U) | (((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                                 << 0x17U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                   >> 9U))) 
                                 >> 0x20U))) >> 6U) 
              | (((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)
                   ? 1U : 0U) << 0x1aU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[4U] 
        = ((0x3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[4U]) 
           | ((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__imm 
                       & (- (QData)((IData)((0U != 
                                             (0xb000000U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))))) 
              << 0x1aU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[5U] 
        = (((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__imm 
                     & (- (QData)((IData)((0U != (0xb000000U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))))) 
            >> 6U) | ((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__imm 
                                & (- (QData)((IData)(
                                                     (0U 
                                                      != 
                                                      (0xb000000U 
                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)))))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[6U] 
        = ((0xfc000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[6U]) 
           | ((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__imm 
                        & (- (QData)((IData)((0U != 
                                              (0xb000000U 
                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)))))) 
                       >> 0x20U)) >> 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U] 
        = ((0xffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[0U] 
              << 0x18U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[1U] 
        = ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[0U] 
            >> 8U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[1U] 
                      << 0x18U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[2U] 
        = ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[1U] 
            >> 8U) | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[0U] 
                       << 0x19U) | (0x1000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[2U] 
                                                  << 0x18U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[3U] 
        = ((0xffffffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[0U] 
                         >> 7U)) | ((0x1000000U & (
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[0U] 
                                                   >> 7U)) 
                                    | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[1U] 
                                       << 0x19U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[4U] 
        = ((0xfc000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[4U]) 
           | ((0xffffffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[1U] 
                            >> 7U)) | ((0x1000000U 
                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[1U] 
                                           >> 7U)) 
                                       | (0x2000000U 
                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[2U] 
                                             << 0x19U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U] 
        = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U]) 
           | (7U & vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U]));
    if ((1U & (~ (IData)((3U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbU] 
                                       >> 5U))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbU] 
            = (0x1fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbU]);
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xcU] 
            = (0xffffffe0U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xcU]);
    }
    if ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[2U])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U] 
            = ((0xfffe03ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U]) 
               | (0x1fc00U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[0U] 
                              << 0xaU)));
    } else if ((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U] 
            = ((0xfffe03ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U]) 
               | (0x7c00U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                             >> 5U)));
    }
    if ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[2U])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U] 
            = ((0xff01ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U]) 
               | (0xfe0000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[0U] 
                               << 0x11U)));
    } else if ((0x100U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U] 
            = ((0xff01ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U]) 
               | (0x3e0000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                               >> 3U)));
    } else if ((0x200U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U] 
            = ((0xff01ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U]) 
               | (0xfffe0000U & (0x400000U | (0x3e0000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                 >> 3U)))));
    } else if (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                 >> 0xbU) & (3U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                    >> 0x1bU)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U] 
            = ((0xff01ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U]) 
               | (0x3e0000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                               >> 3U)));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U] 
        = ((0xfffffc07U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0U]) 
           | (((IData)((0U != (0x2f800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U])))
                ? (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                            >> 7U)) : (((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                   >> 7U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x1a007071U 
                                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
                                                                   | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                                       >> 0xbU) 
                                                                      & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                                                << 0x1bU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                                                >> 5U))))))))))))) 
                                        | ((0x20U | 
                                            (0x1fU 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                >> 7U))) 
                                           & (- (IData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x100002U 
                                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))))) 
                                       | (0x40U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xf0000U 
                                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))) 
                                                                 | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                                     >> 0xbU) 
                                                                    & (0U 
                                                                       != 
                                                                       (0x1fffffffffULL 
                                                                        & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                                            << 0x1bU) 
                                                                           | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                                              >> 5U)))))))))))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1fU] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1fU]) 
           | (0xfffffeU & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                            >> 8U) & (((0U != (0x1fffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                   << 0x1bU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                     >> 5U)))) 
                                       | (IData)(((
                                                   ((0ULL 
                                                     != 
                                                     (0x3ff800ULL 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct)) 
                                                    | (0U 
                                                       != 
                                                       (0x3e0U 
                                                        & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)))) 
                                                   | (0U 
                                                      != 
                                                      (0xff00U 
                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct))) 
                                                  | (0U 
                                                     != 
                                                     (0x1ffffffU 
                                                      & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                                                          << 7U) 
                                                         | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
                                                            >> 0x19U))))))) 
                                      << 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1bU] 
        = ((0x3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1bU]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                        << 0x37U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                      << 0x17U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                   >> 9U)))) 
              << 0x16U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1cU] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                      << 0x37U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                    << 0x17U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                 >> 9U)))) 
            >> 0xaU) | ((IData)(((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                                   << 0x37U) | (((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                                 << 0x17U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                   >> 9U))) 
                                 >> 0x20U)) << 0x16U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1dU] 
        = ((0xffc00000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1dU]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                         << 0x37U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                       << 0x17U) | 
                                      ((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                       >> 9U))) >> 0x20U)) 
              >> 0xaU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU] 
        = ((0xffcfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU]) 
           | (0x300000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U] 
                           << 0xdU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1dU] 
        = ((0xff3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1dU]) 
           | (0xc00000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U] 
                           << 0x13U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU] 
        = ((0x3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
              << 0x16U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1bU] 
        = ((0xffc00000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1bU]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
              >> 0xaU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU] 
        = ((0xfff1ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU]) 
           | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__delta) 
              << 0x11U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU] 
        = ((0xffffcfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU]) 
           | ((((IData)((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                                  >> 0xbU))))) 
                << 1U) | (0U != (0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                   << 0x1bU) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                >> 5U))))) 
              << 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU] 
        = ((0xffff3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU]) 
           | ((((IData)((0U != (0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct) 
                                         >> 5U)))) 
                << 1U) | (0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                                                << 7U) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
                                                  >> 0x19U))))) 
              << 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU] 
        = ((0xfffeffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU]) 
           | ((IData)((0U != (0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
                                       >> 8U)))) << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x18U] 
        = ((0xfffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x18U]) 
           | ((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                               << 0x1bU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                 >> 5U))) 
                          | (QData)((IData)((0x7ffU 
                                             & (IData)(
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                                        >> 0xbU)))))) 
                         | (QData)((IData)((0x1ffffffU 
                                            & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                                                << 7U) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
                                                  >> 0x19U)))))) 
                        | (QData)((IData)((0x1fU & 
                                           ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct) 
                                            >> 5U))))) 
                       | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
                                                   >> 8U)))))) 
              << 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x19U] 
        = (((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                               >> 5U))) 
                        | (QData)((IData)((0x7ffU & (IData)(
                                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                                             >> 0xbU)))))) 
                       | (QData)((IData)((0x1ffffffU 
                                          & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                                              << 7U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
                                                >> 0x19U)))))) 
                      | (QData)((IData)((0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct) 
                                                  >> 5U))))) 
                     | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
                                                 >> 8U)))))) 
            >> 0x14U) | ((IData)(((((((0x1fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                           << 0x1bU) 
                                          | ((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                             >> 5U))) 
                                      | (QData)((IData)(
                                                        (0x7ffU 
                                                         & (IData)(
                                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                                                    >> 0xbU)))))) 
                                     | (QData)((IData)(
                                                       (0x1ffffffU 
                                                        & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                                                            << 7U) 
                                                           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
                                                              >> 0x19U)))))) 
                                    | (QData)((IData)(
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct) 
                                                          >> 5U))))) 
                                   | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
                                                         >> 8U))))) 
                                  >> 0x20U)) << 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU] 
        = ((0xfffff000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU]) 
           | ((IData)(((((((0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[1U])) 
                                                  >> 5U))) 
                           | (QData)((IData)((0x7ffU 
                                              & (IData)(
                                                        (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                                         >> 0xbU)))))) 
                          | (QData)((IData)((0x1ffffffU 
                                             & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                                                 << 7U) 
                                                | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[0U] 
                                                   >> 0x19U)))))) 
                         | (QData)((IData)((0x1fU & 
                                            ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct) 
                                             >> 5U))))) 
                        | (QData)((IData)((0xffU & 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
                                            >> 8U))))) 
                       >> 0x20U)) >> 0x14U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x16U] 
        = ((0x7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x16U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                        << 0x37U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                      << 0x17U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                   >> 9U)))) 
              << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x17U] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                      << 0x37U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                    << 0x17U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                 >> 9U)))) 
            >> 0x15U) | ((IData)(((((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                                    << 0x37U) | (((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                                  << 0x17U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                    >> 9U))) 
                                  >> 0x20U)) << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x18U] 
        = ((0xfffff000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x18U]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                         << 0x37U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                       << 0x17U) | 
                                      ((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                       >> 9U))) >> 0x20U)) 
              >> 0x15U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xfU] 
        = ((0x7ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xfU]) 
           | (0xf8000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[2U] 
                             << 0x1aU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x10U] 
        = (((0x7fffe00U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[2U] 
                           << 8U)) | ((0x1fcU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[2U] 
                                                 << 1U)) 
                                      | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[2U] 
                                               >> 6U)))) 
           | (0xf8000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[2U] 
                             << 8U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x11U] 
        = ((((0x100U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[3U] 
                        << 8U)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[2U] 
                                   >> 0x18U)) | (0x7fffe00U 
                                                 & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[3U] 
                                                    << 8U))) 
           | (0xf8000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[3U] 
                             << 8U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x12U] 
        = ((((0x100U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[4U] 
                        << 8U)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[3U] 
                                   >> 0x18U)) | ((0x7fffc00U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[2U] 
                                                     << 9U)) 
                                                 | (0x200U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[4U] 
                                                       << 8U)))) 
           | (0xf8000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[2U] 
                             << 9U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x13U] 
        = (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[2U] 
             >> 0x17U) | ((0x200U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[3U] 
                                     << 9U)) | (0x7fffc00U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[3U] 
                                                   << 9U)))) 
           | (0xf8000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[3U] 
                             << 9U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x14U] 
        = ((0xfffff800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x14U]) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[3U] 
               >> 0x17U) | ((0x200U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[4U] 
                                       << 9U)) | (0x400U 
                                                  & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[4U] 
                                                     << 9U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xfU] 
        = ((0xf80fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xfU]) 
           | (0xfff00000U & ((0x4000000U & ((- (IData)(
                                                       (1U 
                                                        & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op 
                                                           >> 0xbU)))) 
                                            << 0x14U)) 
                             | ((0x2000000U | (0x1f00000U 
                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                  << 0xdU))) 
                                & ((- (IData)((IData)(
                                                      (0U 
                                                       != 
                                                       (0xf0000U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__op))))) 
                                   << 0x14U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU] 
        = ((0xfffbffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU]) 
           | (0xfffc0000U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                              << 9U) & (((0U != (0x1fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U])) 
                                                     << 0x16U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                       >> 0xaU)))) 
                                         | (IData)(
                                                   ((((0ULL 
                                                       != 
                                                       (0x1ffc00000ULL 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct)) 
                                                      | (0U 
                                                         != 
                                                         (0x7c00U 
                                                          & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct)))) 
                                                     | (0U 
                                                        != 
                                                        (0xff0000U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct))) 
                                                    | (0U 
                                                       != 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U] 
                                                            << 0xeU) 
                                                           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                                                              >> 0x12U))))))) 
                                        << 0x12U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2bU] 
        = ((0x7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2bU]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                        << 0x37U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                      << 0x17U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                   >> 9U)))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2cU] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                      << 0x37U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                    << 0x17U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                 >> 9U)))) 
            >> 0x19U) | ((IData)(((((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                                    << 0x37U) | (((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                                  << 0x17U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                    >> 9U))) 
                                  >> 0x20U)) << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2dU] 
        = ((0xffffff80U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2dU]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                         << 0x37U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                       << 0x17U) | 
                                      ((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                       >> 9U))) >> 0x20U)) 
              >> 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2aU] 
        = ((0xffffff9fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2aU]) 
           | (0x60U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U] 
                       >> 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2dU] 
        = ((0xfffffe7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2dU]) 
           | (0x180U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0U] 
                        << 4U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2aU] 
        = ((0x7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2aU]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2bU] 
        = ((0xffffff80U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2bU]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__oir 
              >> 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2aU] 
        = ((0xffffffe3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2aU]) 
           | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__delta) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x29U] 
        = ((0x9fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x29U]) 
           | ((((IData)((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                                  >> 0x16U))))) 
                << 1U) | (0U != (0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U])) 
                                   << 0x16U) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                >> 0xaU))))) 
              << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x29U] 
        = ((0x7fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x29U]) 
           | ((((IData)((0U != (0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct) 
                                         >> 0xaU)))) 
                << 1U) | (0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U] 
                                                << 0xeU) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                                                  >> 0x12U))))) 
              << 0x1fU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2aU] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2aU]) 
           | ((((IData)((0U != (0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct) 
                                         >> 0xaU)))) 
                << 1U) | (0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U] 
                                                << 0xeU) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                                                  >> 0x12U))))) 
              >> 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2aU] 
        = ((0xfffffffdU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2aU]) 
           | ((IData)((0U != (0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
                                       >> 0x10U)))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x27U] 
        = ((0x1fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x27U]) 
           | ((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                 >> 0xaU))) 
                          | (QData)((IData)((0x7ffU 
                                             & (IData)(
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                                        >> 0x16U)))))) 
                         | (QData)((IData)((0x1ffffffU 
                                            & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U] 
                                                << 0xeU) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                                                  >> 0x12U)))))) 
                        | (QData)((IData)((0x1fU & 
                                           ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct) 
                                            >> 0xaU))))) 
                       | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
                                                   >> 0x10U)))))) 
              << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x28U] 
        = (((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U])) 
                                             << 0x16U) 
                                            | ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                               >> 0xaU))) 
                        | (QData)((IData)((0x7ffU & (IData)(
                                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                                             >> 0x16U)))))) 
                       | (QData)((IData)((0x1ffffffU 
                                          & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U] 
                                              << 0xeU) 
                                             | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                                                >> 0x12U)))))) 
                      | (QData)((IData)((0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct) 
                                                  >> 0xaU))))) 
                     | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
                                                 >> 0x10U)))))) 
            >> 3U) | ((IData)(((((((0x1fffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                        >> 0xaU))) 
                                   | (QData)((IData)(
                                                     (0x7ffU 
                                                      & (IData)(
                                                                (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                                                 >> 0x16U)))))) 
                                  | (QData)((IData)(
                                                    (0x1ffffffU 
                                                     & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U] 
                                                         << 0xeU) 
                                                        | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                                                           >> 0x12U)))))) 
                                 | (QData)((IData)(
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct) 
                                                       >> 0xaU))))) 
                                | (QData)((IData)((0xffU 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
                                                      >> 0x10U))))) 
                               >> 0x20U)) << 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x29U] 
        = ((0xe0000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x29U]) 
           | ((IData)(((((((0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[3U])) 
                                                << 0x16U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__alu_funct[2U])) 
                                                  >> 0xaU))) 
                           | (QData)((IData)((0x7ffU 
                                              & (IData)(
                                                        (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__lsu_funct 
                                                         >> 0x16U)))))) 
                          | (QData)((IData)((0x1ffffffU 
                                             & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[2U] 
                                                 << 0xeU) 
                                                | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__fpu_funct[1U] 
                                                   >> 0x12U)))))) 
                         | (QData)((IData)((0x1fU & 
                                            ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__mul_funct) 
                                             >> 0xaU))))) 
                        | (QData)((IData)((0xffU & 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__div_funct 
                                            >> 0x10U))))) 
                       >> 0x20U)) >> 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x25U] 
        = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x25U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                        << 0x37U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                      << 0x17U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                   >> 9U)))) 
              << 0x1cU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x26U] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                      << 0x37U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                    << 0x17U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                 >> 9U)))) 
            >> 4U) | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                                 << 0x37U) | (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                               << 0x17U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                                 >> 9U))) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x27U] 
        = ((0xe0000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x27U]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U])) 
                         << 0x37U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[2U])) 
                                       << 0x17U) | 
                                      ((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[1U])) 
                                       >> 9U))) >> 0x20U)) 
              >> 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1fU] 
        = ((0x3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1fU]) 
           | (0xfc000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[4U] 
                             << 0x18U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x20U] 
        = (((0x3000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[5U] 
                           << 0x18U)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[4U] 
                                         >> 8U)) | 
           (0xfc000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[5U] 
                           << 0x18U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x21U] 
        = (((0x3000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[6U] 
                           << 0x18U)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[5U] 
                                         >> 8U)) | 
           ((0xf8000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[4U] 
                            << 0x19U)) | (0x4000000U 
                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__b[6U] 
                                             << 0x18U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x22U] 
        = (((0x2000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[5U] 
                           << 0x19U)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[4U] 
                                         >> 7U)) | 
           ((0x4000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[5U] 
                           << 0x19U)) | (0xf8000000U 
                                         & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[5U] 
                                            << 0x19U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x23U] 
        = ((0xf0000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x23U]) 
           | (((0x2000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[6U] 
                              << 0x19U)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[5U] 
                                            >> 7U)) 
              | ((0x4000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[6U] 
                                << 0x19U)) | (0x8000000U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[6U] 
                                                 << 0x19U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1fU] 
        = ((0xfc00001fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1fU]) 
           | (0xffffffe0U & (0x2000000U | ((0x7f000U 
                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__a[4U] 
                                               << 0xaU)) 
                                           | (0x3e0U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__0__KET____DOT__ir 
                                                 >> 2U))))));
    if ((0x40000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU] 
            = (0xfff1ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU]);
    }
    if ((2U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1fU])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbU] 
            = (0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbU]);
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU] 
        = ((0x7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU]) 
           | (Vvcore__ConstPool__CONST_h959fe817_0[0U] 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[1U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x30U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[1U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[2U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x31U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[2U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[3U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x32U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[3U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[4U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x33U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[4U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[5U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x34U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[5U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[6U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x35U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[6U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[7U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x36U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[7U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[8U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x37U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[8U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[9U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x38U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[9U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0xaU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xaU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0xbU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3aU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xbU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0xcU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3bU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xcU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0xdU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3cU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xdU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0xeU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3dU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xeU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0xfU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3eU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xfU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x10U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3fU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x10U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x11U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x40U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x11U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x12U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x41U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x12U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x13U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x42U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x13U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x14U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x43U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x14U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x15U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x44U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x15U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x16U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x45U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x16U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x17U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x46U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x17U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x18U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x47U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x18U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x19U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x48U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x19U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1aU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1aU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1bU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4aU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1bU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1cU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4bU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1cU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1dU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4cU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1dU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1eU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4dU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1eU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1fU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4eU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1fU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x20U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4fU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x20U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x21U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x50U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x21U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x22U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x51U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x22U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x23U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x52U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x23U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x24U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x53U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x24U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x25U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x54U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x25U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x26U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x55U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x26U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x27U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x56U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x27U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x28U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x57U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x28U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x29U] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x29U] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2aU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x59U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x2aU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2bU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5aU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x2bU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2cU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5bU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x2cU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2dU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5cU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x2dU] 
            >> 0xdU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2eU] 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU] 
        = ((0xffffffc0U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU]) 
           | (Vvcore__ConstPool__CONST_h959fe817_0[0x2eU] 
              >> 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3eU] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3eU]) 
           | (8U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                    >> 0x10U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3aU] 
        = ((0xffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3aU]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                        << 0x2dU) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                      << 0xdU) | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                  >> 0x13U)))) 
              << 0x18U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3bU] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                      << 0x2dU) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                    << 0xdU) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                >> 0x13U)))) 
            >> 8U) | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                                 << 0x2dU) | (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                               << 0xdU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                 >> 0x13U))) 
                               >> 0x20U)) << 0x18U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3cU] 
        = ((0xff000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3cU]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                         << 0x2dU) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                       << 0xdU) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                   >> 0x13U))) 
                       >> 0x20U)) >> 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U] 
        = ((0xff3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U]) 
           | (0xc00000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                           << 5U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3cU] 
        = ((0xfcffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3cU]) 
           | (0x3000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                            << 0xbU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U] 
        = ((0xffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
              << 0x18U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3aU] 
        = ((0xff000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3aU]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
              >> 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U] 
        = ((0xffc7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U]) 
           | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__delta) 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U] 
        = ((0xffff3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U]) 
           | ((((IData)((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct)))) 
                << 1U) | (0U != (0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U])))))) 
              << 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U] 
        = ((0xfffcffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U]) 
           | ((((IData)((0U != (0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)))) 
                << 1U) | (0U != (0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U]))) 
              << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U] 
        = ((0xfffbffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U]) 
           | ((IData)((0U != (0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct))) 
              << 0x12U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x37U] 
        = ((0x3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x37U]) 
           | ((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U])))) 
                          | (QData)((IData)((0x7ffU 
                                             & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct))))) 
                         | (QData)((IData)((0x1ffffffU 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U])))) 
                        | (QData)((IData)((0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct))))) 
                       | (QData)((IData)((0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct))))) 
              << 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x38U] 
        = (((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U])))) 
                        | (QData)((IData)((0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct))))) 
                       | (QData)((IData)((0x1ffffffU 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U])))) 
                      | (QData)((IData)((0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct))))) 
                     | (QData)((IData)((0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct))))) 
            >> 0x12U) | ((IData)(((((((0x1fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U])))) 
                                      | (QData)((IData)(
                                                        (0x7ffU 
                                                         & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct))))) 
                                     | (QData)((IData)(
                                                       (0x1ffffffU 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U])))) 
                                    | (QData)((IData)(
                                                      (0x1fU 
                                                       & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct))))) 
                                   | (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct)))) 
                                  >> 0x20U)) << 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U] 
        = ((0xffffc000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U]) 
           | ((IData)(((((((0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[0U])))) 
                           | (QData)((IData)((0x7ffU 
                                              & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct))))) 
                          | (QData)((IData)((0x1ffffffU 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U])))) 
                         | (QData)((IData)((0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct))))) 
                        | (QData)((IData)((0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct)))) 
                       >> 0x20U)) >> 0x12U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x35U] 
        = ((0x1fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x35U]) 
           | (((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)
                ? (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                            >> 0xfU)) : (IData)((((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                                                  << 0x2dU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                                     << 0xdU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                       >> 0x13U))))) 
              << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x36U] 
        = ((((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)
              ? (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                          >> 0xfU)) : (IData)((((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                                   << 0xdU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                     >> 0x13U))))) 
            >> 0x13U) | (((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)
                           ? 0U : (IData)(((((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                                             << 0x2dU) 
                                            | (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                                << 0xdU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                  >> 0x13U))) 
                                           >> 0x20U))) 
                         << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x37U] 
        = ((0xffffc000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x37U]) 
           | ((((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)
                 ? 0U : (IData)(((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                                   << 0x2dU) | (((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                   >> 0x13U))) 
                                 >> 0x20U))) >> 0x13U) 
              | (((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)
                   ? 1U : 0U) << 0xdU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x33U] 
        = ((0x1fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x33U]) 
           | ((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__imm 
                       & (- (QData)((IData)((0U != 
                                             (0xb000000U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))))) 
              << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x34U] 
        = (((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__imm 
                     & (- (QData)((IData)((0U != (0xb000000U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))))) 
            >> 0x13U) | ((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__imm 
                                   & (- (QData)((IData)(
                                                        (0U 
                                                         != 
                                                         (0xb000000U 
                                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))))) 
                                  >> 0x20U)) << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x35U] 
        = ((0xffffe000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x35U]) 
           | ((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__imm 
                        & (- (QData)((IData)((0U != 
                                              (0xb000000U 
                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)))))) 
                       >> 0x20U)) >> 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU] 
        = ((0x7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[0U] 
              << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x30U] 
        = ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[0U] 
            >> 0x15U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[1U] 
                         << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x31U] 
        = ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[1U] 
            >> 0x15U) | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[0U] 
                          << 0xcU) | (0x800U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[2U] 
                                                << 0xbU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x32U] 
        = ((0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[0U] 
                      >> 0x14U)) | ((0x800U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[0U] 
                                               >> 0x14U)) 
                                    | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[1U] 
                                       << 0xcU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x33U] 
        = ((0xffffe000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x33U]) 
           | ((0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[1U] 
                         >> 0x14U)) | ((0x800U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[1U] 
                                                  >> 0x14U)) 
                                       | (0x1000U & 
                                          (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[2U] 
                                           << 0xcU)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU] 
        = ((0xffc7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU]) 
           | (0x380000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                           << 9U)));
    if ((1U & (~ (IData)((3U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U] 
                                       >> 0x18U))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3aU] 
            = (0xff0000ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3aU]);
    }
    if ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[2U])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU] 
            = ((0x1fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU]) 
               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[0U] 
                  << 0x1dU));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU]) 
               | (0xfU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[0U] 
                          >> 3U)));
    } else if ((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU] 
            = ((0x1fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU]) 
               | (0xe0000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                 << 0xeU)));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU] 
            = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU]) 
               | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                        >> 0x12U)));
    }
    if ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[2U])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU] 
            = ((0xfffff80fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU]) 
               | (0x7f0U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[0U] 
                            << 4U)));
    } else if ((0x100U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU] 
            = ((0xfffff80fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU]) 
               | (0x1f0U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                            >> 0x10U)));
    } else if ((0x200U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU] 
            = ((0xfffff80fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU]) 
               | (0xfffffff0U & (0x200U | (0x1f0U & 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                            >> 0x10U)))));
    } else if (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                 >> 0xbU) & (3U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                    >> 0x1bU)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU] 
            = ((0xfffff80fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2fU]) 
               | (0x1f0U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                            >> 0x10U)));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU] 
        = ((0xe03fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2eU]) 
           | (((IData)((0U != (0x2f800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U])))
                ? (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                            >> 7U)) : (((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                   >> 7U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x1a007071U 
                                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
                                                                   | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                                       >> 0xbU) 
                                                                      & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                                                << 0x1bU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                                                >> 5U))))))))))))) 
                                        | ((0x20U | 
                                            (0x1fU 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                                >> 7U))) 
                                           & (- (IData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x100002U 
                                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))))) 
                                       | (0x40U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xf0000U 
                                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))) 
                                                                 | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                                     >> 0xbU) 
                                                                    & (0U 
                                                                       != 
                                                                       (0x1fffffffffULL 
                                                                        & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                                            << 0x1bU) 
                                                                           | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                                              >> 5U)))))))))))) 
              << 0x16U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4dU] 
        = ((0xffefffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4dU]) 
           | (0xfff00000U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                              << 1U) & (((0U != (0x1fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                     << 0x1bU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                       >> 5U)))) 
                                         | (IData)(
                                                   ((((0ULL 
                                                       != 
                                                       (0x3ff800ULL 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct)) 
                                                      | (0U 
                                                         != 
                                                         (0x3e0U 
                                                          & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)))) 
                                                     | (0U 
                                                        != 
                                                        (0xff00U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct))) 
                                                    | (0U 
                                                       != 
                                                       (0x1ffffffU 
                                                        & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                                                            << 7U) 
                                                           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
                                                              >> 0x19U))))))) 
                                        << 0x14U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4aU] 
        = ((0x1ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4aU]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                        << 0x2dU) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                      << 0xdU) | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                  >> 0x13U)))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4bU] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                      << 0x2dU) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                    << 0xdU) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                >> 0x13U)))) 
            >> 0x17U) | ((IData)(((((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                                    << 0x2dU) | (((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                    >> 0x13U))) 
                                  >> 0x20U)) << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4cU] 
        = ((0xfffffe00U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4cU]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                         << 0x2dU) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                       << 0xdU) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                   >> 0x13U))) 
                       >> 0x20U)) >> 0x17U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U] 
        = ((0xfffffe7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U]) 
           | (0x180U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                        >> 0xaU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4cU] 
        = ((0xfffff9ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4cU]) 
           | (0x600U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                        >> 4U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U] 
        = ((0x1ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4aU] 
        = ((0xfffffe00U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4aU]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
              >> 0x17U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U] 
        = ((0xffffff8fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U]) 
           | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__delta) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x48U] 
        = ((0x7fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x48U]) 
           | ((((IData)((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                                  >> 0xbU))))) 
                << 1U) | (0U != (0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                   << 0x1bU) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                >> 5U))))) 
              << 0x1fU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U]) 
           | ((((IData)((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                                  >> 0xbU))))) 
                << 1U) | (0U != (0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                   << 0x1bU) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                >> 5U))))) 
              >> 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U] 
        = ((0xfffffff9U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U]) 
           | ((((IData)((0U != (0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct) 
                                         >> 5U)))) 
                << 1U) | (0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                                                << 7U) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
                                                  >> 0x19U))))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U] 
        = ((0xfffffff7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U]) 
           | ((IData)((0U != (0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
                                       >> 8U)))) << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x46U] 
        = ((0x7fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x46U]) 
           | ((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                               << 0x1bU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                 >> 5U))) 
                          | (QData)((IData)((0x7ffU 
                                             & (IData)(
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                                        >> 0xbU)))))) 
                         | (QData)((IData)((0x1ffffffU 
                                            & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                                                << 7U) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
                                                  >> 0x19U)))))) 
                        | (QData)((IData)((0x1fU & 
                                           ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct) 
                                            >> 5U))))) 
                       | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
                                                   >> 8U)))))) 
              << 0x1fU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x47U] 
        = (((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                               >> 5U))) 
                        | (QData)((IData)((0x7ffU & (IData)(
                                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                                             >> 0xbU)))))) 
                       | (QData)((IData)((0x1ffffffU 
                                          & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                                              << 7U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
                                                >> 0x19U)))))) 
                      | (QData)((IData)((0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct) 
                                                  >> 5U))))) 
                     | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
                                                 >> 8U)))))) 
            >> 1U) | ((IData)(((((((0x1fffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                        << 0x1bU) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                        >> 5U))) | (QData)((IData)(
                                                                   (0x7ffU 
                                                                    & (IData)(
                                                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                                                               >> 0xbU)))))) 
                                  | (QData)((IData)(
                                                    (0x1ffffffU 
                                                     & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                                                         << 7U) 
                                                        | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
                                                           >> 0x19U)))))) 
                                 | (QData)((IData)(
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct) 
                                                       >> 5U))))) 
                                | (QData)((IData)((0xffU 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
                                                      >> 8U))))) 
                               >> 0x20U)) << 0x1fU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x48U] 
        = ((0x80000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x48U]) 
           | ((IData)(((((((0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[1U])) 
                                                  >> 5U))) 
                           | (QData)((IData)((0x7ffU 
                                              & (IData)(
                                                        (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                                         >> 0xbU)))))) 
                          | (QData)((IData)((0x1ffffffU 
                                             & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                                                 << 7U) 
                                                | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[0U] 
                                                   >> 0x19U)))))) 
                         | (QData)((IData)((0x1fU & 
                                            ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct) 
                                             >> 5U))))) 
                        | (QData)((IData)((0xffU & 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
                                            >> 8U))))) 
                       >> 0x20U)) >> 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x44U] 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x44U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                        << 0x2dU) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                      << 0xdU) | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                  >> 0x13U)))) 
              << 0x1eU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x45U] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                      << 0x2dU) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                    << 0xdU) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                >> 0x13U)))) 
            >> 2U) | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                                 << 0x2dU) | (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                               << 0xdU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                 >> 0x13U))) 
                               >> 0x20U)) << 0x1eU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x46U] 
        = ((0x80000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x46U]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                         << 0x2dU) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                       << 0xdU) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                   >> 0x13U))) 
                       >> 0x20U)) >> 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3eU] 
        = ((0x3fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3eU]) 
           | ((0xf0000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[2U] 
                              << 0x1bU)) | ((0xfe00000U 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[2U] 
                                                << 0x14U)) 
                                            | (0x1fc000U 
                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[2U] 
                                                  << 0xdU)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3fU] 
        = ((0x3fffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[2U] 
                       >> 5U)) | (((0x8000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[3U] 
                                                  << 0x1bU)) 
                                   | (0x7ffc000U & 
                                      (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[2U] 
                                       >> 5U))) | (0xf0000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[3U] 
                                                      << 0x1bU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x40U] 
        = ((0x3fffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[3U] 
                       >> 5U)) | (((0x8000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[4U] 
                                                  << 0x1bU)) 
                                   | (0x7ffc000U & 
                                      (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[3U] 
                                       >> 5U))) | (
                                                   (0xe0000000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[2U] 
                                                       << 0x1cU)) 
                                                   | (0x10000000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[4U] 
                                                         << 0x1bU)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x41U] 
        = ((0x3fffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[2U] 
                       >> 4U)) | ((0xfffc000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[2U] 
                                                 >> 4U)) 
                                  | ((0x10000000U & 
                                      (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[3U] 
                                       << 0x1cU)) | 
                                     (0xe0000000U & 
                                      (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[3U] 
                                       << 0x1cU)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x42U] 
        = ((0xc0000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x42U]) 
           | ((0x3fffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[3U] 
                          >> 4U)) | ((0xfffc000U & 
                                      (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[3U] 
                                       >> 4U)) | ((0x10000000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[4U] 
                                                      << 0x1cU)) 
                                                  | (0x20000000U 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[4U] 
                                                        << 0x1cU))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3eU] 
        = ((0xffffc07fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x3eU]) 
           | (0xffffff80U & ((0x2000U & ((- (IData)(
                                                    (1U 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op 
                                                        >> 0xbU)))) 
                                         << 7U)) | 
                             ((0x1000U | (0xf80U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir)) 
                              & ((- (IData)((IData)(
                                                    (0U 
                                                     != 
                                                     (0xf0000U 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__op))))) 
                                 << 7U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU]) 
           | (0x3ffe0U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                           >> 0xeU) & (((0U != (0x1fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                      >> 0xaU)))) 
                                        | (IData)((
                                                   (((0ULL 
                                                      != 
                                                      (0x1ffc00000ULL 
                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct)) 
                                                     | (0U 
                                                        != 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct)))) 
                                                    | (0U 
                                                       != 
                                                       (0xff0000U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct))) 
                                                   | (0U 
                                                      != 
                                                      (0x1ffffffU 
                                                       & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U] 
                                                           << 0xeU) 
                                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                                                             >> 0x12U))))))) 
                                       << 5U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x59U] 
        = ((0x3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x59U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                        << 0x2dU) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                      << 0xdU) | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                  >> 0x13U)))) 
              << 0x1aU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5aU] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                      << 0x2dU) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                    << 0xdU) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                >> 0x13U)))) 
            >> 6U) | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                                 << 0x2dU) | (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                               << 0xdU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                 >> 0x13U))) 
                               >> 0x20U)) << 0x1aU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5bU] 
        = ((0xfc000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5bU]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                         << 0x2dU) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                       << 0xdU) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                   >> 0x13U))) 
                       >> 0x20U)) >> 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U] 
        = ((0xfcffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U]) 
           | (0x3000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                            << 7U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5bU] 
        = ((0xf3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5bU]) 
           | (0xc000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                            << 0xdU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U] 
        = ((0x3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
              << 0x1aU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x59U] 
        = ((0xfc000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x59U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__oir 
              >> 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U] 
        = ((0xff1fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U]) 
           | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__delta) 
              << 0x15U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U] 
        = ((0xfffcffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U]) 
           | ((((IData)((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                                  >> 0x16U))))) 
                << 1U) | (0U != (0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U])) 
                                   << 0x16U) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                >> 0xaU))))) 
              << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U] 
        = ((0xfff3ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U]) 
           | ((((IData)((0U != (0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct) 
                                         >> 0xaU)))) 
                << 1U) | (0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U] 
                                                << 0xeU) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                                                  >> 0x12U))))) 
              << 0x12U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U] 
        = ((0xffefffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U]) 
           | ((IData)((0U != (0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
                                       >> 0x10U)))) 
              << 0x14U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x56U] 
        = ((0xffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x56U]) 
           | ((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                 >> 0xaU))) 
                          | (QData)((IData)((0x7ffU 
                                             & (IData)(
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                                        >> 0x16U)))))) 
                         | (QData)((IData)((0x1ffffffU 
                                            & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U] 
                                                << 0xeU) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                                                  >> 0x12U)))))) 
                        | (QData)((IData)((0x1fU & 
                                           ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct) 
                                            >> 0xaU))))) 
                       | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
                                                   >> 0x10U)))))) 
              << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x57U] 
        = (((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U])) 
                                             << 0x16U) 
                                            | ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                               >> 0xaU))) 
                        | (QData)((IData)((0x7ffU & (IData)(
                                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                                             >> 0x16U)))))) 
                       | (QData)((IData)((0x1ffffffU 
                                          & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U] 
                                              << 0xeU) 
                                             | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                                                >> 0x12U)))))) 
                      | (QData)((IData)((0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct) 
                                                  >> 0xaU))))) 
                     | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
                                                 >> 0x10U)))))) 
            >> 0x10U) | ((IData)(((((((0x1fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U])) 
                                           << 0x16U) 
                                          | ((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                             >> 0xaU))) 
                                      | (QData)((IData)(
                                                        (0x7ffU 
                                                         & (IData)(
                                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                                                    >> 0x16U)))))) 
                                     | (QData)((IData)(
                                                       (0x1ffffffU 
                                                        & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U] 
                                                            << 0xeU) 
                                                           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                                                              >> 0x12U)))))) 
                                    | (QData)((IData)(
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct) 
                                                          >> 0xaU))))) 
                                   | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
                                                         >> 0x10U))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U] 
        = ((0xffff0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U]) 
           | ((IData)(((((((0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[3U])) 
                                                << 0x16U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__alu_funct[2U])) 
                                                  >> 0xaU))) 
                           | (QData)((IData)((0x7ffU 
                                              & (IData)(
                                                        (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__lsu_funct 
                                                         >> 0x16U)))))) 
                          | (QData)((IData)((0x1ffffffU 
                                             & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[2U] 
                                                 << 0xeU) 
                                                | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__fpu_funct[1U] 
                                                   >> 0x12U)))))) 
                         | (QData)((IData)((0x1fU & 
                                            ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__mul_funct) 
                                             >> 0xaU))))) 
                        | (QData)((IData)((0xffU & 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__div_funct 
                                            >> 0x10U))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x54U] 
        = ((0x7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x54U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                        << 0x2dU) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                      << 0xdU) | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                  >> 0x13U)))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x55U] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                      << 0x2dU) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                    << 0xdU) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                >> 0x13U)))) 
            >> 0x11U) | ((IData)(((((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                                    << 0x2dU) | (((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                    >> 0x13U))) 
                                  >> 0x20U)) << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x56U] 
        = ((0xffff0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x56U]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U])) 
                         << 0x2dU) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[5U])) 
                                       << 0xdU) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[4U])) 
                                                   >> 0x13U))) 
                       >> 0x20U)) >> 0x11U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4eU] 
        = ((0x1fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4eU]) 
           | (0xffffe000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[4U] 
                             << 0xbU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4fU] 
        = (((0x1800U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[5U] 
                        << 0xbU)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[4U] 
                                     >> 0x15U)) | (0xffffe000U 
                                                   & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[5U] 
                                                      << 0xbU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x50U] 
        = (((0x1800U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[6U] 
                        << 0xbU)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[5U] 
                                     >> 0x15U)) | (
                                                   (0xffffc000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[4U] 
                                                       << 0xcU)) 
                                                   | (0x2000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__b[6U] 
                                                         << 0xbU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x51U] 
        = (((0x1000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[5U] 
                        << 0xcU)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[4U] 
                                     >> 0x14U)) | (
                                                   (0x2000U 
                                                    & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[5U] 
                                                       << 0xcU)) 
                                                   | (0xffffc000U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[5U] 
                                                         << 0xcU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x52U] 
        = ((0xffff8000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x52U]) 
           | (((0x1000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[6U] 
                           << 0xcU)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[5U] 
                                        >> 0x14U)) 
              | ((0x2000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[6U] 
                             << 0xcU)) | (0x4000U & 
                                          (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[6U] 
                                           << 0xcU)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4dU] 
        = ((0xffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4dU]) 
           | (0xff000000U & ((0x80000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[4U] 
                                             << 0x1dU)) 
                             | (0x1f000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__ir 
                                               << 0x11U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4eU] 
        = ((0xffffe000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4eU]) 
           | (0xffffffU & (0x1000U | (0x3fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__1__KET____DOT__a[4U] 
                                               >> 3U)))));
    if ((0x20U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U] 
            = (0xffffff8fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U]);
    }
    if ((0x100000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x4dU])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U] 
            = (0xffc7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U]);
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU] 
        = ((0x3fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU]) 
           | (Vvcore__ConstPool__CONST_h959fe817_0[0U] 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5eU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[1U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5fU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[1U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[2U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x60U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[2U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[3U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x61U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[3U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[4U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x62U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[4U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[5U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x63U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[5U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[6U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x64U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[6U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[7U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x65U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[7U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[8U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x66U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[8U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[9U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x67U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[9U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0xaU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xaU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0xbU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x69U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xbU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0xcU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6aU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xcU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0xdU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6bU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xdU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0xeU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6cU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xeU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0xfU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6dU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xfU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x10U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6eU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x10U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x11U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6fU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x11U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x12U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x70U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x12U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x13U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x71U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x13U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x14U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x72U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x14U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x15U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x73U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x15U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x16U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x74U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x16U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x17U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x75U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x17U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x18U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x76U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x18U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x19U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x19U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1aU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x78U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1aU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1bU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x79U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1bU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1cU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7aU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1cU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1dU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7bU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1dU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1eU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7cU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1eU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1fU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7dU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1fU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x20U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7eU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x20U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x21U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7fU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x21U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x22U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x80U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x22U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x23U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x81U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x23U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x24U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x82U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x24U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x25U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x83U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x25U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x26U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x84U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x26U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x27U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x85U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x27U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x28U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x86U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x28U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x29U] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x29U] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2aU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x88U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x2aU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2bU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x89U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x2bU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2cU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8aU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x2cU] 
            >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2dU] 
                         << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8bU] 
        = ((0xfe000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8bU]) 
           | ((Vvcore__ConstPool__CONST_h959fe817_0[0x2dU] 
               >> 0x1aU) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2eU] 
                            << 6U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6cU] 
        = ((0xffbfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6cU]) 
           | (0x400000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U] 
                           >> 7U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x69U] 
        = ((0x7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x69U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                        << 0x23U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                      << 3U) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                >> 0x1dU)))) 
              << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6aU] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                      << 0x23U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                              >> 0x1dU)))) 
            >> 0x15U) | ((IData)(((((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                                    << 0x23U) | (((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                                  << 3U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                    >> 0x1dU))) 
                                  >> 0x20U)) << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6bU] 
        = ((0xfffff800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6bU]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                         << 0x23U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                       << 3U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                 >> 0x1dU))) 
                       >> 0x20U)) >> 0x15U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U] 
        = ((0xfffff9ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U]) 
           | (0x600U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                        >> 0x12U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6bU] 
        = ((0xffffe7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6bU]) 
           | (0x1800U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                         >> 0xcU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U] 
        = ((0x7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
              << 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x69U] 
        = ((0xfffff800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x69U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
              >> 0x15U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U] 
        = ((0xfffffe3fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U]) 
           | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__delta) 
              << 6U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U] 
        = ((0xfffffff9U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U]) 
           | ((((IData)((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct)))) 
                << 1U) | (0U != (0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U])))))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U] 
        = ((0xffffffe7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U]) 
           | ((((IData)((0U != (0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)))) 
                << 1U) | (0U != (0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U]))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U] 
        = ((0xffffffdfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U]) 
           | ((IData)((0U != (0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x66U] 
        = ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x66U]) 
           | ((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U])))) 
                          | (QData)((IData)((0x7ffU 
                                             & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct))))) 
                         | (QData)((IData)((0x1ffffffU 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U])))) 
                        | (QData)((IData)((0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct))))) 
                       | (QData)((IData)((0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct))))) 
              << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x67U] 
        = (((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U])))) 
                        | (QData)((IData)((0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct))))) 
                       | (QData)((IData)((0x1ffffffU 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U])))) 
                      | (QData)((IData)((0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct))))) 
                     | (QData)((IData)((0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct))))) 
            >> 0x1fU) | ((IData)(((((((0x1fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U])))) 
                                      | (QData)((IData)(
                                                        (0x7ffU 
                                                         & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct))))) 
                                     | (QData)((IData)(
                                                       (0x1ffffffU 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U])))) 
                                    | (QData)((IData)(
                                                      (0x1fU 
                                                       & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct))))) 
                                   | (QData)((IData)(
                                                     (0xffU 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct)))) 
                                  >> 0x20U)) << 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U]) 
           | ((IData)(((((((0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[0U])))) 
                           | (QData)((IData)((0x7ffU 
                                              & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct))))) 
                          | (QData)((IData)((0x1ffffffU 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U])))) 
                         | (QData)((IData)((0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct))))) 
                        | (QData)((IData)((0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct)))) 
                       >> 0x20U)) >> 0x1fU));
    if ((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x64U] 
            = (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                        >> 0xfU));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x65U] = 0U;
    } else {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x64U] 
            = (IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                        << 0x23U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                      << 3U) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                >> 0x1dU))));
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x65U] 
            = (IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                         << 0x23U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                       << 3U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                 >> 0x1dU))) 
                       >> 0x20U));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x66U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x66U]) 
           | ((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)
               ? 1U : 0U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x62U] 
        = (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__imm 
                   & (- (QData)((IData)((0U != (0xb000000U 
                                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x63U] 
        = (IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__imm 
                    & (- (QData)((IData)((0U != (0xb000000U 
                                                 & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)))))) 
                   >> 0x20U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU] 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[0U] 
              << 0x1eU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5eU] 
        = ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[0U] 
            >> 2U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[1U] 
                      << 0x1eU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5fU] 
        = ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[1U] 
            >> 2U) | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[0U] 
                       << 0x1fU) | (0x40000000U & (
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[2U] 
                                                   << 0x1eU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x60U] 
        = ((0x3fffffffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[0U] 
                           >> 1U)) | ((0x40000000U 
                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[0U] 
                                          >> 1U)) | 
                                      (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[1U] 
                                       << 0x1fU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x61U] 
        = ((0x3fffffffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[1U] 
                           >> 1U)) | ((0x40000000U 
                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[1U] 
                                          >> 1U)) | 
                                      (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[2U] 
                                       << 0x1fU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU] 
        = ((0xfffffe3fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU]) 
           | (0x1c0U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                        >> 0xeU)));
    if ((1U & (~ (IData)((3U == (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U] 
                                       >> 0xbU))))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U] 
            = (0x7ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U]);
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x69U] 
            = (0xfffff800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x69U]);
    }
    if ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[2U])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU] 
            = ((0xff80ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU]) 
               | (0x7f0000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[0U] 
                               << 0x10U)));
    } else if ((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU] 
            = ((0xff80ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU]) 
               | (0x1f0000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                               << 1U)));
    }
    if ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[2U])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU] 
            = ((0xc07fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU]) 
               | (0x3f800000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[0U] 
                                 << 0x17U)));
    } else if ((0x100U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU] 
            = ((0xc07fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU]) 
               | (0xf800000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                << 3U)));
    } else if ((0x200U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU] 
            = ((0xc07fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU]) 
               | (0xff800000U & (0x10000000U | (0xf800000U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                   << 3U)))));
    } else if (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                 >> 0xbU) & (3U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                    >> 0x1bU)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU] 
            = ((0xc07fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU]) 
               | (0xf800000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                << 3U)));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU] 
        = ((0xffff01ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x5dU]) 
           | (((IData)((0U != (0x2f800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U])))
                ? (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                            >> 7U)) : (((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                   >> 7U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x1a007071U 
                                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
                                                                   | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                                       >> 0xbU) 
                                                                      & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                                                << 0x1bU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                                                >> 5U))))))))))))) 
                                        | ((0x20U | 
                                            (0x1fU 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                >> 7U))) 
                                           & (- (IData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x100002U 
                                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))))) 
                                       | (0x40U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xf0000U 
                                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))) 
                                                                 | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                                                     >> 0xbU) 
                                                                    & (0U 
                                                                       != 
                                                                       (0x1fffffffffULL 
                                                                        & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                                            << 0x1bU) 
                                                                           | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                                              >> 5U)))))))))))) 
              << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7cU] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7cU]) 
           | (0x380U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U] 
                         >> 0x16U) & (((0U != (0x1fffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                   << 0x1bU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                     >> 5U)))) 
                                       | (IData)(((
                                                   ((0ULL 
                                                     != 
                                                     (0x3ff800ULL 
                                                      & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct)) 
                                                    | (0U 
                                                       != 
                                                       (0x3e0U 
                                                        & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)))) 
                                                   | (0U 
                                                      != 
                                                      (0xff00U 
                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct))) 
                                                  | (0U 
                                                     != 
                                                     (0x1ffffffU 
                                                      & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                                                          << 7U) 
                                                         | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
                                                            >> 0x19U))))))) 
                                      << 7U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x78U] 
        = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x78U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                        << 0x23U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                      << 3U) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                >> 0x1dU)))) 
              << 0x1cU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x79U] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                      << 0x23U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                              >> 0x1dU)))) 
            >> 4U) | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                                 << 0x23U) | (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                               << 3U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                 >> 0x1dU))) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7aU] 
        = ((0xf0000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7aU]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                         << 0x23U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                       << 3U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                 >> 0x1dU))) 
                       >> 0x20U)) >> 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U] 
        = ((0xf3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U]) 
           | (0xc000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                            >> 1U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7aU] 
        = ((0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7aU]) 
           | (0x30000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                             << 5U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U] 
        = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
              << 0x1cU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x78U] 
        = ((0xf0000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x78U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
              >> 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U] 
        = ((0xfc7fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U]) 
           | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__delta) 
              << 0x17U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U] 
        = ((0xfff3ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U]) 
           | ((((IData)((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                                  >> 0xbU))))) 
                << 1U) | (0U != (0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                   << 0x1bU) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                >> 5U))))) 
              << 0x12U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U] 
        = ((0xffcfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U]) 
           | ((((IData)((0U != (0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct) 
                                         >> 5U)))) 
                << 1U) | (0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                                                << 7U) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
                                                  >> 0x19U))))) 
              << 0x14U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U] 
        = ((0xffbfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U]) 
           | ((IData)((0U != (0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
                                       >> 8U)))) << 0x16U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x75U] 
        = ((0x3ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x75U]) 
           | ((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                               << 0x1bU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                 >> 5U))) 
                          | (QData)((IData)((0x7ffU 
                                             & (IData)(
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                                        >> 0xbU)))))) 
                         | (QData)((IData)((0x1ffffffU 
                                            & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                                                << 7U) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
                                                  >> 0x19U)))))) 
                        | (QData)((IData)((0x1fU & 
                                           ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct) 
                                            >> 5U))))) 
                       | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
                                                   >> 8U)))))) 
              << 0x12U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x76U] 
        = (((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                               >> 5U))) 
                        | (QData)((IData)((0x7ffU & (IData)(
                                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                                             >> 0xbU)))))) 
                       | (QData)((IData)((0x1ffffffU 
                                          & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                                              << 7U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
                                                >> 0x19U)))))) 
                      | (QData)((IData)((0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct) 
                                                  >> 5U))))) 
                     | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
                                                 >> 8U)))))) 
            >> 0xeU) | ((IData)(((((((0x1fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                          << 0x1bU) 
                                         | ((QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                            >> 5U))) 
                                     | (QData)((IData)(
                                                       (0x7ffU 
                                                        & (IData)(
                                                                  (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                                                   >> 0xbU)))))) 
                                    | (QData)((IData)(
                                                      (0x1ffffffU 
                                                       & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                                                           << 7U) 
                                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
                                                             >> 0x19U)))))) 
                                   | (QData)((IData)(
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct) 
                                                         >> 5U))))) 
                                  | (QData)((IData)(
                                                    (0xffU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
                                                        >> 8U))))) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U] 
        = ((0xfffc0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U]) 
           | ((IData)(((((((0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[1U])) 
                                                  >> 5U))) 
                           | (QData)((IData)((0x7ffU 
                                              & (IData)(
                                                        (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                                         >> 0xbU)))))) 
                          | (QData)((IData)((0x1ffffffU 
                                             & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                                                 << 7U) 
                                                | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[0U] 
                                                   >> 0x19U)))))) 
                         | (QData)((IData)((0x1fU & 
                                            ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct) 
                                             >> 5U))))) 
                        | (QData)((IData)((0xffU & 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
                                            >> 8U))))) 
                       >> 0x20U)) >> 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x73U] 
        = ((0x1ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x73U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                        << 0x23U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                      << 3U) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                >> 0x1dU)))) 
              << 0x11U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x74U] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                      << 0x23U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                              >> 0x1dU)))) 
            >> 0xfU) | ((IData)(((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                                   << 0x23U) | (((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                                 << 3U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                   >> 0x1dU))) 
                                 >> 0x20U)) << 0x11U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x75U] 
        = ((0xfffc0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x75U]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                         << 0x23U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                       << 3U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                 >> 0x1dU))) 
                       >> 0x20U)) >> 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6dU] 
        = ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6dU]) 
           | ((0xffff8000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[2U] 
                              << 0xeU)) | ((0x7f00U 
                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[2U] 
                                               << 7U)) 
                                           | (0xfeU 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[2U]))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6eU] 
        = ((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[2U] 
                  >> 0x12U)) | (((0x4000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[3U] 
                                             << 0xeU)) 
                                 | (0x3ffeU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[2U] 
                                               >> 0x12U))) 
                                | (0xffff8000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[3U] 
                                                  << 0xeU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6fU] 
        = ((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[3U] 
                  >> 0x12U)) | (((0x4000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[4U] 
                                             << 0xeU)) 
                                 | (0x3ffeU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[3U] 
                                               >> 0x12U))) 
                                | ((0xffff0000U & (
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[2U] 
                                                   << 0xfU)) 
                                   | (0x8000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[4U] 
                                                 << 0xeU)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x70U] 
        = ((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[2U] 
                  >> 0x11U)) | ((0x7ffeU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[2U] 
                                            >> 0x11U)) 
                                | ((0x8000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[3U] 
                                               << 0xfU)) 
                                   | (0xffff0000U & 
                                      (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[3U] 
                                       << 0xfU)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x71U] 
        = ((0xfffe0000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x71U]) 
           | ((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[3U] 
                     >> 0x11U)) | ((0x7ffeU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[3U] 
                                               >> 0x11U)) 
                                   | ((0x8000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[4U] 
                                                  << 0xfU)) 
                                      | (0x10000U & 
                                         (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[4U] 
                                          << 0xfU))))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6cU] 
        = ((0x3ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6cU]) 
           | (0xfc000000U & ((0x80000000U | (0x7c000000U 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                << 0x13U))) 
                             & ((- (IData)((IData)(
                                                   (0U 
                                                    != 
                                                    (0xf0000U 
                                                     & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op))))) 
                                << 0x1aU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6dU] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x6dU]) 
           | (1U & ((- (IData)((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__op 
                                      >> 0xbU)))) >> 6U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8bU] 
        = ((0xfeffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8bU]) 
           | (0x7000000U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U] 
                             >> 5U) & (((0U != (0x1fffffffffULL 
                                                & (((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U])) 
                                                    << 0x16U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                      >> 0xaU)))) 
                                        | (IData)((
                                                   (((0ULL 
                                                      != 
                                                      (0x1ffc00000ULL 
                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct)) 
                                                     | (0U 
                                                        != 
                                                        (0x7c00U 
                                                         & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct)))) 
                                                    | (0U 
                                                       != 
                                                       (0xff0000U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct))) 
                                                   | (0U 
                                                      != 
                                                      (0x1ffffffU 
                                                       & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U] 
                                                           << 0xeU) 
                                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                                                             >> 0x12U))))))) 
                                       << 0x18U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x88U] 
        = ((0x1fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x88U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                        << 0x23U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                      << 3U) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                >> 0x1dU)))) 
              << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x89U] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                      << 0x23U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                              >> 0x1dU)))) 
            >> 0x13U) | ((IData)(((((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                                    << 0x23U) | (((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                                  << 3U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                    >> 0x1dU))) 
                                  >> 0x20U)) << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8aU] 
        = ((0xffffe000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8aU]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                         << 0x23U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                       << 3U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                 >> 0x1dU))) 
                       >> 0x20U)) >> 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U] 
        = ((0xffffe7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U]) 
           | (0x1800U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                         >> 0x10U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8aU] 
        = ((0xffff9fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8aU]) 
           | (0x6000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                         >> 0xaU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U] 
        = ((0x1fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
              << 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x88U] 
        = ((0xffffe000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x88U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__oir 
              >> 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U] 
        = ((0xfffff8ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U]) 
           | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__delta) 
              << 8U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U] 
        = ((0xffffffe7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U]) 
           | ((((IData)((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                                  >> 0x16U))))) 
                << 1U) | (0U != (0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U])) 
                                   << 0x16U) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                >> 0xaU))))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U] 
        = ((0xffffff9fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U]) 
           | ((((IData)((0U != (0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct) 
                                         >> 0xaU)))) 
                << 1U) | (0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U] 
                                                << 0xeU) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                                                  >> 0x12U))))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U] 
        = ((0xffffff7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U]) 
           | ((IData)((0U != (0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
                                       >> 0x10U)))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x85U] 
        = ((7U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x85U]) 
           | ((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                 >> 0xaU))) 
                          | (QData)((IData)((0x7ffU 
                                             & (IData)(
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                                        >> 0x16U)))))) 
                         | (QData)((IData)((0x1ffffffU 
                                            & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U] 
                                                << 0xeU) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                                                  >> 0x12U)))))) 
                        | (QData)((IData)((0x1fU & 
                                           ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct) 
                                            >> 0xaU))))) 
                       | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
                                                   >> 0x10U)))))) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x86U] 
        = (((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U])) 
                                             << 0x16U) 
                                            | ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                               >> 0xaU))) 
                        | (QData)((IData)((0x7ffU & (IData)(
                                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                                             >> 0x16U)))))) 
                       | (QData)((IData)((0x1ffffffU 
                                          & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U] 
                                              << 0xeU) 
                                             | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                                                >> 0x12U)))))) 
                      | (QData)((IData)((0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct) 
                                                  >> 0xaU))))) 
                     | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
                                                 >> 0x10U)))))) 
            >> 0x1dU) | ((IData)(((((((0x1fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U])) 
                                           << 0x16U) 
                                          | ((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                             >> 0xaU))) 
                                      | (QData)((IData)(
                                                        (0x7ffU 
                                                         & (IData)(
                                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                                                    >> 0x16U)))))) 
                                     | (QData)((IData)(
                                                       (0x1ffffffU 
                                                        & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U] 
                                                            << 0xeU) 
                                                           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                                                              >> 0x12U)))))) 
                                    | (QData)((IData)(
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct) 
                                                          >> 0xaU))))) 
                                   | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
                                                         >> 0x10U))))) 
                                  >> 0x20U)) << 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U] 
        = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U]) 
           | ((IData)(((((((0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[3U])) 
                                                << 0x16U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__alu_funct[2U])) 
                                                  >> 0xaU))) 
                           | (QData)((IData)((0x7ffU 
                                              & (IData)(
                                                        (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__lsu_funct 
                                                         >> 0x16U)))))) 
                          | (QData)((IData)((0x1ffffffU 
                                             & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[2U] 
                                                 << 0xeU) 
                                                | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__fpu_funct[1U] 
                                                   >> 0x12U)))))) 
                         | (QData)((IData)((0x1fU & 
                                            ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__mul_funct) 
                                             >> 0xaU))))) 
                        | (QData)((IData)((0xffU & 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__div_funct 
                                            >> 0x10U))))) 
                       >> 0x20U)) >> 0x1dU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x83U] 
        = ((3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x83U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                        << 0x23U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                      << 3U) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                >> 0x1dU)))) 
              << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x84U] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                      << 0x23U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                    << 3U) | ((QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                              >> 0x1dU)))) 
            >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                                    << 0x23U) | (((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                                  << 3U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                    >> 0x1dU))) 
                                  >> 0x20U)) << 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x85U] 
        = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x85U]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U])) 
                         << 0x23U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[8U])) 
                                       << 3U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[7U])) 
                                                 >> 0x1dU))) 
                       >> 0x20U)) >> 0x1eU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7dU] 
        = ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[5U] 
            << 0x1eU) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[4U] 
                         >> 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7eU] 
        = ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[6U] 
            << 0x1eU) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[5U] 
                         >> 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7fU] 
        = (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[5U] 
             << 0x1fU) | (0x7ffffffeU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[4U] 
                                         >> 1U))) | 
           (1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__b[6U] 
                  >> 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x80U] 
        = ((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[5U] 
                  >> 1U)) | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[6U] 
                              << 0x1fU) | (0x7ffffffeU 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[5U] 
                                              >> 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x81U] 
        = ((0xfffffffcU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x81U]) 
           | ((1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[6U] 
                     >> 1U)) | (2U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[6U] 
                                      >> 1U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7cU] 
        = ((0x7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7cU]) 
           | (0xfffff800U & (0x80000000U | ((0x1fc0000U 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__a[4U] 
                                                << 0x10U)) 
                                            | (0xf800U 
                                               & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__2__KET____DOT__ir 
                                                  << 4U))))));
    if ((0x1000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8bU])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U] 
            = (0xfc7fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U]);
    }
    if ((0x80U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x7cU])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U] 
            = (0xfffffe3fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U]);
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8bU] 
        = ((0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8bU]) 
           | (Vvcore__ConstPool__CONST_h959fe817_0[0U] 
              << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[1U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8dU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[1U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[2U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8eU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[2U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[3U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8fU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[3U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[4U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x90U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[4U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[5U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x91U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[5U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[6U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x92U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[6U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[7U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x93U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[7U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[8U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x94U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[8U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[9U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x95U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[9U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0xaU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xaU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0xbU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x97U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xbU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0xcU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x98U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xcU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0xdU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x99U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xdU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0xeU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9aU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xeU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0xfU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9bU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0xfU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x10U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9cU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x10U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x11U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9dU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x11U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x12U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9eU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x12U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x13U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9fU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x13U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x14U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa0U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x14U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x15U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa1U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x15U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x16U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa2U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x16U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x17U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa3U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x17U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x18U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa4U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x18U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x19U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa5U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x19U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1aU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1aU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1bU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa7U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1bU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1cU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa8U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1cU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1dU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa9U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1dU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1eU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaaU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1eU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x1fU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xabU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x1fU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x20U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xacU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x20U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x21U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xadU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x21U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x22U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaeU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x22U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x23U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xafU] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x23U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x24U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb0U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x24U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x25U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb1U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x25U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x26U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb2U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x26U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x27U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb3U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x27U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x28U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb4U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x28U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x29U] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x29U] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2aU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb6U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x2aU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2bU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb7U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x2bU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2cU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb8U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x2cU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2dU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb9U] 
        = ((Vvcore__ConstPool__CONST_h959fe817_0[0x2dU] 
            >> 7U) | (Vvcore__ConstPool__CONST_h959fe817_0[0x2eU] 
                      << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbaU] 
        = (0xfffU & (Vvcore__ConstPool__CONST_h959fe817_0[0x2eU] 
                     >> 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9bU] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9bU]) 
           | (0x200U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU] 
                        << 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x97U] 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x97U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                        << 0x39U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                      << 0x19U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                   >> 7U)))) 
              << 0x1eU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x98U] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                      << 0x39U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                    << 0x19U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                 >> 7U)))) 
            >> 2U) | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                                 << 0x39U) | (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                 >> 7U))) 
                               >> 0x20U)) << 0x1eU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x99U] 
        = ((0xc0000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x99U]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                         << 0x39U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                       << 0x19U) | 
                                      ((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                       >> 7U))) >> 0x20U)) 
              >> 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U] 
        = ((0xcfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U]) 
           | (0x30000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU] 
                             << 0x17U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x99U] 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x99U]) 
           | (0xc0000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU] 
                             << 0x1dU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U] 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
              << 0x1eU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x97U] 
        = ((0xc0000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x97U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
              >> 2U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U] 
        = ((0xf1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U]) 
           | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__delta) 
              << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U] 
        = ((0xffcfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U]) 
           | ((((IData)((0U != (0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct)))) 
                << 1U) | (0U != (0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U])))))) 
              << 0x14U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U] 
        = ((0xff3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U]) 
           | ((((IData)((0U != (0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)))) 
                << 1U) | (0U != (0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U]))) 
              << 0x16U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U] 
        = ((0xfeffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U]) 
           | ((IData)((0U != (0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct))) 
              << 0x18U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x94U] 
        = ((0xfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x94U]) 
           | ((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U])))) 
                          | (QData)((IData)((0x7ffU 
                                             & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct))))) 
                         | (QData)((IData)((0x1ffffffU 
                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U])))) 
                        | (QData)((IData)((0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct))))) 
                       | (QData)((IData)((0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct))))) 
              << 0x14U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x95U] 
        = (((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U])))) 
                        | (QData)((IData)((0x7ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct))))) 
                       | (QData)((IData)((0x1ffffffU 
                                          & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U])))) 
                      | (QData)((IData)((0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct))))) 
                     | (QData)((IData)((0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct))))) 
            >> 0xcU) | ((IData)(((((((0x1fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U])))) 
                                     | (QData)((IData)(
                                                       (0x7ffU 
                                                        & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct))))) 
                                    | (QData)((IData)(
                                                      (0x1ffffffU 
                                                       & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U])))) 
                                   | (QData)((IData)(
                                                     (0x1fU 
                                                      & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct))))) 
                                  | (QData)((IData)(
                                                    (0xffU 
                                                     & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct)))) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U] 
        = ((0xfff00000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U]) 
           | ((IData)(((((((0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[0U])))) 
                           | (QData)((IData)((0x7ffU 
                                              & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct))))) 
                          | (QData)((IData)((0x1ffffffU 
                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U])))) 
                         | (QData)((IData)((0x1fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct))))) 
                        | (QData)((IData)((0xffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct)))) 
                       >> 0x20U)) >> 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x92U] 
        = ((0x7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x92U]) 
           | (((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)
                ? (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                            >> 0xfU)) : (IData)((((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                                     << 0x19U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                       >> 7U))))) 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x93U] 
        = ((((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)
              ? (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                          >> 0xfU)) : (IData)((((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                                                << 0x39U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                     >> 7U))))) 
            >> 0xdU) | (((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)
                          ? 0U : (IData)(((((QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                                            << 0x39U) 
                                           | (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                               << 0x19U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                 >> 7U))) 
                                          >> 0x20U))) 
                        << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x94U] 
        = ((0xfff00000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x94U]) 
           | ((((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)
                 ? 0U : (IData)(((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                                   << 0x39U) | (((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                                 << 0x19U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                   >> 7U))) 
                                 >> 0x20U))) >> 0xdU) 
              | (((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)
                   ? 1U : 0U) << 0x13U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x90U] 
        = ((0x7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x90U]) 
           | ((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__imm 
                       & (- (QData)((IData)((0U != 
                                             (0xb000000U 
                                              & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))))) 
              << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x91U] 
        = (((IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__imm 
                     & (- (QData)((IData)((0U != (0xb000000U 
                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))))) 
            >> 0xdU) | ((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__imm 
                                  & (- (QData)((IData)(
                                                       (0U 
                                                        != 
                                                        (0xb000000U 
                                                         & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)))))) 
                                 >> 0x20U)) << 0x13U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x92U] 
        = ((0xfff80000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x92U]) 
           | ((IData)(((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__imm 
                        & (- (QData)((IData)((0U != 
                                              (0xb000000U 
                                               & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)))))) 
                       >> 0x20U)) >> 0xdU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU] 
        = ((0x1ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[0U] 
              << 0x11U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8dU] 
        = ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[0U] 
            >> 0xfU) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[1U] 
                        << 0x11U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8eU] 
        = ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[1U] 
            >> 0xfU) | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[0U] 
                         << 0x12U) | (0x20000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[2U] 
                                                  << 0x11U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8fU] 
        = ((0x1ffffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[0U] 
                        >> 0xeU)) | ((0x20000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[0U] 
                                                  >> 0xeU)) 
                                     | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[1U] 
                                        << 0x12U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x90U] 
        = ((0xfff80000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x90U]) 
           | ((0x1ffffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[1U] 
                           >> 0xeU)) | ((0x20000U & 
                                         (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[1U] 
                                          >> 0xeU)) 
                                        | (0x40000U 
                                           & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[2U] 
                                              << 0x12U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8bU] 
        = ((0xf1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8bU]) 
           | (0xe000000U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU] 
                             << 0x1bU) | (0x6000000U 
                                          & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U] 
                                             >> 5U)))));
    if ((1U & (~ (IData)((3U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U] 
                                 >> 0x1eU)))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x97U] 
            = (0xc0003fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x97U]);
    }
    if ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[2U])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU] 
            = ((0xfffffc07U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU]) 
               | (0x3f8U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[0U] 
                            << 3U)));
    } else if ((0x2000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU] 
            = ((0xfffffc07U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU]) 
               | (0xf8U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                           >> 0xcU)));
    }
    if ((1U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[2U])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU] 
            = ((0xfffe03ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU]) 
               | (0x1fc00U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[0U] 
                              << 0xaU)));
    } else if ((0x100U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU] 
            = ((0xfffe03ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU]) 
               | (0x7c00U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                             >> 0xaU)));
    } else if ((0x200U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU] 
            = ((0xfffe03ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU]) 
               | (0xfffffc00U & (0x8000U | (0x7c00U 
                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                               >> 0xaU)))));
    } else if (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                 >> 0xbU) & (3U == (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                    >> 0x1bU)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU] 
            = ((0xfffe03ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU]) 
               | (0x7c00U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                             >> 0xaU)));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8bU] 
        = ((0xfffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8bU]) 
           | (((IData)((0U != (0x2f800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U])))
                ? (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                            >> 7U)) : (((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                   >> 7U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x1a007071U 
                                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                                                                   | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                                       >> 0xbU) 
                                                                      & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                                                << 0x1bU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                                                >> 5U))))))))))))) 
                                        | ((0x20U | 
                                            (0x1fU 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                >> 7U))) 
                                           & (- (IData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x100002U 
                                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))))) 
                                       | (0x40U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xf0000U 
                                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                                                                 | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                                     >> 0xbU) 
                                                                    & (0U 
                                                                       != 
                                                                       (0x1fffffffffULL 
                                                                        & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                                            << 0x1bU) 
                                                                           | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                                              >> 5U)))))))))))) 
              << 0x1cU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU] 
        = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x8cU]) 
           | (((IData)((0U != (0x2f800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U])))
                ? (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                            >> 7U)) : (((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                   >> 7U) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x1a007071U 
                                                                             & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                                                                   | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                                       >> 0xbU) 
                                                                      & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1fffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                                                << 0x1bU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                                                >> 5U))))))))))))) 
                                        | ((0x20U | 
                                            (0x1fU 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                >> 7U))) 
                                           & (- (IData)((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x100002U 
                                                                  & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))))) 
                                       | (0x40U & (- (IData)(
                                                             (1U 
                                                              & ((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0xf0000U 
                                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))) 
                                                                 | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                                     >> 0xbU) 
                                                                    & (0U 
                                                                       != 
                                                                       (0x1fffffffffULL 
                                                                        & (((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                                            << 0x1bU) 
                                                                           | ((QData)((IData)(
                                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                                              >> 5U)))))))))))) 
              >> 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaaU] 
        = ((0xfbffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaaU]) 
           | (0xfc000000U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU] 
                              << 0x13U) & (((0U != 
                                             (0x1fffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                  << 0x1bU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                    >> 5U)))) 
                                            | (IData)(
                                                      ((((0ULL 
                                                          != 
                                                          (0x3ff800ULL 
                                                           & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct)) 
                                                         | (0U 
                                                            != 
                                                            (0x3e0U 
                                                             & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)))) 
                                                        | (0U 
                                                           != 
                                                           (0xff00U 
                                                            & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct))) 
                                                       | (0U 
                                                          != 
                                                          (0x1ffffffU 
                                                           & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                                                               << 7U) 
                                                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
                                                                 >> 0x19U))))))) 
                                           << 0x1aU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa7U] 
        = ((0x7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa7U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                        << 0x39U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                      << 0x19U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                   >> 7U)))) 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa8U] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                      << 0x39U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                    << 0x19U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                 >> 7U)))) 
            >> 0x11U) | ((IData)(((((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                                    << 0x39U) | (((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                                  << 0x19U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                    >> 7U))) 
                                  >> 0x20U)) << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa9U] 
        = ((0xffff8000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa9U]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                         << 0x39U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                       << 0x19U) | 
                                      ((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                       >> 7U))) >> 0x20U)) 
              >> 0x11U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U] 
        = ((0xffff9fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U]) 
           | (0x6000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU] 
                         << 8U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa9U] 
        = ((0xfffe7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa9U]) 
           | (0x18000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU] 
                          << 0xeU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U] 
        = ((0x7fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
              << 0xfU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa7U] 
        = ((0xffff8000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa7U]) 
           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir 
              >> 0x11U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U] 
        = ((0xffffe3ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U]) 
           | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__delta) 
              << 0xaU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U] 
        = ((0xffffff9fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U]) 
           | ((((IData)((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                                  >> 0xbU))))) 
                << 1U) | (0U != (0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                   << 0x1bU) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                >> 5U))))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U] 
        = ((0xfffffe7fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U]) 
           | ((((IData)((0U != (0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct) 
                                         >> 5U)))) 
                << 1U) | (0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                                                << 7U) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
                                                  >> 0x19U))))) 
              << 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U] 
        = ((0xfffffdffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U]) 
           | ((IData)((0U != (0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
                                       >> 8U)))) << 9U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa4U] 
        = ((0x1fU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa4U]) 
           | ((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                               << 0x1bU) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                 >> 5U))) 
                          | (QData)((IData)((0x7ffU 
                                             & (IData)(
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                                        >> 0xbU)))))) 
                         | (QData)((IData)((0x1ffffffU 
                                            & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                                                << 7U) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
                                                  >> 0x19U)))))) 
                        | (QData)((IData)((0x1fU & 
                                           ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct) 
                                            >> 5U))))) 
                       | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
                                                   >> 8U)))))) 
              << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa5U] 
        = (((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                             << 0x1bU) 
                                            | ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                               >> 5U))) 
                        | (QData)((IData)((0x7ffU & (IData)(
                                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                                             >> 0xbU)))))) 
                       | (QData)((IData)((0x1ffffffU 
                                          & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                                              << 7U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
                                                >> 0x19U)))))) 
                      | (QData)((IData)((0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct) 
                                                  >> 5U))))) 
                     | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
                                                 >> 8U)))))) 
            >> 0x1bU) | ((IData)(((((((0x1fffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                           << 0x1bU) 
                                          | ((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                             >> 5U))) 
                                      | (QData)((IData)(
                                                        (0x7ffU 
                                                         & (IData)(
                                                                   (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                                                    >> 0xbU)))))) 
                                     | (QData)((IData)(
                                                       (0x1ffffffU 
                                                        & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                                                            << 7U) 
                                                           | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
                                                              >> 0x19U)))))) 
                                    | (QData)((IData)(
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct) 
                                                          >> 5U))))) 
                                   | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
                                                         >> 8U))))) 
                                  >> 0x20U)) << 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U] 
        = ((0xffffffe0U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U]) 
           | ((IData)(((((((0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[1U])) 
                                                  >> 5U))) 
                           | (QData)((IData)((0x7ffU 
                                              & (IData)(
                                                        (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                                         >> 0xbU)))))) 
                          | (QData)((IData)((0x1ffffffU 
                                             & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                                                 << 7U) 
                                                | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[0U] 
                                                   >> 0x19U)))))) 
                         | (QData)((IData)((0x1fU & 
                                            ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct) 
                                             >> 5U))))) 
                        | (QData)((IData)((0xffU & 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
                                            >> 8U))))) 
                       >> 0x20U)) >> 0x1bU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa2U] 
        = ((0xfU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa2U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                        << 0x39U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                      << 0x19U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                   >> 7U)))) 
              << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa3U] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                      << 0x39U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                    << 0x19U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                 >> 7U)))) 
            >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                                    << 0x39U) | (((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                                  << 0x19U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                    >> 7U))) 
                                  >> 0x20U)) << 4U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa4U] 
        = ((0xffffffe0U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa4U]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                         << 0x39U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                       << 0x19U) | 
                                      ((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                       >> 7U))) >> 0x20U)) 
              >> 0x1cU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9bU] 
        = ((0xfffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9bU]) 
           | ((0xf8000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[2U] 
                              << 0x1aU)) | (0x7f00000U 
                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[2U] 
                                               << 0x13U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9cU] 
        = (((0xffffcU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[2U] 
                         << 1U)) | (3U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[2U] 
                                          >> 6U))) 
           | (0xfff00000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[2U] 
                             << 1U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9dU] 
        = ((((2U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[3U] 
                    << 1U)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[2U] 
                               >> 0x1fU)) | (0xffffcU 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[3U] 
                                                << 1U))) 
           | (0xfff00000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[3U] 
                             << 1U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9eU] 
        = ((((2U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[4U] 
                    << 1U)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[3U] 
                               >> 0x1fU)) | ((0xffff8U 
                                              & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[2U] 
                                                 << 2U)) 
                                             | (4U 
                                                & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[4U] 
                                                   << 1U)))) 
           | (0xfff00000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[2U] 
                             << 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9fU] 
        = (((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[2U] 
             >> 0x1eU) | ((4U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[3U] 
                                 << 2U)) | (0xffff8U 
                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[3U] 
                                               << 2U)))) 
           | (0xfff00000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[3U] 
                             << 2U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa0U] 
        = ((0xfffffff0U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa0U]) 
           | ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[3U] 
               >> 0x1eU) | ((4U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[4U] 
                                   << 2U)) | (8U & 
                                              (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[4U] 
                                               << 2U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9bU] 
        = ((0xfff01fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x9bU]) 
           | (0xffffe000U & ((0x80000U & ((- (IData)(
                                                     (1U 
                                                      & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op 
                                                         >> 0xbU)))) 
                                          << 0xdU)) 
                             | ((0x40000U | (0x3e000U 
                                             & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                << 6U))) 
                                & ((- (IData)((IData)(
                                                      (0U 
                                                       != 
                                                       (0xf0000U 
                                                        & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__op))))) 
                                   << 0xdU)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbaU] 
        = ((0x7ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbaU]) 
           | (0x800U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU] 
                         << 4U) & (((0U != (0x1fffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U])) 
                                                << 0x16U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                  >> 0xaU)))) 
                                    | (IData)(((((0ULL 
                                                  != 
                                                  (0x1ffc00000ULL 
                                                   & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct)) 
                                                 | (0U 
                                                    != 
                                                    (0x7c00U 
                                                     & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct)))) 
                                                | (0U 
                                                   != 
                                                   (0xff0000U 
                                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct))) 
                                               | (0U 
                                                  != 
                                                  (0x1ffffffU 
                                                   & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U] 
                                                       << 0xeU) 
                                                      | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                                                         >> 0x12U))))))) 
                                   << 0xbU))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb7U] 
        = (IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                    << 0x39U) | (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                  << 0x19U) | ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                               >> 7U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb8U] 
        = (IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                     << 0x39U) | (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                   << 0x19U) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                >> 7U))) 
                   >> 0x20U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U] 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U]) 
           | (0xc0000000U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU] 
                             << 0x19U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb9U] 
        = ((0xfffffffcU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb9U]) 
           | (3U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xaU] 
                    >> 1U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb6U] 
        = vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__oir;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U] 
        = ((0xc7ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U]) 
           | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__delta) 
              << 0x1bU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U] 
        = ((0xff3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U]) 
           | ((((IData)((0U != (0x7ffU & (IData)((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                                  >> 0x16U))))) 
                << 1U) | (0U != (0x1fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U])) 
                                   << 0x16U) | ((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                >> 0xaU))))) 
              << 0x16U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U] 
        = ((0xfcffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U]) 
           | ((((IData)((0U != (0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct) 
                                         >> 0xaU)))) 
                << 1U) | (0U != (0x1ffffffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U] 
                                                << 0xeU) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                                                  >> 0x12U))))) 
              << 0x18U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U] 
        = ((0xfbffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U]) 
           | ((IData)((0U != (0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
                                       >> 0x10U)))) 
              << 0x1aU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb3U] 
        = ((0x3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb3U]) 
           | ((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U])) 
                                               << 0x16U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                 >> 0xaU))) 
                          | (QData)((IData)((0x7ffU 
                                             & (IData)(
                                                       (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                                        >> 0x16U)))))) 
                         | (QData)((IData)((0x1ffffffU 
                                            & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U] 
                                                << 0xeU) 
                                               | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                                                  >> 0x12U)))))) 
                        | (QData)((IData)((0x1fU & 
                                           ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct) 
                                            >> 0xaU))))) 
                       | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
                                                   >> 0x10U)))))) 
              << 0x16U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb4U] 
        = (((IData)((((((0x1fffffffffULL & (((QData)((IData)(
                                                             vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U])) 
                                             << 0x16U) 
                                            | ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                               >> 0xaU))) 
                        | (QData)((IData)((0x7ffU & (IData)(
                                                            (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                                             >> 0x16U)))))) 
                       | (QData)((IData)((0x1ffffffU 
                                          & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U] 
                                              << 0xeU) 
                                             | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                                                >> 0x12U)))))) 
                      | (QData)((IData)((0x1fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct) 
                                                  >> 0xaU))))) 
                     | (QData)((IData)((0xffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
                                                 >> 0x10U)))))) 
            >> 0xaU) | ((IData)(((((((0x1fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U])) 
                                          << 0x16U) 
                                         | ((QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                            >> 0xaU))) 
                                     | (QData)((IData)(
                                                       (0x7ffU 
                                                        & (IData)(
                                                                  (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                                                   >> 0x16U)))))) 
                                    | (QData)((IData)(
                                                      (0x1ffffffU 
                                                       & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U] 
                                                           << 0xeU) 
                                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                                                             >> 0x12U)))))) 
                                   | (QData)((IData)(
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct) 
                                                         >> 0xaU))))) 
                                  | (QData)((IData)(
                                                    (0xffU 
                                                     & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
                                                        >> 0x10U))))) 
                                 >> 0x20U)) << 0x16U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U] 
        = ((0xffc00000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U]) 
           | ((IData)(((((((0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[3U])) 
                                                << 0x16U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__alu_funct[2U])) 
                                                  >> 0xaU))) 
                           | (QData)((IData)((0x7ffU 
                                              & (IData)(
                                                        (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__lsu_funct 
                                                         >> 0x16U)))))) 
                          | (QData)((IData)((0x1ffffffU 
                                             & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[2U] 
                                                 << 0xeU) 
                                                | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__fpu_funct[1U] 
                                                   >> 0x12U)))))) 
                         | (QData)((IData)((0x1fU & 
                                            ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__mul_funct) 
                                             >> 0xaU))))) 
                        | (QData)((IData)((0xffU & 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__div_funct 
                                            >> 0x10U))))) 
                       >> 0x20U)) >> 0xaU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb1U] 
        = ((0x1fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb1U]) 
           | ((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                        << 0x39U) | (((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                      << 0x19U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                   >> 7U)))) 
              << 0x15U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb2U] 
        = (((IData)((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                      << 0x39U) | (((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                    << 0x19U) | ((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                 >> 7U)))) 
            >> 0xbU) | ((IData)(((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                                   << 0x39U) | (((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                                 << 0x19U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                                   >> 7U))) 
                                 >> 0x20U)) << 0x15U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb3U] 
        = ((0xffc00000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb3U]) 
           | ((IData)(((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU])) 
                         << 0x39U) | (((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xcU])) 
                                       << 0x19U) | 
                                      ((QData)((IData)(
                                                       vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xbU])) 
                                       >> 7U))) >> 0x20U)) 
              >> 0xbU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xabU] 
        = ((0x7ffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xabU]) 
           | (0xfff80000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[4U] 
                             << 0x11U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xacU] 
        = (((0x60000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[5U] 
                         << 0x11U)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[4U] 
                                       >> 0xfU)) | 
           (0xfff80000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[5U] 
                           << 0x11U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xadU] 
        = (((0x60000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[6U] 
                         << 0x11U)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[5U] 
                                       >> 0xfU)) | 
           ((0xfff00000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[4U] 
                            << 0x12U)) | (0x80000U 
                                          & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__b[6U] 
                                             << 0x11U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaeU] 
        = (((0x40000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[5U] 
                         << 0x12U)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[4U] 
                                       >> 0xeU)) | 
           ((0x80000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[5U] 
                         << 0x12U)) | (0xfff00000U 
                                       & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[5U] 
                                          << 0x12U))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xafU] 
        = ((0xffe00000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xafU]) 
           | (((0x40000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[6U] 
                            << 0x12U)) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[5U] 
                                          >> 0xeU)) 
              | ((0x80000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[6U] 
                              << 0x12U)) | (0x100000U 
                                            & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[6U] 
                                               << 0x12U)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaaU] 
        = ((0x3fffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaaU]) 
           | (0xc0000000U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                             << 0x17U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xabU] 
        = ((0xfff80000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xabU]) 
           | (0x3fffffffU & (0x40000U | ((0xfe0U & 
                                          (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__a[4U] 
                                           << 3U)) 
                                         | (7U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__decoder_unit__BRA__3__KET____DOT__ir 
                                                  >> 9U))))));
    if ((0x800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xbaU])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U] 
            = (0xffffe3ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U]);
    }
    if ((0x4000000U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaaU])) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U] 
            = (0xf1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U]);
    }
    vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0 
        = (0x7ffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[9U] 
                      << 5U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[8U] 
                                >> 0x1bU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[0U] 
        = ((0xfffff800U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[0U]) 
           | (IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0));
    vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0 
        = (0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x18U] 
                     >> 0xcU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[0U] 
        = ((0xffc007ffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[0U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              << 0xbU));
    vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0 
        = (0x7ffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x28U] 
                      << 3U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x27U] 
                                >> 0x1dU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[0U] 
        = ((0x3fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[0U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              << 0x16U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[1U] 
        = ((0xfffffffeU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[1U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              >> 0xaU));
    vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0 
        = (0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x37U] 
                     >> 0xeU));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[1U] 
        = ((0xfffff001U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[1U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              << 1U));
    vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0 
        = (0x7ffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x47U] 
                      << 1U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x46U] 
                                >> 0x1fU)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[1U] 
        = ((0xff800fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[1U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              << 0xcU));
    vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0 
        = (0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x56U] 
                     >> 0x10U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[1U] 
        = ((0x7fffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[1U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              << 0x17U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[2U] 
        = ((0xfffffffcU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[2U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              >> 9U));
    vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0 
        = (0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x66U] 
                     >> 1U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[2U] 
        = ((0xffffe003U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[2U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              << 2U));
    vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0 
        = (0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x75U] 
                     >> 0x12U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[2U] 
        = ((0xff001fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[2U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              << 0xdU));
    vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0 
        = (0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x85U] 
                     >> 3U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[2U] 
        = ((0xffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[2U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              << 0x18U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[3U] 
        = ((0xfffffff8U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[3U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              >> 8U));
    vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0 
        = (0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x94U] 
                     >> 0x14U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[3U] 
        = ((0xffffc007U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[3U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              << 3U));
    vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0 
        = (0x7ffU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa4U] 
                     >> 5U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[3U] 
        = ((0xfe003fffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[3U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              << 0xeU));
    vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0 
        = (0x7ffU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb4U] 
                      << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb3U] 
                                  >> 0x16U)));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[3U] 
        = ((0x1ffffffU & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[3U]) 
           | ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
              << 0x19U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[4U] 
        = (0xfU & ((IData)(vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h4269b9a1__0) 
                   >> 7U));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
        = (0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num));
    if ((0U != (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xaU] 
                >> 0x1bU))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
            = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num)) 
               | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num))));
    }
    if ((0U != (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x1aU] 
                         >> 0xcU)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
            = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num)) 
               | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num))));
    }
    if ((0U != (0x1fU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x2aU] 
                          << 3U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x29U] 
                                    >> 0x1dU))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
            = ((0xfff0U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num)) 
               | (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num))));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
        = (0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num));
    if ((0U != (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x39U] 
                         >> 0xeU)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
            = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num)) 
               | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num) 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((0U != (0x1fU & ((vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x49U] 
                          << 1U) | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x48U] 
                                    >> 0x1fU))))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
            = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num)) 
               | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num) 
                                           >> 4U)) 
                           << 4U)));
    }
    if ((0U != (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x58U] 
                         >> 0x10U)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
            = ((0xff0fU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num)) 
               | (0xf0U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num) 
                                           >> 4U)) 
                           << 4U)));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
        = (0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num));
    if ((0U != (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x68U] 
                         >> 1U)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
            = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num)) 
               | (0xf00U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num) 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((0U != (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x77U] 
                         >> 0x12U)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
            = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num)) 
               | (0xf00U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num) 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((0U != (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x87U] 
                         >> 3U)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
            = ((0xf0ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num)) 
               | (0xf00U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num) 
                                            >> 8U)) 
                            << 8U)));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
        = (0xfffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num));
    if ((0U != (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0x96U] 
                         >> 0x14U)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
            = ((0xfffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num)) 
               | (0xf000U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num) 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((0U != (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xa6U] 
                         >> 5U)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
            = ((0xfffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num)) 
               | (0xf000U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num) 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    if ((0U != (0x1fU & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[0xb5U] 
                         >> 0x16U)))) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num 
            = ((0xfffU & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num)) 
               | (0xf000U & (((IData)(1U) + ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num) 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelf->vcore__DOT__inst__DOT__dec_ready = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x3eU)) {
        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_brin = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_ldin = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin = 0U;
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) {
            if (((((((((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in) 
                       + (0xfU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num) 
                                  >> (0xfU & VL_SHIFTL_III(4,32,32, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i, 2U))))) 
                      > ((IData)(8U) - (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_num))) 
                     | (4U < ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in) 
                              + (0xfU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num) 
                                         >> (0xfU & 
                                             VL_SHIFTL_III(4,32,32, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i, 2U))))))) 
                    | (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in) 
                        + (0xfU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_num) 
                                   >> (0xfU & VL_SHIFTL_III(4,32,32, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i, 2U))))) 
                       > (((IData)(0x40U) - (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__opnum)) 
                          + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__opcom)))) 
                   | (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_brin) 
                       + (0xfU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum) 
                                  >> (0xfU & VL_SHIFTL_III(4,32,32, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i, 2U))))) 
                      > (((IData)(0x10U) - (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__brnum)) 
                         + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__brcom)))) 
                  | (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_ldin) 
                      + (0xfU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_ldnum) 
                                 >> (0xfU & VL_SHIFTL_III(4,32,32, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i, 2U))))) 
                     > (((IData)(8U) - (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__ldnum)) 
                        + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__ldcom)))) 
                 | (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin) 
                     + (0xfU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_stnum) 
                                >> (0xfU & VL_SHIFTL_III(4,32,32, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i, 2U))))) 
                    > ((((IData)(8U) - (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__stnum)) 
                        + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__stcom)) 
                       - (IData)(1U))))) {
                goto __Vlabel1;
            }
            if (((0x174bU >= ((IData)(0x1f0U) + (0x1fffU 
                                                 & ((IData)(0x5d3U) 
                                                    * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))) 
                 && (1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                           (((IData)(0x1f0U) + (0x1fffU 
                                                & ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))) 
                            >> 5U)] >> (0x1fU & ((IData)(0x1f0U) 
                                                 + 
                                                 (0x1fffU 
                                                  & ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))))) {
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0U] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0U] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(1U) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 (0xffU & (((IData)(0x5d3U) 
                                            * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                           >> 5U))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[0U]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[1U] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[1U] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(2U) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(1U) + (0xffU 
                                                 & (((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[1U]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[2U] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[2U] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(3U) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(2U) + (0xffU 
                                                 & (((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[2U]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[3U] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[3U] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(4U) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(3U) + (0xffU 
                                                 & (((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[3U]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[4U] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[4U] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(5U) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(4U) + (0xffU 
                                                 & (((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[4U]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[5U] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[5U] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(6U) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(5U) + (0xffU 
                                                 & (((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[5U]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[6U] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[6U] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(7U) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(6U) + (0xffU 
                                                 & (((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[6U]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[7U] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[7U] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(8U) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(7U) + (0xffU 
                                                 & (((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[7U]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[8U] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[8U] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(9U) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(8U) + (0xffU 
                                                 & (((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[8U]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[9U] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[9U] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(0xaU) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(9U) + (0xffU 
                                                 & (((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[9U]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xaU] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xaU] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(0xbU) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(0xaU) + (0xffU 
                                                   & (((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                      >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[0xaU]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xbU] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xbU] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(0xcU) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(0xbU) + (0xffU 
                                                   & (((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                      >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[0xbU]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xcU] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xcU] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(0xdU) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(0xcU) + (0xffU 
                                                   & (((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                      >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[0xcU]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xdU] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xdU] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(0xeU) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(0xdU) + (0xffU 
                                                   & (((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                      >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[0xdU]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xeU] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xeU] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(0xfU) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(0xeU) + (0xffU 
                                                   & (((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                      >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[0xeU]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xfU] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xfU] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                           ? (((0U == (0x1fU & ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(0x10U) 
                                         + (0xffU & 
                                            (((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x5d3U) 
                                                  * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 ((IData)(0xfU) + (0xffU 
                                                   & (((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                                      >> 5U)))] 
                                 >> (0x1fU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[0xfU]));
                if (VL_LIKELY((0x7c3U >= (0x7ffU & 
                                          ((IData)(0x1f1U) 
                                           * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))) {
                    VL_ASSIGNSEL_WW(1988,497,(0x7ffU 
                                              & ((IData)(0x1f1U) 
                                                 * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0);
                }
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hfd7d8a76__0 = 0U;
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hcec99b21__0 
                    = (0x3fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__opid) 
                                + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)));
                if ((0x7c3U >= ((IData)(0x1e1U) + (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))) {
                    VL_ASSIGNSEL_WI(1988,15,((IData)(0x1e1U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hfd7d8a76__0);
                    VL_ASSIGNSEL_WI(1988,6,((IData)(0x1e1U) 
                                            + (0x7ffU 
                                               & ((IData)(0x1f1U) 
                                                  * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hcec99b21__0);
                }
                if ((1U == (0xfU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum) 
                                    >> (0xfU & VL_SHIFTL_III(4,32,32, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i, 2U)))))) {
                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hea735c62__0 = 1U;
                    if (VL_LIKELY((0x7c3U >= ((IData)(0x1e0U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x1f1U) 
                                                    * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[(
                                                                                ((IData)(0x1e0U) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x1f1U) 
                                                                                * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                                                                >> 5U)] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x1e0U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x1f1U) 
                                                    * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) 
                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[
                                (((IData)(0x1e0U) + 
                                  (0x7ffU & ((IData)(0x1f1U) 
                                             * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                 >> 5U)]) | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hea735c62__0) 
                                             << (0x1fU 
                                                 & ((IData)(0x1e0U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0x1f1U) 
                                                        * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))));
                    }
                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hebc54ad4__0 
                        = (0xfU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__brid) 
                                   + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_brin)));
                    if (VL_LIKELY((0x7c3U >= ((IData)(0x1d9U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x1f1U) 
                                                    * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                        VL_ASSIGNSEL_WI(1988,4,((IData)(0x1d9U) 
                                                + (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hebc54ad4__0);
                    }
                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_brin 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_brin)));
                }
                if (((0x174bU >= ((IData)(0x15cU) + 
                                  (0x1fffU & ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))) 
                     && (1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                               (((IData)(0x15cU) + 
                                 (0x1fffU & ((IData)(0x5d3U) 
                                             * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(0x15cU) 
                                             + (0x1fffU 
                                                & ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))))) {
                    if (((0x83U >= (0xffU & ((IData)(0x21U) 
                                             * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))) 
                         && (1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[
                                   (7U & (((IData)(0x21U) 
                                           * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i) 
                                          >> 5U))] 
                                   >> (0x1fU & ((IData)(0x21U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) {
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hea4cf99d__0 = 1U;
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1d8U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[(
                                                                                ((IData)(0x1d8U) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x1f1U) 
                                                                                * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                                                                >> 5U)] 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & 
                                            ((IData)(0x1d8U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) 
                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[
                                    (((IData)(0x1d8U) 
                                      + (0x7ffU & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                     >> 5U)]) | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hea4cf99d__0) 
                                                 << 
                                                 (0x1fU 
                                                  & ((IData)(0x1d8U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x1f1U) 
                                                         * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))));
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_he0a31fda__0 = 1U;
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1d0U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[(
                                                                                ((IData)(0x1d0U) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x1f1U) 
                                                                                * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                                                                >> 5U)] 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & 
                                            ((IData)(0x1d0U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) 
                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[
                                    (((IData)(0x1d0U) 
                                      + (0x7ffU & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                     >> 5U)]) | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_he0a31fda__0) 
                                                 << 
                                                 (0x1fU 
                                                  & ((IData)(0x1d0U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x1f1U) 
                                                         * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))));
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hc9689b9f__0 
                            = (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__ldid) 
                                     + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_ldin)));
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1d1U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            VL_ASSIGNSEL_WI(1988,3,
                                            ((IData)(0x1d1U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hc9689b9f__0);
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hd2d7cdea__0 
                            = (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__stid) 
                                     + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin)));
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1c9U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            VL_ASSIGNSEL_WI(1988,3,
                                            ((IData)(0x1c9U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hd2d7cdea__0);
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_ldin 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_ldin)));
                    } else {
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_he0a31fda__1 = 1U;
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1d0U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[(
                                                                                ((IData)(0x1d0U) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x1f1U) 
                                                                                * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                                                                >> 5U)] 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & 
                                            ((IData)(0x1d0U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) 
                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[
                                    (((IData)(0x1d0U) 
                                      + (0x7ffU & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                     >> 5U)]) | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_he0a31fda__1) 
                                                 << 
                                                 (0x1fU 
                                                  & ((IData)(0x1d0U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x1f1U) 
                                                         * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))));
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hd2d7cdea__1 
                            = (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__stid) 
                                     + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin)));
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1c9U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            VL_ASSIGNSEL_WI(1988,3,
                                            ((IData)(0x1c9U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hd2d7cdea__1);
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin)));
                    }
                }
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)));
            }
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 1U;
            if (((0x174bU >= ((IData)(0x1f0U) + (0x1fffU 
                                                 & ((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                 && (1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                           (((IData)(0x1f0U) + (0x1fffU 
                                                & ((IData)(0x1f1U) 
                                                   + 
                                                   ((IData)(0x5d3U) 
                                                    * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))) 
                            >> 5U)] >> (0x1fU & ((IData)(0x1f0U) 
                                                 + 
                                                 (0x1fffU 
                                                  & ((IData)(0x1f1U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))))))) {
                __Vtemp_348[1U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[1U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(2U) 
                                             + (0xffU 
                                                & (((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(1U) 
                                              + (0xffU 
                                                 & (((IData)(0x1f1U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[1U]));
                __Vtemp_348[2U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[2U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(3U) 
                                             + (0xffU 
                                                & (((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(2U) 
                                              + (0xffU 
                                                 & (((IData)(0x1f1U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[2U]));
                __Vtemp_348[3U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[3U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(4U) 
                                             + (0xffU 
                                                & (((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(3U) 
                                              + (0xffU 
                                                 & (((IData)(0x1f1U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[3U]));
                __Vtemp_348[4U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[4U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(5U) 
                                             + (0xffU 
                                                & (((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(4U) 
                                              + (0xffU 
                                                 & (((IData)(0x1f1U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[4U]));
                __Vtemp_348[5U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[5U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(6U) 
                                             + (0xffU 
                                                & (((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(5U) 
                                              + (0xffU 
                                                 & (((IData)(0x1f1U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[5U]));
                __Vtemp_348[6U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[6U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(7U) 
                                             + (0xffU 
                                                & (((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(6U) 
                                              + (0xffU 
                                                 & (((IData)(0x1f1U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[6U]));
                __Vtemp_348[7U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[7U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(8U) 
                                             + (0xffU 
                                                & (((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(7U) 
                                              + (0xffU 
                                                 & (((IData)(0x1f1U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[7U]));
                __Vtemp_348[8U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[8U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(9U) 
                                             + (0xffU 
                                                & (((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(8U) 
                                              + (0xffU 
                                                 & (((IData)(0x1f1U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[8U]));
                __Vtemp_348[9U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[9U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(0xaU) 
                                             + (0xffU 
                                                & (((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(9U) 
                                              + (0xffU 
                                                 & (((IData)(0x1f1U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x1f1U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[9U]));
                __Vtemp_348[0xaU] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xaU] 
                                     & ((0x174bU >= 
                                         (0x1fffU & 
                                          ((IData)(0x1f1U) 
                                           + ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x1f1U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                              ? 0U : 
                                             (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                              ((IData)(0xbU) 
                                               + (0xffU 
                                                  & (((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                               ((IData)(0xaU) 
                                                + (0xffU 
                                                   & (((IData)(0x1f1U) 
                                                       + 
                                                       ((IData)(0x5d3U) 
                                                        * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                         : Vvcore__ConstPool__CONST_he05e7219_0[0xaU]));
                __Vtemp_348[0xbU] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xbU] 
                                     & ((0x174bU >= 
                                         (0x1fffU & 
                                          ((IData)(0x1f1U) 
                                           + ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x1f1U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                              ? 0U : 
                                             (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                              ((IData)(0xcU) 
                                               + (0xffU 
                                                  & (((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                               ((IData)(0xbU) 
                                                + (0xffU 
                                                   & (((IData)(0x1f1U) 
                                                       + 
                                                       ((IData)(0x5d3U) 
                                                        * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                         : Vvcore__ConstPool__CONST_he05e7219_0[0xbU]));
                __Vtemp_348[0xcU] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xcU] 
                                     & ((0x174bU >= 
                                         (0x1fffU & 
                                          ((IData)(0x1f1U) 
                                           + ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x1f1U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                              ? 0U : 
                                             (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                              ((IData)(0xdU) 
                                               + (0xffU 
                                                  & (((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                               ((IData)(0xcU) 
                                                + (0xffU 
                                                   & (((IData)(0x1f1U) 
                                                       + 
                                                       ((IData)(0x5d3U) 
                                                        * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                         : Vvcore__ConstPool__CONST_he05e7219_0[0xcU]));
                __Vtemp_348[0xdU] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xdU] 
                                     & ((0x174bU >= 
                                         (0x1fffU & 
                                          ((IData)(0x1f1U) 
                                           + ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x1f1U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                              ? 0U : 
                                             (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                              ((IData)(0xeU) 
                                               + (0xffU 
                                                  & (((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                               ((IData)(0xdU) 
                                                + (0xffU 
                                                   & (((IData)(0x1f1U) 
                                                       + 
                                                       ((IData)(0x5d3U) 
                                                        * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                         : Vvcore__ConstPool__CONST_he05e7219_0[0xdU]));
                __Vtemp_348[0xeU] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xeU] 
                                     & ((0x174bU >= 
                                         (0x1fffU & 
                                          ((IData)(0x1f1U) 
                                           + ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x1f1U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                              ? 0U : 
                                             (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                              ((IData)(0xfU) 
                                               + (0xffU 
                                                  & (((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                               ((IData)(0xeU) 
                                                + (0xffU 
                                                   & (((IData)(0x1f1U) 
                                                       + 
                                                       ((IData)(0x5d3U) 
                                                        * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                         : Vvcore__ConstPool__CONST_he05e7219_0[0xeU]));
                __Vtemp_348[0xfU] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xfU] 
                                     & ((0x174bU >= 
                                         (0x1fffU & 
                                          ((IData)(0x1f1U) 
                                           + ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x1f1U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                              ? 0U : 
                                             (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                              ((IData)(0x10U) 
                                               + (0xffU 
                                                  & (((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                               ((IData)(0xfU) 
                                                + (0xffU 
                                                   & (((IData)(0x1f1U) 
                                                       + 
                                                       ((IData)(0x5d3U) 
                                                        * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x1f1U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                         : Vvcore__ConstPool__CONST_he05e7219_0[0xfU]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0U] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0U] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x1f1U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           ? (((0U == (0x1fU & ((IData)(0x1f1U) 
                                                + ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(1U) 
                                         + (0xffU & 
                                            (((IData)(0x1f1U) 
                                              + ((IData)(0x5d3U) 
                                                 * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x1f1U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 (0xffU & (((IData)(0x1f1U) 
                                            + ((IData)(0x5d3U) 
                                               * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                           >> 5U))] 
                                 >> (0x1fU & ((IData)(0x1f1U) 
                                              + ((IData)(0x5d3U) 
                                                 * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[0U]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[1U] 
                    = __Vtemp_348[1U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[2U] 
                    = __Vtemp_348[2U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[3U] 
                    = __Vtemp_348[3U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[4U] 
                    = __Vtemp_348[4U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[5U] 
                    = __Vtemp_348[5U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[6U] 
                    = __Vtemp_348[6U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[7U] 
                    = __Vtemp_348[7U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[8U] 
                    = __Vtemp_348[8U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[9U] 
                    = __Vtemp_348[9U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xaU] 
                    = __Vtemp_348[0xaU];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xbU] 
                    = __Vtemp_348[0xbU];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xcU] 
                    = __Vtemp_348[0xcU];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xdU] 
                    = __Vtemp_348[0xdU];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xeU] 
                    = __Vtemp_348[0xeU];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xfU] 
                    = __Vtemp_348[0xfU];
                if (VL_LIKELY((0x7c3U >= (0x7ffU & 
                                          ((IData)(0x1f1U) 
                                           * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))) {
                    VL_ASSIGNSEL_WW(1988,497,(0x7ffU 
                                              & ((IData)(0x1f1U) 
                                                 * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0);
                }
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hfd7d8a76__0 = 0U;
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hcec99b21__0 
                    = (0x3fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__opid) 
                                + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)));
                if ((0x7c3U >= ((IData)(0x1e1U) + (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))) {
                    VL_ASSIGNSEL_WI(1988,15,((IData)(0x1e1U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hfd7d8a76__0);
                    VL_ASSIGNSEL_WI(1988,6,((IData)(0x1e1U) 
                                            + (0x7ffU 
                                               & ((IData)(0x1f1U) 
                                                  * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hcec99b21__0);
                }
                if ((1U == (0xfU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum) 
                                    >> (0xfU & VL_SHIFTL_III(4,32,32, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i, 2U)))))) {
                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hea735c62__0 = 1U;
                    if (VL_LIKELY((0x7c3U >= ((IData)(0x1e0U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x1f1U) 
                                                    * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[(
                                                                                ((IData)(0x1e0U) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x1f1U) 
                                                                                * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                                                                >> 5U)] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x1e0U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x1f1U) 
                                                    * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) 
                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[
                                (((IData)(0x1e0U) + 
                                  (0x7ffU & ((IData)(0x1f1U) 
                                             * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                 >> 5U)]) | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hea735c62__0) 
                                             << (0x1fU 
                                                 & ((IData)(0x1e0U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0x1f1U) 
                                                        * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))));
                    }
                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hebc54ad4__0 
                        = (0xfU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__brid) 
                                   + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_brin)));
                    if (VL_LIKELY((0x7c3U >= ((IData)(0x1d9U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x1f1U) 
                                                    * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                        VL_ASSIGNSEL_WI(1988,4,((IData)(0x1d9U) 
                                                + (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hebc54ad4__0);
                    }
                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_brin 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_brin)));
                }
                if (((0x174bU >= ((IData)(0x15cU) + 
                                  (0x1fffU & ((IData)(0x1f1U) 
                                              + ((IData)(0x5d3U) 
                                                 * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                     && (1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                               (((IData)(0x15cU) + 
                                 (0x1fffU & ((IData)(0x1f1U) 
                                             + ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(0x15cU) 
                                             + (0x1fffU 
                                                & ((IData)(0x1f1U) 
                                                   + 
                                                   ((IData)(0x5d3U) 
                                                    * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))))))) {
                    if (((0x83U >= (0xffU & ((IData)(0xbU) 
                                             + ((IData)(0x21U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))) 
                         && (1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[
                                   (7U & (((IData)(0xbU) 
                                           + ((IData)(0x21U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                          >> 5U))] 
                                   >> (0x1fU & ((IData)(0xbU) 
                                                + ((IData)(0x21U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))))) {
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hea4cf99d__0 = 1U;
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1d8U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[(
                                                                                ((IData)(0x1d8U) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x1f1U) 
                                                                                * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                                                                >> 5U)] 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & 
                                            ((IData)(0x1d8U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) 
                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[
                                    (((IData)(0x1d8U) 
                                      + (0x7ffU & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                     >> 5U)]) | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hea4cf99d__0) 
                                                 << 
                                                 (0x1fU 
                                                  & ((IData)(0x1d8U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x1f1U) 
                                                         * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))));
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_he0a31fda__0 = 1U;
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1d0U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[(
                                                                                ((IData)(0x1d0U) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x1f1U) 
                                                                                * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                                                                >> 5U)] 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & 
                                            ((IData)(0x1d0U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) 
                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[
                                    (((IData)(0x1d0U) 
                                      + (0x7ffU & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                     >> 5U)]) | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_he0a31fda__0) 
                                                 << 
                                                 (0x1fU 
                                                  & ((IData)(0x1d0U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x1f1U) 
                                                         * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))));
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hc9689b9f__0 
                            = (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__ldid) 
                                     + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_ldin)));
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1d1U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            VL_ASSIGNSEL_WI(1988,3,
                                            ((IData)(0x1d1U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hc9689b9f__0);
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hd2d7cdea__0 
                            = (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__stid) 
                                     + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin)));
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1c9U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            VL_ASSIGNSEL_WI(1988,3,
                                            ((IData)(0x1c9U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hd2d7cdea__0);
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_ldin 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_ldin)));
                    } else {
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_he0a31fda__1 = 1U;
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1d0U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[(
                                                                                ((IData)(0x1d0U) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x1f1U) 
                                                                                * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                                                                >> 5U)] 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & 
                                            ((IData)(0x1d0U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) 
                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[
                                    (((IData)(0x1d0U) 
                                      + (0x7ffU & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                     >> 5U)]) | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_he0a31fda__1) 
                                                 << 
                                                 (0x1fU 
                                                  & ((IData)(0x1d0U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x1f1U) 
                                                         * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))));
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hd2d7cdea__1 
                            = (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__stid) 
                                     + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin)));
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1c9U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            VL_ASSIGNSEL_WI(1988,3,
                                            ((IData)(0x1c9U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hd2d7cdea__1);
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin)));
                    }
                }
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)));
            }
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 2U;
            if (((0x174bU >= ((IData)(0x1f0U) + (0x1fffU 
                                                 & ((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                 && (1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                           (((IData)(0x1f0U) + (0x1fffU 
                                                & ((IData)(0x3e2U) 
                                                   + 
                                                   ((IData)(0x5d3U) 
                                                    * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))) 
                            >> 5U)] >> (0x1fU & ((IData)(0x1f0U) 
                                                 + 
                                                 (0x1fffU 
                                                  & ((IData)(0x3e2U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))))))) {
                __Vtemp_356[1U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[1U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(2U) 
                                             + (0xffU 
                                                & (((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(1U) 
                                              + (0xffU 
                                                 & (((IData)(0x3e2U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[1U]));
                __Vtemp_356[2U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[2U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(3U) 
                                             + (0xffU 
                                                & (((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(2U) 
                                              + (0xffU 
                                                 & (((IData)(0x3e2U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[2U]));
                __Vtemp_356[3U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[3U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(4U) 
                                             + (0xffU 
                                                & (((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(3U) 
                                              + (0xffU 
                                                 & (((IData)(0x3e2U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[3U]));
                __Vtemp_356[4U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[4U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(5U) 
                                             + (0xffU 
                                                & (((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(4U) 
                                              + (0xffU 
                                                 & (((IData)(0x3e2U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[4U]));
                __Vtemp_356[5U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[5U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(6U) 
                                             + (0xffU 
                                                & (((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(5U) 
                                              + (0xffU 
                                                 & (((IData)(0x3e2U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[5U]));
                __Vtemp_356[6U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[6U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(7U) 
                                             + (0xffU 
                                                & (((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(6U) 
                                              + (0xffU 
                                                 & (((IData)(0x3e2U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[6U]));
                __Vtemp_356[7U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[7U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(8U) 
                                             + (0xffU 
                                                & (((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(7U) 
                                              + (0xffU 
                                                 & (((IData)(0x3e2U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[7U]));
                __Vtemp_356[8U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[8U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(9U) 
                                             + (0xffU 
                                                & (((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(8U) 
                                              + (0xffU 
                                                 & (((IData)(0x3e2U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[8U]));
                __Vtemp_356[9U] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[9U] 
                                   & ((0x174bU >= (0x1fffU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                       ? (((0U == (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                            ? 0U : 
                                           (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                            ((IData)(0xaU) 
                                             + (0xffU 
                                                & (((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                   >> 5U)))] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                          | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                             ((IData)(9U) 
                                              + (0xffU 
                                                 & (((IData)(0x3e2U) 
                                                     + 
                                                     ((IData)(0x5d3U) 
                                                      * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                    >> 5U)))] 
                                             >> (0x1fU 
                                                 & ((IData)(0x3e2U) 
                                                    + 
                                                    ((IData)(0x5d3U) 
                                                     * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                       : Vvcore__ConstPool__CONST_he05e7219_0[9U]));
                __Vtemp_356[0xaU] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xaU] 
                                     & ((0x174bU >= 
                                         (0x1fffU & 
                                          ((IData)(0x3e2U) 
                                           + ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x3e2U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                              ? 0U : 
                                             (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                              ((IData)(0xbU) 
                                               + (0xffU 
                                                  & (((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                               ((IData)(0xaU) 
                                                + (0xffU 
                                                   & (((IData)(0x3e2U) 
                                                       + 
                                                       ((IData)(0x5d3U) 
                                                        * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                         : Vvcore__ConstPool__CONST_he05e7219_0[0xaU]));
                __Vtemp_356[0xbU] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xbU] 
                                     & ((0x174bU >= 
                                         (0x1fffU & 
                                          ((IData)(0x3e2U) 
                                           + ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x3e2U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                              ? 0U : 
                                             (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                              ((IData)(0xcU) 
                                               + (0xffU 
                                                  & (((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                               ((IData)(0xbU) 
                                                + (0xffU 
                                                   & (((IData)(0x3e2U) 
                                                       + 
                                                       ((IData)(0x5d3U) 
                                                        * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                         : Vvcore__ConstPool__CONST_he05e7219_0[0xbU]));
                __Vtemp_356[0xcU] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xcU] 
                                     & ((0x174bU >= 
                                         (0x1fffU & 
                                          ((IData)(0x3e2U) 
                                           + ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x3e2U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                              ? 0U : 
                                             (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                              ((IData)(0xdU) 
                                               + (0xffU 
                                                  & (((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                               ((IData)(0xcU) 
                                                + (0xffU 
                                                   & (((IData)(0x3e2U) 
                                                       + 
                                                       ((IData)(0x5d3U) 
                                                        * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                         : Vvcore__ConstPool__CONST_he05e7219_0[0xcU]));
                __Vtemp_356[0xdU] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xdU] 
                                     & ((0x174bU >= 
                                         (0x1fffU & 
                                          ((IData)(0x3e2U) 
                                           + ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x3e2U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                              ? 0U : 
                                             (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                              ((IData)(0xeU) 
                                               + (0xffU 
                                                  & (((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                               ((IData)(0xdU) 
                                                + (0xffU 
                                                   & (((IData)(0x3e2U) 
                                                       + 
                                                       ((IData)(0x5d3U) 
                                                        * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                         : Vvcore__ConstPool__CONST_he05e7219_0[0xdU]));
                __Vtemp_356[0xeU] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xeU] 
                                     & ((0x174bU >= 
                                         (0x1fffU & 
                                          ((IData)(0x3e2U) 
                                           + ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x3e2U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                              ? 0U : 
                                             (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                              ((IData)(0xfU) 
                                               + (0xffU 
                                                  & (((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                               ((IData)(0xeU) 
                                                + (0xffU 
                                                   & (((IData)(0x3e2U) 
                                                       + 
                                                       ((IData)(0x5d3U) 
                                                        * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                         : Vvcore__ConstPool__CONST_he05e7219_0[0xeU]));
                __Vtemp_356[0xfU] = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0xfU] 
                                     & ((0x174bU >= 
                                         (0x1fffU & 
                                          ((IData)(0x3e2U) 
                                           + ((IData)(0x5d3U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                         ? (((0U == 
                                              (0x1fU 
                                               & ((IData)(0x3e2U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                              ? 0U : 
                                             (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                              ((IData)(0x10U) 
                                               + (0xffU 
                                                  & (((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                                            | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                               ((IData)(0xfU) 
                                                + (0xffU 
                                                   & (((IData)(0x3e2U) 
                                                       + 
                                                       ((IData)(0x5d3U) 
                                                        * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0x3e2U) 
                                                      + 
                                                      ((IData)(0x5d3U) 
                                                       * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                                         : Vvcore__ConstPool__CONST_he05e7219_0[0xfU]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0U] 
                    = (Vvcore__ConstPool__CONST_h8b2f9f06_0[0U] 
                       & ((0x174bU >= (0x1fffU & ((IData)(0x3e2U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                           ? (((0U == (0x1fU & ((IData)(0x3e2U) 
                                                + ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))
                                ? 0U : (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                        ((IData)(1U) 
                                         + (0xffU & 
                                            (((IData)(0x3e2U) 
                                              + ((IData)(0x5d3U) 
                                                 * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0x3e2U) 
                                                  + 
                                                  ((IData)(0x5d3U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))) 
                              | (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                                 (0xffU & (((IData)(0x3e2U) 
                                            + ((IData)(0x5d3U) 
                                               * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                           >> 5U))] 
                                 >> (0x1fU & ((IData)(0x3e2U) 
                                              + ((IData)(0x5d3U) 
                                                 * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))))
                           : Vvcore__ConstPool__CONST_he05e7219_0[0U]));
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[1U] 
                    = __Vtemp_356[1U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[2U] 
                    = __Vtemp_356[2U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[3U] 
                    = __Vtemp_356[3U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[4U] 
                    = __Vtemp_356[4U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[5U] 
                    = __Vtemp_356[5U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[6U] 
                    = __Vtemp_356[6U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[7U] 
                    = __Vtemp_356[7U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[8U] 
                    = __Vtemp_356[8U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[9U] 
                    = __Vtemp_356[9U];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xaU] 
                    = __Vtemp_356[0xaU];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xbU] 
                    = __Vtemp_356[0xbU];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xcU] 
                    = __Vtemp_356[0xcU];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xdU] 
                    = __Vtemp_356[0xdU];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xeU] 
                    = __Vtemp_356[0xeU];
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0[0xfU] 
                    = __Vtemp_356[0xfU];
                if (VL_LIKELY((0x7c3U >= (0x7ffU & 
                                          ((IData)(0x1f1U) 
                                           * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))) {
                    VL_ASSIGNSEL_WW(1988,497,(0x7ffU 
                                              & ((IData)(0x1f1U) 
                                                 * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_h8b02d114__0);
                }
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hfd7d8a76__0 = 0U;
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hcec99b21__0 
                    = (0x3fU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__opid) 
                                + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)));
                if ((0x7c3U >= ((IData)(0x1e1U) + (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))) {
                    VL_ASSIGNSEL_WI(1988,15,((IData)(0x1e1U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hfd7d8a76__0);
                    VL_ASSIGNSEL_WI(1988,6,((IData)(0x1e1U) 
                                            + (0x7ffU 
                                               & ((IData)(0x1f1U) 
                                                  * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hcec99b21__0);
                }
                if ((1U == (0xfU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result_brnum) 
                                    >> (0xfU & VL_SHIFTL_III(4,32,32, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i, 2U)))))) {
                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hea735c62__0 = 1U;
                    if (VL_LIKELY((0x7c3U >= ((IData)(0x1e0U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x1f1U) 
                                                    * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[(
                                                                                ((IData)(0x1e0U) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x1f1U) 
                                                                                * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                                                                >> 5U)] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & ((IData)(0x1e0U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x1f1U) 
                                                    * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) 
                                & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[
                                (((IData)(0x1e0U) + 
                                  (0x7ffU & ((IData)(0x1f1U) 
                                             * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                 >> 5U)]) | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hea735c62__0) 
                                             << (0x1fU 
                                                 & ((IData)(0x1e0U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(0x1f1U) 
                                                        * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))));
                    }
                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hebc54ad4__0 
                        = (0xfU & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__brid) 
                                   + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_brin)));
                    if (VL_LIKELY((0x7c3U >= ((IData)(0x1d9U) 
                                              + (0x7ffU 
                                                 & ((IData)(0x1f1U) 
                                                    * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                        VL_ASSIGNSEL_WI(1988,4,((IData)(0x1d9U) 
                                                + (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hebc54ad4__0);
                    }
                    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_brin 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_brin)));
                }
                if (((0x174bU >= ((IData)(0x15cU) + 
                                  (0x1fffU & ((IData)(0x3e2U) 
                                              + ((IData)(0x5d3U) 
                                                 * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))) 
                     && (1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__result[
                               (((IData)(0x15cU) + 
                                 (0x1fffU & ((IData)(0x3e2U) 
                                             + ((IData)(0x5d3U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(0x15cU) 
                                             + (0x1fffU 
                                                & ((IData)(0x3e2U) 
                                                   + 
                                                   ((IData)(0x5d3U) 
                                                    * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))))))) {
                    if (((0x83U >= (0xffU & ((IData)(0x16U) 
                                             + ((IData)(0x21U) 
                                                * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)))) 
                         && (1U & (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__f[
                                   (7U & (((IData)(0x16U) 
                                           + ((IData)(0x21U) 
                                              * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i)) 
                                          >> 5U))] 
                                   >> (0x1fU & ((IData)(0x16U) 
                                                + ((IData)(0x21U) 
                                                   * vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))))))) {
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hea4cf99d__0 = 1U;
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1d8U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[(
                                                                                ((IData)(0x1d8U) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x1f1U) 
                                                                                * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                                                                >> 5U)] 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & 
                                            ((IData)(0x1d8U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) 
                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[
                                    (((IData)(0x1d8U) 
                                      + (0x7ffU & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                     >> 5U)]) | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hea4cf99d__0) 
                                                 << 
                                                 (0x1fU 
                                                  & ((IData)(0x1d8U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x1f1U) 
                                                         * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))));
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_he0a31fda__0 = 1U;
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1d0U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[(
                                                                                ((IData)(0x1d0U) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x1f1U) 
                                                                                * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                                                                >> 5U)] 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & 
                                            ((IData)(0x1d0U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) 
                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[
                                    (((IData)(0x1d0U) 
                                      + (0x7ffU & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                     >> 5U)]) | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_he0a31fda__0) 
                                                 << 
                                                 (0x1fU 
                                                  & ((IData)(0x1d0U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x1f1U) 
                                                         * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))));
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hc9689b9f__0 
                            = (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__ldid) 
                                     + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_ldin)));
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1d1U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            VL_ASSIGNSEL_WI(1988,3,
                                            ((IData)(0x1d1U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hc9689b9f__0);
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hd2d7cdea__0 
                            = (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__stid) 
                                     + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin)));
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1c9U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            VL_ASSIGNSEL_WI(1988,3,
                                            ((IData)(0x1c9U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hd2d7cdea__0);
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_ldin 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_ldin)));
                    } else {
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_he0a31fda__1 = 1U;
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1d0U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[(
                                                                                ((IData)(0x1d0U) 
                                                                                + 
                                                                                (0x7ffU 
                                                                                & ((IData)(0x1f1U) 
                                                                                * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                                                                >> 5U)] 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & 
                                            ((IData)(0x1d0U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) 
                                    & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue[
                                    (((IData)(0x1d0U) 
                                      + (0x7ffU & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))) 
                                     >> 5U)]) | ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_he0a31fda__1) 
                                                 << 
                                                 (0x1fU 
                                                  & ((IData)(0x1d0U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0x1f1U) 
                                                         * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))))));
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hd2d7cdea__1 
                            = (7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__stid) 
                                     + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin)));
                        if (VL_LIKELY((0x7c3U >= ((IData)(0x1c9U) 
                                                  + 
                                                  (0x7ffU 
                                                   & ((IData)(0x1f1U) 
                                                      * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in))))))) {
                            VL_ASSIGNSEL_WI(1988,3,
                                            ((IData)(0x1c9U) 
                                             + (0x7ffU 
                                                & ((IData)(0x1f1U) 
                                                   * (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))), vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wvalue, vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT____Vlvbound_hd2d7cdea__1);
                        }
                        vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_stin)));
                    }
                }
                vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)));
            }
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__unnamedblk14__DOT__j = 3U;
            vlSelf->vcore__DOT__inst__DOT__dec_ready 
                = ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_ready) 
                   | (0xfU & ((IData)(1U) << (3U & vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i))));
            vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i 
                = ((IData)(1U) + vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__unnamedblk13__DOT__i);
        }
        __Vlabel1: ;
    }
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wena 
        = ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wena)) 
           | (((2U < (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)) 
               << 2U) | (((1U < (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)) 
                          << 1U) | (0U < (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)))));
    vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wena 
        = ((7U & (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_wena)) 
           | ((3U < (IData)(vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__dq_in)) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_out = 0U;
    if ((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__dec_ready) 
               & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[3U] 
                  >> 9U)))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_out 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_out)));
    }
    if ((1U & (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_ready) 
                >> 1U) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[6U] 
                          >> 0x13U)))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_out 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_out)));
    }
    if ((1U & (((IData)(vlSelf->vcore__DOT__inst__DOT__dec_ready) 
                >> 2U) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[9U] 
                          >> 0x1dU)))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_out 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_out)));
    }
    if ((IData)((((IData)(vlSelf->vcore__DOT__inst__DOT__dec_ready) 
                  >> 3U) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__fe_inst____pinNumber5[0xdU] 
                            >> 7U)))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_out 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_out)));
    }
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_in = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__iredir = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dredir = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dpat = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dpc = 0ULL;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dnpc = 0ULL;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__call_in = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ret_in = 0U;
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i = 0U;
    {
        while (VL_GTS_III(32, 4U, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)) {
            if ((((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_in) 
                  < (((IData)(0x10U) - (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_num)) 
                     + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_out))) 
                 & ((0x1a7U >= ((IData)(0x69U) + (0x1ffU 
                                                  & ((IData)(0x6aU) 
                                                     * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))) 
                    && (1U & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                              (((IData)(0x69U) + (0x1ffU 
                                                  & ((IData)(0x6aU) 
                                                     * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(0x69U) 
                                            + (0x1ffU 
                                               & ((IData)(0x6aU) 
                                                  * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))))))) {
                if ((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__incomp) 
                           >> (3U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))) {
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__iredir = 1U;
                    goto __Vlabel2;
                }
                vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_in 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_in)));
                if ((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__call) 
                           >> (3U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))) {
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__call_in 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__call_in)));
                }
                if ((1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ret) 
                           >> (3U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))) {
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ret_in 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ret_in)));
                }
                if ((1U & ((~ ((((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__branch) 
                                 >> (3U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)) 
                                | ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__jal) 
                                   >> (3U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                               | ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__jalr) 
                                  >> (3U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))) 
                           & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br 
                              >> (0x1fU & ((IData)(7U) 
                                           + VL_SHIFTL_III(5,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 3U))))))) {
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dredir = 1U;
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dpat = 2U;
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dpc 
                        = (((0x1a7U >= ((IData)(0x29U) 
                                        + (0x1ffU & 
                                           ((IData)(0x6aU) 
                                            * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))
                             ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                 (((IData)(0x68U) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0x6aU) 
                                                       * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                  >> 5U)])) 
                                 << ((0U == (0x1fU 
                                             & ((IData)(0x29U) 
                                                + (0x1ffU 
                                                   & ((IData)(0x6aU) 
                                                      * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))
                                      ? 0x20U : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     + 
                                                     (0x1ffU 
                                                      & ((IData)(0x6aU) 
                                                         * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))))) 
                                | (((0U == (0x1fU & 
                                            ((IData)(0x29U) 
                                             + (0x1ffU 
                                                & ((IData)(0x6aU) 
                                                   * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))
                                     ? 0ULL : ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                               (((IData)(0x48U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & ((IData)(0x6aU) 
                                                                     * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                                >> 5U)])) 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x29U) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x6aU) 
                                                           * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))))) 
                                   | ((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                      (((IData)(0x29U) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(0x6aU) 
                                                            * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                       >> 5U)])) 
                                      >> (0x1fU & ((IData)(0x29U) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0x6aU) 
                                                       * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))))
                             : 0ULL) + ((3U == ((0x1a7U 
                                                 >= 
                                                 ((IData)(9U) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(0x6aU) 
                                                      * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))
                                                 ? 
                                                (3U 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x6aU) 
                                                              * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                      (((IData)(0xaU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(0x6aU) 
                                                            * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(9U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x6aU) 
                                                               * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))))) 
                                                    | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                       (((IData)(9U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x6aU) 
                                                             * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                        >> 5U)] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(9U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x6aU) 
                                                               * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))))
                                                 : 0U))
                                         ? 2ULL : 0ULL));
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dnpc 
                        = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__target[
                                            (((IData)(0x3fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))) 
                                             >> 5U)])) 
                            << ((0U == (0x1fU & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))
                                 ? 0x20U : ((IData)(0x40U) 
                                            - (0x1fU 
                                               & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))))) 
                           | (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))
                                ? 0ULL : ((QData)((IData)(
                                                          vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__target[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0xffU 
                                                             & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))))) 
                              | ((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__target[
                                                 (7U 
                                                  & (VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U) 
                                                     >> 5U))])) 
                                 >> (0x1fU & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))));
                    goto __Vlabel2;
                }
                if ((1U & ((((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__jal) 
                             >> (3U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)) 
                            & (~ (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br 
                                  >> (0x1fU & ((IData)(7U) 
                                               + VL_SHIFTL_III(5,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 3U)))))) 
                           | ((((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__jal) 
                                >> (3U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)) 
                               | (((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__branch) 
                                   >> (3U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)) 
                                  & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br 
                                     >> (0x1fU & ((IData)(7U) 
                                                  + 
                                                  VL_SHIFTL_III(5,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 3U)))))) 
                              & ((0x7fU & (((0U == 
                                             (0x1fU 
                                              & ((IData)(1U) 
                                                 + 
                                                 VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))))
                                             ? 0U : 
                                            (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__target[
                                             (((IData)(6U) 
                                               + (0xffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))))) 
                                           | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__target[
                                              (7U & 
                                               (((IData)(1U) 
                                                 + 
                                                 VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)) 
                                                >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))))) 
                                 != (0x7fU & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(5,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 3U))))))))) {
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dredir = 1U;
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dpat = 1U;
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dpc 
                        = (((0x1a7U >= ((IData)(0x29U) 
                                        + (0x1ffU & 
                                           ((IData)(0x6aU) 
                                            * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))
                             ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                 (((IData)(0x68U) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0x6aU) 
                                                       * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                  >> 5U)])) 
                                 << ((0U == (0x1fU 
                                             & ((IData)(0x29U) 
                                                + (0x1ffU 
                                                   & ((IData)(0x6aU) 
                                                      * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))
                                      ? 0x20U : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     + 
                                                     (0x1ffU 
                                                      & ((IData)(0x6aU) 
                                                         * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))))) 
                                | (((0U == (0x1fU & 
                                            ((IData)(0x29U) 
                                             + (0x1ffU 
                                                & ((IData)(0x6aU) 
                                                   * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))
                                     ? 0ULL : ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                               (((IData)(0x48U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & ((IData)(0x6aU) 
                                                                     * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                                >> 5U)])) 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x29U) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x6aU) 
                                                           * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))))) 
                                   | ((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                      (((IData)(0x29U) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(0x6aU) 
                                                            * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                       >> 5U)])) 
                                      >> (0x1fU & ((IData)(0x29U) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0x6aU) 
                                                       * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))))
                             : 0ULL) + ((3U == ((0x1a7U 
                                                 >= 
                                                 ((IData)(9U) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(0x6aU) 
                                                      * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))
                                                 ? 
                                                (3U 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x6aU) 
                                                              * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                      (((IData)(0xaU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(0x6aU) 
                                                            * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(9U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x6aU) 
                                                               * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))))) 
                                                    | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                       (((IData)(9U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x6aU) 
                                                             * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                        >> 5U)] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(9U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x6aU) 
                                                               * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))))
                                                 : 0U))
                                         ? 2ULL : 0ULL));
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dnpc 
                        = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__target[
                                            (((IData)(0x3fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))) 
                                             >> 5U)])) 
                            << ((0U == (0x1fU & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))
                                 ? 0x20U : ((IData)(0x40U) 
                                            - (0x1fU 
                                               & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))))) 
                           | (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))
                                ? 0ULL : ((QData)((IData)(
                                                          vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__target[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0xffU 
                                                             & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))))) 
                              | ((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__target[
                                                 (7U 
                                                  & (VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U) 
                                                     >> 5U))])) 
                                 >> (0x1fU & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))));
                    goto __Vlabel2;
                }
                if (((((((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ret) 
                         >> (3U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)) 
                        & (0U != (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ras_num))) 
                       & (~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__call_num))))) 
                      & (~ (IData)((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ret_num))))) 
                     & ((0x7fU & (((0U == (0x1fU & 
                                           ((IData)(1U) 
                                            + VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))))
                                    ? 0U : (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__target[
                                            (((IData)(6U) 
                                              + (0xffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))))) 
                                  | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__target[
                                     (7U & (((IData)(1U) 
                                             + VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)) 
                                            >> 5U))] 
                                     >> (0x1fU & ((IData)(1U) 
                                                  + 
                                                  VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))))) 
                        != (0x7fU & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__br 
                                     >> (0x1fU & VL_SHIFTL_III(5,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 3U))))))) {
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dredir = 1U;
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dpat = 1U;
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dpc 
                        = (((0x1a7U >= ((IData)(0x29U) 
                                        + (0x1ffU & 
                                           ((IData)(0x6aU) 
                                            * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))
                             ? (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                 (((IData)(0x68U) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0x6aU) 
                                                       * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                  >> 5U)])) 
                                 << ((0U == (0x1fU 
                                             & ((IData)(0x29U) 
                                                + (0x1ffU 
                                                   & ((IData)(0x6aU) 
                                                      * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))
                                      ? 0x20U : ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x29U) 
                                                     + 
                                                     (0x1ffU 
                                                      & ((IData)(0x6aU) 
                                                         * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))))) 
                                | (((0U == (0x1fU & 
                                            ((IData)(0x29U) 
                                             + (0x1ffU 
                                                & ((IData)(0x6aU) 
                                                   * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))
                                     ? 0ULL : ((QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                               (((IData)(0x48U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & ((IData)(0x6aU) 
                                                                     * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                                >> 5U)])) 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x29U) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x6aU) 
                                                           * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))))) 
                                   | ((QData)((IData)(
                                                      vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                      (((IData)(0x29U) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(0x6aU) 
                                                            * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                       >> 5U)])) 
                                      >> (0x1fU & ((IData)(0x29U) 
                                                   + 
                                                   (0x1ffU 
                                                    & ((IData)(0x6aU) 
                                                       * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))))
                             : 0ULL) + ((3U == ((0x1a7U 
                                                 >= 
                                                 ((IData)(9U) 
                                                  + 
                                                  (0x1ffU 
                                                   & ((IData)(0x6aU) 
                                                      * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))
                                                 ? 
                                                (3U 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(9U) 
                                                          + 
                                                          (0x1ffU 
                                                           & ((IData)(0x6aU) 
                                                              * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                      (((IData)(0xaU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((IData)(0x6aU) 
                                                            * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(9U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x6aU) 
                                                               * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))))))) 
                                                    | (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[
                                                       (((IData)(9U) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((IData)(0x6aU) 
                                                             * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i))) 
                                                        >> 5U)] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(9U) 
                                                           + 
                                                           (0x1ffU 
                                                            & ((IData)(0x6aU) 
                                                               * vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i)))))))
                                                 : 0U))
                                         ? 2ULL : 0ULL));
                    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dnpc 
                        = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__target[
                                            (((IData)(0x3fU) 
                                              + (0xffU 
                                                 & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))) 
                                             >> 5U)])) 
                            << ((0U == (0x1fU & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))
                                 ? 0x20U : ((IData)(0x40U) 
                                            - (0x1fU 
                                               & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))))) 
                           | (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))
                                ? 0ULL : ((QData)((IData)(
                                                          vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__target[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0xffU 
                                                             & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U))))) 
                              | ((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__target[
                                                 (7U 
                                                  & (VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U) 
                                                     >> 5U))])) 
                                 >> (0x1fU & VL_SHIFTL_III(8,32,32, vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i, 6U)))));
                    goto __Vlabel2;
                }
            }
            vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i 
                = ((IData)(1U) + vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unnamedblk15__DOT__i);
        }
        __Vlabel2: ;
    }
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_wena 
        = ((8U & (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_wena)) 
           | (((2U < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_in)) 
               << 2U) | (((1U < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_in)) 
                          << 1U) | (0U < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_in)))));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_wena 
        = ((7U & (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_wena)) 
           | ((3U < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_in)) 
              << 3U));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__reinf = 0U;
    if ((((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x13U] 
           >> 0x11U) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x1aU] 
                        >> 0x17U)) & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x12U] 
                                       >> 0x15U) ^ 
                                      (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x12U] 
                                       >> 0x16U)))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__reinf = 1U;
    }
    if ((1U & (((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x14U] 
                 >> 1U) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xcU] 
                           >> 0x1bU)) & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xbU] 
                                          >> 0x1fU) 
                                         ^ vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xcU])))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__reinf = 1U;
    }
    if ((1U & (((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xdU] 
                 >> 0xbU) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[6U] 
                             >> 5U)) & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U] 
                                         >> 9U) ^ (
                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U] 
                                                   >> 0xaU))))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__reinf = 1U;
    }
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upat = 0U;
    if ((((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x13U] 
           >> 0x11U) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x1aU] 
                        >> 0x17U)) & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x12U] 
                                       >> 0x15U) ^ 
                                      (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x12U] 
                                       >> 0x16U)))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upat 
            = (3U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x12U] 
                     >> 0x15U));
    }
    if ((1U & (((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x14U] 
                 >> 1U) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xcU] 
                           >> 0x1bU)) & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xbU] 
                                          >> 0x1fU) 
                                         ^ vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xcU])))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upat 
            = (3U & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xcU] 
                      << 1U) | (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xbU] 
                                >> 0x1fU)));
    }
    if ((1U & (((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xdU] 
                 >> 0xbU) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[6U] 
                             >> 5U)) & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U] 
                                         >> 9U) ^ (
                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U] 
                                                   >> 0xaU))))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upat 
            = (3U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U] 
                     >> 9U));
    }
    if ((1U & (((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[6U] 
                 >> 0x15U) & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[6U] 
                              >> 5U)) & ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[5U] 
                                          >> 9U) ^ 
                                         (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[5U] 
                                          >> 0xaU))))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__reinf = 1U;
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upat 
            = (3U & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[5U] 
                     >> 9U));
    }
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upc = 0ULL;
    if ((((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x13U] 
           >> 0x11U) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x1aU] 
                        >> 0x17U)) & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x12U] 
                                       >> 0x15U) ^ 
                                      (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x12U] 
                                       >> 0x16U)))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upc 
            = ((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x12U])) 
                 << 0x2cU) | (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x11U])) 
                               << 0xcU) | ((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x10U])) 
                                           >> 0x14U))) 
               + ((0x2000000U & vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x12U])
                   ? 0ULL : 2ULL));
    }
    if ((1U & (((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x14U] 
                 >> 1U) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xcU] 
                           >> 0x1bU)) & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xbU] 
                                          >> 0x1fU) 
                                         ^ vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xcU])))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upc 
            = ((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xbU])) 
                 << 0x22U) | (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xaU])) 
                               << 2U) | ((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[9U])) 
                                         >> 0x1eU))) 
               + ((8U & vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xcU])
                   ? 0ULL : 2ULL));
    }
    if ((1U & (((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xdU] 
                 >> 0xbU) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[6U] 
                             >> 5U)) & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U] 
                                         >> 9U) ^ (
                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U] 
                                                   >> 0xaU))))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upc 
            = ((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U])) 
                 << 0x38U) | (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[4U])) 
                               << 0x18U) | ((QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[3U])) 
                                            >> 8U))) 
               + ((0x2000U & vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U])
                   ? 0ULL : 2ULL));
    }
    if ((1U & (((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[6U] 
                 >> 0x15U) & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[6U] 
                              >> 5U)) & ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[5U] 
                                          >> 9U) ^ 
                                         (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[5U] 
                                          >> 0xaU))))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upc 
            = ((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[5U])) 
                 << 0x38U) | (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[4U])) 
                               << 0x18U) | ((QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[3U])) 
                                            >> 8U))) 
               + ((0x2000U & vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[5U])
                   ? 0ULL : 2ULL));
    }
    if (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__iredir) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__reinf = 0U;
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upat = 2U;
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upc 
            = vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ipc;
    }
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unpc = 0ULL;
    if ((((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x13U] 
           >> 0x11U) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x1aU] 
                        >> 0x17U)) & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x12U] 
                                       >> 0x15U) ^ 
                                      (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x12U] 
                                       >> 0x16U)))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unpc 
            = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x10U])) 
                << 0x2cU) | (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xfU])) 
                              << 0xcU) | ((QData)((IData)(
                                                          vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xeU])) 
                                          >> 0x14U)));
    }
    if ((1U & (((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0x14U] 
                 >> 1U) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xcU] 
                           >> 0x1bU)) & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xbU] 
                                          >> 0x1fU) 
                                         ^ vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xcU])))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unpc 
            = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[9U])) 
                << 0x22U) | (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[8U])) 
                              << 2U) | ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[7U])) 
                                        >> 0x1eU)));
    }
    if ((1U & (((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[0xdU] 
                 >> 0xbU) & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[6U] 
                             >> 5U)) & ((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U] 
                                         >> 9U) ^ (
                                                   vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U] 
                                                   >> 0xaU))))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unpc 
            = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[3U])) 
                << 0x38U) | (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[2U])) 
                              << 0x18U) | ((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[1U])) 
                                           >> 8U)));
    }
    if ((1U & (((vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[6U] 
                 >> 0x15U) & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[6U] 
                              >> 5U)) & ((vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[5U] 
                                          >> 9U) ^ 
                                         (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[5U] 
                                          >> 0xaU))))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unpc 
            = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[3U])) 
                << 0x38U) | (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[2U])) 
                              << 0x18U) | ((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__com_last[1U])) 
                                           >> 8U)));
    }
    if (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__iredir) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unpc 
            = vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ipc;
    }
    if (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dredir) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__reinf = 0U;
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upat 
            = vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dpat;
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upc 
            = vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dpc;
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unpc 
            = vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dnpc;
    }
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__redir = 0U;
    if (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__iredir) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__redir = 1U;
    }
    if (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__dredir) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__redir = 1U;
    }
    if ((0x100U & vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U])) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upat 
            = (3U & (vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U] 
                     >> 9U));
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__upc 
            = ((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U])) 
                 << 0x38U) | (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[4U])) 
                               << 0x18U) | ((QData)((IData)(
                                                            vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[3U])) 
                                            >> 8U))) 
               + ((0x2000U & vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[5U])
                   ? 0ULL : 2ULL));
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__unpc 
            = (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[3U])) 
                << 0x38U) | (((QData)((IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[2U])) 
                              << 0x18U) | ((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT____Vcellout__com_inst____pinNumber6[1U])) 
                                           >> 8U)));
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__redir = 3U;
    }
    if (vlSelf->vcore__DOT__inst__DOT__dec_inst__DOT__redir) {
        if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__redir))) {
            vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__flmask = 0xffU;
            vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__flrqst = 0U;
        } else {
            vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__flmask = 0xbfU;
            vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__flrqst = 0x40U;
        }
    } else {
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__flmask 
            = ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__redir))
                ? 0xbfU : 0U);
        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__flrqst = 0U;
    }
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_num = 0U;
    if (((0U < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_in)) 
         & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[3U] 
            >> 9U))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_num 
            = (7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_num)));
    }
    if (((1U < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_in)) 
         & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[6U] 
            >> 0x13U))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_num 
            = (7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_num)));
    }
    if (((2U < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_in)) 
         & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[9U] 
            >> 0x1dU))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_num 
            = (7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_num)));
    }
    if (((3U < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fq_in)) 
         & (vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__result[0xdU] 
            >> 7U))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_num 
            = (7U & ((IData)(1U) + (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_num)));
    }
    if ((1U & (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__redir))) {
        vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_num = 0U;
    }
    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_fls 
        = ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_req)) 
           & (((~ (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__flmask)) 
               & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_req)) 
              == ((~ (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__flmask)) 
                  & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__flrqst))));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_next 
        = (0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_cur) 
                    + ((4U >= (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_num))
                        ? vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_pos
                       [vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__fet_num]
                        : 0U)));
    vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_pop 
        = ((0U < (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_num)) 
           & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__f0done) 
              & ((IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT__ftq_next) 
                 >= (IData)(vlSelf->vcore__DOT__inst__DOT__fe_inst__DOT____VdfgTmp_h9b70fb4b__0))));
}
