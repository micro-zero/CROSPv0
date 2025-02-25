// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvcore__Syms.h"


void Vvcore___024root__trace_chg_0_sub_2(Vvcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root__trace_chg_0_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 17899);
    VlWide<8>/*255:0*/ __Vtemp_57;
    VlWide<8>/*255:0*/ __Vtemp_58;
    VlWide<8>/*255:0*/ __Vtemp_59;
    VlWide<8>/*255:0*/ __Vtemp_60;
    VlWide<8>/*255:0*/ __Vtemp_61;
    VlWide<8>/*255:0*/ __Vtemp_62;
    VlWide<8>/*255:0*/ __Vtemp_63;
    VlWide<8>/*255:0*/ __Vtemp_64;
    VlWide<8>/*255:0*/ __Vtemp_65;
    VlWide<8>/*255:0*/ __Vtemp_66;
    VlWide<8>/*255:0*/ __Vtemp_67;
    VlWide<8>/*255:0*/ __Vtemp_68;
    VlWide<8>/*255:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_648;
    VlWide<3>/*95:0*/ __Vtemp_651;
    VlWide<3>/*95:0*/ __Vtemp_654;
    VlWide<3>/*95:0*/ __Vtemp_657;
    VlWide<3>/*95:0*/ __Vtemp_660;
    VlWide<3>/*95:0*/ __Vtemp_663;
    VlWide<3>/*95:0*/ __Vtemp_666;
    VlWide<3>/*95:0*/ __Vtemp_669;
    VlWide<3>/*95:0*/ __Vtemp_672;
    VlWide<3>/*95:0*/ __Vtemp_675;
    VlWide<3>/*95:0*/ __Vtemp_678;
    VlWide<3>/*95:0*/ __Vtemp_681;
    VlWide<3>/*95:0*/ __Vtemp_684;
    VlWide<3>/*95:0*/ __Vtemp_687;
    VlWide<3>/*95:0*/ __Vtemp_690;
    VlWide<3>/*95:0*/ __Vtemp_693;
    VlWide<3>/*95:0*/ __Vtemp_696;
    VlWide<3>/*95:0*/ __Vtemp_699;
    VlWide<3>/*95:0*/ __Vtemp_702;
    VlWide<3>/*95:0*/ __Vtemp_705;
    VlWide<3>/*95:0*/ __Vtemp_708;
    VlWide<3>/*95:0*/ __Vtemp_711;
    VlWide<3>/*95:0*/ __Vtemp_714;
    VlWide<3>/*95:0*/ __Vtemp_717;
    VlWide<3>/*95:0*/ __Vtemp_720;
    VlWide<3>/*95:0*/ __Vtemp_723;
    VlWide<3>/*95:0*/ __Vtemp_726;
    VlWide<3>/*95:0*/ __Vtemp_729;
    VlWide<3>/*95:0*/ __Vtemp_732;
    VlWide<3>/*95:0*/ __Vtemp_735;
    VlWide<3>/*95:0*/ __Vtemp_738;
    VlWide<3>/*95:0*/ __Vtemp_741;
    VlWide<3>/*95:0*/ __Vtemp_744;
    VlWide<3>/*95:0*/ __Vtemp_747;
    VlWide<3>/*95:0*/ __Vtemp_750;
    VlWide<3>/*95:0*/ __Vtemp_753;
    VlWide<3>/*95:0*/ __Vtemp_756;
    VlWide<3>/*95:0*/ __Vtemp_759;
    VlWide<3>/*95:0*/ __Vtemp_762;
    VlWide<3>/*95:0*/ __Vtemp_765;
    VlWide<3>/*95:0*/ __Vtemp_768;
    VlWide<3>/*95:0*/ __Vtemp_771;
    VlWide<3>/*95:0*/ __Vtemp_774;
    VlWide<3>/*95:0*/ __Vtemp_777;
    VlWide<3>/*95:0*/ __Vtemp_780;
    VlWide<3>/*95:0*/ __Vtemp_783;
    VlWide<3>/*95:0*/ __Vtemp_786;
    VlWide<3>/*95:0*/ __Vtemp_789;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+0,((0xffU & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_strb 
                                                 >> 0x18U)))),8);
        bufp->chgCData(oldp+1,((0xffU & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_strb 
                                                 >> 0x20U)))),8);
        bufp->chgCData(oldp+2,((0xffU & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_strb 
                                                 >> 0x28U)))),8);
        bufp->chgCData(oldp+3,((0xffU & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_strb 
                                                 >> 0x30U)))),8);
        bufp->chgCData(oldp+4,((0xffU & (IData)((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_strb 
                                                 >> 0x38U)))),8);
        bufp->chgCData(oldp+5,((7U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits)),3);
        bufp->chgCData(oldp+6,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                      >> 3U))),3);
        bufp->chgCData(oldp+7,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                      >> 6U))),3);
        bufp->chgCData(oldp+8,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                      >> 9U))),3);
        bufp->chgCData(oldp+9,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                      >> 0xcU))),3);
        bufp->chgCData(oldp+10,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                       >> 0xfU))),3);
        bufp->chgCData(oldp+11,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                       >> 0x12U))),3);
        bufp->chgCData(oldp+12,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_bits 
                                       >> 0x15U))),3);
        bufp->chgCData(oldp+13,((7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))),3);
        bufp->chgCData(oldp+14,((7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                       >> 3U))),3);
        bufp->chgCData(oldp+15,((7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                       >> 6U))),3);
        bufp->chgCData(oldp+16,((7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                       >> 9U))),3);
        bufp->chgCData(oldp+17,((7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_waddr))),3);
        bufp->chgCData(oldp+18,((7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_waddr) 
                                       >> 3U))),3);
        bufp->chgCData(oldp+19,((7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_waddr) 
                                       >> 6U))),3);
        bufp->chgCData(oldp+20,((7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_waddr) 
                                       >> 9U))),3);
        bufp->chgSData(oldp+21,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                 [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][7U] 
                                 >> 0x10U)),16);
        bufp->chgCData(oldp+22,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                          [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                          [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][7U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+23,((0xffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                 [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][7U])),8);
        bufp->chgQData(oldp+24,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                                  [
                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][6U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                                              [
                                                              vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                              [
                                                              (7U 
                                                               & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][5U])))),64);
        bufp->chgSData(oldp+26,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                 [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][4U] 
                                 >> 0x10U)),16);
        bufp->chgQData(oldp+27,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                                  [
                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][4U])) 
                                  << 0x30U) | (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                                                [
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                [
                                                                (7U 
                                                                 & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][3U])) 
                                                << 0x10U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                                                  [
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                  [
                                                                  (7U 
                                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][2U])) 
                                                  >> 0x10U)))),64);
        bufp->chgCData(oldp+29,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                          [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                          [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][2U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+30,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                       [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                       [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][2U] 
                                       >> 5U))),3);
        bufp->chgQData(oldp+31,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                                  [
                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                  [
                                                  (7U 
                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][2U])) 
                                  << 0x3bU) | (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                                                [
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                [
                                                                (7U 
                                                                 & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][1U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                                                  [
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                  [
                                                                  (7U 
                                                                   & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][0U])) 
                                                  >> 5U)))),64);
        bufp->chgBit(oldp+33,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][0U] 
                                     >> 4U))));
        bufp->chgBit(oldp+34,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][0U] 
                                     >> 3U))));
        bufp->chgBit(oldp+35,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+36,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+37,((1U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                               [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                               [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][0U])));
        bufp->chgSData(oldp+38,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                 [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                         >> 3U))]][7U] 
                                 >> 0x10U)),16);
        bufp->chgCData(oldp+39,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                          [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                          [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                  >> 3U))]][7U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+40,((0xffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                 [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                         >> 3U))]][7U])),8);
        bufp->chgQData(oldp+41,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                                  [
                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                  [
                                                  (7U 
                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                      >> 3U))]][6U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                                              [
                                                              vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                              [
                                                              (7U 
                                                               & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                  >> 3U))]][5U])))),64);
        bufp->chgSData(oldp+43,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                 [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                         >> 3U))]][4U] 
                                 >> 0x10U)),16);
        bufp->chgQData(oldp+44,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                                  [
                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                  [
                                                  (7U 
                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                      >> 3U))]][4U])) 
                                  << 0x30U) | (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                                                [
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                [
                                                                (7U 
                                                                 & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                    >> 3U))]][3U])) 
                                                << 0x10U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                                                  [
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                  [
                                                                  (7U 
                                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                      >> 3U))]][2U])) 
                                                  >> 0x10U)))),64);
        bufp->chgCData(oldp+46,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                          [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                          [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                  >> 3U))]][2U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+47,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                       [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                       [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                               >> 3U))]][2U] 
                                       >> 5U))),3);
        bufp->chgQData(oldp+48,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                                  [
                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                  [
                                                  (7U 
                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                      >> 3U))]][2U])) 
                                  << 0x3bU) | (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                                                [
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                [
                                                                (7U 
                                                                 & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                    >> 3U))]][1U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                                                  [
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                  [
                                                                  (7U 
                                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                      >> 3U))]][0U])) 
                                                  >> 5U)))),64);
        bufp->chgBit(oldp+50,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                             >> 3U))]][0U] 
                                     >> 4U))));
        bufp->chgBit(oldp+51,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                             >> 3U))]][0U] 
                                     >> 3U))));
        bufp->chgBit(oldp+52,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                             >> 3U))]][0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+53,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                             >> 3U))]][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+54,((1U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                               [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                               [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                       >> 3U))]][0U])));
        bufp->chgSData(oldp+55,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                 [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                         >> 6U))]][7U] 
                                 >> 0x10U)),16);
        bufp->chgCData(oldp+56,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                          [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                          [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                  >> 6U))]][7U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+57,((0xffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                 [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                         >> 6U))]][7U])),8);
        bufp->chgQData(oldp+58,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                                  [
                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                  [
                                                  (7U 
                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                      >> 6U))]][6U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                                              [
                                                              vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                              [
                                                              (7U 
                                                               & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                  >> 6U))]][5U])))),64);
        bufp->chgSData(oldp+60,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                 [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                         >> 6U))]][4U] 
                                 >> 0x10U)),16);
        bufp->chgQData(oldp+61,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                                  [
                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                  [
                                                  (7U 
                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                      >> 6U))]][4U])) 
                                  << 0x30U) | (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                                                [
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                [
                                                                (7U 
                                                                 & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                    >> 6U))]][3U])) 
                                                << 0x10U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                                                  [
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                  [
                                                                  (7U 
                                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                      >> 6U))]][2U])) 
                                                  >> 0x10U)))),64);
        bufp->chgCData(oldp+63,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                          [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                          [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                  >> 6U))]][2U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+64,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                       [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                       [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                               >> 6U))]][2U] 
                                       >> 5U))),3);
        bufp->chgQData(oldp+65,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                                  [
                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                  [
                                                  (7U 
                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                      >> 6U))]][2U])) 
                                  << 0x3bU) | (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                                                [
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                [
                                                                (7U 
                                                                 & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                    >> 6U))]][1U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                                                  [
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                  [
                                                                  (7U 
                                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                      >> 6U))]][0U])) 
                                                  >> 5U)))),64);
        bufp->chgBit(oldp+67,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                             >> 6U))]][0U] 
                                     >> 4U))));
        bufp->chgBit(oldp+68,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                             >> 6U))]][0U] 
                                     >> 3U))));
        bufp->chgBit(oldp+69,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                             >> 6U))]][0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+70,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                             >> 6U))]][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+71,((1U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                               [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                               [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                       >> 6U))]][0U])));
        bufp->chgSData(oldp+72,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                 [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                         >> 9U))]][7U] 
                                 >> 0x10U)),16);
        bufp->chgCData(oldp+73,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                          [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                          [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                  >> 9U))]][7U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+74,((0xffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                 [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                         >> 9U))]][7U])),8);
        bufp->chgQData(oldp+75,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                                  [
                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                  [
                                                  (7U 
                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                      >> 9U))]][6U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                                              [
                                                              vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                              [
                                                              (7U 
                                                               & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                  >> 9U))]][5U])))),64);
        bufp->chgSData(oldp+77,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                 [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                         >> 9U))]][4U] 
                                 >> 0x10U)),16);
        bufp->chgQData(oldp+78,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                                  [
                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                  [
                                                  (7U 
                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                      >> 9U))]][4U])) 
                                  << 0x30U) | (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                                                [
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                [
                                                                (7U 
                                                                 & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                    >> 9U))]][3U])) 
                                                << 0x10U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                                                  [
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                  [
                                                                  (7U 
                                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                      >> 9U))]][2U])) 
                                                  >> 0x10U)))),64);
        bufp->chgCData(oldp+80,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                          [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                          [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                  >> 9U))]][2U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+81,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                       [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                       [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                               >> 9U))]][2U] 
                                       >> 5U))),3);
        bufp->chgQData(oldp+82,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                                  [
                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                  [
                                                  (7U 
                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                      >> 9U))]][2U])) 
                                  << 0x3bU) | (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                                                [
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                [
                                                                (7U 
                                                                 & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                    >> 9U))]][1U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                                                  [
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                                                  [
                                                                  (7U 
                                                                   & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                                                      >> 9U))]][0U])) 
                                                  >> 5U)))),64);
        bufp->chgBit(oldp+84,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                             >> 9U))]][0U] 
                                     >> 4U))));
        bufp->chgBit(oldp+85,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                             >> 9U))]][0U] 
                                     >> 3U))));
        bufp->chgBit(oldp+86,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                             >> 9U))]][0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+87,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                     [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                                     [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                             >> 9U))]][0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+88,((1U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                               [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
                               [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                       >> 9U))]][0U])));
        bufp->chgSData(oldp+89,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[7U] 
                                 >> 0x10U)),16);
        bufp->chgCData(oldp+90,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[7U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+91,((0xffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[7U])),8);
        bufp->chgQData(oldp+92,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[6U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[5U])))),64);
        bufp->chgSData(oldp+94,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[4U] 
                                 >> 0x10U)),16);
        bufp->chgQData(oldp+95,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[4U])) 
                                  << 0x30U) | (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[3U])) 
                                                << 0x10U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[2U])) 
                                                  >> 0x10U)))),64);
        bufp->chgCData(oldp+97,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[2U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+98,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[2U] 
                                       >> 5U))),3);
        bufp->chgQData(oldp+99,((((QData)((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[2U])) 
                                  << 0x3bU) | (((QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[1U])) 
                                                << 0x1bU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0U])) 
                                                  >> 5U)))),64);
        bufp->chgBit(oldp+101,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0U] 
                                      >> 4U))));
        bufp->chgBit(oldp+102,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0U] 
                                      >> 3U))));
        bufp->chgBit(oldp+103,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0U] 
                                      >> 2U))));
        bufp->chgBit(oldp+104,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0U] 
                                      >> 1U))));
        bufp->chgBit(oldp+105,((1U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0U])));
        bufp->chgSData(oldp+106,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xfU] 
                                  >> 0x10U)),16);
        bufp->chgCData(oldp+107,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xfU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+108,((0xffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xfU])),8);
        bufp->chgQData(oldp+109,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xeU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xdU])))),64);
        bufp->chgSData(oldp+111,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xcU] 
                                  >> 0x10U)),16);
        bufp->chgQData(oldp+112,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xcU])) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xbU])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xaU])) 
                                                   >> 0x10U)))),64);
        bufp->chgCData(oldp+114,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xaU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+115,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xaU] 
                                        >> 5U))),3);
        bufp->chgQData(oldp+116,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xaU])) 
                                   << 0x3bU) | (((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[9U])) 
                                                 << 0x1bU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[8U])) 
                                                   >> 5U)))),64);
        bufp->chgBit(oldp+118,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[8U] 
                                      >> 4U))));
        bufp->chgBit(oldp+119,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[8U] 
                                      >> 3U))));
        bufp->chgBit(oldp+120,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[8U] 
                                      >> 2U))));
        bufp->chgBit(oldp+121,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[8U] 
                                      >> 1U))));
        bufp->chgBit(oldp+122,((1U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[8U])));
        bufp->chgSData(oldp+123,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x17U] 
                                  >> 0x10U)),16);
        bufp->chgCData(oldp+124,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x17U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+125,((0xffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x17U])),8);
        bufp->chgQData(oldp+126,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x16U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x15U])))),64);
        bufp->chgSData(oldp+128,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x14U] 
                                  >> 0x10U)),16);
        bufp->chgQData(oldp+129,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x14U])) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x13U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x12U])) 
                                                   >> 0x10U)))),64);
        bufp->chgCData(oldp+131,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x12U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+132,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x12U] 
                                        >> 5U))),3);
        bufp->chgQData(oldp+133,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x12U])) 
                                   << 0x3bU) | (((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x11U])) 
                                                 << 0x1bU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x10U])) 
                                                   >> 5U)))),64);
        bufp->chgBit(oldp+135,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x10U] 
                                      >> 4U))));
        bufp->chgBit(oldp+136,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x10U] 
                                      >> 3U))));
        bufp->chgBit(oldp+137,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x10U] 
                                      >> 2U))));
        bufp->chgBit(oldp+138,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x10U] 
                                      >> 1U))));
        bufp->chgBit(oldp+139,((1U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x10U])));
        bufp->chgSData(oldp+140,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1fU] 
                                  >> 0x10U)),16);
        bufp->chgCData(oldp+141,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+142,((0xffU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1fU])),8);
        bufp->chgQData(oldp+143,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1eU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1dU])))),64);
        bufp->chgSData(oldp+145,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1cU] 
                                  >> 0x10U)),16);
        bufp->chgQData(oldp+146,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1cU])) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1bU])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1aU])) 
                                                   >> 0x10U)))),64);
        bufp->chgCData(oldp+148,((0xffU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+149,((7U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1aU] 
                                        >> 5U))),3);
        bufp->chgQData(oldp+150,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1aU])) 
                                   << 0x3bU) | (((QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x19U])) 
                                                 << 0x1bU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x18U])) 
                                                   >> 5U)))),64);
        bufp->chgBit(oldp+152,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x18U] 
                                      >> 4U))));
        bufp->chgBit(oldp+153,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x18U] 
                                      >> 3U))));
        bufp->chgBit(oldp+154,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x18U] 
                                      >> 2U))));
        bufp->chgBit(oldp+155,((1U & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x18U] 
                                      >> 1U))));
        bufp->chgBit(oldp+156,((1U & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x18U])));
        bufp->chgCData(oldp+157,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wena),4);
        bufp->chgCData(oldp+158,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_raddr),3);
        bufp->chgQData(oldp+159,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__sel
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_raddr]]),64);
        bufp->chgQData(oldp+161,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_wvalue[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_wvalue[0U])))),64);
        bufp->chgQData(oldp+163,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_wvalue[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_wvalue[2U])))),64);
        bufp->chgQData(oldp+165,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_wvalue[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_wvalue[4U])))),64);
        bufp->chgQData(oldp+167,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_wvalue[7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_wvalue[6U])))),64);
        bufp->chgCData(oldp+169,((7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr))),3);
        bufp->chgCData(oldp+170,((7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_waddr) 
                                        >> 3U))),3);
        bufp->chgQData(oldp+171,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__sel
                                 [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]]),64);
        bufp->chgQData(oldp+173,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__sel
                                 [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                         >> 3U))]]),64);
        bufp->chgQData(oldp+175,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__sel
                                 [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                         >> 6U))]]),64);
        bufp->chgQData(oldp+177,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
                                 [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__sel
                                 [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                                         >> 9U))]]),64);
        bufp->chgCData(oldp+179,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wena),2);
        bufp->chgQData(oldp+180,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wvalue[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wvalue[0U])))),64);
        bufp->chgQData(oldp+182,((((QData)((IData)(
                                                   vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wvalue[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_wvalue[2U])))),64);
        bufp->chgCData(oldp+184,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_resp),8);
        bufp->chgCData(oldp+185,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_rslt),2);
        bufp->chgWData(oldp+186,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_forw),65);
        bufp->chgCData(oldp+189,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_bits),3);
        bufp->chgQData(oldp+190,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lr_addr),64);
        bufp->chgCData(oldp+192,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lr_strb),8);
        bufp->chgCData(oldp+193,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_stid),3);
        bufp->chgQData(oldp+194,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_padd),64);
        bufp->chgCData(oldp+196,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__ck_strb),8);
        bufp->chgIData(oldp+197,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__dt_num),32);
        bufp->chgIData(oldp+198,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__dc_num),32);
        bufp->chgCData(oldp+199,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__next_front),3);
        __Vtemp_57[0U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][0U];
        __Vtemp_57[1U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][1U];
        __Vtemp_57[2U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][2U];
        __Vtemp_57[3U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][3U];
        __Vtemp_57[4U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][4U];
        __Vtemp_57[5U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][5U];
        __Vtemp_57[6U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][6U];
        __Vtemp_57[7U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr))]][7U];
        bufp->chgWData(oldp+200,(__Vtemp_57),256);
        __Vtemp_58[0U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 3U))]][0U];
        __Vtemp_58[1U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 3U))]][1U];
        __Vtemp_58[2U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 3U))]][2U];
        __Vtemp_58[3U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 3U))]][3U];
        __Vtemp_58[4U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 3U))]][4U];
        __Vtemp_58[5U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 3U))]][5U];
        __Vtemp_58[6U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 3U))]][6U];
        __Vtemp_58[7U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 3U))]][7U];
        bufp->chgWData(oldp+208,(__Vtemp_58),256);
        __Vtemp_59[0U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 6U))]][0U];
        __Vtemp_59[1U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 6U))]][1U];
        __Vtemp_59[2U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 6U))]][2U];
        __Vtemp_59[3U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 6U))]][3U];
        __Vtemp_59[4U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 6U))]][4U];
        __Vtemp_59[5U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 6U))]][5U];
        __Vtemp_59[6U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 6U))]][6U];
        __Vtemp_59[7U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 6U))]][7U];
        bufp->chgWData(oldp+216,(__Vtemp_59),256);
        __Vtemp_60[0U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 9U))]][0U];
        __Vtemp_60[1U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 9U))]][1U];
        __Vtemp_60[2U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 9U))]][2U];
        __Vtemp_60[3U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 9U))]][3U];
        __Vtemp_60[4U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 9U))]][4U];
        __Vtemp_60[5U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 9U))]][5U];
        __Vtemp_60[6U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 9U))]][6U];
        __Vtemp_60[7U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_raddr) 
                    >> 9U))]][7U];
        bufp->chgWData(oldp+224,(__Vtemp_60),256);
        __Vtemp_61[0U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0U];
        __Vtemp_61[1U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[1U];
        __Vtemp_61[2U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[2U];
        __Vtemp_61[3U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[3U];
        __Vtemp_61[4U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[4U];
        __Vtemp_61[5U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[5U];
        __Vtemp_61[6U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[6U];
        __Vtemp_61[7U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[7U];
        bufp->chgWData(oldp+232,(__Vtemp_61),256);
        __Vtemp_62[0U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[8U];
        __Vtemp_62[1U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[9U];
        __Vtemp_62[2U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xaU];
        __Vtemp_62[3U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xbU];
        __Vtemp_62[4U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xcU];
        __Vtemp_62[5U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xdU];
        __Vtemp_62[6U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xeU];
        __Vtemp_62[7U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0xfU];
        bufp->chgWData(oldp+240,(__Vtemp_62),256);
        __Vtemp_63[0U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x10U];
        __Vtemp_63[1U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x11U];
        __Vtemp_63[2U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x12U];
        __Vtemp_63[3U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x13U];
        __Vtemp_63[4U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x14U];
        __Vtemp_63[5U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x15U];
        __Vtemp_63[6U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x16U];
        __Vtemp_63[7U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x17U];
        bufp->chgWData(oldp+248,(__Vtemp_63),256);
        __Vtemp_64[0U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x18U];
        __Vtemp_64[1U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x19U];
        __Vtemp_64[2U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1aU];
        __Vtemp_64[3U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1bU];
        __Vtemp_64[4U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1cU];
        __Vtemp_64[5U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1dU];
        __Vtemp_64[6U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1eU];
        __Vtemp_64[7U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_wvalue[0x1fU];
        bufp->chgWData(oldp+256,(__Vtemp_64),256);
        bufp->chgCData(oldp+264,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel[0]),2);
        bufp->chgCData(oldp+265,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel[1]),2);
        bufp->chgCData(oldp+266,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel[2]),2);
        bufp->chgCData(oldp+267,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel[3]),2);
        bufp->chgCData(oldp+268,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel[4]),2);
        bufp->chgCData(oldp+269,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel[5]),2);
        bufp->chgCData(oldp+270,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel[6]),2);
        bufp->chgCData(oldp+271,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__sel[7]),2);
        bufp->chgWData(oldp+272,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[0]),256);
        bufp->chgWData(oldp+280,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[1]),256);
        bufp->chgWData(oldp+288,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[2]),256);
        bufp->chgWData(oldp+296,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[3]),256);
        bufp->chgWData(oldp+304,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[4]),256);
        bufp->chgWData(oldp+312,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[5]),256);
        bufp->chgWData(oldp+320,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[6]),256);
        bufp->chgWData(oldp+328,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[7]),256);
        bufp->chgWData(oldp+336,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[0]),256);
        bufp->chgWData(oldp+344,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[1]),256);
        bufp->chgWData(oldp+352,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[2]),256);
        bufp->chgWData(oldp+360,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[3]),256);
        bufp->chgWData(oldp+368,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[4]),256);
        bufp->chgWData(oldp+376,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[5]),256);
        bufp->chgWData(oldp+384,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[6]),256);
        bufp->chgWData(oldp+392,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[7]),256);
        bufp->chgWData(oldp+400,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[0]),256);
        bufp->chgWData(oldp+408,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[1]),256);
        bufp->chgWData(oldp+416,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[2]),256);
        bufp->chgWData(oldp+424,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[3]),256);
        bufp->chgWData(oldp+432,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[4]),256);
        bufp->chgWData(oldp+440,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[5]),256);
        bufp->chgWData(oldp+448,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[6]),256);
        bufp->chgWData(oldp+456,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[7]),256);
        bufp->chgWData(oldp+464,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[0]),256);
        bufp->chgWData(oldp+472,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[1]),256);
        bufp->chgWData(oldp+480,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[2]),256);
        bufp->chgWData(oldp+488,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[3]),256);
        bufp->chgWData(oldp+496,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[4]),256);
        bufp->chgWData(oldp+504,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[5]),256);
        bufp->chgWData(oldp+512,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[6]),256);
        bufp->chgWData(oldp+520,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[7]),256);
        bufp->chgWData(oldp+528,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0]),256);
        bufp->chgWData(oldp+536,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1]),256);
        bufp->chgWData(oldp+544,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2]),256);
        bufp->chgWData(oldp+552,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3]),256);
        bufp->chgWData(oldp+560,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0]),256);
        bufp->chgWData(oldp+568,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1]),256);
        bufp->chgWData(oldp+576,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[2]),256);
        bufp->chgWData(oldp+584,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[3]),256);
        bufp->chgWData(oldp+592,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[0]),256);
        bufp->chgWData(oldp+600,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[1]),256);
        bufp->chgWData(oldp+608,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[2]),256);
        bufp->chgWData(oldp+616,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[3]),256);
        bufp->chgWData(oldp+624,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[0]),256);
        bufp->chgWData(oldp+632,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[1]),256);
        bufp->chgWData(oldp+640,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[2]),256);
        bufp->chgWData(oldp+648,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[3]),256);
        bufp->chgIData(oldp+656,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+657,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__sel[0]));
        bufp->chgBit(oldp+658,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__sel[1]));
        bufp->chgBit(oldp+659,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__sel[2]));
        bufp->chgBit(oldp+660,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__sel[3]));
        bufp->chgBit(oldp+661,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__sel[4]));
        bufp->chgBit(oldp+662,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__sel[5]));
        bufp->chgBit(oldp+663,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__sel[6]));
        bufp->chgBit(oldp+664,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__sel[7]));
        bufp->chgQData(oldp+665,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[0]),64);
        bufp->chgQData(oldp+667,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[1]),64);
        bufp->chgQData(oldp+669,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[2]),64);
        bufp->chgQData(oldp+671,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[3]),64);
        bufp->chgQData(oldp+673,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[4]),64);
        bufp->chgQData(oldp+675,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[5]),64);
        bufp->chgQData(oldp+677,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[6]),64);
        bufp->chgQData(oldp+679,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[7]),64);
        bufp->chgQData(oldp+681,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[0]),64);
        bufp->chgQData(oldp+683,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[1]),64);
        bufp->chgQData(oldp+685,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[2]),64);
        bufp->chgQData(oldp+687,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[3]),64);
        bufp->chgQData(oldp+689,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[4]),64);
        bufp->chgQData(oldp+691,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[5]),64);
        bufp->chgQData(oldp+693,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[6]),64);
        bufp->chgQData(oldp+695,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[7]),64);
        bufp->chgQData(oldp+697,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0]),64);
        bufp->chgQData(oldp+699,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1]),64);
        bufp->chgQData(oldp+701,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0]),64);
        bufp->chgQData(oldp+703,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1]),64);
        bufp->chgQData(oldp+705,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[0]),64);
        bufp->chgQData(oldp+707,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[1]),64);
        bufp->chgQData(oldp+709,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[0]),64);
        bufp->chgQData(oldp+711,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[1]),64);
        bufp->chgIData(oldp+713,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_rdat_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+714,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__sel[0]),2);
        bufp->chgCData(oldp+715,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__sel[1]),2);
        bufp->chgCData(oldp+716,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__sel[2]),2);
        bufp->chgCData(oldp+717,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__sel[3]),2);
        bufp->chgCData(oldp+718,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__sel[4]),2);
        bufp->chgCData(oldp+719,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__sel[5]),2);
        bufp->chgCData(oldp+720,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__sel[6]),2);
        bufp->chgCData(oldp+721,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__sel[7]),2);
        bufp->chgQData(oldp+722,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[0]),64);
        bufp->chgQData(oldp+724,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[1]),64);
        bufp->chgQData(oldp+726,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[2]),64);
        bufp->chgQData(oldp+728,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[3]),64);
        bufp->chgQData(oldp+730,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[4]),64);
        bufp->chgQData(oldp+732,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[5]),64);
        bufp->chgQData(oldp+734,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[6]),64);
        bufp->chgQData(oldp+736,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[7]),64);
        bufp->chgQData(oldp+738,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[0]),64);
        bufp->chgQData(oldp+740,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[1]),64);
        bufp->chgQData(oldp+742,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[2]),64);
        bufp->chgQData(oldp+744,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[3]),64);
        bufp->chgQData(oldp+746,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[4]),64);
        bufp->chgQData(oldp+748,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[5]),64);
        bufp->chgQData(oldp+750,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[6]),64);
        bufp->chgQData(oldp+752,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[7]),64);
        bufp->chgQData(oldp+754,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[0]),64);
        bufp->chgQData(oldp+756,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[1]),64);
        bufp->chgQData(oldp+758,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[2]),64);
        bufp->chgQData(oldp+760,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[3]),64);
        bufp->chgQData(oldp+762,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[4]),64);
        bufp->chgQData(oldp+764,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[5]),64);
        bufp->chgQData(oldp+766,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[6]),64);
        bufp->chgQData(oldp+768,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[7]),64);
        bufp->chgQData(oldp+770,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[0]),64);
        bufp->chgQData(oldp+772,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[1]),64);
        bufp->chgQData(oldp+774,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[2]),64);
        bufp->chgQData(oldp+776,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[3]),64);
        bufp->chgQData(oldp+778,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[4]),64);
        bufp->chgQData(oldp+780,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[5]),64);
        bufp->chgQData(oldp+782,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[6]),64);
        bufp->chgQData(oldp+784,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[7]),64);
        bufp->chgQData(oldp+786,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0]),64);
        bufp->chgQData(oldp+788,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1]),64);
        bufp->chgQData(oldp+790,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2]),64);
        bufp->chgQData(oldp+792,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3]),64);
        bufp->chgIData(oldp+794,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__lq_vadd_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+795,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U])),4);
        bufp->chgCData(oldp+796,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+797,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+798,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+799,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+800,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+801,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+802,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[0U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+803,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U])),4);
        bufp->chgCData(oldp+804,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+805,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+806,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+807,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+808,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+809,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+810,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[1U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+811,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U])),4);
        bufp->chgCData(oldp+812,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+813,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+814,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+815,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+816,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+817,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+818,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[2U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+819,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+820,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+821,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+822,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+823,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+824,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+825,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_accsd_inst__DOT__sel[3U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+826,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U])),4);
        bufp->chgCData(oldp+827,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+828,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+829,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+830,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+831,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+832,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+833,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[0U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+834,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U])),4);
        bufp->chgCData(oldp+835,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+836,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+837,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+838,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+839,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+840,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+841,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[1U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+842,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U])),4);
        bufp->chgCData(oldp+843,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+844,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+845,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+846,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+847,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+848,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+849,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[2U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+850,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+851,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+852,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+853,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+854,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+855,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+856,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_chckd_inst__DOT__sel[3U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+857,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U])),4);
        bufp->chgCData(oldp+858,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+859,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+860,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+861,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+862,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+863,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+864,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+865,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U])),4);
        bufp->chgCData(oldp+866,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+867,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+868,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+869,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+870,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+871,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+872,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[1U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+873,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U])),4);
        bufp->chgCData(oldp+874,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+875,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+876,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+877,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+878,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+879,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+880,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[2U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+881,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U])),4);
        bufp->chgCData(oldp+882,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+883,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+884,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+885,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+886,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+887,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+888,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[3U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+889,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U])),4);
        bufp->chgCData(oldp+890,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+891,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+892,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+893,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+894,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+895,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+896,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[4U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+897,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U])),4);
        bufp->chgCData(oldp+898,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+899,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+900,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+901,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+902,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+903,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+904,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[5U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+905,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U])),4);
        bufp->chgCData(oldp+906,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+907,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+908,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+909,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+910,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+911,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+912,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[6U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+913,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U])),4);
        bufp->chgCData(oldp+914,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+915,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+916,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+917,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+918,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+919,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+920,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[7U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+921,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U])),4);
        bufp->chgCData(oldp+922,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+923,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+924,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+925,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+926,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+927,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+928,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[8U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+929,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U])),4);
        bufp->chgCData(oldp+930,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+931,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+932,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+933,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+934,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+935,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+936,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[9U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+937,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU])),4);
        bufp->chgCData(oldp+938,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+939,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+940,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+941,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+942,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+943,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+944,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xaU] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+945,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU])),4);
        bufp->chgCData(oldp+946,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+947,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+948,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+949,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+950,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+951,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+952,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xbU] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+953,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+954,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+955,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+956,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xcU] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+957,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU])),4);
        bufp->chgCData(oldp+958,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+959,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+960,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+961,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+962,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+963,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+964,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xdU] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+965,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xeU])),4);
        bufp->chgCData(oldp+966,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xeU] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+967,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xeU] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+968,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xeU] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+969,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xeU] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+970,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xeU] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+971,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xeU] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+972,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xeU] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+973,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xfU])),4);
        bufp->chgCData(oldp+974,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xfU] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+975,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xfU] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+976,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xfU] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+977,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xfU] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+978,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xfU] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+979,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xfU] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+980,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_exect_inst__DOT__sel[0xfU] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+981,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U])),4);
        bufp->chgCData(oldp+982,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+983,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+984,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+985,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+986,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+987,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+988,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[0U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+989,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U])),4);
        bufp->chgCData(oldp+990,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+991,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+992,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+993,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+994,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+995,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+996,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[1U] 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+997,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U])),4);
        bufp->chgCData(oldp+998,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                                          >> 4U))),4);
        bufp->chgCData(oldp+999,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                                          >> 8U))),4);
        bufp->chgCData(oldp+1000,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1001,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                                           >> 0x10U))),4);
        bufp->chgCData(oldp+1002,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                                           >> 0x14U))),4);
        bufp->chgCData(oldp+1003,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                                           >> 0x18U))),4);
        bufp->chgCData(oldp+1004,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[2U] 
                                   >> 0x1cU)),4);
        bufp->chgCData(oldp+1005,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
                                           >> 4U))),4);
        bufp->chgCData(oldp+1006,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
                                           >> 8U))),4);
        bufp->chgCData(oldp+1007,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1008,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
                                           >> 0x10U))),4);
        bufp->chgCData(oldp+1009,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
                                           >> 0x14U))),4);
        bufp->chgCData(oldp+1010,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
                                           >> 0x18U))),4);
        bufp->chgCData(oldp+1011,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_lq_trans_inst__DOT__sel[3U] 
                                   >> 0x1cU)),4);
        bufp->chgCData(oldp+1012,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U])),4);
        bufp->chgCData(oldp+1013,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                                           >> 4U))),4);
        bufp->chgCData(oldp+1014,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                                           >> 8U))),4);
        bufp->chgCData(oldp+1015,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1016,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                                           >> 0x10U))),4);
        bufp->chgCData(oldp+1017,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                                           >> 0x14U))),4);
        bufp->chgCData(oldp+1018,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                                           >> 0x18U))),4);
        bufp->chgCData(oldp+1019,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[0U] 
                                   >> 0x1cU)),4);
        bufp->chgCData(oldp+1020,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U])),4);
        bufp->chgCData(oldp+1021,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                                           >> 4U))),4);
        bufp->chgCData(oldp+1022,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                                           >> 8U))),4);
        bufp->chgCData(oldp+1023,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1024,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                                           >> 0x10U))),4);
        bufp->chgCData(oldp+1025,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                                           >> 0x14U))),4);
        bufp->chgCData(oldp+1026,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                                           >> 0x18U))),4);
        bufp->chgCData(oldp+1027,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[1U] 
                                   >> 0x1cU)),4);
        bufp->chgCData(oldp+1028,((0xfU & vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U])),4);
        bufp->chgCData(oldp+1029,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                                           >> 4U))),4);
        bufp->chgCData(oldp+1030,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                                           >> 8U))),4);
        bufp->chgCData(oldp+1031,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1032,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                                           >> 0x10U))),4);
        bufp->chgCData(oldp+1033,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                                           >> 0x14U))),4);
        bufp->chgCData(oldp+1034,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                                           >> 0x18U))),4);
        bufp->chgCData(oldp+1035,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[2U] 
                                   >> 0x1cU)),4);
        bufp->chgCData(oldp+1036,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
                                           >> 4U))),4);
        bufp->chgCData(oldp+1037,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
                                           >> 8U))),4);
        bufp->chgCData(oldp+1038,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
                                           >> 0xcU))),4);
        bufp->chgCData(oldp+1039,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
                                           >> 0x10U))),4);
        bufp->chgCData(oldp+1040,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
                                           >> 0x14U))),4);
        bufp->chgCData(oldp+1041,((0xfU & (vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
                                           >> 0x18U))),4);
        bufp->chgCData(oldp+1042,((vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__pos_sq_trans_inst__DOT__sel[3U] 
                                   >> 0x1cU)),4);
        __Vtemp_65[0U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front]][0U];
        __Vtemp_65[1U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front]][1U];
        __Vtemp_65[2U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front]][2U];
        __Vtemp_65[3U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front]][3U];
        __Vtemp_65[4U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front]][4U];
        __Vtemp_65[5U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front]][5U];
        __Vtemp_65[6U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front]][6U];
        __Vtemp_65[7U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel
            [vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_front]][7U];
        bufp->chgWData(oldp+1043,(__Vtemp_65),256);
        __Vtemp_66[0U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0U];
        __Vtemp_66[1U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[1U];
        __Vtemp_66[2U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[2U];
        __Vtemp_66[3U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[3U];
        __Vtemp_66[4U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[4U];
        __Vtemp_66[5U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[5U];
        __Vtemp_66[6U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[6U];
        __Vtemp_66[7U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[7U];
        bufp->chgWData(oldp+1051,(__Vtemp_66),256);
        __Vtemp_67[0U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[8U];
        __Vtemp_67[1U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[9U];
        __Vtemp_67[2U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0xaU];
        __Vtemp_67[3U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0xbU];
        __Vtemp_67[4U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0xcU];
        __Vtemp_67[5U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0xdU];
        __Vtemp_67[6U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0xeU];
        __Vtemp_67[7U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0xfU];
        bufp->chgWData(oldp+1059,(__Vtemp_67),256);
        __Vtemp_68[0U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x10U];
        __Vtemp_68[1U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x11U];
        __Vtemp_68[2U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x12U];
        __Vtemp_68[3U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x13U];
        __Vtemp_68[4U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x14U];
        __Vtemp_68[5U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x15U];
        __Vtemp_68[6U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x16U];
        __Vtemp_68[7U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x17U];
        bufp->chgWData(oldp+1067,(__Vtemp_68),256);
        __Vtemp_69[0U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x18U];
        __Vtemp_69[1U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x19U];
        __Vtemp_69[2U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x1aU];
        __Vtemp_69[3U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x1bU];
        __Vtemp_69[4U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x1cU];
        __Vtemp_69[5U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x1dU];
        __Vtemp_69[6U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x1eU];
        __Vtemp_69[7U] = vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_wvalue[0x1fU];
        bufp->chgWData(oldp+1075,(__Vtemp_69),256);
        bufp->chgCData(oldp+1083,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel[0]),2);
        bufp->chgCData(oldp+1084,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel[1]),2);
        bufp->chgCData(oldp+1085,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel[2]),2);
        bufp->chgCData(oldp+1086,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel[3]),2);
        bufp->chgCData(oldp+1087,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel[4]),2);
        bufp->chgCData(oldp+1088,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel[5]),2);
        bufp->chgCData(oldp+1089,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel[6]),2);
        bufp->chgCData(oldp+1090,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__sel[7]),2);
        bufp->chgWData(oldp+1091,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[0]),256);
        bufp->chgWData(oldp+1099,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[1]),256);
        bufp->chgWData(oldp+1107,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[2]),256);
        bufp->chgWData(oldp+1115,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[3]),256);
        bufp->chgWData(oldp+1123,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[4]),256);
        bufp->chgWData(oldp+1131,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[5]),256);
        bufp->chgWData(oldp+1139,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[6]),256);
        bufp->chgWData(oldp+1147,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[7]),256);
        bufp->chgWData(oldp+1155,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[0]),256);
        bufp->chgWData(oldp+1163,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[1]),256);
        bufp->chgWData(oldp+1171,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[2]),256);
        bufp->chgWData(oldp+1179,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[3]),256);
        bufp->chgWData(oldp+1187,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[4]),256);
        bufp->chgWData(oldp+1195,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[5]),256);
        bufp->chgWData(oldp+1203,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[6]),256);
        bufp->chgWData(oldp+1211,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[7]),256);
        bufp->chgWData(oldp+1219,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[0]),256);
        bufp->chgWData(oldp+1227,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[1]),256);
        bufp->chgWData(oldp+1235,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[2]),256);
        bufp->chgWData(oldp+1243,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[3]),256);
        bufp->chgWData(oldp+1251,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[4]),256);
        bufp->chgWData(oldp+1259,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[5]),256);
        bufp->chgWData(oldp+1267,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[6]),256);
        bufp->chgWData(oldp+1275,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[7]),256);
        bufp->chgWData(oldp+1283,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[0]),256);
        bufp->chgWData(oldp+1291,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[1]),256);
        bufp->chgWData(oldp+1299,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[2]),256);
        bufp->chgWData(oldp+1307,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[3]),256);
        bufp->chgWData(oldp+1315,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[4]),256);
        bufp->chgWData(oldp+1323,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[5]),256);
        bufp->chgWData(oldp+1331,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[6]),256);
        bufp->chgWData(oldp+1339,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[7]),256);
        bufp->chgWData(oldp+1347,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0]),256);
        bufp->chgWData(oldp+1355,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1]),256);
        bufp->chgWData(oldp+1363,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2]),256);
        bufp->chgWData(oldp+1371,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3]),256);
        bufp->chgIData(oldp+1379,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1380,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__sel[0]));
        bufp->chgBit(oldp+1381,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__sel[1]));
        bufp->chgBit(oldp+1382,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__sel[2]));
        bufp->chgBit(oldp+1383,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__sel[3]));
        bufp->chgBit(oldp+1384,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__sel[4]));
        bufp->chgBit(oldp+1385,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__sel[5]));
        bufp->chgBit(oldp+1386,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__sel[6]));
        bufp->chgBit(oldp+1387,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__sel[7]));
        bufp->chgQData(oldp+1388,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[0]),64);
        bufp->chgQData(oldp+1390,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[1]),64);
        bufp->chgQData(oldp+1392,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[2]),64);
        bufp->chgQData(oldp+1394,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[3]),64);
        bufp->chgQData(oldp+1396,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[4]),64);
        bufp->chgQData(oldp+1398,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[5]),64);
        bufp->chgQData(oldp+1400,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[6]),64);
        bufp->chgQData(oldp+1402,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__0__KET____DOT__regs[7]),64);
        bufp->chgQData(oldp+1404,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[0]),64);
        bufp->chgQData(oldp+1406,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[1]),64);
        bufp->chgQData(oldp+1408,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[2]),64);
        bufp->chgQData(oldp+1410,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[3]),64);
        bufp->chgQData(oldp+1412,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[4]),64);
        bufp->chgQData(oldp+1414,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[5]),64);
        bufp->chgQData(oldp+1416,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[6]),64);
        bufp->chgQData(oldp+1418,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__dupregs__BRA__1__KET____DOT__regs[7]),64);
        bufp->chgQData(oldp+1420,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0]),64);
        bufp->chgQData(oldp+1422,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1]),64);
        bufp->chgIData(oldp+1424,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_rdat_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+1425,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__sel[0]),2);
        bufp->chgCData(oldp+1426,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__sel[1]),2);
        bufp->chgCData(oldp+1427,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__sel[2]),2);
        bufp->chgCData(oldp+1428,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__sel[3]),2);
        bufp->chgCData(oldp+1429,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__sel[4]),2);
        bufp->chgCData(oldp+1430,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__sel[5]),2);
        bufp->chgCData(oldp+1431,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__sel[6]),2);
        bufp->chgCData(oldp+1432,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__sel[7]),2);
        bufp->chgQData(oldp+1433,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[0]),64);
        bufp->chgQData(oldp+1435,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[1]),64);
        bufp->chgQData(oldp+1437,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[2]),64);
        bufp->chgQData(oldp+1439,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[3]),64);
        bufp->chgQData(oldp+1441,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[4]),64);
        bufp->chgQData(oldp+1443,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[5]),64);
        bufp->chgQData(oldp+1445,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[6]),64);
        bufp->chgQData(oldp+1447,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__0__KET____DOT__regs[7]),64);
        bufp->chgQData(oldp+1449,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[0]),64);
        bufp->chgQData(oldp+1451,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[1]),64);
        bufp->chgQData(oldp+1453,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[2]),64);
        bufp->chgQData(oldp+1455,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[3]),64);
        bufp->chgQData(oldp+1457,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[4]),64);
        bufp->chgQData(oldp+1459,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[5]),64);
        bufp->chgQData(oldp+1461,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[6]),64);
        bufp->chgQData(oldp+1463,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__1__KET____DOT__regs[7]),64);
        bufp->chgQData(oldp+1465,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[0]),64);
        bufp->chgQData(oldp+1467,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[1]),64);
        bufp->chgQData(oldp+1469,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[2]),64);
        bufp->chgQData(oldp+1471,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[3]),64);
        bufp->chgQData(oldp+1473,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[4]),64);
        bufp->chgQData(oldp+1475,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[5]),64);
        bufp->chgQData(oldp+1477,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[6]),64);
        bufp->chgQData(oldp+1479,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__2__KET____DOT__regs[7]),64);
        bufp->chgQData(oldp+1481,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[0]),64);
        bufp->chgQData(oldp+1483,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[1]),64);
        bufp->chgQData(oldp+1485,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[2]),64);
        bufp->chgQData(oldp+1487,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[3]),64);
        bufp->chgQData(oldp+1489,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[4]),64);
        bufp->chgQData(oldp+1491,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[5]),64);
        bufp->chgQData(oldp+1493,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[6]),64);
        bufp->chgQData(oldp+1495,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__dupregs__BRA__3__KET____DOT__regs[7]),64);
        bufp->chgQData(oldp+1497,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0]),64);
        bufp->chgQData(oldp+1499,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1]),64);
        bufp->chgQData(oldp+1501,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2]),64);
        bufp->chgQData(oldp+1503,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3]),64);
        bufp->chgQData(oldp+1505,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0]),64);
        bufp->chgQData(oldp+1507,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1]),64);
        bufp->chgQData(oldp+1509,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[2]),64);
        bufp->chgQData(oldp+1511,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[3]),64);
        bufp->chgIData(oldp+1513,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__sq_vadd_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1514,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk15__DOT__i),32);
        bufp->chgIData(oldp+1515,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk16__DOT__i),32);
        bufp->chgIData(oldp+1516,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk17__DOT__i),32);
        bufp->chgIData(oldp+1517,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk17__DOT__unnamedblk18__DOT__j),32);
        bufp->chgIData(oldp+1518,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk19__DOT__i),32);
        bufp->chgIData(oldp+1519,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk20__DOT__i),32);
        bufp->chgIData(oldp+1520,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk21__DOT__i),32);
        bufp->chgIData(oldp+1521,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk39__DOT__i),32);
        bufp->chgIData(oldp+1522,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk40__DOT__i),32);
        bufp->chgIData(oldp+1523,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk41__DOT__i),32);
        bufp->chgIData(oldp+1524,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk42__DOT__i),32);
        bufp->chgIData(oldp+1525,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk42__DOT__unnamedblk43__DOT__j),32);
        bufp->chgIData(oldp+1526,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk44__DOT__i),32);
        bufp->chgIData(oldp+1527,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk45__DOT__i),32);
        bufp->chgIData(oldp+1528,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk46__DOT__i),32);
        bufp->chgIData(oldp+1529,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk47__DOT__i),32);
        bufp->chgIData(oldp+1530,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk48__DOT__i),32);
        bufp->chgIData(oldp+1531,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk49__DOT__i),32);
        bufp->chgIData(oldp+1532,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk52__DOT__i),32);
        bufp->chgIData(oldp+1533,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk52__DOT__unnamedblk53__DOT__j),32);
        bufp->chgIData(oldp+1534,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk52__DOT__unnamedblk54__DOT__j),32);
        bufp->chgIData(oldp+1535,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk55__DOT__i),32);
        bufp->chgIData(oldp+1536,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk55__DOT__unnamedblk56__DOT__j),32);
        bufp->chgIData(oldp+1537,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk57__DOT__i),32);
        bufp->chgIData(oldp+1538,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk58__DOT__i),32);
        bufp->chgIData(oldp+1539,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk59__DOT__i),32);
        bufp->chgIData(oldp+1540,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk60__DOT__j),32);
        bufp->chgIData(oldp+1541,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk61__DOT__i),32);
        bufp->chgIData(oldp+1542,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk62__DOT__i),32);
        bufp->chgIData(oldp+1543,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk63__DOT__i),32);
        bufp->chgIData(oldp+1544,(vlSelf->vcore__DOT__inst__DOT__lsu_inst__DOT__unnamedblk63__DOT__unnamedblk64__DOT__j),32);
        bufp->chgCData(oldp+1545,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__it_rqst_m),8);
        bufp->chgQData(oldp+1546,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__it_vadd_m),64);
        bufp->chgQData(oldp+1548,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__it_satp_m),64);
        bufp->chgCData(oldp+1550,((0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp))),8);
        bufp->chgCData(oldp+1551,((0xffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm))),8);
        bufp->chgQData(oldp+1552,((((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[0U])))),64);
        bufp->chgCData(oldp+1554,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dt_rqst_m),8);
        bufp->chgQData(oldp+1555,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dt_vadd_m),64);
        bufp->chgQData(oldp+1557,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dt_satp_m),64);
        bufp->chgCData(oldp+1559,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_resp) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1560,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_perm) 
                                            >> 8U))),8);
        bufp->chgQData(oldp+1561,((((QData)((IData)(
                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__stlb__s_padd[2U])))),64);
        bufp->chgCData(oldp+1563,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_rqst_m),8);
        bufp->chgQData(oldp+1564,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_vadd_m),64);
        bufp->chgQData(oldp+1566,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_satp_m),64);
        bufp->chgCData(oldp+1568,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_resp_m),8);
        bufp->chgCData(oldp+1569,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_prm),8);
        bufp->chgQData(oldp+1570,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_ppn 
                                   << 0xcU)),64);
        bufp->chgBit(oldp+1572,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_ready));
        bufp->chgCData(oldp+1573,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_rqst_b),8);
        bufp->chgCData(oldp+1574,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_rqst_f),8);
        bufp->chgQData(oldp+1575,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_vadd_b),64);
        bufp->chgQData(oldp+1577,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__st_vadd_f),64);
        bufp->chgCData(oldp+1579,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_trsc_m),8);
        bufp->chgCData(oldp+1580,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_trsc_m),8);
        bufp->chgCData(oldp+1581,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_m),8);
        bufp->chgCData(oldp+1582,((0xffU & ((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__rep_rqst))
                                             ? (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__rep_rqst)
                                             : ((0x20U 
                                                 & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel))
                                                 ? 
                                                vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_rqst
                                                [(1U 
                                                  & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel) 
                                                     >> 4U))]
                                                 : 0U)))),8);
        bufp->chgQData(oldp+1583,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_strb_s),64);
        bufp->chgQData(oldp+1585,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_strb_m),64);
        bufp->chgQData(oldp+1587,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_strb_m),64);
        bufp->chgQData(oldp+1589,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_addr_m),64);
        bufp->chgQData(oldp+1591,(((0U != (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__rep_rqst))
                                    ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__rep_addr
                                    : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_addr
                                   [(1U & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__icache__DOT__mshr_p_inst__DOT__sel) 
                                           >> 4U))])),64);
        bufp->chgCData(oldp+1593,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0U])),8);
        bufp->chgCData(oldp+1594,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1595,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1596,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1597,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[1U])),8);
        bufp->chgCData(oldp+1598,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1599,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1600,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1601,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[2U])),8);
        bufp->chgCData(oldp+1602,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1603,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1604,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1605,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[3U])),8);
        bufp->chgCData(oldp+1606,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1607,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1608,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1609,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[4U])),8);
        bufp->chgCData(oldp+1610,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1611,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1612,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1613,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[5U])),8);
        bufp->chgCData(oldp+1614,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1615,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1616,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1617,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[6U])),8);
        bufp->chgCData(oldp+1618,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1619,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1620,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1621,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[7U])),8);
        bufp->chgCData(oldp+1622,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1623,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1624,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1625,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[8U])),8);
        bufp->chgCData(oldp+1626,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1627,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1628,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1629,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[9U])),8);
        bufp->chgCData(oldp+1630,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1631,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1632,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1633,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xaU])),8);
        bufp->chgCData(oldp+1634,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1635,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1636,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1637,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xbU])),8);
        bufp->chgCData(oldp+1638,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1639,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1640,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1641,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xcU])),8);
        bufp->chgCData(oldp+1642,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1643,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1644,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1645,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xdU])),8);
        bufp->chgCData(oldp+1646,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1647,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1648,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1649,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xeU])),8);
        bufp->chgCData(oldp+1650,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1651,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1652,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1653,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xfU])),8);
        bufp->chgCData(oldp+1654,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1655,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1656,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1657,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0U])),8);
        bufp->chgCData(oldp+1658,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1659,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1660,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1661,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[1U])),8);
        bufp->chgCData(oldp+1662,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1663,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1664,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1665,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[2U])),8);
        bufp->chgCData(oldp+1666,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1667,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1668,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1669,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[3U])),8);
        bufp->chgCData(oldp+1670,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1671,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1672,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1673,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[4U])),8);
        bufp->chgCData(oldp+1674,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1675,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1676,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1677,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[5U])),8);
        bufp->chgCData(oldp+1678,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1679,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1680,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1681,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[6U])),8);
        bufp->chgCData(oldp+1682,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1683,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1684,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1685,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[7U])),8);
        bufp->chgCData(oldp+1686,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1687,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1688,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1689,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[8U])),8);
        bufp->chgCData(oldp+1690,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1691,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1692,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1693,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[9U])),8);
        bufp->chgCData(oldp+1694,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1695,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1696,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1697,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xaU])),8);
        bufp->chgCData(oldp+1698,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1699,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1700,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1701,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xbU])),8);
        bufp->chgCData(oldp+1702,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1703,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1704,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1705,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xcU])),8);
        bufp->chgCData(oldp+1706,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1707,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1708,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1709,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xdU])),8);
        bufp->chgCData(oldp+1710,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1711,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1712,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1713,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xeU])),8);
        bufp->chgCData(oldp+1714,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1715,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1716,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1717,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xfU])),8);
        bufp->chgCData(oldp+1718,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1719,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1720,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_m[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1721,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0U])),8);
        bufp->chgCData(oldp+1722,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1723,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1724,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1725,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[1U])),8);
        bufp->chgCData(oldp+1726,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1727,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1728,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1729,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[2U])),8);
        bufp->chgCData(oldp+1730,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1731,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1732,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1733,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[3U])),8);
        bufp->chgCData(oldp+1734,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1735,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1736,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1737,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[4U])),8);
        bufp->chgCData(oldp+1738,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1739,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1740,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1741,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[5U])),8);
        bufp->chgCData(oldp+1742,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1743,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1744,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1745,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[6U])),8);
        bufp->chgCData(oldp+1746,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1747,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1748,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1749,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[7U])),8);
        bufp->chgCData(oldp+1750,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1751,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1752,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1753,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[8U])),8);
        bufp->chgCData(oldp+1754,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1755,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1756,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1757,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[9U])),8);
        bufp->chgCData(oldp+1758,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1759,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1760,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1761,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xaU])),8);
        bufp->chgCData(oldp+1762,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1763,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1764,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1765,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xbU])),8);
        bufp->chgCData(oldp+1766,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1767,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1768,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1769,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xcU])),8);
        bufp->chgCData(oldp+1770,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1771,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1772,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1773,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xdU])),8);
        bufp->chgCData(oldp+1774,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1775,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1776,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1777,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xeU])),8);
        bufp->chgCData(oldp+1778,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1779,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1780,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1781,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xfU])),8);
        bufp->chgCData(oldp+1782,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1783,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1784,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_wdat_m[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1785,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_resp),8);
        bufp->chgCData(oldp+1786,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_resp_m),8);
        bufp->chgCData(oldp+1787,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_resp),8);
        bufp->chgCData(oldp+1788,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_resp_m),8);
        bufp->chgCData(oldp+1789,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_miss),8);
        bufp->chgCData(oldp+1790,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_miss),8);
        bufp->chgQData(oldp+1791,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_ofst),64);
        bufp->chgQData(oldp+1793,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_ofst_m),64);
        bufp->chgQData(oldp+1795,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_ofst),64);
        bufp->chgCData(oldp+1797,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0U])),8);
        bufp->chgCData(oldp+1798,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1799,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1800,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1801,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[1U])),8);
        bufp->chgCData(oldp+1802,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1803,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1804,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1805,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[2U])),8);
        bufp->chgCData(oldp+1806,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1807,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1808,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1809,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[3U])),8);
        bufp->chgCData(oldp+1810,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1811,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1812,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1813,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[4U])),8);
        bufp->chgCData(oldp+1814,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1815,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1816,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1817,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[5U])),8);
        bufp->chgCData(oldp+1818,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1819,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1820,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1821,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[6U])),8);
        bufp->chgCData(oldp+1822,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1823,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1824,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1825,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[7U])),8);
        bufp->chgCData(oldp+1826,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1827,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1828,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1829,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[8U])),8);
        bufp->chgCData(oldp+1830,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1831,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1832,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1833,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[9U])),8);
        bufp->chgCData(oldp+1834,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1835,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1836,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1837,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xaU])),8);
        bufp->chgCData(oldp+1838,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1839,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1840,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1841,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xbU])),8);
        bufp->chgCData(oldp+1842,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1843,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1844,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1845,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xcU])),8);
        bufp->chgCData(oldp+1846,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1847,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1848,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1849,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xdU])),8);
        bufp->chgCData(oldp+1850,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1851,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1852,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1853,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xeU])),8);
        bufp->chgCData(oldp+1854,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1855,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1856,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1857,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xfU])),8);
        bufp->chgCData(oldp+1858,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1859,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1860,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1861,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0U])),8);
        bufp->chgCData(oldp+1862,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1863,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1864,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1865,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[1U])),8);
        bufp->chgCData(oldp+1866,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1867,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1868,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1869,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[2U])),8);
        bufp->chgCData(oldp+1870,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1871,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1872,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1873,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[3U])),8);
        bufp->chgCData(oldp+1874,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1875,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1876,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1877,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[4U])),8);
        bufp->chgCData(oldp+1878,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1879,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1880,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1881,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[5U])),8);
        bufp->chgCData(oldp+1882,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1883,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1884,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1885,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[6U])),8);
        bufp->chgCData(oldp+1886,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1887,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1888,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1889,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[7U])),8);
        bufp->chgCData(oldp+1890,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1891,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1892,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1893,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[8U])),8);
        bufp->chgCData(oldp+1894,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1895,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1896,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1897,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[9U])),8);
        bufp->chgCData(oldp+1898,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1899,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1900,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1901,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xaU])),8);
        bufp->chgCData(oldp+1902,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1903,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1904,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1905,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xbU])),8);
        bufp->chgCData(oldp+1906,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1907,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1908,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1909,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xcU])),8);
        bufp->chgCData(oldp+1910,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1911,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1912,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1913,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xdU])),8);
        bufp->chgCData(oldp+1914,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1915,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1916,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1917,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xeU])),8);
        bufp->chgCData(oldp+1918,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1919,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1920,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1921,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xfU])),8);
        bufp->chgCData(oldp+1922,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1923,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1924,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rdat_m[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1925,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0U])),8);
        bufp->chgCData(oldp+1926,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1927,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1928,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1929,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[1U])),8);
        bufp->chgCData(oldp+1930,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1931,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1932,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1933,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[2U])),8);
        bufp->chgCData(oldp+1934,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1935,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1936,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1937,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[3U])),8);
        bufp->chgCData(oldp+1938,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1939,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1940,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1941,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[4U])),8);
        bufp->chgCData(oldp+1942,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1943,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1944,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1945,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[5U])),8);
        bufp->chgCData(oldp+1946,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1947,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1948,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1949,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[6U])),8);
        bufp->chgCData(oldp+1950,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1951,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1952,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1953,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[7U])),8);
        bufp->chgCData(oldp+1954,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1955,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1956,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1957,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[8U])),8);
        bufp->chgCData(oldp+1958,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1959,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1960,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1961,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[9U])),8);
        bufp->chgCData(oldp+1962,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1963,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1964,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1965,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xaU])),8);
        bufp->chgCData(oldp+1966,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1967,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1968,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1969,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xbU])),8);
        bufp->chgCData(oldp+1970,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1971,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1972,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1973,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xcU])),8);
        bufp->chgCData(oldp+1974,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1975,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1976,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1977,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xdU])),8);
        bufp->chgCData(oldp+1978,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1979,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1980,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1981,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xeU])),8);
        bufp->chgCData(oldp+1982,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1983,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1984,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1985,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xfU])),8);
        bufp->chgCData(oldp+1986,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1987,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1988,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgBit(oldp+1989,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_ready));
        bufp->chgBit(oldp+1990,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_ready));
        bufp->chgCData(oldp+1991,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_b),8);
        bufp->chgCData(oldp+1992,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_rqst_f),8);
        bufp->chgCData(oldp+1993,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_rqst_b),8);
        bufp->chgCData(oldp+1994,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_rqst_f),8);
        bufp->chgQData(oldp+1995,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_addr_b),64);
        bufp->chgQData(oldp+1997,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_addr_f),64);
        bufp->chgQData(oldp+1999,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_addr_b),64);
        bufp->chgQData(oldp+2001,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_addr_f),64);
        bufp->chgQData(oldp+2003,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_strb_b),64);
        bufp->chgQData(oldp+2005,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_strb_f),64);
        bufp->chgCData(oldp+2007,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0U])),8);
        bufp->chgCData(oldp+2008,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2009,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2010,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2011,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[1U])),8);
        bufp->chgCData(oldp+2012,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2013,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2014,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2015,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[2U])),8);
        bufp->chgCData(oldp+2016,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2017,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2018,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2019,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[3U])),8);
        bufp->chgCData(oldp+2020,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2021,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2022,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2023,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[4U])),8);
        bufp->chgCData(oldp+2024,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2025,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2026,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2027,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[5U])),8);
        bufp->chgCData(oldp+2028,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2029,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2030,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2031,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[6U])),8);
        bufp->chgCData(oldp+2032,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2033,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2034,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2035,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[7U])),8);
        bufp->chgCData(oldp+2036,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2037,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2038,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2039,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[8U])),8);
        bufp->chgCData(oldp+2040,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2041,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2042,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2043,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[9U])),8);
        bufp->chgCData(oldp+2044,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2045,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2046,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2047,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xaU])),8);
        bufp->chgCData(oldp+2048,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2049,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2050,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2051,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xbU])),8);
        bufp->chgCData(oldp+2052,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2053,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2054,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2055,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xcU])),8);
        bufp->chgCData(oldp+2056,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2057,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2058,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2059,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xdU])),8);
        bufp->chgCData(oldp+2060,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2061,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2062,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2063,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xeU])),8);
        bufp->chgCData(oldp+2064,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2065,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2066,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2067,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xfU])),8);
        bufp->chgCData(oldp+2068,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2069,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2070,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_b[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2071,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0U])),8);
        bufp->chgCData(oldp+2072,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2073,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2074,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2075,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[1U])),8);
        bufp->chgCData(oldp+2076,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2077,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2078,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2079,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[2U])),8);
        bufp->chgCData(oldp+2080,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2081,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2082,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2083,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[3U])),8);
        bufp->chgCData(oldp+2084,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2085,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2086,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2087,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[4U])),8);
        bufp->chgCData(oldp+2088,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2089,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2090,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2091,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[5U])),8);
        bufp->chgCData(oldp+2092,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2093,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2094,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2095,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[6U])),8);
        bufp->chgCData(oldp+2096,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2097,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2098,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2099,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[7U])),8);
        bufp->chgCData(oldp+2100,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2101,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2102,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2103,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[8U])),8);
        bufp->chgCData(oldp+2104,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2105,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2106,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2107,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[9U])),8);
        bufp->chgCData(oldp+2108,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2109,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2110,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2111,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xaU])),8);
        bufp->chgCData(oldp+2112,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2113,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2114,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2115,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xbU])),8);
        bufp->chgCData(oldp+2116,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2117,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2118,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2119,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xcU])),8);
        bufp->chgCData(oldp+2120,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2121,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2122,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2123,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xdU])),8);
        bufp->chgCData(oldp+2124,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2125,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2126,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2127,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xeU])),8);
        bufp->chgCData(oldp+2128,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2129,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2130,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2131,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xfU])),8);
        bufp->chgCData(oldp+2132,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2133,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2134,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_f[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgBit(oldp+2135,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_byps_f));
        bufp->chgCData(oldp+2136,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ic_offset),6);
        bufp->chgCData(oldp+2137,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rqst_b),8);
        bufp->chgCData(oldp+2138,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_trsc_b),8);
        bufp->chgQData(oldp+2139,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_addr_b),64);
        bufp->chgCData(oldp+2141,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_resp_b),8);
        bufp->chgCData(oldp+2142,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_mesi_b),8);
        bufp->chgCData(oldp+2143,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0U])),8);
        bufp->chgCData(oldp+2144,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2145,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2146,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2147,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[1U])),8);
        bufp->chgCData(oldp+2148,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2149,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2150,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2151,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[2U])),8);
        bufp->chgCData(oldp+2152,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2153,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2154,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2155,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[3U])),8);
        bufp->chgCData(oldp+2156,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2157,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2158,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2159,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[4U])),8);
        bufp->chgCData(oldp+2160,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2161,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2162,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2163,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[5U])),8);
        bufp->chgCData(oldp+2164,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2165,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2166,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2167,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[6U])),8);
        bufp->chgCData(oldp+2168,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2169,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2170,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2171,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[7U])),8);
        bufp->chgCData(oldp+2172,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2173,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2174,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2175,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[8U])),8);
        bufp->chgCData(oldp+2176,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2177,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2178,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2179,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[9U])),8);
        bufp->chgCData(oldp+2180,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2181,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2182,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2183,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xaU])),8);
        bufp->chgCData(oldp+2184,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2185,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2186,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2187,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xbU])),8);
        bufp->chgCData(oldp+2188,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2189,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2190,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2191,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xcU])),8);
        bufp->chgCData(oldp+2192,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2193,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2194,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2195,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xdU])),8);
        bufp->chgCData(oldp+2196,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2197,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2198,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2199,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xeU])),8);
        bufp->chgCData(oldp+2200,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2201,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2202,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2203,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xfU])),8);
        bufp->chgCData(oldp+2204,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2205,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2206,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_rdat_b[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2207,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__coh_lock_b),8);
        bufp->chgCData(oldp+2208,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_req),8);
        bufp->chgSData(oldp+2209,((0x1ffU & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_vpn))),9);
        bufp->chgSData(oldp+2210,((0x1ffU & (IData)(
                                                    (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_vpn 
                                                     >> 9U)))),9);
        bufp->chgSData(oldp+2211,((0x1ffU & (IData)(
                                                    (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_vpn 
                                                     >> 0x12U)))),9);
        bufp->chgSData(oldp+2212,((0x1ffU & (IData)(
                                                    (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_vpn 
                                                     >> 0x1bU)))),9);
        bufp->chgSData(oldp+2213,((0x1ffU & (IData)(
                                                    (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_vpn 
                                                     >> 0x24U)))),9);
        bufp->chgQData(oldp+2214,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_ppn),44);
        bufp->chgQData(oldp+2216,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_pte),64);
        bufp->chgQData(oldp+2218,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_add),64);
        bufp->chgCData(oldp+2220,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_stt),8);
        bufp->chgCData(oldp+2221,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_num),3);
        bufp->chgBit(oldp+2222,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__ptw_mis));
        bufp->chgCData(oldp+2223,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_stt),8);
        bufp->chgCData(oldp+2224,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_cnt),8);
        bufp->chgCData(oldp+2225,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_req),8);
        bufp->chgCData(oldp+2226,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_thr),8);
        bufp->chgCData(oldp+2227,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0U])),8);
        bufp->chgCData(oldp+2228,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2229,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2230,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2231,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[1U])),8);
        bufp->chgCData(oldp+2232,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2233,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2234,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2235,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[2U])),8);
        bufp->chgCData(oldp+2236,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2237,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2238,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2239,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[3U])),8);
        bufp->chgCData(oldp+2240,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2241,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2242,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2243,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[4U])),8);
        bufp->chgCData(oldp+2244,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2245,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2246,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2247,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[5U])),8);
        bufp->chgCData(oldp+2248,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2249,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2250,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2251,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[6U])),8);
        bufp->chgCData(oldp+2252,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2253,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2254,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2255,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[7U])),8);
        bufp->chgCData(oldp+2256,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2257,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2258,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2259,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[8U])),8);
        bufp->chgCData(oldp+2260,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2261,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2262,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2263,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[9U])),8);
        bufp->chgCData(oldp+2264,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2265,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2266,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2267,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xaU])),8);
        bufp->chgCData(oldp+2268,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2269,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2270,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2271,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xbU])),8);
        bufp->chgCData(oldp+2272,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2273,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2274,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2275,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xcU])),8);
        bufp->chgCData(oldp+2276,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2277,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2278,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2279,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xdU])),8);
        bufp->chgCData(oldp+2280,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2281,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2282,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2283,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xeU])),8);
        bufp->chgCData(oldp+2284,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2285,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2286,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2287,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xfU])),8);
        bufp->chgCData(oldp+2288,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2289,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2290,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_buf[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgQData(oldp+2291,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__axi_str),64);
        bufp->chgCData(oldp+2293,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_resp),8);
        bufp->chgCData(oldp+2294,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_miss),8);
        bufp->chgQData(oldp+2295,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_ofst),64);
        bufp->chgCData(oldp+2297,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0U])),8);
        bufp->chgCData(oldp+2298,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2299,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2300,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2301,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[1U])),8);
        bufp->chgCData(oldp+2302,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2303,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2304,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2305,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[2U])),8);
        bufp->chgCData(oldp+2306,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2307,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2308,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2309,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[3U])),8);
        bufp->chgCData(oldp+2310,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2311,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2312,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2313,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[4U])),8);
        bufp->chgCData(oldp+2314,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2315,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2316,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2317,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[5U])),8);
        bufp->chgCData(oldp+2318,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2319,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2320,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2321,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[6U])),8);
        bufp->chgCData(oldp+2322,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2323,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2324,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2325,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[7U])),8);
        bufp->chgCData(oldp+2326,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2327,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2328,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2329,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[8U])),8);
        bufp->chgCData(oldp+2330,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2331,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2332,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2333,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[9U])),8);
        bufp->chgCData(oldp+2334,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2335,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2336,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2337,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xaU])),8);
        bufp->chgCData(oldp+2338,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2339,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2340,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2341,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xbU])),8);
        bufp->chgCData(oldp+2342,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2343,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2344,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2345,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xcU])),8);
        bufp->chgCData(oldp+2346,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2347,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2348,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2349,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xdU])),8);
        bufp->chgCData(oldp+2350,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2351,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2352,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2353,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xeU])),8);
        bufp->chgCData(oldp+2354,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2355,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2356,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2357,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xfU])),8);
        bufp->chgCData(oldp+2358,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2359,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2360,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__dcache__s_rdat[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2361,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_rqst),8);
        bufp->chgCData(oldp+2362,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_trsc),8);
        bufp->chgQData(oldp+2363,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_strb),64);
        bufp->chgQData(oldp+2365,(((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                    ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_strb_s
                                    : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_strb)),64);
        bufp->chgQData(oldp+2367,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_addr),64);
        bufp->chgCData(oldp+2369,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0U])),8);
        bufp->chgCData(oldp+2370,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2371,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2372,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2373,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[1U])),8);
        bufp->chgCData(oldp+2374,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2375,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2376,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2377,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[2U])),8);
        bufp->chgCData(oldp+2378,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2379,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2380,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2381,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[3U])),8);
        bufp->chgCData(oldp+2382,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2383,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2384,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2385,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[4U])),8);
        bufp->chgCData(oldp+2386,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2387,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2388,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2389,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[5U])),8);
        bufp->chgCData(oldp+2390,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2391,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2392,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2393,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[6U])),8);
        bufp->chgCData(oldp+2394,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2395,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2396,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2397,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[7U])),8);
        bufp->chgCData(oldp+2398,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2399,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2400,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2401,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[8U])),8);
        bufp->chgCData(oldp+2402,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2403,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2404,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2405,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[9U])),8);
        bufp->chgCData(oldp+2406,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2407,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2408,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2409,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xaU])),8);
        bufp->chgCData(oldp+2410,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2411,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2412,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2413,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xbU])),8);
        bufp->chgCData(oldp+2414,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2415,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2416,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2417,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xcU])),8);
        bufp->chgCData(oldp+2418,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2419,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2420,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2421,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xdU])),8);
        bufp->chgCData(oldp+2422,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2423,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2424,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2425,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xeU])),8);
        bufp->chgCData(oldp+2426,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2427,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2428,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2429,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xfU])),8);
        bufp->chgCData(oldp+2430,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2431,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2432,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2433,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0U]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0U]))),8);
        bufp->chgCData(oldp+2434,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0U]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2435,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0U]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2436,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0U]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0U]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2437,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[1U]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[1U]))),8);
        bufp->chgCData(oldp+2438,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[1U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[1U]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2439,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[1U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[1U]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2440,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[1U]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[1U]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2441,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[2U]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[2U]))),8);
        bufp->chgCData(oldp+2442,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[2U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[2U]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2443,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[2U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[2U]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2444,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[2U]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[2U]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2445,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[3U]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[3U]))),8);
        bufp->chgCData(oldp+2446,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[3U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[3U]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2447,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[3U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[3U]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2448,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[3U]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[3U]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2449,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[4U]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[4U]))),8);
        bufp->chgCData(oldp+2450,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[4U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[4U]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2451,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[4U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[4U]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2452,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[4U]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[4U]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2453,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[5U]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[5U]))),8);
        bufp->chgCData(oldp+2454,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[5U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[5U]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2455,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[5U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[5U]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2456,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[5U]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[5U]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2457,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[6U]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[6U]))),8);
        bufp->chgCData(oldp+2458,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[6U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[6U]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2459,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[6U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[6U]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2460,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[6U]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[6U]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2461,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[7U]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[7U]))),8);
        bufp->chgCData(oldp+2462,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[7U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[7U]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2463,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[7U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[7U]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2464,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[7U]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[7U]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2465,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[8U]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[8U]))),8);
        bufp->chgCData(oldp+2466,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[8U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[8U]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2467,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[8U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[8U]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2468,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[8U]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[8U]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2469,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[9U]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[9U]))),8);
        bufp->chgCData(oldp+2470,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[9U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[9U]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2471,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[9U]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[9U]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2472,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[9U]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[9U]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2473,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xaU]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xaU]))),8);
        bufp->chgCData(oldp+2474,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xaU]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xaU]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2475,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xaU]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xaU]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2476,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xaU]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xaU]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2477,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xbU]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xbU]))),8);
        bufp->chgCData(oldp+2478,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xbU]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xbU]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2479,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xbU]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xbU]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2480,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xbU]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xbU]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2481,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xcU]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xcU]))),8);
        bufp->chgCData(oldp+2482,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xcU]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xcU]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2483,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xcU]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xcU]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2484,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xcU]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xcU]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2485,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xdU]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xdU]))),8);
        bufp->chgCData(oldp+2486,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xdU]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xdU]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2487,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xdU]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xdU]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2488,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xdU]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xdU]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2489,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xeU]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xeU]))),8);
        bufp->chgCData(oldp+2490,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xeU]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xeU]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2491,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xeU]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xeU]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2492,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xeU]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xeU]) 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2493,((0xffU & ((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                             ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xfU]
                                             : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xfU]))),8);
        bufp->chgCData(oldp+2494,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xfU]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xfU]) 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2495,((0xffU & (((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                              ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xfU]
                                              : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xfU]) 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2496,((((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dc_wdat_s[0xfU]
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_wdat[0xfU]) 
                                   >> 0x18U)),8);
        bufp->chgBit(oldp+2497,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__b_ready));
        bufp->chgBit(oldp+2498,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__write));
        bufp->chgCData(oldp+2499,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rqst[0]),8);
        bufp->chgCData(oldp+2500,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rqst[1]),8);
        bufp->chgCData(oldp+2501,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rqst[2]),8);
        bufp->chgCData(oldp+2502,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rqst[3]),8);
        bufp->chgCData(oldp+2503,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_miss[0]),8);
        bufp->chgCData(oldp+2504,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_miss[1]),8);
        bufp->chgCData(oldp+2505,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_miss[2]),8);
        bufp->chgCData(oldp+2506,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_miss[3]),8);
        bufp->chgQData(oldp+2507,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_strb[0]),64);
        bufp->chgQData(oldp+2509,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_strb[1]),64);
        bufp->chgQData(oldp+2511,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_strb[2]),64);
        bufp->chgQData(oldp+2513,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_strb[3]),64);
        bufp->chgQData(oldp+2515,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_addr[0]),64);
        bufp->chgQData(oldp+2517,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_addr[1]),64);
        bufp->chgQData(oldp+2519,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_addr[2]),64);
        bufp->chgQData(oldp+2521,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_addr[3]),64);
        bufp->chgCData(oldp+2523,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0U])),8);
        bufp->chgCData(oldp+2524,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2525,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2526,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0U] >> 0x18U)),8);
        bufp->chgCData(oldp+2527,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][1U])),8);
        bufp->chgCData(oldp+2528,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2529,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2530,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][1U] >> 0x18U)),8);
        bufp->chgCData(oldp+2531,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][2U])),8);
        bufp->chgCData(oldp+2532,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2533,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2534,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][2U] >> 0x18U)),8);
        bufp->chgCData(oldp+2535,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][3U])),8);
        bufp->chgCData(oldp+2536,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2537,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2538,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][3U] >> 0x18U)),8);
        bufp->chgCData(oldp+2539,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][4U])),8);
        bufp->chgCData(oldp+2540,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2541,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2542,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][4U] >> 0x18U)),8);
        bufp->chgCData(oldp+2543,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][5U])),8);
        bufp->chgCData(oldp+2544,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2545,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2546,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][5U] >> 0x18U)),8);
        bufp->chgCData(oldp+2547,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][6U])),8);
        bufp->chgCData(oldp+2548,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2549,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2550,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][6U] >> 0x18U)),8);
        bufp->chgCData(oldp+2551,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][7U])),8);
        bufp->chgCData(oldp+2552,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2553,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2554,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][7U] >> 0x18U)),8);
        bufp->chgCData(oldp+2555,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][8U])),8);
        bufp->chgCData(oldp+2556,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2557,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2558,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][8U] >> 0x18U)),8);
        bufp->chgCData(oldp+2559,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][9U])),8);
        bufp->chgCData(oldp+2560,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2561,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2562,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][9U] >> 0x18U)),8);
        bufp->chgCData(oldp+2563,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0xaU])),8);
        bufp->chgCData(oldp+2564,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2565,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2566,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0xaU] >> 0x18U)),8);
        bufp->chgCData(oldp+2567,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0xbU])),8);
        bufp->chgCData(oldp+2568,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2569,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2570,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0xbU] >> 0x18U)),8);
        bufp->chgCData(oldp+2571,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0xcU])),8);
        bufp->chgCData(oldp+2572,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2573,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2574,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0xcU] >> 0x18U)),8);
        bufp->chgCData(oldp+2575,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0xdU])),8);
        bufp->chgCData(oldp+2576,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2577,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2578,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0xdU] >> 0x18U)),8);
        bufp->chgCData(oldp+2579,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0xeU])),8);
        bufp->chgCData(oldp+2580,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2581,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2582,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0xeU] >> 0x18U)),8);
        bufp->chgCData(oldp+2583,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0xfU])),8);
        bufp->chgCData(oldp+2584,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2585,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [0U][0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2586,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [0U][0xfU] >> 0x18U)),8);
        bufp->chgCData(oldp+2587,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0U])),8);
        bufp->chgCData(oldp+2588,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2589,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2590,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0U] >> 0x18U)),8);
        bufp->chgCData(oldp+2591,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][1U])),8);
        bufp->chgCData(oldp+2592,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2593,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2594,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][1U] >> 0x18U)),8);
        bufp->chgCData(oldp+2595,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][2U])),8);
        bufp->chgCData(oldp+2596,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2597,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2598,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][2U] >> 0x18U)),8);
        bufp->chgCData(oldp+2599,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][3U])),8);
        bufp->chgCData(oldp+2600,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2601,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2602,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][3U] >> 0x18U)),8);
        bufp->chgCData(oldp+2603,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][4U])),8);
        bufp->chgCData(oldp+2604,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2605,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2606,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][4U] >> 0x18U)),8);
        bufp->chgCData(oldp+2607,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][5U])),8);
        bufp->chgCData(oldp+2608,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2609,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2610,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][5U] >> 0x18U)),8);
        bufp->chgCData(oldp+2611,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][6U])),8);
        bufp->chgCData(oldp+2612,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2613,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2614,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][6U] >> 0x18U)),8);
        bufp->chgCData(oldp+2615,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][7U])),8);
        bufp->chgCData(oldp+2616,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2617,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2618,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][7U] >> 0x18U)),8);
        bufp->chgCData(oldp+2619,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][8U])),8);
        bufp->chgCData(oldp+2620,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2621,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2622,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][8U] >> 0x18U)),8);
        bufp->chgCData(oldp+2623,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][9U])),8);
        bufp->chgCData(oldp+2624,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2625,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2626,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][9U] >> 0x18U)),8);
        bufp->chgCData(oldp+2627,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0xaU])),8);
        bufp->chgCData(oldp+2628,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2629,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2630,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0xaU] >> 0x18U)),8);
        bufp->chgCData(oldp+2631,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0xbU])),8);
        bufp->chgCData(oldp+2632,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2633,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2634,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0xbU] >> 0x18U)),8);
        bufp->chgCData(oldp+2635,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0xcU])),8);
        bufp->chgCData(oldp+2636,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2637,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2638,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0xcU] >> 0x18U)),8);
        bufp->chgCData(oldp+2639,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0xdU])),8);
        bufp->chgCData(oldp+2640,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2641,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2642,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0xdU] >> 0x18U)),8);
        bufp->chgCData(oldp+2643,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0xeU])),8);
        bufp->chgCData(oldp+2644,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2645,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2646,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0xeU] >> 0x18U)),8);
        bufp->chgCData(oldp+2647,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0xfU])),8);
        bufp->chgCData(oldp+2648,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2649,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [1U][0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2650,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [1U][0xfU] >> 0x18U)),8);
        bufp->chgCData(oldp+2651,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0U])),8);
        bufp->chgCData(oldp+2652,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2653,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2654,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0U] >> 0x18U)),8);
        bufp->chgCData(oldp+2655,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][1U])),8);
        bufp->chgCData(oldp+2656,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2657,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2658,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][1U] >> 0x18U)),8);
        bufp->chgCData(oldp+2659,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][2U])),8);
        bufp->chgCData(oldp+2660,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2661,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2662,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][2U] >> 0x18U)),8);
        bufp->chgCData(oldp+2663,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][3U])),8);
        bufp->chgCData(oldp+2664,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2665,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2666,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][3U] >> 0x18U)),8);
        bufp->chgCData(oldp+2667,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][4U])),8);
        bufp->chgCData(oldp+2668,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2669,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2670,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][4U] >> 0x18U)),8);
        bufp->chgCData(oldp+2671,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][5U])),8);
        bufp->chgCData(oldp+2672,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2673,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2674,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][5U] >> 0x18U)),8);
        bufp->chgCData(oldp+2675,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][6U])),8);
        bufp->chgCData(oldp+2676,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2677,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2678,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][6U] >> 0x18U)),8);
        bufp->chgCData(oldp+2679,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][7U])),8);
        bufp->chgCData(oldp+2680,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2681,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2682,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][7U] >> 0x18U)),8);
        bufp->chgCData(oldp+2683,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][8U])),8);
        bufp->chgCData(oldp+2684,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2685,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2686,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][8U] >> 0x18U)),8);
        bufp->chgCData(oldp+2687,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][9U])),8);
        bufp->chgCData(oldp+2688,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2689,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2690,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][9U] >> 0x18U)),8);
        bufp->chgCData(oldp+2691,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0xaU])),8);
        bufp->chgCData(oldp+2692,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2693,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2694,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0xaU] >> 0x18U)),8);
        bufp->chgCData(oldp+2695,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0xbU])),8);
        bufp->chgCData(oldp+2696,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2697,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2698,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0xbU] >> 0x18U)),8);
        bufp->chgCData(oldp+2699,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0xcU])),8);
        bufp->chgCData(oldp+2700,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2701,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2702,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0xcU] >> 0x18U)),8);
        bufp->chgCData(oldp+2703,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0xdU])),8);
        bufp->chgCData(oldp+2704,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2705,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2706,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0xdU] >> 0x18U)),8);
        bufp->chgCData(oldp+2707,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0xeU])),8);
        bufp->chgCData(oldp+2708,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2709,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2710,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0xeU] >> 0x18U)),8);
        bufp->chgCData(oldp+2711,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0xfU])),8);
        bufp->chgCData(oldp+2712,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2713,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [2U][0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2714,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [2U][0xfU] >> 0x18U)),8);
        bufp->chgCData(oldp+2715,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0U])),8);
        bufp->chgCData(oldp+2716,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2717,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2718,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0U] >> 0x18U)),8);
        bufp->chgCData(oldp+2719,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][1U])),8);
        bufp->chgCData(oldp+2720,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2721,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2722,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][1U] >> 0x18U)),8);
        bufp->chgCData(oldp+2723,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][2U])),8);
        bufp->chgCData(oldp+2724,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2725,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2726,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][2U] >> 0x18U)),8);
        bufp->chgCData(oldp+2727,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][3U])),8);
        bufp->chgCData(oldp+2728,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2729,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2730,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][3U] >> 0x18U)),8);
        bufp->chgCData(oldp+2731,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][4U])),8);
        bufp->chgCData(oldp+2732,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2733,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2734,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][4U] >> 0x18U)),8);
        bufp->chgCData(oldp+2735,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][5U])),8);
        bufp->chgCData(oldp+2736,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2737,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2738,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][5U] >> 0x18U)),8);
        bufp->chgCData(oldp+2739,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][6U])),8);
        bufp->chgCData(oldp+2740,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2741,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2742,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][6U] >> 0x18U)),8);
        bufp->chgCData(oldp+2743,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][7U])),8);
        bufp->chgCData(oldp+2744,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2745,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2746,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][7U] >> 0x18U)),8);
        bufp->chgCData(oldp+2747,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][8U])),8);
        bufp->chgCData(oldp+2748,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2749,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2750,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][8U] >> 0x18U)),8);
        bufp->chgCData(oldp+2751,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][9U])),8);
        bufp->chgCData(oldp+2752,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2753,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2754,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][9U] >> 0x18U)),8);
        bufp->chgCData(oldp+2755,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0xaU])),8);
        bufp->chgCData(oldp+2756,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2757,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2758,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0xaU] >> 0x18U)),8);
        bufp->chgCData(oldp+2759,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0xbU])),8);
        bufp->chgCData(oldp+2760,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2761,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2762,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0xbU] >> 0x18U)),8);
        bufp->chgCData(oldp+2763,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0xcU])),8);
        bufp->chgCData(oldp+2764,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2765,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2766,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0xcU] >> 0x18U)),8);
        bufp->chgCData(oldp+2767,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0xdU])),8);
        bufp->chgCData(oldp+2768,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2769,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2770,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0xdU] >> 0x18U)),8);
        bufp->chgCData(oldp+2771,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0xeU])),8);
        bufp->chgCData(oldp+2772,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2773,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2774,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0xeU] >> 0x18U)),8);
        bufp->chgCData(oldp+2775,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0xfU])),8);
        bufp->chgCData(oldp+2776,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2777,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                            [3U][0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2778,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_wdat
                                   [3U][0xfU] >> 0x18U)),8);
        bufp->chgCData(oldp+2779,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0U])),8);
        bufp->chgCData(oldp+2780,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2781,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2782,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0U] >> 0x18U)),8);
        bufp->chgCData(oldp+2783,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][1U])),8);
        bufp->chgCData(oldp+2784,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2785,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2786,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][1U] >> 0x18U)),8);
        bufp->chgCData(oldp+2787,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][2U])),8);
        bufp->chgCData(oldp+2788,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2789,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2790,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][2U] >> 0x18U)),8);
        bufp->chgCData(oldp+2791,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][3U])),8);
        bufp->chgCData(oldp+2792,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2793,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2794,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][3U] >> 0x18U)),8);
        bufp->chgCData(oldp+2795,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][4U])),8);
        bufp->chgCData(oldp+2796,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2797,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2798,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][4U] >> 0x18U)),8);
        bufp->chgCData(oldp+2799,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][5U])),8);
        bufp->chgCData(oldp+2800,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2801,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2802,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][5U] >> 0x18U)),8);
        bufp->chgCData(oldp+2803,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][6U])),8);
        bufp->chgCData(oldp+2804,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2805,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2806,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][6U] >> 0x18U)),8);
        bufp->chgCData(oldp+2807,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][7U])),8);
        bufp->chgCData(oldp+2808,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2809,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2810,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][7U] >> 0x18U)),8);
        bufp->chgCData(oldp+2811,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][8U])),8);
        bufp->chgCData(oldp+2812,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2813,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2814,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][8U] >> 0x18U)),8);
        bufp->chgCData(oldp+2815,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][9U])),8);
        bufp->chgCData(oldp+2816,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2817,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2818,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][9U] >> 0x18U)),8);
        bufp->chgCData(oldp+2819,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0xaU])),8);
        bufp->chgCData(oldp+2820,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2821,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2822,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0xaU] >> 0x18U)),8);
        bufp->chgCData(oldp+2823,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0xbU])),8);
        bufp->chgCData(oldp+2824,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2825,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2826,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0xbU] >> 0x18U)),8);
        bufp->chgCData(oldp+2827,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0xcU])),8);
        bufp->chgCData(oldp+2828,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2829,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2830,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0xcU] >> 0x18U)),8);
        bufp->chgCData(oldp+2831,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0xdU])),8);
        bufp->chgCData(oldp+2832,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2833,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2834,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0xdU] >> 0x18U)),8);
        bufp->chgCData(oldp+2835,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0xeU])),8);
        bufp->chgCData(oldp+2836,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2837,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2838,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0xeU] >> 0x18U)),8);
        bufp->chgCData(oldp+2839,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0xfU])),8);
        bufp->chgCData(oldp+2840,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2841,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [0U][0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2842,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [0U][0xfU] >> 0x18U)),8);
        bufp->chgCData(oldp+2843,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0U])),8);
        bufp->chgCData(oldp+2844,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2845,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2846,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0U] >> 0x18U)),8);
        bufp->chgCData(oldp+2847,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][1U])),8);
        bufp->chgCData(oldp+2848,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2849,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2850,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][1U] >> 0x18U)),8);
        bufp->chgCData(oldp+2851,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][2U])),8);
        bufp->chgCData(oldp+2852,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2853,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2854,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][2U] >> 0x18U)),8);
        bufp->chgCData(oldp+2855,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][3U])),8);
        bufp->chgCData(oldp+2856,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2857,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2858,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][3U] >> 0x18U)),8);
        bufp->chgCData(oldp+2859,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][4U])),8);
        bufp->chgCData(oldp+2860,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2861,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2862,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][4U] >> 0x18U)),8);
        bufp->chgCData(oldp+2863,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][5U])),8);
        bufp->chgCData(oldp+2864,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2865,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2866,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][5U] >> 0x18U)),8);
        bufp->chgCData(oldp+2867,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][6U])),8);
        bufp->chgCData(oldp+2868,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2869,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2870,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][6U] >> 0x18U)),8);
        bufp->chgCData(oldp+2871,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][7U])),8);
        bufp->chgCData(oldp+2872,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2873,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2874,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][7U] >> 0x18U)),8);
        bufp->chgCData(oldp+2875,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][8U])),8);
        bufp->chgCData(oldp+2876,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2877,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2878,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][8U] >> 0x18U)),8);
        bufp->chgCData(oldp+2879,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][9U])),8);
        bufp->chgCData(oldp+2880,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2881,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2882,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][9U] >> 0x18U)),8);
        bufp->chgCData(oldp+2883,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0xaU])),8);
        bufp->chgCData(oldp+2884,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2885,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2886,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0xaU] >> 0x18U)),8);
        bufp->chgCData(oldp+2887,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0xbU])),8);
        bufp->chgCData(oldp+2888,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2889,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2890,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0xbU] >> 0x18U)),8);
        bufp->chgCData(oldp+2891,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0xcU])),8);
        bufp->chgCData(oldp+2892,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2893,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2894,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0xcU] >> 0x18U)),8);
        bufp->chgCData(oldp+2895,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0xdU])),8);
        bufp->chgCData(oldp+2896,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2897,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2898,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0xdU] >> 0x18U)),8);
        bufp->chgCData(oldp+2899,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0xeU])),8);
        bufp->chgCData(oldp+2900,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2901,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2902,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0xeU] >> 0x18U)),8);
        bufp->chgCData(oldp+2903,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0xfU])),8);
        bufp->chgCData(oldp+2904,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2905,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [1U][0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2906,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [1U][0xfU] >> 0x18U)),8);
        bufp->chgCData(oldp+2907,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0U])),8);
        bufp->chgCData(oldp+2908,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2909,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2910,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0U] >> 0x18U)),8);
        bufp->chgCData(oldp+2911,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][1U])),8);
        bufp->chgCData(oldp+2912,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2913,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2914,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][1U] >> 0x18U)),8);
        bufp->chgCData(oldp+2915,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][2U])),8);
        bufp->chgCData(oldp+2916,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2917,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2918,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][2U] >> 0x18U)),8);
        bufp->chgCData(oldp+2919,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][3U])),8);
        bufp->chgCData(oldp+2920,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2921,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2922,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][3U] >> 0x18U)),8);
        bufp->chgCData(oldp+2923,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][4U])),8);
        bufp->chgCData(oldp+2924,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2925,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2926,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][4U] >> 0x18U)),8);
        bufp->chgCData(oldp+2927,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][5U])),8);
        bufp->chgCData(oldp+2928,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2929,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2930,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][5U] >> 0x18U)),8);
        bufp->chgCData(oldp+2931,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][6U])),8);
        bufp->chgCData(oldp+2932,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2933,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2934,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][6U] >> 0x18U)),8);
        bufp->chgCData(oldp+2935,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][7U])),8);
        bufp->chgCData(oldp+2936,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2937,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2938,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][7U] >> 0x18U)),8);
        bufp->chgCData(oldp+2939,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][8U])),8);
        bufp->chgCData(oldp+2940,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2941,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2942,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][8U] >> 0x18U)),8);
        bufp->chgCData(oldp+2943,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][9U])),8);
        bufp->chgCData(oldp+2944,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2945,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2946,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][9U] >> 0x18U)),8);
        bufp->chgCData(oldp+2947,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0xaU])),8);
        bufp->chgCData(oldp+2948,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2949,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2950,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0xaU] >> 0x18U)),8);
        bufp->chgCData(oldp+2951,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0xbU])),8);
        bufp->chgCData(oldp+2952,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2953,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2954,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0xbU] >> 0x18U)),8);
        bufp->chgCData(oldp+2955,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0xcU])),8);
        bufp->chgCData(oldp+2956,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2957,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2958,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0xcU] >> 0x18U)),8);
        bufp->chgCData(oldp+2959,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0xdU])),8);
        bufp->chgCData(oldp+2960,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2961,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2962,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0xdU] >> 0x18U)),8);
        bufp->chgCData(oldp+2963,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0xeU])),8);
        bufp->chgCData(oldp+2964,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2965,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2966,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0xeU] >> 0x18U)),8);
        bufp->chgCData(oldp+2967,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0xfU])),8);
        bufp->chgCData(oldp+2968,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2969,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [2U][0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2970,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [2U][0xfU] >> 0x18U)),8);
        bufp->chgCData(oldp+2971,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0U])),8);
        bufp->chgCData(oldp+2972,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2973,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2974,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0U] >> 0x18U)),8);
        bufp->chgCData(oldp+2975,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][1U])),8);
        bufp->chgCData(oldp+2976,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2977,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2978,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][1U] >> 0x18U)),8);
        bufp->chgCData(oldp+2979,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][2U])),8);
        bufp->chgCData(oldp+2980,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2981,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2982,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][2U] >> 0x18U)),8);
        bufp->chgCData(oldp+2983,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][3U])),8);
        bufp->chgCData(oldp+2984,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2985,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2986,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][3U] >> 0x18U)),8);
        bufp->chgCData(oldp+2987,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][4U])),8);
        bufp->chgCData(oldp+2988,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2989,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2990,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][4U] >> 0x18U)),8);
        bufp->chgCData(oldp+2991,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][5U])),8);
        bufp->chgCData(oldp+2992,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2993,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2994,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][5U] >> 0x18U)),8);
        bufp->chgCData(oldp+2995,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][6U])),8);
        bufp->chgCData(oldp+2996,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2997,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2998,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][6U] >> 0x18U)),8);
        bufp->chgCData(oldp+2999,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][7U])),8);
        bufp->chgCData(oldp+3000,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3001,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3002,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][7U] >> 0x18U)),8);
        bufp->chgCData(oldp+3003,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][8U])),8);
        bufp->chgCData(oldp+3004,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3005,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3006,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][8U] >> 0x18U)),8);
        bufp->chgCData(oldp+3007,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][9U])),8);
        bufp->chgCData(oldp+3008,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3009,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3010,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][9U] >> 0x18U)),8);
        bufp->chgCData(oldp+3011,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0xaU])),8);
        bufp->chgCData(oldp+3012,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3013,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3014,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0xaU] >> 0x18U)),8);
        bufp->chgCData(oldp+3015,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0xbU])),8);
        bufp->chgCData(oldp+3016,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3017,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3018,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0xbU] >> 0x18U)),8);
        bufp->chgCData(oldp+3019,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0xcU])),8);
        bufp->chgCData(oldp+3020,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3021,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3022,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0xcU] >> 0x18U)),8);
        bufp->chgCData(oldp+3023,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0xdU])),8);
        bufp->chgCData(oldp+3024,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3025,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3026,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0xdU] >> 0x18U)),8);
        bufp->chgCData(oldp+3027,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0xeU])),8);
        bufp->chgCData(oldp+3028,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3029,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3030,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0xeU] >> 0x18U)),8);
        bufp->chgCData(oldp+3031,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0xfU])),8);
        bufp->chgCData(oldp+3032,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3033,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                            [3U][0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3034,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_rdat
                                   [3U][0xfU] >> 0x18U)),8);
        bufp->chgCData(oldp+3035,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_valid),4);
        bufp->chgCData(oldp+3036,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_ready),4);
        bufp->chgCData(oldp+3037,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_pend_bits),4);
        bufp->chgCData(oldp+3038,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_i_inst__DOT__sel 
                                                 >> 0x18U)))),3);
        bufp->chgCData(oldp+3039,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                                                 >> 0x18U)))),3);
        bufp->chgCData(oldp+3040,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                                                 >> 0x18U)))),3);
        bufp->chgBit(oldp+3041,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__miss_under_miss));
        bufp->chgBit(oldp+3042,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_out));
        bufp->chgCData(oldp+3043,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0U])),8);
        bufp->chgCData(oldp+3044,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3045,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3046,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3047,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[1U])),8);
        bufp->chgCData(oldp+3048,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3049,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3050,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3051,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[2U])),8);
        bufp->chgCData(oldp+3052,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3053,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3054,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3055,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[3U])),8);
        bufp->chgCData(oldp+3056,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3057,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3058,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3059,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[4U])),8);
        bufp->chgCData(oldp+3060,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3061,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3062,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3063,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[5U])),8);
        bufp->chgCData(oldp+3064,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3065,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3066,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3067,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[6U])),8);
        bufp->chgCData(oldp+3068,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3069,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3070,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3071,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[7U])),8);
        bufp->chgCData(oldp+3072,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3073,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3074,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3075,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[8U])),8);
        bufp->chgCData(oldp+3076,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3077,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3078,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3079,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[9U])),8);
        bufp->chgCData(oldp+3080,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3081,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3082,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3083,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xaU])),8);
        bufp->chgCData(oldp+3084,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3085,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3086,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3087,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xbU])),8);
        bufp->chgCData(oldp+3088,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3089,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3090,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3091,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xcU])),8);
        bufp->chgCData(oldp+3092,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3093,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3094,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3095,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xdU])),8);
        bufp->chgCData(oldp+3096,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3097,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3098,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3099,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xeU])),8);
        bufp->chgCData(oldp+3100,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3101,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3102,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3103,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xfU])),8);
        bufp->chgCData(oldp+3104,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3105,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3106,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__valid[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3107,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0U])),8);
        bufp->chgCData(oldp+3108,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3109,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3110,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3111,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[1U])),8);
        bufp->chgCData(oldp+3112,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3113,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3114,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3115,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[2U])),8);
        bufp->chgCData(oldp+3116,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3117,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3118,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3119,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[3U])),8);
        bufp->chgCData(oldp+3120,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3121,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3122,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3123,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[4U])),8);
        bufp->chgCData(oldp+3124,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3125,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3126,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3127,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[5U])),8);
        bufp->chgCData(oldp+3128,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3129,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3130,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3131,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[6U])),8);
        bufp->chgCData(oldp+3132,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3133,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3134,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3135,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[7U])),8);
        bufp->chgCData(oldp+3136,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3137,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3138,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3139,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[8U])),8);
        bufp->chgCData(oldp+3140,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3141,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3142,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3143,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[9U])),8);
        bufp->chgCData(oldp+3144,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3145,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3146,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3147,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xaU])),8);
        bufp->chgCData(oldp+3148,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3149,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3150,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3151,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xbU])),8);
        bufp->chgCData(oldp+3152,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3153,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3154,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3155,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xcU])),8);
        bufp->chgCData(oldp+3156,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3157,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3158,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3159,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xdU])),8);
        bufp->chgCData(oldp+3160,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3161,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3162,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3163,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xeU])),8);
        bufp->chgCData(oldp+3164,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3165,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3166,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+3167,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xfU])),8);
        bufp->chgCData(oldp+3168,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+3169,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+3170,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dirty[0xfU] 
                                   >> 0x18U)),8);
        bufp->chgWData(oldp+3171,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[0]),4096);
        bufp->chgWData(oldp+3299,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[1]),4096);
        bufp->chgWData(oldp+3427,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[2]),4096);
        bufp->chgWData(oldp+3555,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[3]),4096);
        bufp->chgWData(oldp+3683,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[4]),4096);
        bufp->chgWData(oldp+3811,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[5]),4096);
        bufp->chgWData(oldp+3939,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[6]),4096);
        bufp->chgWData(oldp+4067,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[7]),4096);
        bufp->chgWData(oldp+4195,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[8]),4096);
        bufp->chgWData(oldp+4323,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[9]),4096);
        bufp->chgWData(oldp+4451,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[10]),4096);
        bufp->chgWData(oldp+4579,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[11]),4096);
        bufp->chgWData(oldp+4707,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[12]),4096);
        bufp->chgWData(oldp+4835,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[13]),4096);
        bufp->chgWData(oldp+4963,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[14]),4096);
        bufp->chgWData(oldp+5091,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[15]),4096);
        bufp->chgWData(oldp+5219,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[16]),4096);
        bufp->chgWData(oldp+5347,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[17]),4096);
        bufp->chgWData(oldp+5475,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[18]),4096);
        bufp->chgWData(oldp+5603,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[19]),4096);
        bufp->chgWData(oldp+5731,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[20]),4096);
        bufp->chgWData(oldp+5859,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[21]),4096);
        bufp->chgWData(oldp+5987,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[22]),4096);
        bufp->chgWData(oldp+6115,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[23]),4096);
        bufp->chgWData(oldp+6243,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[24]),4096);
        bufp->chgWData(oldp+6371,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[25]),4096);
        bufp->chgWData(oldp+6499,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[26]),4096);
        bufp->chgWData(oldp+6627,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[27]),4096);
        bufp->chgWData(oldp+6755,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[28]),4096);
        bufp->chgWData(oldp+6883,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[29]),4096);
        bufp->chgWData(oldp+7011,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[30]),4096);
        bufp->chgWData(oldp+7139,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[31]),4096);
        bufp->chgWData(oldp+7267,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[32]),4096);
        bufp->chgWData(oldp+7395,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[33]),4096);
        bufp->chgWData(oldp+7523,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[34]),4096);
        bufp->chgWData(oldp+7651,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[35]),4096);
        bufp->chgWData(oldp+7779,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[36]),4096);
        bufp->chgWData(oldp+7907,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[37]),4096);
        bufp->chgWData(oldp+8035,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[38]),4096);
        bufp->chgWData(oldp+8163,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[39]),4096);
        bufp->chgWData(oldp+8291,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[40]),4096);
        bufp->chgWData(oldp+8419,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[41]),4096);
        bufp->chgWData(oldp+8547,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[42]),4096);
        bufp->chgWData(oldp+8675,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[43]),4096);
        bufp->chgWData(oldp+8803,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[44]),4096);
        bufp->chgWData(oldp+8931,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[45]),4096);
        bufp->chgWData(oldp+9059,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[46]),4096);
        bufp->chgWData(oldp+9187,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[47]),4096);
        bufp->chgWData(oldp+9315,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[48]),4096);
        bufp->chgWData(oldp+9443,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[49]),4096);
        bufp->chgWData(oldp+9571,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[50]),4096);
        bufp->chgWData(oldp+9699,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[51]),4096);
        bufp->chgWData(oldp+9827,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[52]),4096);
        bufp->chgWData(oldp+9955,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[53]),4096);
        bufp->chgWData(oldp+10083,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[54]),4096);
        bufp->chgWData(oldp+10211,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[55]),4096);
        bufp->chgWData(oldp+10339,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[56]),4096);
        bufp->chgWData(oldp+10467,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[57]),4096);
        bufp->chgWData(oldp+10595,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[58]),4096);
        bufp->chgWData(oldp+10723,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[59]),4096);
        bufp->chgWData(oldp+10851,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[60]),4096);
        bufp->chgWData(oldp+10979,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[61]),4096);
        bufp->chgWData(oldp+11107,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[62]),4096);
        bufp->chgWData(oldp+11235,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__dat[63]),4096);
        bufp->chgWData(oldp+11363,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[0]),512);
        bufp->chgWData(oldp+11379,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[1]),512);
        bufp->chgWData(oldp+11395,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[2]),512);
        bufp->chgWData(oldp+11411,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[3]),512);
        bufp->chgWData(oldp+11427,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[4]),512);
        bufp->chgWData(oldp+11443,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[5]),512);
        bufp->chgWData(oldp+11459,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[6]),512);
        bufp->chgWData(oldp+11475,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[7]),512);
        bufp->chgWData(oldp+11491,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[8]),512);
        bufp->chgWData(oldp+11507,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[9]),512);
        bufp->chgWData(oldp+11523,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[10]),512);
        bufp->chgWData(oldp+11539,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[11]),512);
        bufp->chgWData(oldp+11555,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[12]),512);
        bufp->chgWData(oldp+11571,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[13]),512);
        bufp->chgWData(oldp+11587,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[14]),512);
        bufp->chgWData(oldp+11603,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[15]),512);
        bufp->chgWData(oldp+11619,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[16]),512);
        bufp->chgWData(oldp+11635,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[17]),512);
        bufp->chgWData(oldp+11651,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[18]),512);
        bufp->chgWData(oldp+11667,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[19]),512);
        bufp->chgWData(oldp+11683,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[20]),512);
        bufp->chgWData(oldp+11699,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[21]),512);
        bufp->chgWData(oldp+11715,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[22]),512);
        bufp->chgWData(oldp+11731,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[23]),512);
        bufp->chgWData(oldp+11747,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[24]),512);
        bufp->chgWData(oldp+11763,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[25]),512);
        bufp->chgWData(oldp+11779,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[26]),512);
        bufp->chgWData(oldp+11795,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[27]),512);
        bufp->chgWData(oldp+11811,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[28]),512);
        bufp->chgWData(oldp+11827,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[29]),512);
        bufp->chgWData(oldp+11843,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[30]),512);
        bufp->chgWData(oldp+11859,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[31]),512);
        bufp->chgWData(oldp+11875,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[32]),512);
        bufp->chgWData(oldp+11891,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[33]),512);
        bufp->chgWData(oldp+11907,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[34]),512);
        bufp->chgWData(oldp+11923,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[35]),512);
        bufp->chgWData(oldp+11939,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[36]),512);
        bufp->chgWData(oldp+11955,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[37]),512);
        bufp->chgWData(oldp+11971,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[38]),512);
        bufp->chgWData(oldp+11987,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[39]),512);
        bufp->chgWData(oldp+12003,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[40]),512);
        bufp->chgWData(oldp+12019,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[41]),512);
        bufp->chgWData(oldp+12035,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[42]),512);
        bufp->chgWData(oldp+12051,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[43]),512);
        bufp->chgWData(oldp+12067,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[44]),512);
        bufp->chgWData(oldp+12083,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[45]),512);
        bufp->chgWData(oldp+12099,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[46]),512);
        bufp->chgWData(oldp+12115,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[47]),512);
        bufp->chgWData(oldp+12131,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[48]),512);
        bufp->chgWData(oldp+12147,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[49]),512);
        bufp->chgWData(oldp+12163,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[50]),512);
        bufp->chgWData(oldp+12179,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[51]),512);
        bufp->chgWData(oldp+12195,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[52]),512);
        bufp->chgWData(oldp+12211,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[53]),512);
        bufp->chgWData(oldp+12227,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[54]),512);
        bufp->chgWData(oldp+12243,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[55]),512);
        bufp->chgWData(oldp+12259,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[56]),512);
        bufp->chgWData(oldp+12275,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[57]),512);
        bufp->chgWData(oldp+12291,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[58]),512);
        bufp->chgWData(oldp+12307,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[59]),512);
        bufp->chgWData(oldp+12323,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[60]),512);
        bufp->chgWData(oldp+12339,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[61]),512);
        bufp->chgWData(oldp+12355,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[62]),512);
        bufp->chgWData(oldp+12371,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__tag[63]),512);
        bufp->chgCData(oldp+12387,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[0]),3);
        bufp->chgCData(oldp+12388,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[1]),3);
        bufp->chgCData(oldp+12389,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[2]),3);
        bufp->chgCData(oldp+12390,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[3]),3);
        bufp->chgCData(oldp+12391,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[4]),3);
        bufp->chgCData(oldp+12392,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[5]),3);
        bufp->chgCData(oldp+12393,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[6]),3);
        bufp->chgCData(oldp+12394,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[7]),3);
        bufp->chgCData(oldp+12395,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[8]),3);
        bufp->chgCData(oldp+12396,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[9]),3);
        bufp->chgCData(oldp+12397,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[10]),3);
        bufp->chgCData(oldp+12398,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[11]),3);
        bufp->chgCData(oldp+12399,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[12]),3);
        bufp->chgCData(oldp+12400,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[13]),3);
        bufp->chgCData(oldp+12401,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[14]),3);
        bufp->chgCData(oldp+12402,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[15]),3);
        bufp->chgCData(oldp+12403,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[16]),3);
        bufp->chgCData(oldp+12404,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[17]),3);
        bufp->chgCData(oldp+12405,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[18]),3);
        bufp->chgCData(oldp+12406,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[19]),3);
        bufp->chgCData(oldp+12407,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[20]),3);
        bufp->chgCData(oldp+12408,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[21]),3);
        bufp->chgCData(oldp+12409,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[22]),3);
        bufp->chgCData(oldp+12410,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[23]),3);
        bufp->chgCData(oldp+12411,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[24]),3);
        bufp->chgCData(oldp+12412,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[25]),3);
        bufp->chgCData(oldp+12413,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[26]),3);
        bufp->chgCData(oldp+12414,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[27]),3);
        bufp->chgCData(oldp+12415,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[28]),3);
        bufp->chgCData(oldp+12416,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[29]),3);
        bufp->chgCData(oldp+12417,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[30]),3);
        bufp->chgCData(oldp+12418,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[31]),3);
        bufp->chgCData(oldp+12419,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[32]),3);
        bufp->chgCData(oldp+12420,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[33]),3);
        bufp->chgCData(oldp+12421,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[34]),3);
        bufp->chgCData(oldp+12422,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[35]),3);
        bufp->chgCData(oldp+12423,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[36]),3);
        bufp->chgCData(oldp+12424,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[37]),3);
        bufp->chgCData(oldp+12425,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[38]),3);
        bufp->chgCData(oldp+12426,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[39]),3);
        bufp->chgCData(oldp+12427,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[40]),3);
        bufp->chgCData(oldp+12428,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[41]),3);
        bufp->chgCData(oldp+12429,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[42]),3);
        bufp->chgCData(oldp+12430,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[43]),3);
        bufp->chgCData(oldp+12431,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[44]),3);
        bufp->chgCData(oldp+12432,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[45]),3);
        bufp->chgCData(oldp+12433,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[46]),3);
        bufp->chgCData(oldp+12434,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[47]),3);
        bufp->chgCData(oldp+12435,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[48]),3);
        bufp->chgCData(oldp+12436,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[49]),3);
        bufp->chgCData(oldp+12437,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[50]),3);
        bufp->chgCData(oldp+12438,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[51]),3);
        bufp->chgCData(oldp+12439,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[52]),3);
        bufp->chgCData(oldp+12440,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[53]),3);
        bufp->chgCData(oldp+12441,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[54]),3);
        bufp->chgCData(oldp+12442,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[55]),3);
        bufp->chgCData(oldp+12443,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[56]),3);
        bufp->chgCData(oldp+12444,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[57]),3);
        bufp->chgCData(oldp+12445,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[58]),3);
        bufp->chgCData(oldp+12446,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[59]),3);
        bufp->chgCData(oldp+12447,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[60]),3);
        bufp->chgCData(oldp+12448,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[61]),3);
        bufp->chgCData(oldp+12449,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[62]),3);
        bufp->chgCData(oldp+12450,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__ptr[63]),3);
        bufp->chgCData(oldp+12451,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0U])),8);
        bufp->chgCData(oldp+12452,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12453,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12454,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12455,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[1U])),8);
        bufp->chgCData(oldp+12456,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[1U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12457,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[1U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12458,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[1U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12459,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[2U])),8);
        bufp->chgCData(oldp+12460,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[2U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12461,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[2U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12462,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[2U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12463,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[3U])),8);
        bufp->chgCData(oldp+12464,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[3U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12465,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[3U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12466,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[3U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12467,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[4U])),8);
        bufp->chgCData(oldp+12468,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[4U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12469,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[4U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12470,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[4U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12471,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[5U])),8);
        bufp->chgCData(oldp+12472,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[5U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12473,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[5U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12474,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[5U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12475,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[6U])),8);
        bufp->chgCData(oldp+12476,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[6U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12477,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[6U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12478,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[6U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12479,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[7U])),8);
        bufp->chgCData(oldp+12480,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[7U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12481,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[7U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12482,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[7U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12483,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[8U])),8);
        bufp->chgCData(oldp+12484,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[8U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12485,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[8U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12486,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[8U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12487,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[9U])),8);
        bufp->chgCData(oldp+12488,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[9U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12489,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[9U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12490,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[9U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12491,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xaU])),8);
        bufp->chgCData(oldp+12492,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xaU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12493,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xaU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12494,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xaU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12495,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xbU])),8);
        bufp->chgCData(oldp+12496,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xbU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12497,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xbU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12498,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xbU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12499,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xcU])),8);
        bufp->chgCData(oldp+12500,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xcU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12501,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xcU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12502,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xcU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12503,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xdU])),8);
        bufp->chgCData(oldp+12504,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xdU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12505,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xdU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12506,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xdU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12507,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xeU])),8);
        bufp->chgCData(oldp+12508,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xeU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12509,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xeU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12510,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xeU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12511,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xfU])),8);
        bufp->chgCData(oldp+12512,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xfU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12513,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xfU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12514,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0xfU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12515,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x10U])),8);
        bufp->chgCData(oldp+12516,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x10U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12517,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x10U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12518,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x10U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12519,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x11U])),8);
        bufp->chgCData(oldp+12520,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x11U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12521,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x11U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12522,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x11U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12523,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x12U])),8);
        bufp->chgCData(oldp+12524,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x12U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12525,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x12U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12526,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x12U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12527,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x13U])),8);
        bufp->chgCData(oldp+12528,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x13U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12529,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x13U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12530,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x13U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12531,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x14U])),8);
        bufp->chgCData(oldp+12532,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x14U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12533,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x14U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12534,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x14U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12535,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x15U])),8);
        bufp->chgCData(oldp+12536,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x15U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12537,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x15U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12538,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x15U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12539,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x16U])),8);
        bufp->chgCData(oldp+12540,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x16U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12541,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x16U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12542,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x16U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12543,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x17U])),8);
        bufp->chgCData(oldp+12544,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x17U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12545,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x17U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12546,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x17U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12547,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x18U])),8);
        bufp->chgCData(oldp+12548,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x18U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12549,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x18U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12550,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x18U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12551,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x19U])),8);
        bufp->chgCData(oldp+12552,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x19U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12553,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x19U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12554,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x19U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12555,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1aU])),8);
        bufp->chgCData(oldp+12556,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12557,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12558,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12559,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1bU])),8);
        bufp->chgCData(oldp+12560,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12561,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12562,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12563,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1cU])),8);
        bufp->chgCData(oldp+12564,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12565,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12566,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12567,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1dU])),8);
        bufp->chgCData(oldp+12568,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12569,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12570,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12571,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1eU])),8);
        bufp->chgCData(oldp+12572,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12573,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12574,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12575,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1fU])),8);
        bufp->chgCData(oldp+12576,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12577,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12578,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x1fU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12579,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x20U])),8);
        bufp->chgCData(oldp+12580,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x20U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12581,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x20U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12582,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x20U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12583,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x21U])),8);
        bufp->chgCData(oldp+12584,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x21U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12585,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x21U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12586,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x21U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12587,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x22U])),8);
        bufp->chgCData(oldp+12588,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x22U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12589,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x22U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12590,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x22U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12591,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x23U])),8);
        bufp->chgCData(oldp+12592,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x23U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12593,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x23U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12594,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x23U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12595,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x24U])),8);
        bufp->chgCData(oldp+12596,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x24U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12597,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x24U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12598,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x24U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12599,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x25U])),8);
        bufp->chgCData(oldp+12600,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x25U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12601,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x25U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12602,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x25U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12603,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x26U])),8);
        bufp->chgCData(oldp+12604,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x26U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12605,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x26U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12606,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x26U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12607,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x27U])),8);
        bufp->chgCData(oldp+12608,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x27U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12609,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x27U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12610,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x27U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12611,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x28U])),8);
        bufp->chgCData(oldp+12612,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x28U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12613,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x28U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12614,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x28U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12615,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x29U])),8);
        bufp->chgCData(oldp+12616,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x29U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12617,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x29U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12618,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x29U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12619,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2aU])),8);
        bufp->chgCData(oldp+12620,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12621,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12622,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12623,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2bU])),8);
        bufp->chgCData(oldp+12624,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12625,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12626,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12627,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2cU])),8);
        bufp->chgCData(oldp+12628,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12629,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12630,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12631,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2dU])),8);
        bufp->chgCData(oldp+12632,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12633,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12634,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12635,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2eU])),8);
        bufp->chgCData(oldp+12636,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12637,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12638,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12639,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2fU])),8);
        bufp->chgCData(oldp+12640,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12641,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12642,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x2fU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12643,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x30U])),8);
        bufp->chgCData(oldp+12644,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x30U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12645,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x30U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12646,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x30U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12647,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x31U])),8);
        bufp->chgCData(oldp+12648,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x31U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12649,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x31U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12650,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x31U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12651,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x32U])),8);
        bufp->chgCData(oldp+12652,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x32U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12653,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x32U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12654,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x32U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12655,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x33U])),8);
        bufp->chgCData(oldp+12656,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x33U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12657,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x33U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12658,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x33U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12659,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x34U])),8);
        bufp->chgCData(oldp+12660,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x34U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12661,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x34U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12662,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x34U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12663,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x35U])),8);
        bufp->chgCData(oldp+12664,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x35U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12665,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x35U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12666,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x35U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12667,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x36U])),8);
        bufp->chgCData(oldp+12668,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x36U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12669,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x36U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12670,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x36U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12671,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x37U])),8);
        bufp->chgCData(oldp+12672,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x37U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12673,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x37U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12674,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x37U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12675,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x38U])),8);
        bufp->chgCData(oldp+12676,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x38U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12677,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x38U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12678,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x38U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12679,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x39U])),8);
        bufp->chgCData(oldp+12680,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x39U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12681,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x39U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12682,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x39U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12683,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3aU])),8);
        bufp->chgCData(oldp+12684,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12685,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12686,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12687,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3bU])),8);
        bufp->chgCData(oldp+12688,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12689,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12690,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12691,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3cU])),8);
        bufp->chgCData(oldp+12692,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12693,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12694,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12695,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3dU])),8);
        bufp->chgCData(oldp+12696,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12697,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12698,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12699,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3eU])),8);
        bufp->chgCData(oldp+12700,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12701,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12702,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12703,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3fU])),8);
        bufp->chgCData(oldp+12704,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12705,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12706,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x3fU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12707,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x40U])),8);
        bufp->chgCData(oldp+12708,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x40U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12709,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x40U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12710,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x40U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12711,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x41U])),8);
        bufp->chgCData(oldp+12712,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x41U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12713,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x41U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12714,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x41U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12715,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x42U])),8);
        bufp->chgCData(oldp+12716,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x42U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12717,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x42U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12718,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x42U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12719,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x43U])),8);
        bufp->chgCData(oldp+12720,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x43U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12721,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x43U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12722,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x43U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12723,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x44U])),8);
        bufp->chgCData(oldp+12724,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x44U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12725,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x44U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12726,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x44U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12727,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x45U])),8);
        bufp->chgCData(oldp+12728,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x45U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12729,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x45U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12730,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x45U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12731,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x46U])),8);
        bufp->chgCData(oldp+12732,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x46U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12733,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x46U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12734,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x46U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12735,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x47U])),8);
        bufp->chgCData(oldp+12736,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x47U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12737,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x47U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12738,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x47U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12739,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x48U])),8);
        bufp->chgCData(oldp+12740,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x48U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12741,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x48U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12742,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x48U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12743,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x49U])),8);
        bufp->chgCData(oldp+12744,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x49U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12745,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x49U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12746,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x49U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12747,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4aU])),8);
        bufp->chgCData(oldp+12748,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12749,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12750,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12751,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4bU])),8);
        bufp->chgCData(oldp+12752,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12753,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12754,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12755,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4cU])),8);
        bufp->chgCData(oldp+12756,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12757,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12758,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12759,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4dU])),8);
        bufp->chgCData(oldp+12760,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12761,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12762,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12763,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4eU])),8);
        bufp->chgCData(oldp+12764,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12765,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12766,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12767,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4fU])),8);
        bufp->chgCData(oldp+12768,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12769,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12770,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x4fU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12771,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x50U])),8);
        bufp->chgCData(oldp+12772,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x50U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12773,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x50U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12774,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x50U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12775,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x51U])),8);
        bufp->chgCData(oldp+12776,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x51U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12777,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x51U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12778,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x51U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12779,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x52U])),8);
        bufp->chgCData(oldp+12780,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x52U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12781,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x52U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12782,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x52U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12783,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x53U])),8);
        bufp->chgCData(oldp+12784,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x53U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12785,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x53U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12786,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x53U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12787,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x54U])),8);
        bufp->chgCData(oldp+12788,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x54U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12789,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x54U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12790,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x54U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12791,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x55U])),8);
        bufp->chgCData(oldp+12792,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x55U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12793,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x55U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12794,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x55U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12795,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x56U])),8);
        bufp->chgCData(oldp+12796,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x56U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12797,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x56U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12798,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x56U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12799,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x57U])),8);
        bufp->chgCData(oldp+12800,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x57U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12801,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x57U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12802,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x57U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12803,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x58U])),8);
        bufp->chgCData(oldp+12804,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x58U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12805,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x58U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12806,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x58U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12807,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x59U])),8);
        bufp->chgCData(oldp+12808,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x59U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12809,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x59U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12810,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x59U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12811,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5aU])),8);
        bufp->chgCData(oldp+12812,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12813,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12814,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12815,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5bU])),8);
        bufp->chgCData(oldp+12816,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12817,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12818,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12819,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5cU])),8);
        bufp->chgCData(oldp+12820,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12821,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12822,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12823,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5dU])),8);
        bufp->chgCData(oldp+12824,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12825,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12826,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12827,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5eU])),8);
        bufp->chgCData(oldp+12828,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12829,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12830,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12831,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5fU])),8);
        bufp->chgCData(oldp+12832,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12833,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12834,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x5fU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12835,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x60U])),8);
        bufp->chgCData(oldp+12836,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x60U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12837,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x60U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12838,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x60U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12839,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x61U])),8);
        bufp->chgCData(oldp+12840,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x61U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12841,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x61U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12842,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x61U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12843,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x62U])),8);
        bufp->chgCData(oldp+12844,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x62U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12845,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x62U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12846,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x62U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12847,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x63U])),8);
        bufp->chgCData(oldp+12848,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x63U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12849,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x63U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12850,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x63U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12851,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x64U])),8);
        bufp->chgCData(oldp+12852,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x64U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12853,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x64U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12854,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x64U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12855,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x65U])),8);
        bufp->chgCData(oldp+12856,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x65U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12857,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x65U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12858,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x65U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12859,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x66U])),8);
        bufp->chgCData(oldp+12860,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x66U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12861,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x66U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12862,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x66U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12863,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x67U])),8);
        bufp->chgCData(oldp+12864,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x67U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12865,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x67U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12866,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x67U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12867,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x68U])),8);
        bufp->chgCData(oldp+12868,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x68U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12869,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x68U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12870,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x68U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12871,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x69U])),8);
        bufp->chgCData(oldp+12872,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x69U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12873,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x69U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12874,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x69U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12875,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6aU])),8);
        bufp->chgCData(oldp+12876,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12877,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12878,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12879,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6bU])),8);
        bufp->chgCData(oldp+12880,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12881,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12882,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12883,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6cU])),8);
        bufp->chgCData(oldp+12884,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12885,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12886,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12887,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6dU])),8);
        bufp->chgCData(oldp+12888,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12889,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12890,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12891,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6eU])),8);
        bufp->chgCData(oldp+12892,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12893,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12894,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12895,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6fU])),8);
        bufp->chgCData(oldp+12896,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12897,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12898,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x6fU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12899,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x70U])),8);
        bufp->chgCData(oldp+12900,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x70U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12901,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x70U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12902,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x70U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12903,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x71U])),8);
        bufp->chgCData(oldp+12904,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x71U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12905,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x71U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12906,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x71U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12907,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x72U])),8);
        bufp->chgCData(oldp+12908,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x72U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12909,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x72U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12910,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x72U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12911,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x73U])),8);
        bufp->chgCData(oldp+12912,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x73U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12913,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x73U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12914,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x73U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12915,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x74U])),8);
        bufp->chgCData(oldp+12916,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x74U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12917,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x74U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12918,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x74U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12919,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x75U])),8);
        bufp->chgCData(oldp+12920,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x75U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12921,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x75U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12922,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x75U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12923,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x76U])),8);
        bufp->chgCData(oldp+12924,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x76U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12925,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x76U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12926,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x76U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12927,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x77U])),8);
        bufp->chgCData(oldp+12928,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x77U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12929,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x77U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12930,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x77U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12931,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x78U])),8);
        bufp->chgCData(oldp+12932,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x78U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12933,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x78U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12934,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x78U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12935,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x79U])),8);
        bufp->chgCData(oldp+12936,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x79U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12937,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x79U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12938,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x79U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12939,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7aU])),8);
        bufp->chgCData(oldp+12940,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12941,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12942,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12943,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7bU])),8);
        bufp->chgCData(oldp+12944,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12945,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12946,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12947,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7cU])),8);
        bufp->chgCData(oldp+12948,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12949,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12950,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12951,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7dU])),8);
        bufp->chgCData(oldp+12952,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12953,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12954,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12955,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7eU])),8);
        bufp->chgCData(oldp+12956,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12957,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12958,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12959,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7fU])),8);
        bufp->chgCData(oldp+12960,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12961,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12962,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dat[0x7fU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12963,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0U])),8);
        bufp->chgCData(oldp+12964,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12965,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12966,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12967,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[1U])),8);
        bufp->chgCData(oldp+12968,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[1U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12969,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[1U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12970,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[1U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12971,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[2U])),8);
        bufp->chgCData(oldp+12972,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[2U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12973,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[2U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12974,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[2U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12975,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[3U])),8);
        bufp->chgCData(oldp+12976,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[3U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12977,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[3U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12978,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[3U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12979,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[4U])),8);
        bufp->chgCData(oldp+12980,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[4U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12981,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[4U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12982,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[4U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12983,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[5U])),8);
        bufp->chgCData(oldp+12984,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[5U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12985,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[5U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12986,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[5U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12987,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[6U])),8);
        bufp->chgCData(oldp+12988,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[6U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12989,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[6U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12990,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[6U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12991,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[7U])),8);
        bufp->chgCData(oldp+12992,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[7U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12993,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[7U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12994,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[7U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12995,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[8U])),8);
        bufp->chgCData(oldp+12996,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[8U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+12997,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[8U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+12998,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[8U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+12999,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[9U])),8);
        bufp->chgCData(oldp+13000,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[9U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13001,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[9U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13002,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[9U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13003,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xaU])),8);
        bufp->chgCData(oldp+13004,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xaU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13005,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xaU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13006,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xaU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13007,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xbU])),8);
        bufp->chgCData(oldp+13008,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xbU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13009,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xbU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13010,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xbU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13011,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xcU])),8);
        bufp->chgCData(oldp+13012,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xcU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13013,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xcU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13014,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xcU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13015,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xdU])),8);
        bufp->chgCData(oldp+13016,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xdU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13017,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xdU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13018,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xdU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13019,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xeU])),8);
        bufp->chgCData(oldp+13020,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xeU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13021,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xeU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13022,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xeU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13023,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xfU])),8);
        bufp->chgCData(oldp+13024,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xfU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13025,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xfU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13026,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0xfU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13027,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x10U])),8);
        bufp->chgCData(oldp+13028,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x10U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13029,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x10U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13030,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x10U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13031,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x11U])),8);
        bufp->chgCData(oldp+13032,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x11U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13033,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x11U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13034,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x11U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13035,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x12U])),8);
        bufp->chgCData(oldp+13036,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x12U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13037,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x12U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13038,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x12U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13039,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x13U])),8);
        bufp->chgCData(oldp+13040,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x13U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13041,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x13U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13042,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x13U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13043,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x14U])),8);
        bufp->chgCData(oldp+13044,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x14U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13045,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x14U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13046,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x14U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13047,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x15U])),8);
        bufp->chgCData(oldp+13048,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x15U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13049,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x15U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13050,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x15U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13051,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x16U])),8);
        bufp->chgCData(oldp+13052,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x16U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13053,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x16U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13054,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x16U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13055,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x17U])),8);
        bufp->chgCData(oldp+13056,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x17U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13057,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x17U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13058,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x17U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13059,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x18U])),8);
        bufp->chgCData(oldp+13060,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x18U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13061,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x18U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13062,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x18U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13063,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x19U])),8);
        bufp->chgCData(oldp+13064,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x19U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13065,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x19U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13066,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x19U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13067,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1aU])),8);
        bufp->chgCData(oldp+13068,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13069,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13070,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13071,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1bU])),8);
        bufp->chgCData(oldp+13072,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13073,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13074,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13075,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1cU])),8);
        bufp->chgCData(oldp+13076,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13077,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13078,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13079,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1dU])),8);
        bufp->chgCData(oldp+13080,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13081,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13082,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13083,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1eU])),8);
        bufp->chgCData(oldp+13084,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13085,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13086,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13087,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1fU])),8);
        bufp->chgCData(oldp+13088,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13089,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13090,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x1fU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13091,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x20U])),8);
        bufp->chgCData(oldp+13092,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x20U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13093,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x20U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13094,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x20U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13095,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x21U])),8);
        bufp->chgCData(oldp+13096,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x21U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13097,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x21U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13098,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x21U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13099,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x22U])),8);
        bufp->chgCData(oldp+13100,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x22U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13101,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x22U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13102,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x22U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13103,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x23U])),8);
        bufp->chgCData(oldp+13104,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x23U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13105,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x23U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13106,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x23U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13107,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x24U])),8);
        bufp->chgCData(oldp+13108,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x24U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13109,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x24U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13110,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x24U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13111,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x25U])),8);
        bufp->chgCData(oldp+13112,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x25U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13113,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x25U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13114,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x25U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13115,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x26U])),8);
        bufp->chgCData(oldp+13116,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x26U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13117,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x26U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13118,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x26U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13119,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x27U])),8);
        bufp->chgCData(oldp+13120,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x27U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13121,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x27U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13122,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x27U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13123,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x28U])),8);
        bufp->chgCData(oldp+13124,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x28U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13125,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x28U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13126,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x28U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13127,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x29U])),8);
        bufp->chgCData(oldp+13128,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x29U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13129,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x29U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13130,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x29U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13131,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2aU])),8);
        bufp->chgCData(oldp+13132,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13133,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13134,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13135,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2bU])),8);
        bufp->chgCData(oldp+13136,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13137,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13138,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13139,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2cU])),8);
        bufp->chgCData(oldp+13140,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13141,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13142,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13143,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2dU])),8);
        bufp->chgCData(oldp+13144,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13145,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13146,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13147,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2eU])),8);
        bufp->chgCData(oldp+13148,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13149,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13150,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13151,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2fU])),8);
        bufp->chgCData(oldp+13152,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13153,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13154,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x2fU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13155,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x30U])),8);
        bufp->chgCData(oldp+13156,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x30U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13157,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x30U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13158,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x30U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13159,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x31U])),8);
        bufp->chgCData(oldp+13160,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x31U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13161,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x31U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13162,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x31U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13163,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x32U])),8);
        bufp->chgCData(oldp+13164,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x32U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13165,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x32U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13166,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x32U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13167,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x33U])),8);
        bufp->chgCData(oldp+13168,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x33U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13169,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x33U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13170,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x33U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13171,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x34U])),8);
        bufp->chgCData(oldp+13172,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x34U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13173,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x34U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13174,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x34U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13175,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x35U])),8);
        bufp->chgCData(oldp+13176,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x35U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13177,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x35U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13178,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x35U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13179,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x36U])),8);
        bufp->chgCData(oldp+13180,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x36U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13181,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x36U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13182,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x36U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13183,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x37U])),8);
        bufp->chgCData(oldp+13184,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x37U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13185,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x37U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13186,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x37U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13187,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x38U])),8);
        bufp->chgCData(oldp+13188,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x38U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13189,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x38U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13190,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x38U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13191,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x39U])),8);
        bufp->chgCData(oldp+13192,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x39U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13193,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x39U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13194,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x39U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13195,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3aU])),8);
        bufp->chgCData(oldp+13196,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13197,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13198,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13199,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3bU])),8);
        bufp->chgCData(oldp+13200,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13201,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13202,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13203,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3cU])),8);
        bufp->chgCData(oldp+13204,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13205,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13206,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13207,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3dU])),8);
        bufp->chgCData(oldp+13208,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13209,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13210,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13211,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3eU])),8);
        bufp->chgCData(oldp+13212,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13213,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13214,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13215,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3fU])),8);
        bufp->chgCData(oldp+13216,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13217,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13218,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x3fU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13219,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x40U])),8);
        bufp->chgCData(oldp+13220,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x40U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13221,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x40U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13222,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x40U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13223,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x41U])),8);
        bufp->chgCData(oldp+13224,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x41U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13225,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x41U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13226,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x41U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13227,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x42U])),8);
        bufp->chgCData(oldp+13228,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x42U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13229,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x42U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13230,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x42U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13231,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x43U])),8);
        bufp->chgCData(oldp+13232,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x43U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13233,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x43U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13234,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x43U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13235,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x44U])),8);
        bufp->chgCData(oldp+13236,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x44U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13237,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x44U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13238,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x44U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13239,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x45U])),8);
        bufp->chgCData(oldp+13240,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x45U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13241,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x45U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13242,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x45U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13243,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x46U])),8);
        bufp->chgCData(oldp+13244,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x46U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13245,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x46U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13246,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x46U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13247,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x47U])),8);
        bufp->chgCData(oldp+13248,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x47U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13249,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x47U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13250,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x47U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13251,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x48U])),8);
        bufp->chgCData(oldp+13252,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x48U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13253,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x48U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13254,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x48U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13255,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x49U])),8);
        bufp->chgCData(oldp+13256,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x49U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13257,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x49U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13258,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x49U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13259,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4aU])),8);
        bufp->chgCData(oldp+13260,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13261,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13262,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13263,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4bU])),8);
        bufp->chgCData(oldp+13264,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13265,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13266,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13267,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4cU])),8);
        bufp->chgCData(oldp+13268,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13269,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13270,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13271,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4dU])),8);
        bufp->chgCData(oldp+13272,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13273,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13274,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13275,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4eU])),8);
        bufp->chgCData(oldp+13276,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13277,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13278,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13279,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4fU])),8);
        bufp->chgCData(oldp+13280,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13281,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13282,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x4fU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13283,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x50U])),8);
        bufp->chgCData(oldp+13284,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x50U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13285,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x50U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13286,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x50U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13287,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x51U])),8);
        bufp->chgCData(oldp+13288,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x51U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13289,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x51U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13290,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x51U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13291,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x52U])),8);
        bufp->chgCData(oldp+13292,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x52U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13293,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x52U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13294,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x52U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13295,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x53U])),8);
        bufp->chgCData(oldp+13296,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x53U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13297,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x53U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13298,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x53U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13299,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x54U])),8);
        bufp->chgCData(oldp+13300,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x54U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13301,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x54U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13302,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x54U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13303,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x55U])),8);
        bufp->chgCData(oldp+13304,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x55U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13305,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x55U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13306,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x55U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13307,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x56U])),8);
        bufp->chgCData(oldp+13308,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x56U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13309,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x56U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13310,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x56U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13311,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x57U])),8);
        bufp->chgCData(oldp+13312,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x57U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13313,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x57U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13314,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x57U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13315,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x58U])),8);
        bufp->chgCData(oldp+13316,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x58U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13317,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x58U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13318,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x58U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13319,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x59U])),8);
        bufp->chgCData(oldp+13320,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x59U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13321,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x59U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13322,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x59U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13323,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5aU])),8);
        bufp->chgCData(oldp+13324,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13325,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13326,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13327,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5bU])),8);
        bufp->chgCData(oldp+13328,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13329,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13330,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13331,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5cU])),8);
        bufp->chgCData(oldp+13332,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13333,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13334,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13335,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5dU])),8);
        bufp->chgCData(oldp+13336,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13337,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13338,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13339,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5eU])),8);
        bufp->chgCData(oldp+13340,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13341,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13342,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13343,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5fU])),8);
        bufp->chgCData(oldp+13344,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13345,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13346,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x5fU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13347,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x60U])),8);
        bufp->chgCData(oldp+13348,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x60U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13349,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x60U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13350,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x60U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13351,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x61U])),8);
        bufp->chgCData(oldp+13352,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x61U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13353,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x61U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13354,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x61U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13355,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x62U])),8);
        bufp->chgCData(oldp+13356,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x62U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13357,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x62U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13358,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x62U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13359,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x63U])),8);
        bufp->chgCData(oldp+13360,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x63U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13361,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x63U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13362,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x63U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13363,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x64U])),8);
        bufp->chgCData(oldp+13364,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x64U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13365,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x64U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13366,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x64U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13367,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x65U])),8);
        bufp->chgCData(oldp+13368,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x65U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13369,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x65U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13370,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x65U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13371,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x66U])),8);
        bufp->chgCData(oldp+13372,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x66U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13373,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x66U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13374,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x66U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13375,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x67U])),8);
        bufp->chgCData(oldp+13376,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x67U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13377,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x67U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13378,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x67U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13379,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x68U])),8);
        bufp->chgCData(oldp+13380,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x68U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13381,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x68U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13382,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x68U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13383,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x69U])),8);
        bufp->chgCData(oldp+13384,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x69U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13385,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x69U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13386,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x69U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13387,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6aU])),8);
        bufp->chgCData(oldp+13388,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13389,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13390,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13391,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6bU])),8);
        bufp->chgCData(oldp+13392,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13393,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13394,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13395,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6cU])),8);
        bufp->chgCData(oldp+13396,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13397,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13398,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13399,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6dU])),8);
        bufp->chgCData(oldp+13400,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13401,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13402,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13403,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6eU])),8);
        bufp->chgCData(oldp+13404,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13405,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13406,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13407,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6fU])),8);
        bufp->chgCData(oldp+13408,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13409,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13410,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x6fU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13411,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x70U])),8);
        bufp->chgCData(oldp+13412,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x70U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13413,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x70U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13414,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x70U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13415,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x71U])),8);
        bufp->chgCData(oldp+13416,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x71U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13417,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x71U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13418,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x71U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13419,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x72U])),8);
        bufp->chgCData(oldp+13420,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x72U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13421,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x72U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13422,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x72U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13423,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x73U])),8);
        bufp->chgCData(oldp+13424,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x73U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13425,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x73U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13426,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x73U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13427,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x74U])),8);
        bufp->chgCData(oldp+13428,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x74U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13429,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x74U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13430,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x74U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13431,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x75U])),8);
        bufp->chgCData(oldp+13432,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x75U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13433,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x75U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13434,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x75U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13435,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x76U])),8);
        bufp->chgCData(oldp+13436,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x76U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13437,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x76U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13438,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x76U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13439,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x77U])),8);
        bufp->chgCData(oldp+13440,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x77U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13441,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x77U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13442,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x77U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13443,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x78U])),8);
        bufp->chgCData(oldp+13444,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x78U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13445,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x78U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13446,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x78U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13447,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x79U])),8);
        bufp->chgCData(oldp+13448,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x79U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13449,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x79U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13450,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x79U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13451,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7aU])),8);
        bufp->chgCData(oldp+13452,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7aU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13453,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7aU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13454,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7aU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13455,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7bU])),8);
        bufp->chgCData(oldp+13456,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7bU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13457,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7bU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13458,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7bU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13459,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7cU])),8);
        bufp->chgCData(oldp+13460,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7cU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13461,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7cU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13462,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7cU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13463,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7dU])),8);
        bufp->chgCData(oldp+13464,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7dU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13465,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7dU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13466,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7dU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13467,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7eU])),8);
        bufp->chgCData(oldp+13468,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7eU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13469,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7eU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13470,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7eU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13471,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7fU])),8);
        bufp->chgCData(oldp+13472,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7fU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13473,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7fU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13474,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_dat[0x7fU] 
                                    >> 0x18U)),8);
        bufp->chgQData(oldp+13475,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0U])))),64);
        bufp->chgQData(oldp+13477,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[2U])))),64);
        bufp->chgQData(oldp+13479,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[4U])))),64);
        bufp->chgQData(oldp+13481,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[6U])))),64);
        bufp->chgQData(oldp+13483,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[9U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[8U])))),64);
        bufp->chgQData(oldp+13485,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0xbU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0xaU])))),64);
        bufp->chgQData(oldp+13487,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0xdU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0xcU])))),64);
        bufp->chgQData(oldp+13489,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0xfU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_tag[0xeU])))),64);
        bufp->chgQData(oldp+13491,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0U])))),64);
        bufp->chgQData(oldp+13493,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[2U])))),64);
        bufp->chgQData(oldp+13495,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[4U])))),64);
        bufp->chgQData(oldp+13497,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[7U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[6U])))),64);
        bufp->chgQData(oldp+13499,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[9U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[8U])))),64);
        bufp->chgQData(oldp+13501,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0xbU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0xaU])))),64);
        bufp->chgQData(oldp+13503,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0xdU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0xcU])))),64);
        bufp->chgQData(oldp+13505,((((QData)((IData)(
                                                     vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0xfU])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__new_tag[0xeU])))),64);
        bufp->chgCData(oldp+13507,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_ptr),3);
        bufp->chgCData(oldp+13508,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_valid),8);
        bufp->chgCData(oldp+13509,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_dirty),8);
        bufp->chgCData(oldp+13510,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hit),8);
        bufp->chgCData(oldp+13511,((0xfU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U])),4);
        bufp->chgCData(oldp+13512,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0U])),8);
        bufp->chgCData(oldp+13513,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13514,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13515,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13516,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[1U])),8);
        bufp->chgCData(oldp+13517,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[1U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13518,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[1U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13519,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[1U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13520,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[2U])),8);
        bufp->chgCData(oldp+13521,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[2U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13522,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[2U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13523,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[2U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13524,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[3U])),8);
        bufp->chgCData(oldp+13525,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[3U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13526,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[3U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13527,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[3U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13528,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[4U])),8);
        bufp->chgCData(oldp+13529,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[4U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13530,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[4U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13531,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[4U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13532,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[5U])),8);
        bufp->chgCData(oldp+13533,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[5U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13534,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[5U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13535,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[5U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13536,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[6U])),8);
        bufp->chgCData(oldp+13537,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[6U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13538,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[6U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13539,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[6U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13540,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[7U])),8);
        bufp->chgCData(oldp+13541,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[7U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13542,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[7U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13543,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[7U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13544,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[8U])),8);
        bufp->chgCData(oldp+13545,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[8U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13546,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[8U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13547,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[8U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13548,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[9U])),8);
        bufp->chgCData(oldp+13549,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[9U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13550,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[9U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13551,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[9U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13552,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xaU])),8);
        bufp->chgCData(oldp+13553,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xaU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13554,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xaU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13555,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xaU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13556,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xbU])),8);
        bufp->chgCData(oldp+13557,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xbU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13558,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xbU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13559,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xbU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13560,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xcU])),8);
        bufp->chgCData(oldp+13561,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xcU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13562,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xcU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13563,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xcU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13564,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xdU])),8);
        bufp->chgCData(oldp+13565,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xdU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13566,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xdU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13567,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xdU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13568,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xeU])),8);
        bufp->chgCData(oldp+13569,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xeU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13570,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xeU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13571,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xeU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13572,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xfU])),8);
        bufp->chgCData(oldp+13573,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xfU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13574,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xfU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13575,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitrdat[0xfU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13576,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0U])),8);
        bufp->chgCData(oldp+13577,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13578,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13579,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13580,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[1U])),8);
        bufp->chgCData(oldp+13581,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[1U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13582,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[1U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13583,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[1U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13584,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[2U])),8);
        bufp->chgCData(oldp+13585,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[2U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13586,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[2U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13587,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[2U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13588,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[3U])),8);
        bufp->chgCData(oldp+13589,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[3U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13590,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[3U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13591,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[3U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13592,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[4U])),8);
        bufp->chgCData(oldp+13593,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[4U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13594,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[4U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13595,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[4U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13596,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[5U])),8);
        bufp->chgCData(oldp+13597,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[5U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13598,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[5U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13599,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[5U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13600,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[6U])),8);
        bufp->chgCData(oldp+13601,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[6U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13602,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[6U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13603,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[6U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13604,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[7U])),8);
        bufp->chgCData(oldp+13605,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[7U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13606,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[7U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13607,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[7U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13608,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[8U])),8);
        bufp->chgCData(oldp+13609,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[8U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13610,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[8U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13611,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[8U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13612,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[9U])),8);
        bufp->chgCData(oldp+13613,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[9U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13614,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[9U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13615,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[9U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13616,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xaU])),8);
        bufp->chgCData(oldp+13617,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xaU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13618,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xaU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13619,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xaU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13620,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xbU])),8);
        bufp->chgCData(oldp+13621,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xbU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13622,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xbU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13623,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xbU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13624,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xcU])),8);
        bufp->chgCData(oldp+13625,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xcU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13626,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xcU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13627,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xcU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13628,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xdU])),8);
        bufp->chgCData(oldp+13629,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xdU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13630,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xdU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13631,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xdU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13632,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xeU])),8);
        bufp->chgCData(oldp+13633,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xeU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13634,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xeU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13635,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xeU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13636,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xfU])),8);
        bufp->chgCData(oldp+13637,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xfU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13638,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xfU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13639,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitmask[0xfU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13640,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0U])),8);
        bufp->chgCData(oldp+13641,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13642,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13643,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13644,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[1U])),8);
        bufp->chgCData(oldp+13645,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[1U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13646,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[1U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13647,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[1U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13648,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[2U])),8);
        bufp->chgCData(oldp+13649,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[2U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13650,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[2U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13651,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[2U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13652,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[3U])),8);
        bufp->chgCData(oldp+13653,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[3U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13654,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[3U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13655,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[3U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13656,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[4U])),8);
        bufp->chgCData(oldp+13657,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[4U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13658,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[4U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13659,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[4U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13660,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[5U])),8);
        bufp->chgCData(oldp+13661,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[5U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13662,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[5U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13663,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[5U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13664,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[6U])),8);
        bufp->chgCData(oldp+13665,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[6U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13666,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[6U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13667,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[6U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13668,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[7U])),8);
        bufp->chgCData(oldp+13669,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[7U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13670,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[7U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13671,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[7U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13672,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[8U])),8);
        bufp->chgCData(oldp+13673,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[8U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13674,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[8U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13675,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[8U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13676,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[9U])),8);
        bufp->chgCData(oldp+13677,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[9U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13678,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[9U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13679,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[9U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13680,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xaU])),8);
        bufp->chgCData(oldp+13681,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xaU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13682,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xaU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13683,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xaU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13684,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xbU])),8);
        bufp->chgCData(oldp+13685,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xbU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13686,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xbU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13687,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xbU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13688,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xcU])),8);
        bufp->chgCData(oldp+13689,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xcU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13690,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xcU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13691,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xcU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13692,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xdU])),8);
        bufp->chgCData(oldp+13693,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xdU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13694,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xdU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13695,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xdU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13696,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xeU])),8);
        bufp->chgCData(oldp+13697,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xeU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13698,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xeU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13699,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xeU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13700,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xfU])),8);
        bufp->chgCData(oldp+13701,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xfU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13702,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xfU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13703,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hitwdat[0xfU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13704,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill),7);
        bufp->chgCData(oldp+13705,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_req),8);
        bufp->chgQData(oldp+13706,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_tag),64);
        bufp->chgCData(oldp+13708,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0U])),8);
        bufp->chgCData(oldp+13709,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13710,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13711,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13712,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[1U])),8);
        bufp->chgCData(oldp+13713,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[1U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13714,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[1U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13715,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[1U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13716,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[2U])),8);
        bufp->chgCData(oldp+13717,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[2U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13718,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[2U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13719,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[2U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13720,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[3U])),8);
        bufp->chgCData(oldp+13721,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[3U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13722,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[3U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13723,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[3U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13724,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[4U])),8);
        bufp->chgCData(oldp+13725,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[4U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13726,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[4U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13727,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[4U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13728,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[5U])),8);
        bufp->chgCData(oldp+13729,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[5U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13730,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[5U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13731,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[5U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13732,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[6U])),8);
        bufp->chgCData(oldp+13733,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[6U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13734,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[6U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13735,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[6U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13736,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[7U])),8);
        bufp->chgCData(oldp+13737,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[7U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13738,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[7U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13739,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[7U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13740,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[8U])),8);
        bufp->chgCData(oldp+13741,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[8U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13742,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[8U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13743,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[8U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13744,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[9U])),8);
        bufp->chgCData(oldp+13745,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[9U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13746,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[9U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13747,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[9U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13748,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xaU])),8);
        bufp->chgCData(oldp+13749,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xaU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13750,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xaU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13751,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xaU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13752,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xbU])),8);
        bufp->chgCData(oldp+13753,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xbU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13754,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xbU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13755,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xbU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13756,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xcU])),8);
        bufp->chgCData(oldp+13757,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xcU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13758,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xcU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13759,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xcU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13760,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xdU])),8);
        bufp->chgCData(oldp+13761,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xdU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13762,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xdU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13763,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xdU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13764,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xeU])),8);
        bufp->chgCData(oldp+13765,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xeU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13766,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xeU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13767,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xeU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13768,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xfU])),8);
        bufp->chgCData(oldp+13769,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xfU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13770,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xfU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13771,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__fill_dat[0xfU] 
                                    >> 0x18U)),8);
        bufp->chgBit(oldp+13772,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__stale));
        bufp->chgCData(oldp+13773,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_rqst),8);
        bufp->chgQData(oldp+13774,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_strb),64);
        bufp->chgQData(oldp+13776,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_addr),64);
        bufp->chgCData(oldp+13778,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0U])),8);
        bufp->chgCData(oldp+13779,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13780,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13781,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13782,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[1U])),8);
        bufp->chgCData(oldp+13783,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[1U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13784,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[1U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13785,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[1U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13786,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[2U])),8);
        bufp->chgCData(oldp+13787,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[2U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13788,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[2U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13789,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[2U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13790,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[3U])),8);
        bufp->chgCData(oldp+13791,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[3U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13792,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[3U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13793,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[3U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13794,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[4U])),8);
        bufp->chgCData(oldp+13795,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[4U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13796,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[4U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13797,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[4U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13798,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[5U])),8);
        bufp->chgCData(oldp+13799,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[5U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13800,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[5U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13801,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[5U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13802,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[6U])),8);
        bufp->chgCData(oldp+13803,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[6U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13804,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[6U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13805,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[6U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13806,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[7U])),8);
        bufp->chgCData(oldp+13807,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[7U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13808,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[7U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13809,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[7U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13810,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[8U])),8);
        bufp->chgCData(oldp+13811,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[8U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13812,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[8U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13813,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[8U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13814,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[9U])),8);
        bufp->chgCData(oldp+13815,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[9U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13816,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[9U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13817,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[9U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13818,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xaU])),8);
        bufp->chgCData(oldp+13819,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xaU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13820,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xaU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13821,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xaU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13822,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xbU])),8);
        bufp->chgCData(oldp+13823,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xbU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13824,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xbU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13825,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xbU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13826,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xcU])),8);
        bufp->chgCData(oldp+13827,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xcU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13828,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xcU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13829,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xcU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13830,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xdU])),8);
        bufp->chgCData(oldp+13831,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xdU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13832,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xdU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13833,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xdU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13834,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xeU])),8);
        bufp->chgCData(oldp+13835,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xeU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13836,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xeU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13837,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xeU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13838,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xfU])),8);
        bufp->chgCData(oldp+13839,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xfU] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+13840,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xfU] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+13841,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__rep_wdat[0xfU] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+13842,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__set_hit),8);
        bufp->chgCData(oldp+13843,((0xfU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U])),4);
        bufp->chgCData(oldp+13844,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U] 
                                            >> 4U))),4);
        bufp->chgCData(oldp+13845,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U] 
                                            >> 8U))),4);
        bufp->chgCData(oldp+13846,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U] 
                                            >> 0xcU))),4);
        bufp->chgCData(oldp+13847,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U] 
                                            >> 0x10U))),4);
        bufp->chgCData(oldp+13848,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U] 
                                            >> 0x14U))),4);
        bufp->chgCData(oldp+13849,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U] 
                                            >> 0x18U))),4);
        bufp->chgCData(oldp+13850,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U] 
                                    >> 0x1cU)),4);
        bufp->chgCData(oldp+13851,((0xfU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U])),4);
        bufp->chgCData(oldp+13852,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                            >> 4U))),4);
        bufp->chgCData(oldp+13853,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                            >> 8U))),4);
        bufp->chgCData(oldp+13854,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                            >> 0xcU))),4);
        bufp->chgCData(oldp+13855,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                            >> 0x10U))),4);
        bufp->chgCData(oldp+13856,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                            >> 0x14U))),4);
        bufp->chgCData(oldp+13857,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                            >> 0x18U))),4);
        bufp->chgCData(oldp+13858,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                    >> 0x1cU)),4);
        bufp->chgCData(oldp+13859,((0xfU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U])),4);
        bufp->chgCData(oldp+13860,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                            >> 4U))),4);
        bufp->chgCData(oldp+13861,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                            >> 8U))),4);
        bufp->chgCData(oldp+13862,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                            >> 0xcU))),4);
        bufp->chgCData(oldp+13863,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                            >> 0x10U))),4);
        bufp->chgCData(oldp+13864,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                            >> 0x14U))),4);
        bufp->chgCData(oldp+13865,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                            >> 0x18U))),4);
        bufp->chgCData(oldp+13866,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                    >> 0x1cU)),4);
        bufp->chgCData(oldp+13867,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                            >> 4U))),4);
        bufp->chgCData(oldp+13868,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                            >> 8U))),4);
        bufp->chgCData(oldp+13869,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                            >> 0xcU))),4);
        bufp->chgCData(oldp+13870,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                            >> 0x10U))),4);
        bufp->chgCData(oldp+13871,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                            >> 0x14U))),4);
        bufp->chgCData(oldp+13872,((0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                            >> 0x18U))),4);
        bufp->chgCData(oldp+13873,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                    >> 0x1cU)),4);
        bufp->chgCData(oldp+13874,((0xfU & (~ (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_valid)))),4);
        bufp->chgCData(oldp+13875,((7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_i_inst__DOT__sel))),3);
        bufp->chgCData(oldp+13876,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_i_inst__DOT__sel 
                                                  >> 3U)))),3);
        bufp->chgCData(oldp+13877,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_i_inst__DOT__sel 
                                                  >> 6U)))),3);
        bufp->chgCData(oldp+13878,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_i_inst__DOT__sel 
                                                  >> 9U)))),3);
        bufp->chgCData(oldp+13879,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_i_inst__DOT__sel 
                                                  >> 0xcU)))),3);
        bufp->chgCData(oldp+13880,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_i_inst__DOT__sel 
                                                  >> 0xfU)))),3);
        bufp->chgCData(oldp+13881,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_i_inst__DOT__sel 
                                                  >> 0x12U)))),3);
        bufp->chgCData(oldp+13882,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_i_inst__DOT__sel 
                                                  >> 0x15U)))),3);
        bufp->chgCData(oldp+13883,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_i_inst__DOT__sel 
                                                  >> 0x1bU)))),3);
        bufp->chgCData(oldp+13884,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_i_inst__DOT__sel 
                                                  >> 0x1eU)))),3);
        bufp->chgCData(oldp+13885,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_i_inst__DOT__sel 
                                                  >> 0x21U)))),3);
        bufp->chgCData(oldp+13886,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT____Vcellinp__mshr_o_inst__bits),4);
        bufp->chgCData(oldp+13887,((7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel))),3);
        bufp->chgCData(oldp+13888,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                                                  >> 3U)))),3);
        bufp->chgCData(oldp+13889,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                                                  >> 6U)))),3);
        bufp->chgCData(oldp+13890,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                                                  >> 9U)))),3);
        bufp->chgCData(oldp+13891,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                                                  >> 0xcU)))),3);
        bufp->chgCData(oldp+13892,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                                                  >> 0xfU)))),3);
        bufp->chgCData(oldp+13893,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                                                  >> 0x12U)))),3);
        bufp->chgCData(oldp+13894,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                                                  >> 0x15U)))),3);
        bufp->chgCData(oldp+13895,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                                                  >> 0x1bU)))),3);
        bufp->chgCData(oldp+13896,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                                                  >> 0x1eU)))),3);
        bufp->chgCData(oldp+13897,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_o_inst__DOT__sel 
                                                  >> 0x21U)))),3);
        bufp->chgCData(oldp+13898,((7U & (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel))),3);
        bufp->chgCData(oldp+13899,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                                                  >> 3U)))),3);
        bufp->chgCData(oldp+13900,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                                                  >> 6U)))),3);
        bufp->chgCData(oldp+13901,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                                                  >> 9U)))),3);
        bufp->chgCData(oldp+13902,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                                                  >> 0xcU)))),3);
        bufp->chgCData(oldp+13903,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                                                  >> 0xfU)))),3);
        bufp->chgCData(oldp+13904,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                                                  >> 0x12U)))),3);
        bufp->chgCData(oldp+13905,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                                                  >> 0x15U)))),3);
        bufp->chgCData(oldp+13906,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                                                  >> 0x1bU)))),3);
        bufp->chgCData(oldp+13907,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                                                  >> 0x1eU)))),3);
        bufp->chgCData(oldp+13908,((7U & (IData)((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__mshr_p_inst__DOT__sel 
                                                  >> 0x21U)))),3);
        bufp->chgIData(oldp+13909,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+13910,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__unnamedblk12__DOT__i),32);
        bufp->chgIData(oldp+13911,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__unnamedblk14__DOT__i),32);
        bufp->chgIData(oldp+13912,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+13913,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+13914,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+13915,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dcache__DOT__unnamedblk7__DOT__i),32);
        bufp->chgQData(oldp+13916,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__dtlb__s_satp),64);
        bufp->chgCData(oldp+13918,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_rqst),8);
        bufp->chgCData(oldp+13919,(((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_ready)
                                     ? (IData)(vlSelf->vcore__DOT__inst__DOT____Vcellout__lsu_inst____pinNumber18)
                                     : (IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_rqst))),8);
        bufp->chgQData(oldp+13920,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_vadd),64);
        bufp->chgQData(oldp+13922,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__f_vadd),64);
        bufp->chgQData(oldp+13924,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_satp),64);
        bufp->chgQData(oldp+13926,(((IData)(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_ready)
                                     ? vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__dtlb__s_satp
                                     : vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_satp)),64);
        bufp->chgBit(oldp+13928,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_ready));
        bufp->chgBit(oldp+13929,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__b_miss));
        bufp->chgWData(oldp+13930,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__tlb_dat[0]),832);
        bufp->chgWData(oldp+13956,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__tlb_dat[1]),832);
        bufp->chgWData(oldp+13982,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__tlb_tag[0]),1088);
        bufp->chgWData(oldp+14016,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__tlb_tag[1]),1088);
        bufp->chgWData(oldp+14050,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__tlb_prm[0]),128);
        bufp->chgWData(oldp+14054,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__tlb_prm[1]),128);
        bufp->chgSData(oldp+14058,((0xffffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__tlb_vld)),16);
        bufp->chgSData(oldp+14059,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__tlb_vld 
                                    >> 0x10U)),16);
        bufp->chgCData(oldp+14060,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__tlb_ptr[0]),4);
        bufp->chgCData(oldp+14061,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__tlb_ptr[1]),4);
        bufp->chgQData(oldp+14062,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0U]))))),52);
        bufp->chgQData(oldp+14064,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[3U])) 
                                        << 0x2cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[2U])) 
                                         << 0xcU) | 
                                        ((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[1U])) 
                                         >> 0x14U))))),52);
        bufp->chgQData(oldp+14066,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[4U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[3U])) 
                                        >> 8U)))),52);
        bufp->chgQData(oldp+14068,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[6U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[5U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[4U])) 
                                                   >> 0x1cU))))),52);
        bufp->chgQData(oldp+14070,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[8U])) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[7U])) 
                                         << 0x10U) 
                                        | ((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[6U])) 
                                           >> 0x10U))))),52);
        bufp->chgQData(oldp+14072,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[9U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[8U])) 
                                        >> 4U)))),52);
        bufp->chgQData(oldp+14074,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0xbU])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0xaU])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[9U])) 
                                                   >> 0x18U))))),52);
        bufp->chgQData(oldp+14076,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0xcU])) 
                                        << 0x14U) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0xbU])) 
                                        >> 0xcU)))),52);
        bufp->chgQData(oldp+14078,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0xeU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0xdU]))))),52);
        bufp->chgQData(oldp+14080,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x10U])) 
                                        << 0x2cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0xfU])) 
                                         << 0xcU) | 
                                        ((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0xeU])) 
                                         >> 0x14U))))),52);
        bufp->chgQData(oldp+14082,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x11U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x10U])) 
                                        >> 8U)))),52);
        bufp->chgQData(oldp+14084,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x13U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x12U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x11U])) 
                                                   >> 0x1cU))))),52);
        bufp->chgQData(oldp+14086,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x15U])) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x14U])) 
                                         << 0x10U) 
                                        | ((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x13U])) 
                                           >> 0x10U))))),52);
        bufp->chgQData(oldp+14088,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x16U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x15U])) 
                                        >> 4U)))),52);
        bufp->chgQData(oldp+14090,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x18U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x17U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x16U])) 
                                                   >> 0x18U))))),52);
        bufp->chgQData(oldp+14092,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x19U])) 
                                        << 0x14U) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_dat[0x18U])) 
                                        >> 0xcU)))),52);
        __Vtemp_648[0U] = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0U];
        __Vtemp_648[1U] = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[1U];
        __Vtemp_648[2U] = (0xfU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[2U]);
        bufp->chgWData(oldp+14094,(__Vtemp_648),68);
        __Vtemp_651[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[3U] 
                            << 0x1cU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[2U] 
                                         >> 4U));
        __Vtemp_651[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[4U] 
                            << 0x1cU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[3U] 
                                         >> 4U));
        __Vtemp_651[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[4U] 
                                   >> 4U));
        bufp->chgWData(oldp+14097,(__Vtemp_651),68);
        __Vtemp_654[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[5U] 
                            << 0x18U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[4U] 
                                         >> 8U));
        __Vtemp_654[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[6U] 
                            << 0x18U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[5U] 
                                         >> 8U));
        __Vtemp_654[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[6U] 
                                   >> 8U));
        bufp->chgWData(oldp+14100,(__Vtemp_654),68);
        __Vtemp_657[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[7U] 
                            << 0x14U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[6U] 
                                         >> 0xcU));
        __Vtemp_657[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[8U] 
                            << 0x14U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[7U] 
                                         >> 0xcU));
        __Vtemp_657[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[8U] 
                                   >> 0xcU));
        bufp->chgWData(oldp+14103,(__Vtemp_657),68);
        __Vtemp_660[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[9U] 
                            << 0x10U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[8U] 
                                         >> 0x10U));
        __Vtemp_660[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xaU] 
                            << 0x10U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[9U] 
                                         >> 0x10U));
        __Vtemp_660[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xaU] 
                                   >> 0x10U));
        bufp->chgWData(oldp+14106,(__Vtemp_660),68);
        __Vtemp_663[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xbU] 
                            << 0xcU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xaU] 
                                        >> 0x14U));
        __Vtemp_663[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xcU] 
                            << 0xcU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xbU] 
                                        >> 0x14U));
        __Vtemp_663[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xcU] 
                                   >> 0x14U));
        bufp->chgWData(oldp+14109,(__Vtemp_663),68);
        __Vtemp_666[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xdU] 
                            << 8U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xcU] 
                                      >> 0x18U));
        __Vtemp_666[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xeU] 
                            << 8U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xdU] 
                                      >> 0x18U));
        __Vtemp_666[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xeU] 
                                   >> 0x18U));
        bufp->chgWData(oldp+14112,(__Vtemp_666),68);
        __Vtemp_669[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xfU] 
                            << 4U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xeU] 
                                      >> 0x1cU));
        __Vtemp_669[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x10U] 
                            << 4U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0xfU] 
                                      >> 0x1cU));
        __Vtemp_669[2U] = (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x10U] 
                           >> 0x1cU);
        bufp->chgWData(oldp+14115,(__Vtemp_669),68);
        __Vtemp_672[0U] = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x11U];
        __Vtemp_672[1U] = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x12U];
        __Vtemp_672[2U] = (0xfU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x13U]);
        bufp->chgWData(oldp+14118,(__Vtemp_672),68);
        __Vtemp_675[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x14U] 
                            << 0x1cU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x13U] 
                                         >> 4U));
        __Vtemp_675[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x15U] 
                            << 0x1cU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x14U] 
                                         >> 4U));
        __Vtemp_675[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x15U] 
                                   >> 4U));
        bufp->chgWData(oldp+14121,(__Vtemp_675),68);
        __Vtemp_678[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x16U] 
                            << 0x18U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x15U] 
                                         >> 8U));
        __Vtemp_678[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x17U] 
                            << 0x18U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x16U] 
                                         >> 8U));
        __Vtemp_678[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x17U] 
                                   >> 8U));
        bufp->chgWData(oldp+14124,(__Vtemp_678),68);
        __Vtemp_681[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x18U] 
                            << 0x14U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x17U] 
                                         >> 0xcU));
        __Vtemp_681[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x19U] 
                            << 0x14U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x18U] 
                                         >> 0xcU));
        __Vtemp_681[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x19U] 
                                   >> 0xcU));
        bufp->chgWData(oldp+14127,(__Vtemp_681),68);
        __Vtemp_684[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1aU] 
                            << 0x10U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x19U] 
                                         >> 0x10U));
        __Vtemp_684[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1bU] 
                            << 0x10U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1aU] 
                                         >> 0x10U));
        __Vtemp_684[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1bU] 
                                   >> 0x10U));
        bufp->chgWData(oldp+14130,(__Vtemp_684),68);
        __Vtemp_687[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1cU] 
                            << 0xcU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1bU] 
                                        >> 0x14U));
        __Vtemp_687[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1dU] 
                            << 0xcU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1cU] 
                                        >> 0x14U));
        __Vtemp_687[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1dU] 
                                   >> 0x14U));
        bufp->chgWData(oldp+14133,(__Vtemp_687),68);
        __Vtemp_690[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1eU] 
                            << 8U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1dU] 
                                      >> 0x18U));
        __Vtemp_690[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1fU] 
                            << 8U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1eU] 
                                      >> 0x18U));
        __Vtemp_690[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1fU] 
                                   >> 0x18U));
        bufp->chgWData(oldp+14136,(__Vtemp_690),68);
        __Vtemp_693[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x20U] 
                            << 4U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x1fU] 
                                      >> 0x1cU));
        __Vtemp_693[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x21U] 
                            << 4U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x20U] 
                                      >> 0x1cU));
        __Vtemp_693[2U] = (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_tag[0x21U] 
                           >> 0x1cU);
        bufp->chgWData(oldp+14139,(__Vtemp_693),68);
        bufp->chgCData(oldp+14142,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[0U])),8);
        bufp->chgCData(oldp+14143,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[0U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14144,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[0U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14145,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[0U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14146,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[1U])),8);
        bufp->chgCData(oldp+14147,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[1U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14148,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[1U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14149,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[1U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14150,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[2U])),8);
        bufp->chgCData(oldp+14151,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[2U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14152,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[2U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14153,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[2U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14154,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[3U])),8);
        bufp->chgCData(oldp+14155,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[3U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14156,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[3U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14157,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_prm[3U] 
                                    >> 0x18U)),8);
        bufp->chgSData(oldp+14158,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_vld),16);
        bufp->chgSData(oldp+14159,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_hit),16);
        bufp->chgCData(oldp+14160,((0x1fU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xaU])),5);
        bufp->chgCData(oldp+14161,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_ptr),4);
        bufp->chgSData(oldp+14162,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_vld),16);
        bufp->chgQData(oldp+14163,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0U]))))),52);
        bufp->chgQData(oldp+14165,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[3U])) 
                                        << 0x2cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[2U])) 
                                         << 0xcU) | 
                                        ((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[1U])) 
                                         >> 0x14U))))),52);
        bufp->chgQData(oldp+14167,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[4U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[3U])) 
                                        >> 8U)))),52);
        bufp->chgQData(oldp+14169,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[6U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[5U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[4U])) 
                                                   >> 0x1cU))))),52);
        bufp->chgQData(oldp+14171,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[8U])) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[7U])) 
                                         << 0x10U) 
                                        | ((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[6U])) 
                                           >> 0x10U))))),52);
        bufp->chgQData(oldp+14173,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[9U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[8U])) 
                                        >> 4U)))),52);
        bufp->chgQData(oldp+14175,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xbU])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xaU])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[9U])) 
                                                   >> 0x18U))))),52);
        bufp->chgQData(oldp+14177,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xcU])) 
                                        << 0x14U) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xbU])) 
                                        >> 0xcU)))),52);
        bufp->chgQData(oldp+14179,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xeU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xdU]))))),52);
        bufp->chgQData(oldp+14181,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x10U])) 
                                        << 0x2cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xfU])) 
                                         << 0xcU) | 
                                        ((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0xeU])) 
                                         >> 0x14U))))),52);
        bufp->chgQData(oldp+14183,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x11U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x10U])) 
                                        >> 8U)))),52);
        bufp->chgQData(oldp+14185,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x13U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x12U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x11U])) 
                                                   >> 0x1cU))))),52);
        bufp->chgQData(oldp+14187,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x15U])) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x14U])) 
                                         << 0x10U) 
                                        | ((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x13U])) 
                                           >> 0x10U))))),52);
        bufp->chgQData(oldp+14189,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x16U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x15U])) 
                                        >> 4U)))),52);
        bufp->chgQData(oldp+14191,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x18U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x17U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x16U])) 
                                                   >> 0x18U))))),52);
        bufp->chgQData(oldp+14193,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x19U])) 
                                        << 0x14U) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_dat[0x18U])) 
                                        >> 0xcU)))),52);
        bufp->chgQData(oldp+14195,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0U]))))),52);
        bufp->chgQData(oldp+14197,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[3U])) 
                                        << 0x2cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[2U])) 
                                         << 0xcU) | 
                                        ((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[1U])) 
                                         >> 0x14U))))),52);
        bufp->chgQData(oldp+14199,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[4U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[3U])) 
                                        >> 8U)))),52);
        bufp->chgQData(oldp+14201,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[6U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[5U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[4U])) 
                                                   >> 0x1cU))))),52);
        bufp->chgQData(oldp+14203,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[8U])) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[7U])) 
                                         << 0x10U) 
                                        | ((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[6U])) 
                                           >> 0x10U))))),52);
        bufp->chgQData(oldp+14205,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[9U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[8U])) 
                                        >> 4U)))),52);
        bufp->chgQData(oldp+14207,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xbU])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xaU])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[9U])) 
                                                   >> 0x18U))))),52);
        bufp->chgQData(oldp+14209,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xcU])) 
                                        << 0x14U) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xbU])) 
                                        >> 0xcU)))),52);
        bufp->chgQData(oldp+14211,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xeU])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xdU]))))),52);
        bufp->chgQData(oldp+14213,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x10U])) 
                                        << 0x2cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xfU])) 
                                         << 0xcU) | 
                                        ((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0xeU])) 
                                         >> 0x14U))))),52);
        bufp->chgQData(oldp+14215,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x11U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x10U])) 
                                        >> 8U)))),52);
        bufp->chgQData(oldp+14217,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x13U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x12U])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x11U])) 
                                                   >> 0x1cU))))),52);
        bufp->chgQData(oldp+14219,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x15U])) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x14U])) 
                                         << 0x10U) 
                                        | ((QData)((IData)(
                                                           vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x13U])) 
                                           >> 0x10U))))),52);
        bufp->chgQData(oldp+14221,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x16U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x15U])) 
                                        >> 4U)))),52);
        bufp->chgQData(oldp+14223,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x18U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x17U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x16U])) 
                                                   >> 0x18U))))),52);
        bufp->chgQData(oldp+14225,((0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x19U])) 
                                        << 0x14U) | 
                                       ((QData)((IData)(
                                                        vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_dat[0x18U])) 
                                        >> 0xcU)))),52);
        __Vtemp_696[0U] = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0U];
        __Vtemp_696[1U] = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[1U];
        __Vtemp_696[2U] = (0xfU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[2U]);
        bufp->chgWData(oldp+14227,(__Vtemp_696),68);
        __Vtemp_699[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[3U] 
                            << 0x1cU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[2U] 
                                         >> 4U));
        __Vtemp_699[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[4U] 
                            << 0x1cU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[3U] 
                                         >> 4U));
        __Vtemp_699[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[4U] 
                                   >> 4U));
        bufp->chgWData(oldp+14230,(__Vtemp_699),68);
        __Vtemp_702[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[5U] 
                            << 0x18U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[4U] 
                                         >> 8U));
        __Vtemp_702[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[6U] 
                            << 0x18U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[5U] 
                                         >> 8U));
        __Vtemp_702[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[6U] 
                                   >> 8U));
        bufp->chgWData(oldp+14233,(__Vtemp_702),68);
        __Vtemp_705[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[7U] 
                            << 0x14U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[6U] 
                                         >> 0xcU));
        __Vtemp_705[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[8U] 
                            << 0x14U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[7U] 
                                         >> 0xcU));
        __Vtemp_705[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[8U] 
                                   >> 0xcU));
        bufp->chgWData(oldp+14236,(__Vtemp_705),68);
        __Vtemp_708[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[9U] 
                            << 0x10U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[8U] 
                                         >> 0x10U));
        __Vtemp_708[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xaU] 
                            << 0x10U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[9U] 
                                         >> 0x10U));
        __Vtemp_708[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xaU] 
                                   >> 0x10U));
        bufp->chgWData(oldp+14239,(__Vtemp_708),68);
        __Vtemp_711[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xbU] 
                            << 0xcU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xaU] 
                                        >> 0x14U));
        __Vtemp_711[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xcU] 
                            << 0xcU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xbU] 
                                        >> 0x14U));
        __Vtemp_711[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xcU] 
                                   >> 0x14U));
        bufp->chgWData(oldp+14242,(__Vtemp_711),68);
        __Vtemp_714[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xdU] 
                            << 8U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xcU] 
                                      >> 0x18U));
        __Vtemp_714[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xeU] 
                            << 8U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xdU] 
                                      >> 0x18U));
        __Vtemp_714[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xeU] 
                                   >> 0x18U));
        bufp->chgWData(oldp+14245,(__Vtemp_714),68);
        __Vtemp_717[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xfU] 
                            << 4U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xeU] 
                                      >> 0x1cU));
        __Vtemp_717[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x10U] 
                            << 4U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0xfU] 
                                      >> 0x1cU));
        __Vtemp_717[2U] = (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x10U] 
                           >> 0x1cU);
        bufp->chgWData(oldp+14248,(__Vtemp_717),68);
        __Vtemp_720[0U] = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x11U];
        __Vtemp_720[1U] = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x12U];
        __Vtemp_720[2U] = (0xfU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x13U]);
        bufp->chgWData(oldp+14251,(__Vtemp_720),68);
        __Vtemp_723[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x14U] 
                            << 0x1cU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x13U] 
                                         >> 4U));
        __Vtemp_723[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x15U] 
                            << 0x1cU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x14U] 
                                         >> 4U));
        __Vtemp_723[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x15U] 
                                   >> 4U));
        bufp->chgWData(oldp+14254,(__Vtemp_723),68);
        __Vtemp_726[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x16U] 
                            << 0x18U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x15U] 
                                         >> 8U));
        __Vtemp_726[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x17U] 
                            << 0x18U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x16U] 
                                         >> 8U));
        __Vtemp_726[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x17U] 
                                   >> 8U));
        bufp->chgWData(oldp+14257,(__Vtemp_726),68);
        __Vtemp_729[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x18U] 
                            << 0x14U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x17U] 
                                         >> 0xcU));
        __Vtemp_729[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x19U] 
                            << 0x14U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x18U] 
                                         >> 0xcU));
        __Vtemp_729[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x19U] 
                                   >> 0xcU));
        bufp->chgWData(oldp+14260,(__Vtemp_729),68);
        __Vtemp_732[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1aU] 
                            << 0x10U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x19U] 
                                         >> 0x10U));
        __Vtemp_732[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1bU] 
                            << 0x10U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1aU] 
                                         >> 0x10U));
        __Vtemp_732[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1bU] 
                                   >> 0x10U));
        bufp->chgWData(oldp+14263,(__Vtemp_732),68);
        __Vtemp_735[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1cU] 
                            << 0xcU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1bU] 
                                        >> 0x14U));
        __Vtemp_735[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1dU] 
                            << 0xcU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1cU] 
                                        >> 0x14U));
        __Vtemp_735[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1dU] 
                                   >> 0x14U));
        bufp->chgWData(oldp+14266,(__Vtemp_735),68);
        __Vtemp_738[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1eU] 
                            << 8U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1dU] 
                                      >> 0x18U));
        __Vtemp_738[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1fU] 
                            << 8U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1eU] 
                                      >> 0x18U));
        __Vtemp_738[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1fU] 
                                   >> 0x18U));
        bufp->chgWData(oldp+14269,(__Vtemp_738),68);
        __Vtemp_741[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x20U] 
                            << 4U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x1fU] 
                                      >> 0x1cU));
        __Vtemp_741[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x21U] 
                            << 4U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x20U] 
                                      >> 0x1cU));
        __Vtemp_741[2U] = (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_tag[0x21U] 
                           >> 0x1cU);
        bufp->chgWData(oldp+14272,(__Vtemp_741),68);
        __Vtemp_744[0U] = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0U];
        __Vtemp_744[1U] = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[1U];
        __Vtemp_744[2U] = (0xfU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[2U]);
        bufp->chgWData(oldp+14275,(__Vtemp_744),68);
        __Vtemp_747[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[3U] 
                            << 0x1cU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[2U] 
                                         >> 4U));
        __Vtemp_747[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[4U] 
                            << 0x1cU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[3U] 
                                         >> 4U));
        __Vtemp_747[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[4U] 
                                   >> 4U));
        bufp->chgWData(oldp+14278,(__Vtemp_747),68);
        __Vtemp_750[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[5U] 
                            << 0x18U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[4U] 
                                         >> 8U));
        __Vtemp_750[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[6U] 
                            << 0x18U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[5U] 
                                         >> 8U));
        __Vtemp_750[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[6U] 
                                   >> 8U));
        bufp->chgWData(oldp+14281,(__Vtemp_750),68);
        __Vtemp_753[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[7U] 
                            << 0x14U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[6U] 
                                         >> 0xcU));
        __Vtemp_753[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[8U] 
                            << 0x14U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[7U] 
                                         >> 0xcU));
        __Vtemp_753[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[8U] 
                                   >> 0xcU));
        bufp->chgWData(oldp+14284,(__Vtemp_753),68);
        __Vtemp_756[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[9U] 
                            << 0x10U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[8U] 
                                         >> 0x10U));
        __Vtemp_756[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xaU] 
                            << 0x10U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[9U] 
                                         >> 0x10U));
        __Vtemp_756[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xaU] 
                                   >> 0x10U));
        bufp->chgWData(oldp+14287,(__Vtemp_756),68);
        __Vtemp_759[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xbU] 
                            << 0xcU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xaU] 
                                        >> 0x14U));
        __Vtemp_759[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xcU] 
                            << 0xcU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xbU] 
                                        >> 0x14U));
        __Vtemp_759[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xcU] 
                                   >> 0x14U));
        bufp->chgWData(oldp+14290,(__Vtemp_759),68);
        __Vtemp_762[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xdU] 
                            << 8U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xcU] 
                                      >> 0x18U));
        __Vtemp_762[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xeU] 
                            << 8U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xdU] 
                                      >> 0x18U));
        __Vtemp_762[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xeU] 
                                   >> 0x18U));
        bufp->chgWData(oldp+14293,(__Vtemp_762),68);
        __Vtemp_765[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xfU] 
                            << 4U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xeU] 
                                      >> 0x1cU));
        __Vtemp_765[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x10U] 
                            << 4U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0xfU] 
                                      >> 0x1cU));
        __Vtemp_765[2U] = (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x10U] 
                           >> 0x1cU);
        bufp->chgWData(oldp+14296,(__Vtemp_765),68);
        __Vtemp_768[0U] = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x11U];
        __Vtemp_768[1U] = vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x12U];
        __Vtemp_768[2U] = (0xfU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x13U]);
        bufp->chgWData(oldp+14299,(__Vtemp_768),68);
        __Vtemp_771[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x14U] 
                            << 0x1cU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x13U] 
                                         >> 4U));
        __Vtemp_771[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x15U] 
                            << 0x1cU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x14U] 
                                         >> 4U));
        __Vtemp_771[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x15U] 
                                   >> 4U));
        bufp->chgWData(oldp+14302,(__Vtemp_771),68);
        __Vtemp_774[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x16U] 
                            << 0x18U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x15U] 
                                         >> 8U));
        __Vtemp_774[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x17U] 
                            << 0x18U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x16U] 
                                         >> 8U));
        __Vtemp_774[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x17U] 
                                   >> 8U));
        bufp->chgWData(oldp+14305,(__Vtemp_774),68);
        __Vtemp_777[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x18U] 
                            << 0x14U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x17U] 
                                         >> 0xcU));
        __Vtemp_777[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x19U] 
                            << 0x14U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x18U] 
                                         >> 0xcU));
        __Vtemp_777[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x19U] 
                                   >> 0xcU));
        bufp->chgWData(oldp+14308,(__Vtemp_777),68);
        __Vtemp_780[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1aU] 
                            << 0x10U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x19U] 
                                         >> 0x10U));
        __Vtemp_780[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1bU] 
                            << 0x10U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1aU] 
                                         >> 0x10U));
        __Vtemp_780[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1bU] 
                                   >> 0x10U));
        bufp->chgWData(oldp+14311,(__Vtemp_780),68);
        __Vtemp_783[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1cU] 
                            << 0xcU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1bU] 
                                        >> 0x14U));
        __Vtemp_783[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1dU] 
                            << 0xcU) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1cU] 
                                        >> 0x14U));
        __Vtemp_783[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1dU] 
                                   >> 0x14U));
        bufp->chgWData(oldp+14314,(__Vtemp_783),68);
        __Vtemp_786[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1eU] 
                            << 8U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1dU] 
                                      >> 0x18U));
        __Vtemp_786[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1fU] 
                            << 8U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1eU] 
                                      >> 0x18U));
        __Vtemp_786[2U] = (0xfU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1fU] 
                                   >> 0x18U));
        bufp->chgWData(oldp+14317,(__Vtemp_786),68);
        __Vtemp_789[0U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x20U] 
                            << 4U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x1fU] 
                                      >> 0x1cU));
        __Vtemp_789[1U] = ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x21U] 
                            << 4U) | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x20U] 
                                      >> 0x1cU));
        __Vtemp_789[2U] = (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_tag[0x21U] 
                           >> 0x1cU);
        bufp->chgWData(oldp+14320,(__Vtemp_789),68);
        bufp->chgCData(oldp+14323,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[0U])),8);
        bufp->chgCData(oldp+14324,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[0U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14325,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[0U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14326,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[0U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14327,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[1U])),8);
        bufp->chgCData(oldp+14328,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[1U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14329,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[1U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14330,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[1U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14331,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[2U])),8);
        bufp->chgCData(oldp+14332,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[2U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14333,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[2U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14334,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[2U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14335,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[3U])),8);
        bufp->chgCData(oldp+14336,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[3U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14337,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[3U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14338,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_prm[3U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14339,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[0U])),8);
        bufp->chgCData(oldp+14340,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[0U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14341,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[0U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14342,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[0U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14343,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[1U])),8);
        bufp->chgCData(oldp+14344,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[1U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14345,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[1U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14346,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[1U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14347,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[2U])),8);
        bufp->chgCData(oldp+14348,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[2U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14349,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[2U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14350,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[2U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14351,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[3U])),8);
        bufp->chgCData(oldp+14352,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[3U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14353,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[3U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14354,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__fil_prm[3U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14355,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__req_ptr),4);
        bufp->chgSData(oldp+14356,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__set_hit),16);
        bufp->chgCData(oldp+14357,((0x1fU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U])),5);
        bufp->chgCData(oldp+14358,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U] 
                                             >> 5U))),5);
        bufp->chgCData(oldp+14359,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U] 
                                             >> 0xaU))),5);
        bufp->chgCData(oldp+14360,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U] 
                                             >> 0xfU))),5);
        bufp->chgCData(oldp+14361,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U] 
                                             >> 0x14U))),5);
        bufp->chgCData(oldp+14362,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U] 
                                             >> 0x19U))),5);
        bufp->chgCData(oldp+14363,((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                              << 2U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0U] 
                                                >> 0x1eU)))),5);
        bufp->chgCData(oldp+14364,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                             >> 3U))),5);
        bufp->chgCData(oldp+14365,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                             >> 8U))),5);
        bufp->chgCData(oldp+14366,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                             >> 0xdU))),5);
        bufp->chgCData(oldp+14367,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                             >> 0x12U))),5);
        bufp->chgCData(oldp+14368,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                             >> 0x17U))),5);
        bufp->chgCData(oldp+14369,((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                              << 4U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[1U] 
                                                >> 0x1cU)))),5);
        bufp->chgCData(oldp+14370,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                             >> 1U))),5);
        bufp->chgCData(oldp+14371,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                             >> 6U))),5);
        bufp->chgCData(oldp+14372,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                             >> 0xbU))),5);
        bufp->chgCData(oldp+14373,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                             >> 0x10U))),5);
        bufp->chgCData(oldp+14374,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                             >> 0x15U))),5);
        bufp->chgCData(oldp+14375,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                             >> 0x1aU))),5);
        bufp->chgCData(oldp+14376,((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                              << 1U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[2U] 
                                                >> 0x1fU)))),5);
        bufp->chgCData(oldp+14377,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                             >> 4U))),5);
        bufp->chgCData(oldp+14378,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                             >> 9U))),5);
        bufp->chgCData(oldp+14379,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                             >> 0xeU))),5);
        bufp->chgCData(oldp+14380,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                             >> 0x13U))),5);
        bufp->chgCData(oldp+14381,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                             >> 0x18U))),5);
        bufp->chgCData(oldp+14382,((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[4U] 
                                              << 3U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[3U] 
                                                >> 0x1dU)))),5);
        bufp->chgCData(oldp+14383,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[4U] 
                                             >> 2U))),5);
        bufp->chgCData(oldp+14384,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[4U] 
                                             >> 7U))),5);
        bufp->chgCData(oldp+14385,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[4U] 
                                             >> 0xcU))),5);
        bufp->chgCData(oldp+14386,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[4U] 
                                             >> 0x11U))),5);
        bufp->chgCData(oldp+14387,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[4U] 
                                             >> 0x16U))),5);
        bufp->chgCData(oldp+14388,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[4U] 
                                    >> 0x1bU)),5);
        bufp->chgCData(oldp+14389,((0x1fU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[5U])),5);
        bufp->chgCData(oldp+14390,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[5U] 
                                             >> 5U))),5);
        bufp->chgCData(oldp+14391,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[5U] 
                                             >> 0xaU))),5);
        bufp->chgCData(oldp+14392,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[5U] 
                                             >> 0xfU))),5);
        bufp->chgCData(oldp+14393,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[5U] 
                                             >> 0x14U))),5);
        bufp->chgCData(oldp+14394,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[5U] 
                                             >> 0x19U))),5);
        bufp->chgCData(oldp+14395,((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[6U] 
                                              << 2U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[5U] 
                                                >> 0x1eU)))),5);
        bufp->chgCData(oldp+14396,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[6U] 
                                             >> 3U))),5);
        bufp->chgCData(oldp+14397,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[6U] 
                                             >> 8U))),5);
        bufp->chgCData(oldp+14398,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[6U] 
                                             >> 0xdU))),5);
        bufp->chgCData(oldp+14399,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[6U] 
                                             >> 0x12U))),5);
        bufp->chgCData(oldp+14400,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[6U] 
                                             >> 0x17U))),5);
        bufp->chgCData(oldp+14401,((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[7U] 
                                              << 4U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[6U] 
                                                >> 0x1cU)))),5);
        bufp->chgCData(oldp+14402,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[7U] 
                                             >> 1U))),5);
        bufp->chgCData(oldp+14403,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[7U] 
                                             >> 6U))),5);
        bufp->chgCData(oldp+14404,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[7U] 
                                             >> 0xbU))),5);
        bufp->chgCData(oldp+14405,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[7U] 
                                             >> 0x10U))),5);
        bufp->chgCData(oldp+14406,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[7U] 
                                             >> 0x15U))),5);
        bufp->chgCData(oldp+14407,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[7U] 
                                             >> 0x1aU))),5);
        bufp->chgCData(oldp+14408,((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[8U] 
                                              << 1U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[7U] 
                                                >> 0x1fU)))),5);
        bufp->chgCData(oldp+14409,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[8U] 
                                             >> 4U))),5);
        bufp->chgCData(oldp+14410,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[8U] 
                                             >> 9U))),5);
        bufp->chgCData(oldp+14411,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[8U] 
                                             >> 0xeU))),5);
        bufp->chgCData(oldp+14412,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[8U] 
                                             >> 0x13U))),5);
        bufp->chgCData(oldp+14413,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[8U] 
                                             >> 0x18U))),5);
        bufp->chgCData(oldp+14414,((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[9U] 
                                              << 3U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[8U] 
                                                >> 0x1dU)))),5);
        bufp->chgCData(oldp+14415,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[9U] 
                                             >> 2U))),5);
        bufp->chgCData(oldp+14416,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[9U] 
                                             >> 7U))),5);
        bufp->chgCData(oldp+14417,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[9U] 
                                             >> 0xcU))),5);
        bufp->chgCData(oldp+14418,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[9U] 
                                             >> 0x11U))),5);
        bufp->chgCData(oldp+14419,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[9U] 
                                             >> 0x16U))),5);
        bufp->chgCData(oldp+14420,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[9U] 
                                    >> 0x1bU)),5);
        bufp->chgCData(oldp+14421,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xaU] 
                                             >> 5U))),5);
        bufp->chgCData(oldp+14422,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xaU] 
                                             >> 0xaU))),5);
        bufp->chgCData(oldp+14423,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xaU] 
                                             >> 0xfU))),5);
        bufp->chgCData(oldp+14424,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xaU] 
                                             >> 0x14U))),5);
        bufp->chgCData(oldp+14425,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xaU] 
                                             >> 0x19U))),5);
        bufp->chgCData(oldp+14426,((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xbU] 
                                              << 2U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xaU] 
                                                >> 0x1eU)))),5);
        bufp->chgCData(oldp+14427,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xbU] 
                                             >> 3U))),5);
        bufp->chgCData(oldp+14428,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xbU] 
                                             >> 8U))),5);
        bufp->chgCData(oldp+14429,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xbU] 
                                             >> 0xdU))),5);
        bufp->chgCData(oldp+14430,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xbU] 
                                             >> 0x12U))),5);
        bufp->chgCData(oldp+14431,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xbU] 
                                             >> 0x17U))),5);
        bufp->chgCData(oldp+14432,((0x1fU & ((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xcU] 
                                              << 4U) 
                                             | (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xbU] 
                                                >> 0x1cU)))),5);
        bufp->chgCData(oldp+14433,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xcU] 
                                             >> 1U))),5);
        bufp->chgCData(oldp+14434,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xcU] 
                                             >> 6U))),5);
        bufp->chgCData(oldp+14435,((0x1fU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__hit_pos_inst__BRA__0__KET____DOT__sel[0xcU] 
                                             >> 0xbU))),5);
        bufp->chgIData(oldp+14436,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+14437,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+14438,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT__dtlb__DOT__unnamedblk7__DOT__i),32);
        bufp->chgCData(oldp+14439,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__icache__s_rqst),8);
        bufp->chgQData(oldp+14440,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellinp__icache__s_addr),64);
        bufp->chgCData(oldp+14442,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_resp),8);
        bufp->chgCData(oldp+14443,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_miss),8);
        bufp->chgQData(oldp+14444,(vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_ofst),64);
        bufp->chgCData(oldp+14446,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0U])),8);
        bufp->chgCData(oldp+14447,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14448,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14449,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[0U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14450,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[1U])),8);
        bufp->chgCData(oldp+14451,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[1U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14452,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[1U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14453,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[1U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14454,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[2U])),8);
        bufp->chgCData(oldp+14455,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[2U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14456,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[2U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14457,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[2U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14458,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[3U])),8);
        bufp->chgCData(oldp+14459,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[3U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14460,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[3U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14461,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[3U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14462,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[4U])),8);
        bufp->chgCData(oldp+14463,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[4U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14464,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[4U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14465,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[4U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14466,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[5U])),8);
        bufp->chgCData(oldp+14467,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[5U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14468,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[5U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14469,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[5U] 
                                    >> 0x18U)),8);
        bufp->chgCData(oldp+14470,((0xffU & vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[6U])),8);
        bufp->chgCData(oldp+14471,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[6U] 
                                             >> 8U))),8);
        bufp->chgCData(oldp+14472,((0xffU & (vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[6U] 
                                             >> 0x10U))),8);
        bufp->chgCData(oldp+14473,((vlSelf->vcore__DOT__inst__DOT__mmu_inst__DOT____Vcellout__icache__s_rdat[6U] 
                                    >> 0x18U)),8);
    }
}
