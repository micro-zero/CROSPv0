// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvcore__Syms.h"


extern const VlWide<15>/*479:0*/ Vvcore__ConstPool__CONST_h9eacdb66_0;
extern const VlWide<15>/*479:0*/ Vvcore__ConstPool__CONST_h9eacd0e6_0;

void Vvcore___024root__trace_chg_0_sub_4(Vvcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vvcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvcore___024root__trace_chg_0_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 49893);
    VlWide<15>/*479:0*/ __Vtemp_1;
    VlWide<15>/*479:0*/ __Vtemp_3;
    VlWide<15>/*479:0*/ __Vtemp_5;
    VlWide<15>/*479:0*/ __Vtemp_7;
    VlWide<15>/*479:0*/ __Vtemp_9;
    VlWide<15>/*479:0*/ __Vtemp_10;
    VlWide<15>/*479:0*/ __Vtemp_11;
    VlWide<15>/*479:0*/ __Vtemp_12;
    VlWide<15>/*479:0*/ __Vtemp_13;
    VlWide<15>/*479:0*/ __Vtemp_15;
    VlWide<15>/*479:0*/ __Vtemp_17;
    VlWide<15>/*479:0*/ __Vtemp_19;
    VlWide<15>/*479:0*/ __Vtemp_21;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+0,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x46U] 
                                         >> 8U))),8);
        bufp->chgCData(oldp+1,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x46U] 
                                         >> 0x10U))),8);
        bufp->chgCData(oldp+2,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x46U] 
                                >> 0x18U)),8);
        bufp->chgCData(oldp+3,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x47U])),8);
        bufp->chgCData(oldp+4,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x47U] 
                                         >> 8U))),8);
        bufp->chgCData(oldp+5,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x47U] 
                                         >> 0x10U))),8);
        bufp->chgCData(oldp+6,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x47U] 
                                >> 0x18U)),8);
        bufp->chgCData(oldp+7,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x48U])),8);
        bufp->chgCData(oldp+8,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x48U] 
                                         >> 8U))),8);
        bufp->chgCData(oldp+9,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x48U] 
                                         >> 0x10U))),8);
        bufp->chgCData(oldp+10,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x48U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+11,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x49U])),8);
        bufp->chgCData(oldp+12,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x49U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+13,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x49U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+14,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x49U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+15,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4aU])),8);
        bufp->chgCData(oldp+16,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4aU] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+17,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4aU] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+18,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4aU] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+19,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4bU])),8);
        bufp->chgCData(oldp+20,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4bU] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+21,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4bU] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+22,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4bU] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+23,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4cU])),8);
        bufp->chgCData(oldp+24,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4cU] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+25,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4cU] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+26,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4cU] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+27,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4dU])),8);
        bufp->chgCData(oldp+28,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4dU] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+29,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4dU] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+30,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4dU] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+31,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4eU])),8);
        bufp->chgCData(oldp+32,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4eU] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+33,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4eU] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+34,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4eU] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+35,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4fU])),8);
        bufp->chgCData(oldp+36,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4fU] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+37,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4fU] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+38,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x4fU] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+39,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x50U])),8);
        bufp->chgCData(oldp+40,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x50U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+41,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x50U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+42,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x50U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+43,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x51U])),8);
        bufp->chgCData(oldp+44,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x51U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+45,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x51U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+46,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x51U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+47,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x52U])),8);
        bufp->chgCData(oldp+48,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x52U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+49,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x52U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+50,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x52U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+51,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x53U])),8);
        bufp->chgCData(oldp+52,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x53U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+53,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x53U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+54,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x53U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+55,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x54U])),8);
        bufp->chgCData(oldp+56,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x54U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+57,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x54U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+58,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x54U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+59,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x55U])),8);
        bufp->chgCData(oldp+60,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x55U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+61,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x55U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+62,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x55U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+63,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x56U])),8);
        bufp->chgCData(oldp+64,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x56U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+65,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x56U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+66,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x56U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+67,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x57U])),8);
        bufp->chgCData(oldp+68,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x57U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+69,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x57U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+70,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x57U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+71,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x58U])),8);
        bufp->chgCData(oldp+72,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x58U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+73,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x58U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+74,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x58U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+75,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x59U])),8);
        bufp->chgCData(oldp+76,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x59U] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+77,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x59U] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+78,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x59U] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+79,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5aU])),8);
        bufp->chgCData(oldp+80,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5aU] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+81,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5aU] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+82,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5aU] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+83,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5bU])),8);
        bufp->chgCData(oldp+84,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5bU] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+85,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5bU] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+86,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5bU] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+87,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5cU])),8);
        bufp->chgCData(oldp+88,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5cU] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+89,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5cU] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+90,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5cU] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+91,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5dU])),8);
        bufp->chgCData(oldp+92,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5dU] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+93,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5dU] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+94,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5dU] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+95,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5eU])),8);
        bufp->chgCData(oldp+96,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5eU] 
                                          >> 8U))),8);
        bufp->chgCData(oldp+97,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5eU] 
                                          >> 0x10U))),8);
        bufp->chgCData(oldp+98,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5eU] 
                                 >> 0x18U)),8);
        bufp->chgCData(oldp+99,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5fU])),8);
        bufp->chgCData(oldp+100,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+101,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+102,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x5fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+103,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x60U])),8);
        bufp->chgCData(oldp+104,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x60U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+105,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x60U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+106,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x60U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+107,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x61U])),8);
        bufp->chgCData(oldp+108,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x61U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+109,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x61U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+110,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x61U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+111,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x62U])),8);
        bufp->chgCData(oldp+112,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x62U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+113,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x62U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+114,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x62U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+115,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x63U])),8);
        bufp->chgCData(oldp+116,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x63U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+117,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x63U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+118,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x63U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+119,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x64U])),8);
        bufp->chgCData(oldp+120,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x64U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+121,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x64U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+122,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x64U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+123,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x65U])),8);
        bufp->chgCData(oldp+124,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x65U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+125,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x65U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+126,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x65U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+127,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x66U])),8);
        bufp->chgCData(oldp+128,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x66U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+129,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x66U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+130,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x66U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+131,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x67U])),8);
        bufp->chgCData(oldp+132,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x67U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+133,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x67U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+134,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x67U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+135,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x68U])),8);
        bufp->chgCData(oldp+136,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x68U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+137,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x68U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+138,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x68U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+139,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x69U])),8);
        bufp->chgCData(oldp+140,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x69U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+141,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x69U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+142,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x69U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+143,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6aU])),8);
        bufp->chgCData(oldp+144,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+145,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+146,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+147,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6bU])),8);
        bufp->chgCData(oldp+148,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+149,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+150,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+151,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6cU])),8);
        bufp->chgCData(oldp+152,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+153,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+154,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+155,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6dU])),8);
        bufp->chgCData(oldp+156,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+157,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+158,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+159,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6eU])),8);
        bufp->chgCData(oldp+160,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+161,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+162,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+163,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6fU])),8);
        bufp->chgCData(oldp+164,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+165,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+166,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x6fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+167,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x70U])),8);
        bufp->chgCData(oldp+168,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x70U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+169,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x70U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+170,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x70U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+171,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x71U])),8);
        bufp->chgCData(oldp+172,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x71U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+173,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x71U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+174,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x71U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+175,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x72U])),8);
        bufp->chgCData(oldp+176,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x72U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+177,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x72U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+178,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x72U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+179,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x73U])),8);
        bufp->chgCData(oldp+180,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x73U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+181,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x73U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+182,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x73U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+183,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x74U])),8);
        bufp->chgCData(oldp+184,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x74U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+185,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x74U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+186,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x74U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+187,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x75U])),8);
        bufp->chgCData(oldp+188,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x75U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+189,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x75U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+190,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x75U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+191,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x76U])),8);
        bufp->chgCData(oldp+192,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x76U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+193,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x76U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+194,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x76U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+195,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x77U])),8);
        bufp->chgCData(oldp+196,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x77U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+197,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x77U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+198,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x77U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+199,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x78U])),8);
        bufp->chgCData(oldp+200,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x78U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+201,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x78U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+202,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x78U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+203,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x79U])),8);
        bufp->chgCData(oldp+204,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x79U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+205,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x79U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+206,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x79U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+207,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7aU])),8);
        bufp->chgCData(oldp+208,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+209,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+210,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+211,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7bU])),8);
        bufp->chgCData(oldp+212,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+213,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+214,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+215,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7cU])),8);
        bufp->chgCData(oldp+216,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+217,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+218,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+219,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7dU])),8);
        bufp->chgCData(oldp+220,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+221,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+222,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+223,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7eU])),8);
        bufp->chgCData(oldp+224,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+225,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+226,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+227,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7fU])),8);
        bufp->chgCData(oldp+228,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+229,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+230,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x7fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+231,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x80U])),8);
        bufp->chgCData(oldp+232,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x80U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+233,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x80U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+234,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x80U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+235,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x81U])),8);
        bufp->chgCData(oldp+236,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x81U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+237,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x81U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+238,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x81U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+239,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x82U])),8);
        bufp->chgCData(oldp+240,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x82U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+241,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x82U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+242,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x82U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+243,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x83U])),8);
        bufp->chgCData(oldp+244,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x83U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+245,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x83U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+246,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x83U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+247,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x84U])),8);
        bufp->chgCData(oldp+248,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x84U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+249,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x84U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+250,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x84U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+251,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x85U])),8);
        bufp->chgCData(oldp+252,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x85U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+253,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x85U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+254,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x85U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+255,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x86U])),8);
        bufp->chgCData(oldp+256,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x86U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+257,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x86U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+258,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x86U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+259,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x87U])),8);
        bufp->chgCData(oldp+260,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x87U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+261,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x87U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+262,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x87U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+263,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x88U])),8);
        bufp->chgCData(oldp+264,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x88U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+265,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x88U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+266,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x88U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+267,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x89U])),8);
        bufp->chgCData(oldp+268,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x89U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+269,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x89U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+270,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x89U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+271,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8aU])),8);
        bufp->chgCData(oldp+272,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+273,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+274,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+275,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8bU])),8);
        bufp->chgCData(oldp+276,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+277,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+278,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+279,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8cU])),8);
        bufp->chgCData(oldp+280,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+281,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+282,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+283,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8dU])),8);
        bufp->chgCData(oldp+284,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+285,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+286,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+287,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8eU])),8);
        bufp->chgCData(oldp+288,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+289,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+290,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+291,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8fU])),8);
        bufp->chgCData(oldp+292,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+293,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+294,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x8fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+295,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x90U])),8);
        bufp->chgCData(oldp+296,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x90U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+297,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x90U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+298,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x90U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+299,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x91U])),8);
        bufp->chgCData(oldp+300,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x91U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+301,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x91U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+302,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x91U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+303,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x92U])),8);
        bufp->chgCData(oldp+304,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x92U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+305,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x92U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+306,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x92U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+307,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x93U])),8);
        bufp->chgCData(oldp+308,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x93U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+309,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x93U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+310,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x93U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+311,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x94U])),8);
        bufp->chgCData(oldp+312,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x94U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+313,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x94U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+314,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x94U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+315,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x95U])),8);
        bufp->chgCData(oldp+316,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x95U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+317,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x95U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+318,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x95U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+319,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x96U])),8);
        bufp->chgCData(oldp+320,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x96U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+321,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x96U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+322,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x96U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+323,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x97U])),8);
        bufp->chgCData(oldp+324,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x97U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+325,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x97U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+326,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x97U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+327,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x98U])),8);
        bufp->chgCData(oldp+328,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x98U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+329,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x98U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+330,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x98U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+331,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x99U])),8);
        bufp->chgCData(oldp+332,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x99U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+333,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x99U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+334,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x99U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+335,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9aU])),8);
        bufp->chgCData(oldp+336,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+337,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+338,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+339,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9bU])),8);
        bufp->chgCData(oldp+340,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+341,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+342,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+343,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9cU])),8);
        bufp->chgCData(oldp+344,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+345,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+346,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+347,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9dU])),8);
        bufp->chgCData(oldp+348,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+349,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+350,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+351,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9eU])),8);
        bufp->chgCData(oldp+352,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+353,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+354,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+355,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9fU])),8);
        bufp->chgCData(oldp+356,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+357,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+358,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x9fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+359,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa0U])),8);
        bufp->chgCData(oldp+360,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+361,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+362,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+363,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa1U])),8);
        bufp->chgCData(oldp+364,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+365,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+366,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+367,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa2U])),8);
        bufp->chgCData(oldp+368,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+369,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+370,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+371,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa3U])),8);
        bufp->chgCData(oldp+372,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+373,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+374,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+375,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa4U])),8);
        bufp->chgCData(oldp+376,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa4U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+377,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa4U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+378,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa4U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+379,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa5U])),8);
        bufp->chgCData(oldp+380,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa5U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+381,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa5U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+382,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa5U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+383,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa6U])),8);
        bufp->chgCData(oldp+384,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa6U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+385,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa6U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+386,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa6U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+387,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa7U])),8);
        bufp->chgCData(oldp+388,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa7U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+389,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa7U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+390,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa7U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+391,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa8U])),8);
        bufp->chgCData(oldp+392,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa8U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+393,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa8U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+394,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa8U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+395,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa9U])),8);
        bufp->chgCData(oldp+396,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa9U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+397,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa9U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+398,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xa9U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+399,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xaaU])),8);
        bufp->chgCData(oldp+400,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xaaU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+401,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xaaU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+402,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xaaU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+403,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xabU])),8);
        bufp->chgCData(oldp+404,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xabU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+405,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xabU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+406,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xabU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+407,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xacU])),8);
        bufp->chgCData(oldp+408,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xacU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+409,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xacU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+410,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xacU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+411,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xadU])),8);
        bufp->chgCData(oldp+412,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xadU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+413,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xadU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+414,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xadU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+415,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xaeU])),8);
        bufp->chgCData(oldp+416,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xaeU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+417,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xaeU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+418,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xaeU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+419,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xafU])),8);
        bufp->chgCData(oldp+420,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xafU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+421,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xafU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+422,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xafU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+423,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb0U])),8);
        bufp->chgCData(oldp+424,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+425,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+426,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+427,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb1U])),8);
        bufp->chgCData(oldp+428,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+429,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+430,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+431,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb2U])),8);
        bufp->chgCData(oldp+432,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+433,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+434,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+435,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb3U])),8);
        bufp->chgCData(oldp+436,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+437,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+438,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+439,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb4U])),8);
        bufp->chgCData(oldp+440,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb4U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+441,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb4U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+442,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb4U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+443,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb5U])),8);
        bufp->chgCData(oldp+444,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb5U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+445,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb5U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+446,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb5U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+447,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb6U])),8);
        bufp->chgCData(oldp+448,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb6U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+449,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb6U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+450,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb6U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+451,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb7U])),8);
        bufp->chgCData(oldp+452,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb7U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+453,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb7U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+454,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb7U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+455,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb8U])),8);
        bufp->chgCData(oldp+456,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb8U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+457,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb8U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+458,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb8U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+459,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb9U])),8);
        bufp->chgCData(oldp+460,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb9U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+461,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb9U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+462,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xb9U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+463,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbaU])),8);
        bufp->chgCData(oldp+464,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbaU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+465,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbaU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+466,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbaU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+467,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbbU])),8);
        bufp->chgCData(oldp+468,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbbU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+469,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbbU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+470,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbbU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+471,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbcU])),8);
        bufp->chgCData(oldp+472,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbcU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+473,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbcU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+474,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbcU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+475,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbdU])),8);
        bufp->chgCData(oldp+476,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbdU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+477,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbdU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+478,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbdU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+479,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbeU])),8);
        bufp->chgCData(oldp+480,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbeU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+481,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbeU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+482,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbeU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+483,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbfU])),8);
        bufp->chgCData(oldp+484,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbfU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+485,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbfU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+486,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xbfU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+487,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc0U])),8);
        bufp->chgCData(oldp+488,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+489,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+490,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+491,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc1U])),8);
        bufp->chgCData(oldp+492,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+493,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+494,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+495,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc2U])),8);
        bufp->chgCData(oldp+496,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+497,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+498,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+499,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc3U])),8);
        bufp->chgCData(oldp+500,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+501,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+502,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+503,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc4U])),8);
        bufp->chgCData(oldp+504,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc4U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+505,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc4U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+506,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc4U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+507,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc5U])),8);
        bufp->chgCData(oldp+508,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc5U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+509,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc5U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+510,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc5U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+511,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc6U])),8);
        bufp->chgCData(oldp+512,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc6U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+513,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc6U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+514,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc6U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+515,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc7U])),8);
        bufp->chgCData(oldp+516,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc7U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+517,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc7U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+518,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc7U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+519,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc8U])),8);
        bufp->chgCData(oldp+520,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc8U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+521,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc8U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+522,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc8U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+523,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc9U])),8);
        bufp->chgCData(oldp+524,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc9U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+525,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc9U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+526,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xc9U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+527,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcaU])),8);
        bufp->chgCData(oldp+528,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcaU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+529,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcaU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+530,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcaU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+531,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcbU])),8);
        bufp->chgCData(oldp+532,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcbU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+533,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcbU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+534,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcbU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+535,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xccU])),8);
        bufp->chgCData(oldp+536,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xccU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+537,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xccU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+538,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xccU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+539,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcdU])),8);
        bufp->chgCData(oldp+540,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcdU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+541,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcdU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+542,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcdU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+543,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xceU])),8);
        bufp->chgCData(oldp+544,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xceU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+545,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xceU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+546,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xceU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+547,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcfU])),8);
        bufp->chgCData(oldp+548,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcfU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+549,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcfU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+550,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xcfU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+551,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd0U])),8);
        bufp->chgCData(oldp+552,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+553,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+554,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+555,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd1U])),8);
        bufp->chgCData(oldp+556,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+557,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+558,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+559,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd2U])),8);
        bufp->chgCData(oldp+560,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+561,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+562,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+563,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd3U])),8);
        bufp->chgCData(oldp+564,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+565,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+566,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+567,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd4U])),8);
        bufp->chgCData(oldp+568,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd4U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+569,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd4U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+570,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd4U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+571,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd5U])),8);
        bufp->chgCData(oldp+572,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd5U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+573,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd5U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+574,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd5U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+575,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd6U])),8);
        bufp->chgCData(oldp+576,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd6U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+577,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd6U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+578,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd6U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+579,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd7U])),8);
        bufp->chgCData(oldp+580,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd7U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+581,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd7U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+582,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd7U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+583,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd8U])),8);
        bufp->chgCData(oldp+584,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd8U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+585,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd8U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+586,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd8U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+587,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd9U])),8);
        bufp->chgCData(oldp+588,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd9U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+589,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd9U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+590,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xd9U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+591,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdaU])),8);
        bufp->chgCData(oldp+592,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdaU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+593,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdaU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+594,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdaU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+595,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdbU])),8);
        bufp->chgCData(oldp+596,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdbU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+597,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdbU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+598,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdbU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+599,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdcU])),8);
        bufp->chgCData(oldp+600,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdcU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+601,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdcU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+602,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdcU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+603,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xddU])),8);
        bufp->chgCData(oldp+604,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xddU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+605,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xddU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+606,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xddU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+607,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdeU])),8);
        bufp->chgCData(oldp+608,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdeU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+609,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdeU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+610,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdeU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+611,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdfU])),8);
        bufp->chgCData(oldp+612,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdfU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+613,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdfU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+614,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xdfU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+615,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe0U])),8);
        bufp->chgCData(oldp+616,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+617,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+618,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+619,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe1U])),8);
        bufp->chgCData(oldp+620,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+621,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+622,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+623,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe2U])),8);
        bufp->chgCData(oldp+624,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+625,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+626,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+627,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe3U])),8);
        bufp->chgCData(oldp+628,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+629,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+630,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+631,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe4U])),8);
        bufp->chgCData(oldp+632,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe4U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+633,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe4U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+634,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe4U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+635,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe5U])),8);
        bufp->chgCData(oldp+636,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe5U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+637,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe5U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+638,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe5U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+639,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe6U])),8);
        bufp->chgCData(oldp+640,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe6U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+641,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe6U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+642,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe6U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+643,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe7U])),8);
        bufp->chgCData(oldp+644,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe7U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+645,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe7U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+646,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe7U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+647,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe8U])),8);
        bufp->chgCData(oldp+648,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe8U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+649,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe8U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+650,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe8U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+651,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe9U])),8);
        bufp->chgCData(oldp+652,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe9U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+653,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe9U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+654,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xe9U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+655,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xeaU])),8);
        bufp->chgCData(oldp+656,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xeaU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+657,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xeaU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+658,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xeaU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+659,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xebU])),8);
        bufp->chgCData(oldp+660,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xebU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+661,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xebU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+662,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xebU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+663,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xecU])),8);
        bufp->chgCData(oldp+664,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xecU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+665,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xecU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+666,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xecU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+667,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xedU])),8);
        bufp->chgCData(oldp+668,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xedU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+669,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xedU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+670,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xedU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+671,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xeeU])),8);
        bufp->chgCData(oldp+672,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xeeU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+673,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xeeU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+674,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xeeU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+675,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xefU])),8);
        bufp->chgCData(oldp+676,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xefU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+677,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xefU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+678,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xefU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+679,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf0U])),8);
        bufp->chgCData(oldp+680,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf0U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+681,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf0U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+682,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf0U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+683,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf1U])),8);
        bufp->chgCData(oldp+684,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf1U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+685,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf1U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+686,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf1U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+687,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf2U])),8);
        bufp->chgCData(oldp+688,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf2U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+689,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf2U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+690,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf2U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+691,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf3U])),8);
        bufp->chgCData(oldp+692,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf3U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+693,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf3U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+694,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf3U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+695,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf4U])),8);
        bufp->chgCData(oldp+696,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf4U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+697,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf4U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+698,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf4U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+699,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf5U])),8);
        bufp->chgCData(oldp+700,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf5U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+701,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf5U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+702,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf5U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+703,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf6U])),8);
        bufp->chgCData(oldp+704,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf6U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+705,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf6U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+706,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf6U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+707,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf7U])),8);
        bufp->chgCData(oldp+708,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf7U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+709,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf7U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+710,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf7U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+711,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf8U])),8);
        bufp->chgCData(oldp+712,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf8U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+713,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf8U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+714,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf8U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+715,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf9U])),8);
        bufp->chgCData(oldp+716,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf9U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+717,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf9U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+718,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xf9U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+719,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfaU])),8);
        bufp->chgCData(oldp+720,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfaU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+721,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfaU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+722,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfaU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+723,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfbU])),8);
        bufp->chgCData(oldp+724,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfbU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+725,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfbU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+726,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfbU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+727,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfcU])),8);
        bufp->chgCData(oldp+728,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfcU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+729,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfcU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+730,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfcU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+731,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfdU])),8);
        bufp->chgCData(oldp+732,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfdU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+733,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfdU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+734,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfdU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+735,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfeU])),8);
        bufp->chgCData(oldp+736,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfeU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+737,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfeU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+738,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xfeU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+739,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xffU])),8);
        bufp->chgCData(oldp+740,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xffU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+741,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xffU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+742,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0xffU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+743,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x100U])),8);
        bufp->chgCData(oldp+744,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x100U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+745,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x100U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+746,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x100U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+747,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x101U])),8);
        bufp->chgCData(oldp+748,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x101U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+749,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x101U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+750,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x101U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+751,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x102U])),8);
        bufp->chgCData(oldp+752,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x102U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+753,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x102U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+754,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x102U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+755,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x103U])),8);
        bufp->chgCData(oldp+756,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x103U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+757,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x103U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+758,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x103U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+759,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x104U])),8);
        bufp->chgCData(oldp+760,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x104U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+761,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x104U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+762,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x104U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+763,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x105U])),8);
        bufp->chgCData(oldp+764,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x105U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+765,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x105U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+766,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x105U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+767,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x106U])),8);
        bufp->chgCData(oldp+768,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x106U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+769,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x106U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+770,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x106U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+771,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x107U])),8);
        bufp->chgCData(oldp+772,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x107U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+773,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x107U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+774,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x107U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+775,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x108U])),8);
        bufp->chgCData(oldp+776,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x108U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+777,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x108U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+778,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x108U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+779,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x109U])),8);
        bufp->chgCData(oldp+780,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x109U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+781,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x109U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+782,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x109U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+783,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10aU])),8);
        bufp->chgCData(oldp+784,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+785,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+786,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+787,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10bU])),8);
        bufp->chgCData(oldp+788,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+789,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+790,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+791,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10cU])),8);
        bufp->chgCData(oldp+792,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+793,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+794,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+795,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10dU])),8);
        bufp->chgCData(oldp+796,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+797,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+798,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+799,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10eU])),8);
        bufp->chgCData(oldp+800,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+801,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+802,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+803,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10fU])),8);
        bufp->chgCData(oldp+804,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+805,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+806,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x10fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+807,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x110U])),8);
        bufp->chgCData(oldp+808,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x110U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+809,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x110U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+810,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x110U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+811,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x111U])),8);
        bufp->chgCData(oldp+812,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x111U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+813,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x111U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+814,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x111U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+815,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x112U])),8);
        bufp->chgCData(oldp+816,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x112U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+817,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x112U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+818,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x112U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+819,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x113U])),8);
        bufp->chgCData(oldp+820,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x113U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+821,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x113U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+822,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x113U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+823,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x114U])),8);
        bufp->chgCData(oldp+824,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x114U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+825,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x114U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+826,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x114U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+827,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x115U])),8);
        bufp->chgCData(oldp+828,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x115U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+829,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x115U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+830,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x115U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+831,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x116U])),8);
        bufp->chgCData(oldp+832,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x116U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+833,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x116U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+834,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x116U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+835,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x117U])),8);
        bufp->chgCData(oldp+836,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x117U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+837,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x117U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+838,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x117U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+839,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x118U])),8);
        bufp->chgCData(oldp+840,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x118U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+841,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x118U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+842,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x118U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+843,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x119U])),8);
        bufp->chgCData(oldp+844,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x119U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+845,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x119U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+846,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x119U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+847,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11aU])),8);
        bufp->chgCData(oldp+848,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+849,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+850,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+851,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11bU])),8);
        bufp->chgCData(oldp+852,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+853,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+854,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+855,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11cU])),8);
        bufp->chgCData(oldp+856,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+857,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+858,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+859,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11dU])),8);
        bufp->chgCData(oldp+860,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+861,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+862,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+863,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11eU])),8);
        bufp->chgCData(oldp+864,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+865,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+866,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+867,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11fU])),8);
        bufp->chgCData(oldp+868,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+869,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+870,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x11fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+871,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x120U])),8);
        bufp->chgCData(oldp+872,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x120U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+873,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x120U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+874,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x120U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+875,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x121U])),8);
        bufp->chgCData(oldp+876,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x121U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+877,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x121U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+878,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x121U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+879,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x122U])),8);
        bufp->chgCData(oldp+880,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x122U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+881,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x122U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+882,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x122U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+883,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x123U])),8);
        bufp->chgCData(oldp+884,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x123U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+885,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x123U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+886,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x123U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+887,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x124U])),8);
        bufp->chgCData(oldp+888,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x124U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+889,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x124U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+890,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x124U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+891,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x125U])),8);
        bufp->chgCData(oldp+892,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x125U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+893,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x125U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+894,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x125U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+895,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x126U])),8);
        bufp->chgCData(oldp+896,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x126U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+897,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x126U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+898,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x126U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+899,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x127U])),8);
        bufp->chgCData(oldp+900,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x127U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+901,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x127U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+902,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x127U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+903,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x128U])),8);
        bufp->chgCData(oldp+904,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x128U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+905,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x128U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+906,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x128U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+907,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x129U])),8);
        bufp->chgCData(oldp+908,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x129U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+909,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x129U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+910,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x129U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+911,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12aU])),8);
        bufp->chgCData(oldp+912,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+913,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+914,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+915,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12bU])),8);
        bufp->chgCData(oldp+916,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+917,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+918,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+919,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12cU])),8);
        bufp->chgCData(oldp+920,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+921,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+922,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+923,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12dU])),8);
        bufp->chgCData(oldp+924,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+925,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+926,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+927,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12eU])),8);
        bufp->chgCData(oldp+928,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+929,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+930,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+931,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12fU])),8);
        bufp->chgCData(oldp+932,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+933,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+934,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x12fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+935,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x130U])),8);
        bufp->chgCData(oldp+936,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x130U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+937,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x130U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+938,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x130U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+939,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x131U])),8);
        bufp->chgCData(oldp+940,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x131U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+941,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x131U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+942,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x131U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+943,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x132U])),8);
        bufp->chgCData(oldp+944,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x132U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+945,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x132U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+946,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x132U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+947,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x133U])),8);
        bufp->chgCData(oldp+948,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x133U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+949,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x133U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+950,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x133U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+951,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x134U])),8);
        bufp->chgCData(oldp+952,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x134U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+953,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x134U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+954,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x134U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+955,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x135U])),8);
        bufp->chgCData(oldp+956,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x135U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+957,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x135U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+958,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x135U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+959,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x136U])),8);
        bufp->chgCData(oldp+960,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x136U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+961,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x136U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+962,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x136U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+963,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x137U])),8);
        bufp->chgCData(oldp+964,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x137U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+965,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x137U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+966,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x137U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+967,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x138U])),8);
        bufp->chgCData(oldp+968,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x138U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+969,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x138U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+970,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x138U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+971,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x139U])),8);
        bufp->chgCData(oldp+972,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x139U] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+973,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x139U] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+974,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x139U] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+975,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13aU])),8);
        bufp->chgCData(oldp+976,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13aU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+977,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13aU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+978,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13aU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+979,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13bU])),8);
        bufp->chgCData(oldp+980,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13bU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+981,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13bU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+982,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13bU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+983,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13cU])),8);
        bufp->chgCData(oldp+984,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13cU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+985,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13cU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+986,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13cU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+987,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13dU])),8);
        bufp->chgCData(oldp+988,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13dU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+989,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13dU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+990,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13dU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+991,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13eU])),8);
        bufp->chgCData(oldp+992,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13eU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+993,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13eU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+994,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13eU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+995,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13fU])),8);
        bufp->chgCData(oldp+996,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13fU] 
                                           >> 8U))),8);
        bufp->chgCData(oldp+997,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13fU] 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+998,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x13fU] 
                                  >> 0x18U)),8);
        bufp->chgCData(oldp+999,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x140U])),8);
        bufp->chgCData(oldp+1000,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x140U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1001,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x140U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1002,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x140U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1003,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x141U])),8);
        bufp->chgCData(oldp+1004,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x141U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1005,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x141U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1006,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x141U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1007,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x142U])),8);
        bufp->chgCData(oldp+1008,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x142U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1009,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x142U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1010,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x142U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1011,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x143U])),8);
        bufp->chgCData(oldp+1012,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x143U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1013,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x143U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1014,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x143U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1015,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x144U])),8);
        bufp->chgCData(oldp+1016,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x144U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1017,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x144U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1018,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x144U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1019,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x145U])),8);
        bufp->chgCData(oldp+1020,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x145U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1021,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x145U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1022,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x145U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1023,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x146U])),8);
        bufp->chgCData(oldp+1024,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x146U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1025,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x146U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1026,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x146U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1027,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x147U])),8);
        bufp->chgCData(oldp+1028,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x147U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1029,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x147U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1030,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x147U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1031,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x148U])),8);
        bufp->chgCData(oldp+1032,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x148U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1033,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x148U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1034,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x148U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1035,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x149U])),8);
        bufp->chgCData(oldp+1036,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x149U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1037,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x149U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1038,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x149U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1039,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14aU])),8);
        bufp->chgCData(oldp+1040,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1041,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1042,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1043,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14bU])),8);
        bufp->chgCData(oldp+1044,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1045,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1046,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1047,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14cU])),8);
        bufp->chgCData(oldp+1048,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1049,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1050,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1051,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14dU])),8);
        bufp->chgCData(oldp+1052,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1053,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1054,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1055,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14eU])),8);
        bufp->chgCData(oldp+1056,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1057,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1058,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1059,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14fU])),8);
        bufp->chgCData(oldp+1060,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1061,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1062,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x14fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1063,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x150U])),8);
        bufp->chgCData(oldp+1064,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x150U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1065,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x150U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1066,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x150U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1067,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x151U])),8);
        bufp->chgCData(oldp+1068,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x151U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1069,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x151U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1070,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x151U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1071,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x152U])),8);
        bufp->chgCData(oldp+1072,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x152U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1073,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x152U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1074,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x152U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1075,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x153U])),8);
        bufp->chgCData(oldp+1076,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x153U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1077,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x153U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1078,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x153U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1079,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x154U])),8);
        bufp->chgCData(oldp+1080,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x154U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1081,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x154U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1082,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x154U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1083,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x155U])),8);
        bufp->chgCData(oldp+1084,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x155U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1085,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x155U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1086,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x155U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1087,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x156U])),8);
        bufp->chgCData(oldp+1088,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x156U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1089,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x156U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1090,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x156U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1091,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x157U])),8);
        bufp->chgCData(oldp+1092,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x157U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1093,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x157U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1094,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x157U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1095,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x158U])),8);
        bufp->chgCData(oldp+1096,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x158U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1097,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x158U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1098,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x158U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1099,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x159U])),8);
        bufp->chgCData(oldp+1100,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x159U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1101,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x159U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1102,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x159U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1103,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15aU])),8);
        bufp->chgCData(oldp+1104,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1105,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1106,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1107,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15bU])),8);
        bufp->chgCData(oldp+1108,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1109,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1110,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1111,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15cU])),8);
        bufp->chgCData(oldp+1112,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1113,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1114,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1115,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15dU])),8);
        bufp->chgCData(oldp+1116,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1117,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1118,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1119,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15eU])),8);
        bufp->chgCData(oldp+1120,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1121,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1122,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1123,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15fU])),8);
        bufp->chgCData(oldp+1124,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1125,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1126,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x15fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1127,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x160U])),8);
        bufp->chgCData(oldp+1128,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x160U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1129,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x160U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1130,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x160U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1131,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x161U])),8);
        bufp->chgCData(oldp+1132,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x161U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1133,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x161U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1134,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x161U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1135,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x162U])),8);
        bufp->chgCData(oldp+1136,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x162U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1137,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x162U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1138,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x162U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1139,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x163U])),8);
        bufp->chgCData(oldp+1140,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x163U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1141,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x163U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1142,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x163U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1143,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x164U])),8);
        bufp->chgCData(oldp+1144,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x164U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1145,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x164U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1146,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x164U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1147,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x165U])),8);
        bufp->chgCData(oldp+1148,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x165U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1149,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x165U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1150,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x165U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1151,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x166U])),8);
        bufp->chgCData(oldp+1152,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x166U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1153,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x166U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1154,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x166U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1155,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x167U])),8);
        bufp->chgCData(oldp+1156,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x167U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1157,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x167U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1158,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x167U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1159,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x168U])),8);
        bufp->chgCData(oldp+1160,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x168U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1161,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x168U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1162,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x168U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1163,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x169U])),8);
        bufp->chgCData(oldp+1164,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x169U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1165,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x169U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1166,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x169U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1167,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16aU])),8);
        bufp->chgCData(oldp+1168,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1169,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1170,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1171,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16bU])),8);
        bufp->chgCData(oldp+1172,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1173,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1174,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1175,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16cU])),8);
        bufp->chgCData(oldp+1176,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1177,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1178,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1179,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16dU])),8);
        bufp->chgCData(oldp+1180,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1181,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1182,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1183,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16eU])),8);
        bufp->chgCData(oldp+1184,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1185,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1186,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1187,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16fU])),8);
        bufp->chgCData(oldp+1188,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1189,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1190,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x16fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1191,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x170U])),8);
        bufp->chgCData(oldp+1192,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x170U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1193,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x170U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1194,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x170U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1195,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x171U])),8);
        bufp->chgCData(oldp+1196,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x171U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1197,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x171U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1198,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x171U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1199,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x172U])),8);
        bufp->chgCData(oldp+1200,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x172U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1201,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x172U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1202,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x172U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1203,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x173U])),8);
        bufp->chgCData(oldp+1204,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x173U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1205,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x173U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1206,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x173U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1207,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x174U])),8);
        bufp->chgCData(oldp+1208,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x174U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1209,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x174U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1210,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x174U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1211,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x175U])),8);
        bufp->chgCData(oldp+1212,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x175U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1213,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x175U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1214,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x175U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1215,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x176U])),8);
        bufp->chgCData(oldp+1216,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x176U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1217,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x176U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1218,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x176U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1219,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x177U])),8);
        bufp->chgCData(oldp+1220,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x177U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1221,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x177U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1222,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x177U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1223,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x178U])),8);
        bufp->chgCData(oldp+1224,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x178U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1225,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x178U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1226,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x178U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1227,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x179U])),8);
        bufp->chgCData(oldp+1228,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x179U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1229,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x179U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1230,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x179U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1231,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17aU])),8);
        bufp->chgCData(oldp+1232,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1233,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1234,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1235,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17bU])),8);
        bufp->chgCData(oldp+1236,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1237,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1238,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1239,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17cU])),8);
        bufp->chgCData(oldp+1240,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1241,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1242,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1243,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17dU])),8);
        bufp->chgCData(oldp+1244,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1245,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1246,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1247,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17eU])),8);
        bufp->chgCData(oldp+1248,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1249,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1250,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1251,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17fU])),8);
        bufp->chgCData(oldp+1252,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1253,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1254,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x17fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1255,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x180U])),8);
        bufp->chgCData(oldp+1256,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x180U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1257,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x180U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1258,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x180U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1259,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x181U])),8);
        bufp->chgCData(oldp+1260,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x181U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1261,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x181U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1262,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x181U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1263,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x182U])),8);
        bufp->chgCData(oldp+1264,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x182U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1265,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x182U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1266,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x182U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1267,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x183U])),8);
        bufp->chgCData(oldp+1268,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x183U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1269,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x183U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1270,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x183U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1271,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x184U])),8);
        bufp->chgCData(oldp+1272,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x184U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1273,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x184U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1274,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x184U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1275,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x185U])),8);
        bufp->chgCData(oldp+1276,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x185U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1277,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x185U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1278,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x185U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1279,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x186U])),8);
        bufp->chgCData(oldp+1280,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x186U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1281,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x186U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1282,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x186U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1283,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x187U])),8);
        bufp->chgCData(oldp+1284,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x187U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1285,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x187U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1286,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x187U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1287,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x188U])),8);
        bufp->chgCData(oldp+1288,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x188U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1289,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x188U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1290,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x188U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1291,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x189U])),8);
        bufp->chgCData(oldp+1292,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x189U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1293,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x189U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1294,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x189U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1295,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18aU])),8);
        bufp->chgCData(oldp+1296,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1297,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1298,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1299,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18bU])),8);
        bufp->chgCData(oldp+1300,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1301,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1302,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1303,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18cU])),8);
        bufp->chgCData(oldp+1304,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1305,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1306,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1307,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18dU])),8);
        bufp->chgCData(oldp+1308,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1309,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1310,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1311,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18eU])),8);
        bufp->chgCData(oldp+1312,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1313,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1314,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1315,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18fU])),8);
        bufp->chgCData(oldp+1316,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1317,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1318,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x18fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1319,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x190U])),8);
        bufp->chgCData(oldp+1320,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x190U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1321,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x190U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1322,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x190U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1323,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x191U])),8);
        bufp->chgCData(oldp+1324,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x191U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1325,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x191U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1326,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x191U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1327,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x192U])),8);
        bufp->chgCData(oldp+1328,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x192U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1329,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x192U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1330,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x192U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1331,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x193U])),8);
        bufp->chgCData(oldp+1332,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x193U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1333,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x193U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1334,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x193U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1335,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x194U])),8);
        bufp->chgCData(oldp+1336,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x194U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1337,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x194U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1338,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x194U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1339,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x195U])),8);
        bufp->chgCData(oldp+1340,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x195U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1341,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x195U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1342,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x195U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1343,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x196U])),8);
        bufp->chgCData(oldp+1344,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x196U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1345,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x196U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1346,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x196U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1347,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x197U])),8);
        bufp->chgCData(oldp+1348,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x197U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1349,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x197U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1350,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x197U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1351,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x198U])),8);
        bufp->chgCData(oldp+1352,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x198U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1353,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x198U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1354,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x198U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1355,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x199U])),8);
        bufp->chgCData(oldp+1356,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x199U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1357,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x199U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1358,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x199U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1359,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19aU])),8);
        bufp->chgCData(oldp+1360,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1361,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1362,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1363,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19bU])),8);
        bufp->chgCData(oldp+1364,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1365,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1366,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1367,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19cU])),8);
        bufp->chgCData(oldp+1368,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1369,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1370,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1371,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19dU])),8);
        bufp->chgCData(oldp+1372,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1373,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1374,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1375,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19eU])),8);
        bufp->chgCData(oldp+1376,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1377,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1378,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1379,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19fU])),8);
        bufp->chgCData(oldp+1380,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1381,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1382,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x19fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1383,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a0U])),8);
        bufp->chgCData(oldp+1384,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1385,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1386,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1387,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a1U])),8);
        bufp->chgCData(oldp+1388,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1389,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1390,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1391,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a2U])),8);
        bufp->chgCData(oldp+1392,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1393,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1394,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1395,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a3U])),8);
        bufp->chgCData(oldp+1396,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1397,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1398,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1399,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a4U])),8);
        bufp->chgCData(oldp+1400,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1401,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1402,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1403,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a5U])),8);
        bufp->chgCData(oldp+1404,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1405,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1406,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1407,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a6U])),8);
        bufp->chgCData(oldp+1408,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1409,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1410,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1411,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a7U])),8);
        bufp->chgCData(oldp+1412,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1413,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1414,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1415,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a8U])),8);
        bufp->chgCData(oldp+1416,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1417,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1418,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1419,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a9U])),8);
        bufp->chgCData(oldp+1420,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1421,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1422,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1a9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1423,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1aaU])),8);
        bufp->chgCData(oldp+1424,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1aaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1425,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1aaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1426,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1aaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1427,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1abU])),8);
        bufp->chgCData(oldp+1428,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1abU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1429,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1abU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1430,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1abU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1431,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1acU])),8);
        bufp->chgCData(oldp+1432,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1acU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1433,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1acU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1434,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1acU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1435,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1adU])),8);
        bufp->chgCData(oldp+1436,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1adU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1437,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1adU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1438,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1adU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1439,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1aeU])),8);
        bufp->chgCData(oldp+1440,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1aeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1441,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1aeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1442,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1aeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1443,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1afU])),8);
        bufp->chgCData(oldp+1444,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1afU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1445,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1afU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1446,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1afU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1447,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b0U])),8);
        bufp->chgCData(oldp+1448,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1449,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1450,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1451,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b1U])),8);
        bufp->chgCData(oldp+1452,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1453,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1454,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1455,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b2U])),8);
        bufp->chgCData(oldp+1456,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1457,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1458,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1459,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b3U])),8);
        bufp->chgCData(oldp+1460,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1461,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1462,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1463,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b4U])),8);
        bufp->chgCData(oldp+1464,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1465,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1466,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1467,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b5U])),8);
        bufp->chgCData(oldp+1468,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1469,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1470,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1471,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b6U])),8);
        bufp->chgCData(oldp+1472,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1473,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1474,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1475,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b7U])),8);
        bufp->chgCData(oldp+1476,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1477,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1478,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1479,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b8U])),8);
        bufp->chgCData(oldp+1480,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1481,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1482,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1483,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b9U])),8);
        bufp->chgCData(oldp+1484,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1485,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1486,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1b9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1487,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1baU])),8);
        bufp->chgCData(oldp+1488,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1baU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1489,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1baU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1490,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1baU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1491,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bbU])),8);
        bufp->chgCData(oldp+1492,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1493,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1494,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1495,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bcU])),8);
        bufp->chgCData(oldp+1496,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1497,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1498,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1499,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bdU])),8);
        bufp->chgCData(oldp+1500,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1501,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1502,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1503,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1beU])),8);
        bufp->chgCData(oldp+1504,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1beU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1505,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1beU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1506,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1beU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1507,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bfU])),8);
        bufp->chgCData(oldp+1508,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1509,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1510,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1bfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1511,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c0U])),8);
        bufp->chgCData(oldp+1512,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1513,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1514,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1515,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c1U])),8);
        bufp->chgCData(oldp+1516,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1517,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1518,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1519,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c2U])),8);
        bufp->chgCData(oldp+1520,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1521,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1522,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1523,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c3U])),8);
        bufp->chgCData(oldp+1524,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1525,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1526,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1527,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c4U])),8);
        bufp->chgCData(oldp+1528,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1529,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1530,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1531,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c5U])),8);
        bufp->chgCData(oldp+1532,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1533,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1534,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1535,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c6U])),8);
        bufp->chgCData(oldp+1536,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1537,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1538,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1539,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c7U])),8);
        bufp->chgCData(oldp+1540,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1541,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1542,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1543,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c8U])),8);
        bufp->chgCData(oldp+1544,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1545,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1546,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1547,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c9U])),8);
        bufp->chgCData(oldp+1548,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1549,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1550,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1c9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1551,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1caU])),8);
        bufp->chgCData(oldp+1552,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1caU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1553,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1caU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1554,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1caU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1555,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1cbU])),8);
        bufp->chgCData(oldp+1556,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1cbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1557,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1cbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1558,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1cbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1559,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ccU])),8);
        bufp->chgCData(oldp+1560,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ccU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1561,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ccU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1562,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ccU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1563,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1cdU])),8);
        bufp->chgCData(oldp+1564,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1cdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1565,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1cdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1566,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1cdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1567,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ceU])),8);
        bufp->chgCData(oldp+1568,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ceU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1569,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ceU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1570,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ceU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1571,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1cfU])),8);
        bufp->chgCData(oldp+1572,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1cfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1573,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1cfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1574,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1cfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1575,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d0U])),8);
        bufp->chgCData(oldp+1576,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1577,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1578,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1579,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d1U])),8);
        bufp->chgCData(oldp+1580,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1581,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1582,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1583,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d2U])),8);
        bufp->chgCData(oldp+1584,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1585,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1586,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1587,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d3U])),8);
        bufp->chgCData(oldp+1588,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1589,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1590,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1591,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d4U])),8);
        bufp->chgCData(oldp+1592,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1593,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1594,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1595,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d5U])),8);
        bufp->chgCData(oldp+1596,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1597,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1598,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1599,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d6U])),8);
        bufp->chgCData(oldp+1600,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1601,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1602,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1603,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d7U])),8);
        bufp->chgCData(oldp+1604,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1605,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1606,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1607,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d8U])),8);
        bufp->chgCData(oldp+1608,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1609,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1610,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1611,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d9U])),8);
        bufp->chgCData(oldp+1612,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1613,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1614,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1d9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1615,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1daU])),8);
        bufp->chgCData(oldp+1616,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1daU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1617,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1daU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1618,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1daU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1619,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1dbU])),8);
        bufp->chgCData(oldp+1620,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1dbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1621,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1dbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1622,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1dbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1623,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1dcU])),8);
        bufp->chgCData(oldp+1624,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1dcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1625,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1dcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1626,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1dcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1627,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ddU])),8);
        bufp->chgCData(oldp+1628,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ddU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1629,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ddU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1630,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ddU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1631,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1deU])),8);
        bufp->chgCData(oldp+1632,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1deU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1633,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1deU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1634,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1deU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1635,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1dfU])),8);
        bufp->chgCData(oldp+1636,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1dfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1637,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1dfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1638,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1dfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1639,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e0U])),8);
        bufp->chgCData(oldp+1640,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1641,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1642,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1643,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e1U])),8);
        bufp->chgCData(oldp+1644,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1645,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1646,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1647,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e2U])),8);
        bufp->chgCData(oldp+1648,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1649,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1650,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1651,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e3U])),8);
        bufp->chgCData(oldp+1652,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1653,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1654,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1655,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e4U])),8);
        bufp->chgCData(oldp+1656,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1657,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1658,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1659,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e5U])),8);
        bufp->chgCData(oldp+1660,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1661,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1662,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1663,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e6U])),8);
        bufp->chgCData(oldp+1664,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1665,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1666,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1667,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e7U])),8);
        bufp->chgCData(oldp+1668,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1669,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1670,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1671,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e8U])),8);
        bufp->chgCData(oldp+1672,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1673,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1674,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1675,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e9U])),8);
        bufp->chgCData(oldp+1676,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1677,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1678,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1e9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1679,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1eaU])),8);
        bufp->chgCData(oldp+1680,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1eaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1681,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1eaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1682,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1eaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1683,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ebU])),8);
        bufp->chgCData(oldp+1684,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ebU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1685,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ebU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1686,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ebU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1687,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ecU])),8);
        bufp->chgCData(oldp+1688,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ecU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1689,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ecU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1690,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ecU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1691,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1edU])),8);
        bufp->chgCData(oldp+1692,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1edU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1693,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1edU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1694,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1edU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1695,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1eeU])),8);
        bufp->chgCData(oldp+1696,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1eeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1697,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1eeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1698,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1eeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1699,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1efU])),8);
        bufp->chgCData(oldp+1700,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1efU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1701,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1efU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1702,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1efU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1703,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f0U])),8);
        bufp->chgCData(oldp+1704,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1705,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1706,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1707,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f1U])),8);
        bufp->chgCData(oldp+1708,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1709,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1710,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1711,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f2U])),8);
        bufp->chgCData(oldp+1712,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1713,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1714,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1715,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f3U])),8);
        bufp->chgCData(oldp+1716,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1717,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1718,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1719,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f4U])),8);
        bufp->chgCData(oldp+1720,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1721,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1722,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1723,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f5U])),8);
        bufp->chgCData(oldp+1724,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1725,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1726,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1727,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f6U])),8);
        bufp->chgCData(oldp+1728,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1729,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1730,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1731,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f7U])),8);
        bufp->chgCData(oldp+1732,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1733,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1734,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1735,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f8U])),8);
        bufp->chgCData(oldp+1736,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1737,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1738,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1739,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f9U])),8);
        bufp->chgCData(oldp+1740,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1741,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1742,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1f9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1743,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1faU])),8);
        bufp->chgCData(oldp+1744,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1faU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1745,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1faU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1746,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1faU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1747,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1fbU])),8);
        bufp->chgCData(oldp+1748,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1fbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1749,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1fbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1750,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1fbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1751,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1fcU])),8);
        bufp->chgCData(oldp+1752,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1fcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1753,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1fcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1754,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1fcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1755,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1fdU])),8);
        bufp->chgCData(oldp+1756,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1fdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1757,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1fdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1758,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1fdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1759,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1feU])),8);
        bufp->chgCData(oldp+1760,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1feU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1761,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1feU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1762,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1feU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1763,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ffU])),8);
        bufp->chgCData(oldp+1764,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ffU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1765,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ffU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1766,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x1ffU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1767,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x200U])),8);
        bufp->chgCData(oldp+1768,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x200U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1769,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x200U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1770,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x200U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1771,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x201U])),8);
        bufp->chgCData(oldp+1772,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x201U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1773,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x201U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1774,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x201U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1775,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x202U])),8);
        bufp->chgCData(oldp+1776,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x202U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1777,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x202U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1778,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x202U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1779,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x203U])),8);
        bufp->chgCData(oldp+1780,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x203U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1781,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x203U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1782,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x203U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1783,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x204U])),8);
        bufp->chgCData(oldp+1784,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x204U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1785,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x204U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1786,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x204U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1787,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x205U])),8);
        bufp->chgCData(oldp+1788,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x205U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1789,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x205U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1790,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x205U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1791,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x206U])),8);
        bufp->chgCData(oldp+1792,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x206U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1793,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x206U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1794,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x206U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1795,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x207U])),8);
        bufp->chgCData(oldp+1796,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x207U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1797,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x207U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1798,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x207U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1799,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x208U])),8);
        bufp->chgCData(oldp+1800,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x208U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1801,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x208U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1802,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x208U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1803,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x209U])),8);
        bufp->chgCData(oldp+1804,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x209U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1805,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x209U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1806,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x209U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1807,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20aU])),8);
        bufp->chgCData(oldp+1808,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1809,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1810,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1811,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20bU])),8);
        bufp->chgCData(oldp+1812,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1813,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1814,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1815,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20cU])),8);
        bufp->chgCData(oldp+1816,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1817,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1818,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1819,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20dU])),8);
        bufp->chgCData(oldp+1820,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1821,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1822,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1823,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20eU])),8);
        bufp->chgCData(oldp+1824,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1825,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1826,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1827,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20fU])),8);
        bufp->chgCData(oldp+1828,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1829,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1830,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x20fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1831,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x210U])),8);
        bufp->chgCData(oldp+1832,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x210U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1833,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x210U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1834,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x210U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1835,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x211U])),8);
        bufp->chgCData(oldp+1836,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x211U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1837,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x211U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1838,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x211U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1839,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x212U])),8);
        bufp->chgCData(oldp+1840,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x212U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1841,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x212U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1842,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x212U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1843,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x213U])),8);
        bufp->chgCData(oldp+1844,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x213U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1845,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x213U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1846,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x213U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1847,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x214U])),8);
        bufp->chgCData(oldp+1848,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x214U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1849,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x214U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1850,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x214U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1851,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x215U])),8);
        bufp->chgCData(oldp+1852,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x215U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1853,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x215U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1854,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x215U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1855,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x216U])),8);
        bufp->chgCData(oldp+1856,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x216U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1857,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x216U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1858,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x216U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1859,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x217U])),8);
        bufp->chgCData(oldp+1860,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x217U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1861,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x217U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1862,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x217U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1863,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x218U])),8);
        bufp->chgCData(oldp+1864,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x218U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1865,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x218U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1866,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x218U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1867,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x219U])),8);
        bufp->chgCData(oldp+1868,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x219U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1869,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x219U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1870,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x219U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1871,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21aU])),8);
        bufp->chgCData(oldp+1872,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1873,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1874,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1875,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21bU])),8);
        bufp->chgCData(oldp+1876,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1877,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1878,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1879,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21cU])),8);
        bufp->chgCData(oldp+1880,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1881,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1882,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1883,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21dU])),8);
        bufp->chgCData(oldp+1884,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1885,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1886,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1887,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21eU])),8);
        bufp->chgCData(oldp+1888,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1889,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1890,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1891,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21fU])),8);
        bufp->chgCData(oldp+1892,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1893,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1894,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x21fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1895,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x220U])),8);
        bufp->chgCData(oldp+1896,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x220U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1897,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x220U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1898,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x220U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1899,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x221U])),8);
        bufp->chgCData(oldp+1900,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x221U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1901,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x221U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1902,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x221U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1903,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x222U])),8);
        bufp->chgCData(oldp+1904,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x222U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1905,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x222U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1906,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x222U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1907,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x223U])),8);
        bufp->chgCData(oldp+1908,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x223U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1909,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x223U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1910,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x223U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1911,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x224U])),8);
        bufp->chgCData(oldp+1912,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x224U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1913,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x224U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1914,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x224U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1915,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x225U])),8);
        bufp->chgCData(oldp+1916,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x225U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1917,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x225U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1918,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x225U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1919,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x226U])),8);
        bufp->chgCData(oldp+1920,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x226U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1921,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x226U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1922,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x226U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1923,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x227U])),8);
        bufp->chgCData(oldp+1924,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x227U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1925,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x227U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1926,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x227U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1927,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x228U])),8);
        bufp->chgCData(oldp+1928,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x228U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1929,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x228U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1930,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x228U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1931,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x229U])),8);
        bufp->chgCData(oldp+1932,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x229U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1933,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x229U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1934,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x229U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1935,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22aU])),8);
        bufp->chgCData(oldp+1936,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1937,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1938,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1939,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22bU])),8);
        bufp->chgCData(oldp+1940,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1941,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1942,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1943,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22cU])),8);
        bufp->chgCData(oldp+1944,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1945,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1946,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1947,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22dU])),8);
        bufp->chgCData(oldp+1948,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1949,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1950,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1951,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22eU])),8);
        bufp->chgCData(oldp+1952,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1953,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1954,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1955,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22fU])),8);
        bufp->chgCData(oldp+1956,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1957,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1958,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x22fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1959,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x230U])),8);
        bufp->chgCData(oldp+1960,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x230U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1961,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x230U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1962,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x230U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1963,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x231U])),8);
        bufp->chgCData(oldp+1964,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x231U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1965,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x231U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1966,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x231U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1967,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x232U])),8);
        bufp->chgCData(oldp+1968,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x232U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1969,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x232U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1970,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x232U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1971,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x233U])),8);
        bufp->chgCData(oldp+1972,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x233U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1973,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x233U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1974,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x233U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1975,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x234U])),8);
        bufp->chgCData(oldp+1976,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x234U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1977,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x234U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1978,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x234U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1979,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x235U])),8);
        bufp->chgCData(oldp+1980,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x235U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1981,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x235U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1982,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x235U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1983,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x236U])),8);
        bufp->chgCData(oldp+1984,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x236U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1985,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x236U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1986,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x236U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1987,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x237U])),8);
        bufp->chgCData(oldp+1988,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x237U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1989,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x237U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1990,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x237U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1991,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x238U])),8);
        bufp->chgCData(oldp+1992,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x238U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1993,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x238U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1994,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x238U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1995,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x239U])),8);
        bufp->chgCData(oldp+1996,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x239U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+1997,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x239U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+1998,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x239U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+1999,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23aU])),8);
        bufp->chgCData(oldp+2000,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2001,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2002,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2003,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23bU])),8);
        bufp->chgCData(oldp+2004,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2005,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2006,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2007,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23cU])),8);
        bufp->chgCData(oldp+2008,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2009,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2010,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2011,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23dU])),8);
        bufp->chgCData(oldp+2012,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2013,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2014,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2015,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23eU])),8);
        bufp->chgCData(oldp+2016,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2017,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2018,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2019,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23fU])),8);
        bufp->chgCData(oldp+2020,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2021,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2022,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x23fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2023,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x240U])),8);
        bufp->chgCData(oldp+2024,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x240U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2025,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x240U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2026,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x240U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2027,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x241U])),8);
        bufp->chgCData(oldp+2028,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x241U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2029,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x241U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2030,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x241U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2031,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x242U])),8);
        bufp->chgCData(oldp+2032,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x242U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2033,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x242U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2034,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x242U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2035,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x243U])),8);
        bufp->chgCData(oldp+2036,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x243U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2037,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x243U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2038,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x243U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2039,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x244U])),8);
        bufp->chgCData(oldp+2040,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x244U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2041,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x244U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2042,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x244U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2043,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x245U])),8);
        bufp->chgCData(oldp+2044,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x245U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2045,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x245U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2046,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x245U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2047,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x246U])),8);
        bufp->chgCData(oldp+2048,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x246U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2049,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x246U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2050,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x246U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2051,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x247U])),8);
        bufp->chgCData(oldp+2052,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x247U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2053,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x247U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2054,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x247U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2055,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x248U])),8);
        bufp->chgCData(oldp+2056,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x248U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2057,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x248U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2058,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x248U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2059,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x249U])),8);
        bufp->chgCData(oldp+2060,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x249U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2061,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x249U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2062,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x249U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2063,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24aU])),8);
        bufp->chgCData(oldp+2064,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2065,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2066,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2067,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24bU])),8);
        bufp->chgCData(oldp+2068,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2069,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2070,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2071,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24cU])),8);
        bufp->chgCData(oldp+2072,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2073,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2074,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2075,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24dU])),8);
        bufp->chgCData(oldp+2076,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2077,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2078,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2079,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24eU])),8);
        bufp->chgCData(oldp+2080,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2081,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2082,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2083,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24fU])),8);
        bufp->chgCData(oldp+2084,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2085,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2086,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x24fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2087,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x250U])),8);
        bufp->chgCData(oldp+2088,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x250U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2089,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x250U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2090,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x250U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2091,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x251U])),8);
        bufp->chgCData(oldp+2092,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x251U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2093,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x251U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2094,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x251U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2095,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x252U])),8);
        bufp->chgCData(oldp+2096,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x252U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2097,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x252U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2098,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x252U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2099,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x253U])),8);
        bufp->chgCData(oldp+2100,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x253U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2101,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x253U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2102,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x253U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2103,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x254U])),8);
        bufp->chgCData(oldp+2104,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x254U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2105,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x254U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2106,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x254U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2107,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x255U])),8);
        bufp->chgCData(oldp+2108,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x255U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2109,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x255U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2110,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x255U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2111,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x256U])),8);
        bufp->chgCData(oldp+2112,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x256U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2113,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x256U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2114,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x256U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2115,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x257U])),8);
        bufp->chgCData(oldp+2116,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x257U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2117,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x257U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2118,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x257U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2119,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x258U])),8);
        bufp->chgCData(oldp+2120,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x258U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2121,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x258U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2122,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x258U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2123,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x259U])),8);
        bufp->chgCData(oldp+2124,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x259U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2125,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x259U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2126,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x259U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2127,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25aU])),8);
        bufp->chgCData(oldp+2128,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2129,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2130,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2131,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25bU])),8);
        bufp->chgCData(oldp+2132,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2133,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2134,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2135,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25cU])),8);
        bufp->chgCData(oldp+2136,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2137,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2138,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2139,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25dU])),8);
        bufp->chgCData(oldp+2140,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2141,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2142,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2143,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25eU])),8);
        bufp->chgCData(oldp+2144,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2145,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2146,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2147,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25fU])),8);
        bufp->chgCData(oldp+2148,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2149,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2150,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x25fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2151,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x260U])),8);
        bufp->chgCData(oldp+2152,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x260U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2153,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x260U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2154,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x260U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2155,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x261U])),8);
        bufp->chgCData(oldp+2156,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x261U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2157,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x261U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2158,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x261U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2159,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x262U])),8);
        bufp->chgCData(oldp+2160,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x262U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2161,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x262U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2162,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x262U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2163,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x263U])),8);
        bufp->chgCData(oldp+2164,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x263U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2165,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x263U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2166,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x263U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2167,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x264U])),8);
        bufp->chgCData(oldp+2168,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x264U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2169,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x264U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2170,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x264U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2171,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x265U])),8);
        bufp->chgCData(oldp+2172,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x265U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2173,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x265U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2174,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x265U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2175,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x266U])),8);
        bufp->chgCData(oldp+2176,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x266U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2177,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x266U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2178,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x266U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2179,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x267U])),8);
        bufp->chgCData(oldp+2180,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x267U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2181,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x267U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2182,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x267U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2183,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x268U])),8);
        bufp->chgCData(oldp+2184,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x268U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2185,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x268U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2186,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x268U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2187,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x269U])),8);
        bufp->chgCData(oldp+2188,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x269U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2189,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x269U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2190,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x269U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2191,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26aU])),8);
        bufp->chgCData(oldp+2192,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2193,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2194,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2195,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26bU])),8);
        bufp->chgCData(oldp+2196,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2197,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2198,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2199,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26cU])),8);
        bufp->chgCData(oldp+2200,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2201,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2202,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2203,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26dU])),8);
        bufp->chgCData(oldp+2204,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2205,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2206,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2207,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26eU])),8);
        bufp->chgCData(oldp+2208,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2209,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2210,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2211,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26fU])),8);
        bufp->chgCData(oldp+2212,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2213,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2214,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x26fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2215,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x270U])),8);
        bufp->chgCData(oldp+2216,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x270U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2217,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x270U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2218,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x270U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2219,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x271U])),8);
        bufp->chgCData(oldp+2220,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x271U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2221,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x271U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2222,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x271U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2223,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x272U])),8);
        bufp->chgCData(oldp+2224,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x272U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2225,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x272U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2226,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x272U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2227,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x273U])),8);
        bufp->chgCData(oldp+2228,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x273U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2229,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x273U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2230,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x273U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2231,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x274U])),8);
        bufp->chgCData(oldp+2232,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x274U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2233,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x274U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2234,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x274U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2235,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x275U])),8);
        bufp->chgCData(oldp+2236,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x275U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2237,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x275U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2238,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x275U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2239,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x276U])),8);
        bufp->chgCData(oldp+2240,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x276U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2241,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x276U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2242,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x276U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2243,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x277U])),8);
        bufp->chgCData(oldp+2244,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x277U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2245,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x277U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2246,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x277U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2247,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x278U])),8);
        bufp->chgCData(oldp+2248,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x278U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2249,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x278U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2250,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x278U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2251,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x279U])),8);
        bufp->chgCData(oldp+2252,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x279U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2253,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x279U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2254,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x279U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2255,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27aU])),8);
        bufp->chgCData(oldp+2256,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2257,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2258,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2259,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27bU])),8);
        bufp->chgCData(oldp+2260,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2261,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2262,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2263,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27cU])),8);
        bufp->chgCData(oldp+2264,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2265,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2266,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2267,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27dU])),8);
        bufp->chgCData(oldp+2268,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2269,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2270,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2271,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27eU])),8);
        bufp->chgCData(oldp+2272,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2273,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2274,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2275,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27fU])),8);
        bufp->chgCData(oldp+2276,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2277,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2278,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x27fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2279,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x280U])),8);
        bufp->chgCData(oldp+2280,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x280U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2281,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x280U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2282,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x280U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2283,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x281U])),8);
        bufp->chgCData(oldp+2284,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x281U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2285,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x281U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2286,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x281U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2287,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x282U])),8);
        bufp->chgCData(oldp+2288,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x282U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2289,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x282U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2290,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x282U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2291,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x283U])),8);
        bufp->chgCData(oldp+2292,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x283U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2293,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x283U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2294,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x283U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2295,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x284U])),8);
        bufp->chgCData(oldp+2296,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x284U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2297,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x284U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2298,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x284U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2299,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x285U])),8);
        bufp->chgCData(oldp+2300,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x285U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2301,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x285U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2302,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x285U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2303,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x286U])),8);
        bufp->chgCData(oldp+2304,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x286U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2305,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x286U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2306,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x286U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2307,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x287U])),8);
        bufp->chgCData(oldp+2308,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x287U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2309,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x287U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2310,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x287U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2311,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x288U])),8);
        bufp->chgCData(oldp+2312,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x288U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2313,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x288U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2314,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x288U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2315,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x289U])),8);
        bufp->chgCData(oldp+2316,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x289U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2317,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x289U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2318,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x289U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2319,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28aU])),8);
        bufp->chgCData(oldp+2320,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2321,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2322,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2323,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28bU])),8);
        bufp->chgCData(oldp+2324,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2325,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2326,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2327,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28cU])),8);
        bufp->chgCData(oldp+2328,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2329,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2330,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2331,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28dU])),8);
        bufp->chgCData(oldp+2332,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2333,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2334,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2335,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28eU])),8);
        bufp->chgCData(oldp+2336,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2337,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2338,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2339,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28fU])),8);
        bufp->chgCData(oldp+2340,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2341,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2342,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x28fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2343,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x290U])),8);
        bufp->chgCData(oldp+2344,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x290U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2345,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x290U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2346,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x290U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2347,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x291U])),8);
        bufp->chgCData(oldp+2348,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x291U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2349,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x291U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2350,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x291U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2351,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x292U])),8);
        bufp->chgCData(oldp+2352,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x292U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2353,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x292U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2354,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x292U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2355,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x293U])),8);
        bufp->chgCData(oldp+2356,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x293U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2357,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x293U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2358,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x293U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2359,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x294U])),8);
        bufp->chgCData(oldp+2360,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x294U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2361,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x294U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2362,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x294U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2363,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x295U])),8);
        bufp->chgCData(oldp+2364,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x295U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2365,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x295U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2366,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x295U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2367,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x296U])),8);
        bufp->chgCData(oldp+2368,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x296U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2369,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x296U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2370,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x296U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2371,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x297U])),8);
        bufp->chgCData(oldp+2372,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x297U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2373,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x297U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2374,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x297U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2375,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x298U])),8);
        bufp->chgCData(oldp+2376,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x298U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2377,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x298U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2378,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x298U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2379,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x299U])),8);
        bufp->chgCData(oldp+2380,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x299U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2381,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x299U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2382,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x299U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2383,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29aU])),8);
        bufp->chgCData(oldp+2384,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29aU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2385,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29aU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2386,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29aU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2387,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29bU])),8);
        bufp->chgCData(oldp+2388,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29bU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2389,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29bU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2390,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29bU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2391,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29cU])),8);
        bufp->chgCData(oldp+2392,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29cU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2393,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29cU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2394,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29cU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2395,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29dU])),8);
        bufp->chgCData(oldp+2396,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29dU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2397,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29dU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2398,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29dU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2399,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29eU])),8);
        bufp->chgCData(oldp+2400,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29eU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2401,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29eU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2402,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29eU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2403,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29fU])),8);
        bufp->chgCData(oldp+2404,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29fU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2405,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29fU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2406,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x29fU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2407,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a1U])),8);
        bufp->chgCData(oldp+2408,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2409,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2410,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2411,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a2U])),8);
        bufp->chgCData(oldp+2412,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2413,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2414,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2415,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a3U])),8);
        bufp->chgCData(oldp+2416,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2417,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2418,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2419,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a4U])),8);
        bufp->chgCData(oldp+2420,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2421,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2422,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2423,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a5U])),8);
        bufp->chgCData(oldp+2424,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2425,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2426,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2427,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a6U])),8);
        bufp->chgCData(oldp+2428,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2429,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2430,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2431,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a7U])),8);
        bufp->chgCData(oldp+2432,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2433,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2434,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2435,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a8U])),8);
        bufp->chgCData(oldp+2436,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2437,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2438,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2439,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a9U])),8);
        bufp->chgCData(oldp+2440,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2441,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2442,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2a9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2443,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2aaU])),8);
        bufp->chgCData(oldp+2444,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2aaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2445,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2aaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2446,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2aaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2447,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2abU])),8);
        bufp->chgCData(oldp+2448,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2abU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2449,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2abU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2450,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2abU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2451,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2acU])),8);
        bufp->chgCData(oldp+2452,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2acU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2453,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2acU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2454,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2acU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2455,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2adU])),8);
        bufp->chgCData(oldp+2456,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2adU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2457,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2adU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2458,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2adU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2459,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2aeU])),8);
        bufp->chgCData(oldp+2460,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2aeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2461,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2aeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2462,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2aeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2463,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2afU])),8);
        bufp->chgCData(oldp+2464,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2afU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2465,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2afU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2466,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2afU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2467,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b0U])),8);
        bufp->chgCData(oldp+2468,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2469,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2470,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2471,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b1U])),8);
        bufp->chgCData(oldp+2472,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2473,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2474,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2475,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b2U])),8);
        bufp->chgCData(oldp+2476,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2477,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2478,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2479,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b3U])),8);
        bufp->chgCData(oldp+2480,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2481,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2482,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2483,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b4U])),8);
        bufp->chgCData(oldp+2484,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2485,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2486,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2487,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b5U])),8);
        bufp->chgCData(oldp+2488,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2489,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2490,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2491,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b6U])),8);
        bufp->chgCData(oldp+2492,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2493,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2494,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2495,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b7U])),8);
        bufp->chgCData(oldp+2496,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2497,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2498,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2499,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b8U])),8);
        bufp->chgCData(oldp+2500,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2501,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2502,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2503,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b9U])),8);
        bufp->chgCData(oldp+2504,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2505,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2506,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2b9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2507,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2baU])),8);
        bufp->chgCData(oldp+2508,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2baU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2509,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2baU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2510,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2baU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2511,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bbU])),8);
        bufp->chgCData(oldp+2512,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2513,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2514,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2515,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bcU])),8);
        bufp->chgCData(oldp+2516,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2517,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2518,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2519,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bdU])),8);
        bufp->chgCData(oldp+2520,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2521,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2522,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2523,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2beU])),8);
        bufp->chgCData(oldp+2524,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2beU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2525,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2beU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2526,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2beU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2527,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bfU])),8);
        bufp->chgCData(oldp+2528,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2529,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2530,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2bfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2531,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c0U])),8);
        bufp->chgCData(oldp+2532,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2533,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2534,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2535,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c1U])),8);
        bufp->chgCData(oldp+2536,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2537,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2538,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2539,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c2U])),8);
        bufp->chgCData(oldp+2540,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2541,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2542,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2543,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c3U])),8);
        bufp->chgCData(oldp+2544,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2545,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2546,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2547,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c4U])),8);
        bufp->chgCData(oldp+2548,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2549,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2550,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2551,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c5U])),8);
        bufp->chgCData(oldp+2552,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2553,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2554,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2555,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c6U])),8);
        bufp->chgCData(oldp+2556,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2557,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2558,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2559,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c7U])),8);
        bufp->chgCData(oldp+2560,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2561,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2562,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2563,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c8U])),8);
        bufp->chgCData(oldp+2564,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2565,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2566,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2567,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c9U])),8);
        bufp->chgCData(oldp+2568,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2569,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2570,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2c9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2571,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2caU])),8);
        bufp->chgCData(oldp+2572,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2caU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2573,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2caU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2574,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2caU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2575,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2cbU])),8);
        bufp->chgCData(oldp+2576,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2cbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2577,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2cbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2578,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2cbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2579,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ccU])),8);
        bufp->chgCData(oldp+2580,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ccU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2581,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ccU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2582,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ccU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2583,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2cdU])),8);
        bufp->chgCData(oldp+2584,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2cdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2585,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2cdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2586,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2cdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2587,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ceU])),8);
        bufp->chgCData(oldp+2588,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ceU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2589,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ceU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2590,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ceU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2591,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2cfU])),8);
        bufp->chgCData(oldp+2592,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2cfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2593,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2cfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2594,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2cfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2595,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d0U])),8);
        bufp->chgCData(oldp+2596,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2597,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2598,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2599,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d1U])),8);
        bufp->chgCData(oldp+2600,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2601,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2602,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2603,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d2U])),8);
        bufp->chgCData(oldp+2604,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2605,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2606,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2607,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d3U])),8);
        bufp->chgCData(oldp+2608,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2609,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2610,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2611,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d4U])),8);
        bufp->chgCData(oldp+2612,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2613,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2614,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2615,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d5U])),8);
        bufp->chgCData(oldp+2616,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2617,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2618,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2619,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d6U])),8);
        bufp->chgCData(oldp+2620,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2621,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2622,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2623,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d7U])),8);
        bufp->chgCData(oldp+2624,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2625,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2626,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2627,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d8U])),8);
        bufp->chgCData(oldp+2628,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2629,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2630,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2631,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d9U])),8);
        bufp->chgCData(oldp+2632,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2633,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2634,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2d9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2635,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2daU])),8);
        bufp->chgCData(oldp+2636,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2daU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2637,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2daU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2638,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2daU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2639,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2dbU])),8);
        bufp->chgCData(oldp+2640,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2dbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2641,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2dbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2642,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2dbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2643,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2dcU])),8);
        bufp->chgCData(oldp+2644,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2dcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2645,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2dcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2646,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2dcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2647,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ddU])),8);
        bufp->chgCData(oldp+2648,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ddU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2649,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ddU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2650,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ddU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2651,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2deU])),8);
        bufp->chgCData(oldp+2652,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2deU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2653,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2deU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2654,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2deU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2655,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2dfU])),8);
        bufp->chgCData(oldp+2656,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2dfU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2657,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2dfU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2658,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2dfU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2659,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e0U])),8);
        bufp->chgCData(oldp+2660,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2661,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2662,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2663,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e1U])),8);
        bufp->chgCData(oldp+2664,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2665,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2666,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2667,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e2U])),8);
        bufp->chgCData(oldp+2668,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2669,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2670,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2671,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e3U])),8);
        bufp->chgCData(oldp+2672,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2673,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2674,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2675,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e4U])),8);
        bufp->chgCData(oldp+2676,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2677,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2678,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2679,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e5U])),8);
        bufp->chgCData(oldp+2680,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2681,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2682,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2683,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e6U])),8);
        bufp->chgCData(oldp+2684,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2685,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2686,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2687,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e7U])),8);
        bufp->chgCData(oldp+2688,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2689,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2690,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2691,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e8U])),8);
        bufp->chgCData(oldp+2692,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2693,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2694,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2695,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e9U])),8);
        bufp->chgCData(oldp+2696,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2697,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2698,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2e9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2699,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2eaU])),8);
        bufp->chgCData(oldp+2700,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2eaU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2701,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2eaU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2702,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2eaU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2703,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ebU])),8);
        bufp->chgCData(oldp+2704,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ebU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2705,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ebU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2706,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ebU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2707,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ecU])),8);
        bufp->chgCData(oldp+2708,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ecU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2709,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ecU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2710,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ecU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2711,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2edU])),8);
        bufp->chgCData(oldp+2712,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2edU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2713,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2edU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2714,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2edU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2715,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2eeU])),8);
        bufp->chgCData(oldp+2716,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2eeU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2717,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2eeU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2718,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2eeU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2719,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2efU])),8);
        bufp->chgCData(oldp+2720,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2efU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2721,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2efU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2722,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2efU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2723,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f0U])),8);
        bufp->chgCData(oldp+2724,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f0U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2725,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f0U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2726,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f0U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2727,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f1U])),8);
        bufp->chgCData(oldp+2728,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f1U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2729,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f1U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2730,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f1U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2731,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f2U])),8);
        bufp->chgCData(oldp+2732,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f2U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2733,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f2U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2734,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f2U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2735,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f3U])),8);
        bufp->chgCData(oldp+2736,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f3U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2737,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f3U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2738,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f3U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2739,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f4U])),8);
        bufp->chgCData(oldp+2740,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f4U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2741,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f4U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2742,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f4U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2743,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f5U])),8);
        bufp->chgCData(oldp+2744,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f5U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2745,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f5U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2746,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f5U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2747,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f6U])),8);
        bufp->chgCData(oldp+2748,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f6U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2749,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f6U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2750,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f6U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2751,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f7U])),8);
        bufp->chgCData(oldp+2752,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f7U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2753,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f7U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2754,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f7U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2755,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f8U])),8);
        bufp->chgCData(oldp+2756,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f8U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2757,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f8U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2758,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f8U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2759,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f9U])),8);
        bufp->chgCData(oldp+2760,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f9U] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2761,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f9U] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2762,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2f9U] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2763,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2faU])),8);
        bufp->chgCData(oldp+2764,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2faU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2765,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2faU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2766,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2faU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2767,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2fbU])),8);
        bufp->chgCData(oldp+2768,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2fbU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2769,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2fbU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2770,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2fbU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2771,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2fcU])),8);
        bufp->chgCData(oldp+2772,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2fcU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2773,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2fcU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2774,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2fcU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2775,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2fdU])),8);
        bufp->chgCData(oldp+2776,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2fdU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2777,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2fdU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2778,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2fdU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2779,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2feU])),8);
        bufp->chgCData(oldp+2780,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2feU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2781,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2feU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2782,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2feU] 
                                   >> 0x18U)),8);
        bufp->chgCData(oldp+2783,((0xffU & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ffU])),8);
        bufp->chgCData(oldp+2784,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ffU] 
                                            >> 8U))),8);
        bufp->chgCData(oldp+2785,((0xffU & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ffU] 
                                            >> 0x10U))),8);
        bufp->chgCData(oldp+2786,((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__sel[0x2ffU] 
                                   >> 0x18U)),8);
        bufp->chgIData(oldp+2787,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+2788,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+2789,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        bufp->chgIData(oldp+2790,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__firstk_inst__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__l),32);
        bufp->chgCData(oldp+2791,((0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))),4);
        __Vtemp_1[0U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][0U];
        __Vtemp_1[1U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][1U];
        __Vtemp_1[2U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][2U];
        __Vtemp_1[3U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][3U];
        __Vtemp_1[4U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][4U];
        __Vtemp_1[5U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][5U];
        __Vtemp_1[6U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][6U];
        __Vtemp_1[7U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][7U];
        __Vtemp_1[8U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][8U];
        __Vtemp_1[9U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][9U];
        __Vtemp_1[0xaU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][0xaU];
        __Vtemp_1[0xbU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][0xbU];
        __Vtemp_1[0xcU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][0xcU];
        __Vtemp_1[0xdU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][0xdU];
        __Vtemp_1[0xeU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel
            [(0xfU & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__redir_brid))]][0xeU];
        bufp->chgWData(oldp+2792,(__Vtemp_1),455);
        __Vtemp_3[0U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0xfU] 
                             << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0xeU] 
                                          >> 7U)));
        __Vtemp_3[1U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[1U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x10U] 
                             << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0xfU] 
                                          >> 7U)));
        __Vtemp_3[2U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[2U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x11U] 
                             << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x10U] 
                                          >> 7U)));
        __Vtemp_3[3U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[3U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x12U] 
                             << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x11U] 
                                          >> 7U)));
        __Vtemp_3[4U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[4U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x13U] 
                             << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x12U] 
                                          >> 7U)));
        __Vtemp_3[5U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[5U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x14U] 
                             << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x13U] 
                                          >> 7U)));
        __Vtemp_3[6U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[6U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x15U] 
                             << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x14U] 
                                          >> 7U)));
        __Vtemp_3[7U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[7U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x16U] 
                             << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x15U] 
                                          >> 7U)));
        __Vtemp_3[8U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[8U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x17U] 
                             << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x16U] 
                                          >> 7U)));
        __Vtemp_3[9U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[9U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x18U] 
                             << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x17U] 
                                          >> 7U)));
        __Vtemp_3[0xaU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xaU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x19U] 
                               << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x18U] 
                                            >> 7U)));
        __Vtemp_3[0xbU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xbU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1aU] 
                               << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x19U] 
                                            >> 7U)));
        __Vtemp_3[0xcU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xcU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1bU] 
                               << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1aU] 
                                            >> 7U)));
        __Vtemp_3[0xdU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xdU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1cU] 
                               << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1bU] 
                                            >> 7U)));
        __Vtemp_3[0xeU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xeU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1dU] 
                               << 0x19U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1cU] 
                                            >> 7U)));
        bufp->chgWData(oldp+2807,(__Vtemp_3),455);
        __Vtemp_5[0U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1dU] 
                             << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1cU] 
                                          >> 0xeU)));
        __Vtemp_5[1U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[1U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1eU] 
                             << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1dU] 
                                          >> 0xeU)));
        __Vtemp_5[2U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[2U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1fU] 
                             << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1eU] 
                                          >> 0xeU)));
        __Vtemp_5[3U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[3U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x20U] 
                             << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x1fU] 
                                          >> 0xeU)));
        __Vtemp_5[4U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[4U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x21U] 
                             << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x20U] 
                                          >> 0xeU)));
        __Vtemp_5[5U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[5U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x22U] 
                             << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x21U] 
                                          >> 0xeU)));
        __Vtemp_5[6U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[6U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x23U] 
                             << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x22U] 
                                          >> 0xeU)));
        __Vtemp_5[7U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[7U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x24U] 
                             << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x23U] 
                                          >> 0xeU)));
        __Vtemp_5[8U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[8U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x25U] 
                             << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x24U] 
                                          >> 0xeU)));
        __Vtemp_5[9U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[9U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x26U] 
                             << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x25U] 
                                          >> 0xeU)));
        __Vtemp_5[0xaU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xaU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x27U] 
                               << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x26U] 
                                            >> 0xeU)));
        __Vtemp_5[0xbU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xbU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x28U] 
                               << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x27U] 
                                            >> 0xeU)));
        __Vtemp_5[0xcU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xcU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x29U] 
                               << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x28U] 
                                            >> 0xeU)));
        __Vtemp_5[0xdU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xdU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2aU] 
                               << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x29U] 
                                            >> 0xeU)));
        __Vtemp_5[0xeU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xeU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2bU] 
                               << 0x12U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2aU] 
                                            >> 0xeU)));
        bufp->chgWData(oldp+2822,(__Vtemp_5),455);
        __Vtemp_7[0U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2bU] 
                             << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2aU] 
                                         >> 0x15U)));
        __Vtemp_7[1U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[1U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2cU] 
                             << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2bU] 
                                         >> 0x15U)));
        __Vtemp_7[2U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[2U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2dU] 
                             << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2cU] 
                                         >> 0x15U)));
        __Vtemp_7[3U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[3U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2eU] 
                             << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2dU] 
                                         >> 0x15U)));
        __Vtemp_7[4U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[4U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2fU] 
                             << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2eU] 
                                         >> 0x15U)));
        __Vtemp_7[5U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[5U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x30U] 
                             << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x2fU] 
                                         >> 0x15U)));
        __Vtemp_7[6U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[6U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x31U] 
                             << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x30U] 
                                         >> 0x15U)));
        __Vtemp_7[7U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[7U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x32U] 
                             << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x31U] 
                                         >> 0x15U)));
        __Vtemp_7[8U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[8U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x33U] 
                             << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x32U] 
                                         >> 0x15U)));
        __Vtemp_7[9U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[9U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x34U] 
                             << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x33U] 
                                         >> 0x15U)));
        __Vtemp_7[0xaU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xaU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x35U] 
                               << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x34U] 
                                           >> 0x15U)));
        __Vtemp_7[0xbU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xbU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x36U] 
                               << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x35U] 
                                           >> 0x15U)));
        __Vtemp_7[0xcU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xcU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x37U] 
                               << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x36U] 
                                           >> 0x15U)));
        __Vtemp_7[0xdU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xdU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x38U] 
                               << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x37U] 
                                           >> 0x15U)));
        __Vtemp_7[0xeU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xeU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x39U] 
                               << 0xbU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x38U] 
                                           >> 0x15U)));
        bufp->chgWData(oldp+2837,(__Vtemp_7),455);
        __Vtemp_9[0U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x39U] 
                             << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x38U] 
                                       >> 0x1cU)));
        __Vtemp_9[1U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[1U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x3aU] 
                             << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x39U] 
                                       >> 0x1cU)));
        __Vtemp_9[2U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[2U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x3bU] 
                             << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x3aU] 
                                       >> 0x1cU)));
        __Vtemp_9[3U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[3U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x3cU] 
                             << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x3bU] 
                                       >> 0x1cU)));
        __Vtemp_9[4U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[4U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x3dU] 
                             << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x3cU] 
                                       >> 0x1cU)));
        __Vtemp_9[5U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[5U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x3eU] 
                             << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x3dU] 
                                       >> 0x1cU)));
        __Vtemp_9[6U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[6U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x3fU] 
                             << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x3eU] 
                                       >> 0x1cU)));
        __Vtemp_9[7U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[7U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x40U] 
                             << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x3fU] 
                                       >> 0x1cU)));
        __Vtemp_9[8U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[8U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x41U] 
                             << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x40U] 
                                       >> 0x1cU)));
        __Vtemp_9[9U] = (Vvcore__ConstPool__CONST_h9eacdb66_0[9U] 
                         & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x42U] 
                             << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x41U] 
                                       >> 0x1cU)));
        __Vtemp_9[0xaU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xaU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x43U] 
                               << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x42U] 
                                         >> 0x1cU)));
        __Vtemp_9[0xbU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xbU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x44U] 
                               << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x43U] 
                                         >> 0x1cU)));
        __Vtemp_9[0xcU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xcU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x45U] 
                               << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x44U] 
                                         >> 0x1cU)));
        __Vtemp_9[0xdU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xdU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x46U] 
                               << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x45U] 
                                         >> 0x1cU)));
        __Vtemp_9[0xeU] = (Vvcore__ConstPool__CONST_h9eacdb66_0[0xeU] 
                           & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x47U] 
                               << 4U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_step[0x46U] 
                                         >> 0x1cU)));
        bufp->chgWData(oldp+2852,(__Vtemp_9),455);
        bufp->chgCData(oldp+2867,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[0]),2);
        bufp->chgCData(oldp+2868,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[1]),2);
        bufp->chgCData(oldp+2869,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[2]),2);
        bufp->chgCData(oldp+2870,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[3]),2);
        bufp->chgCData(oldp+2871,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[4]),2);
        bufp->chgCData(oldp+2872,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[5]),2);
        bufp->chgCData(oldp+2873,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[6]),2);
        bufp->chgCData(oldp+2874,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[7]),2);
        bufp->chgCData(oldp+2875,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[8]),2);
        bufp->chgCData(oldp+2876,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[9]),2);
        bufp->chgCData(oldp+2877,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[10]),2);
        bufp->chgCData(oldp+2878,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[11]),2);
        bufp->chgCData(oldp+2879,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[12]),2);
        bufp->chgCData(oldp+2880,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[13]),2);
        bufp->chgCData(oldp+2881,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[14]),2);
        bufp->chgCData(oldp+2882,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__sel[15]),2);
        bufp->chgWData(oldp+2883,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[0]),455);
        bufp->chgWData(oldp+2898,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[1]),455);
        bufp->chgWData(oldp+2913,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[2]),455);
        bufp->chgWData(oldp+2928,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[3]),455);
        bufp->chgWData(oldp+2943,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[4]),455);
        bufp->chgWData(oldp+2958,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[5]),455);
        bufp->chgWData(oldp+2973,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[6]),455);
        bufp->chgWData(oldp+2988,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[7]),455);
        bufp->chgWData(oldp+3003,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[8]),455);
        bufp->chgWData(oldp+3018,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[9]),455);
        bufp->chgWData(oldp+3033,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[10]),455);
        bufp->chgWData(oldp+3048,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[11]),455);
        bufp->chgWData(oldp+3063,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[12]),455);
        bufp->chgWData(oldp+3078,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[13]),455);
        bufp->chgWData(oldp+3093,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[14]),455);
        bufp->chgWData(oldp+3108,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__0__KET____DOT__regs[15]),455);
        bufp->chgWData(oldp+3123,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[0]),455);
        bufp->chgWData(oldp+3138,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[1]),455);
        bufp->chgWData(oldp+3153,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[2]),455);
        bufp->chgWData(oldp+3168,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[3]),455);
        bufp->chgWData(oldp+3183,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[4]),455);
        bufp->chgWData(oldp+3198,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[5]),455);
        bufp->chgWData(oldp+3213,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[6]),455);
        bufp->chgWData(oldp+3228,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[7]),455);
        bufp->chgWData(oldp+3243,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[8]),455);
        bufp->chgWData(oldp+3258,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[9]),455);
        bufp->chgWData(oldp+3273,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[10]),455);
        bufp->chgWData(oldp+3288,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[11]),455);
        bufp->chgWData(oldp+3303,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[12]),455);
        bufp->chgWData(oldp+3318,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[13]),455);
        bufp->chgWData(oldp+3333,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[14]),455);
        bufp->chgWData(oldp+3348,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__1__KET____DOT__regs[15]),455);
        bufp->chgWData(oldp+3363,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[0]),455);
        bufp->chgWData(oldp+3378,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[1]),455);
        bufp->chgWData(oldp+3393,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[2]),455);
        bufp->chgWData(oldp+3408,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[3]),455);
        bufp->chgWData(oldp+3423,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[4]),455);
        bufp->chgWData(oldp+3438,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[5]),455);
        bufp->chgWData(oldp+3453,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[6]),455);
        bufp->chgWData(oldp+3468,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[7]),455);
        bufp->chgWData(oldp+3483,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[8]),455);
        bufp->chgWData(oldp+3498,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[9]),455);
        bufp->chgWData(oldp+3513,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[10]),455);
        bufp->chgWData(oldp+3528,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[11]),455);
        bufp->chgWData(oldp+3543,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[12]),455);
        bufp->chgWData(oldp+3558,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[13]),455);
        bufp->chgWData(oldp+3573,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[14]),455);
        bufp->chgWData(oldp+3588,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__2__KET____DOT__regs[15]),455);
        bufp->chgWData(oldp+3603,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[0]),455);
        bufp->chgWData(oldp+3618,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[1]),455);
        bufp->chgWData(oldp+3633,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[2]),455);
        bufp->chgWData(oldp+3648,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[3]),455);
        bufp->chgWData(oldp+3663,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[4]),455);
        bufp->chgWData(oldp+3678,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[5]),455);
        bufp->chgWData(oldp+3693,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[6]),455);
        bufp->chgWData(oldp+3708,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[7]),455);
        bufp->chgWData(oldp+3723,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[8]),455);
        bufp->chgWData(oldp+3738,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[9]),455);
        bufp->chgWData(oldp+3753,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[10]),455);
        bufp->chgWData(oldp+3768,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[11]),455);
        bufp->chgWData(oldp+3783,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[12]),455);
        bufp->chgWData(oldp+3798,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[13]),455);
        bufp->chgWData(oldp+3813,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[14]),455);
        bufp->chgWData(oldp+3828,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__dupregs__BRA__3__KET____DOT__regs[15]),455);
        bufp->chgWData(oldp+3843,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0]),455);
        bufp->chgWData(oldp+3858,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1]),455);
        bufp->chgWData(oldp+3873,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2]),455);
        bufp->chgWData(oldp+3888,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3]),455);
        bufp->chgIData(oldp+3903,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__mt_snapshots_inst__DOT__unnamedblk1__DOT__i),32);
        __Vtemp_10[0U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][0U];
        __Vtemp_10[1U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][1U];
        __Vtemp_10[2U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][2U];
        __Vtemp_10[3U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][3U];
        __Vtemp_10[4U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][4U];
        __Vtemp_10[5U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][5U];
        __Vtemp_10[6U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][6U];
        __Vtemp_10[7U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][7U];
        __Vtemp_10[8U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][8U];
        __Vtemp_10[9U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][9U];
        __Vtemp_10[0xaU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][0xaU];
        __Vtemp_10[0xbU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][0xbU];
        __Vtemp_10[0xcU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][0xcU];
        __Vtemp_10[0xdU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][0xdU];
        __Vtemp_10[0xeU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & (IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr))]][0xeU];
        bufp->chgWData(oldp+3904,(__Vtemp_10),459);
        __Vtemp_11[0U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][0U];
        __Vtemp_11[1U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][1U];
        __Vtemp_11[2U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][2U];
        __Vtemp_11[3U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][3U];
        __Vtemp_11[4U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][4U];
        __Vtemp_11[5U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][5U];
        __Vtemp_11[6U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][6U];
        __Vtemp_11[7U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][7U];
        __Vtemp_11[8U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][8U];
        __Vtemp_11[9U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][9U];
        __Vtemp_11[0xaU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][0xaU];
        __Vtemp_11[0xbU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][0xbU];
        __Vtemp_11[0xcU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][0xcU];
        __Vtemp_11[0xdU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][0xdU];
        __Vtemp_11[0xeU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 3U))]][0xeU];
        bufp->chgWData(oldp+3919,(__Vtemp_11),459);
        __Vtemp_12[0U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][0U];
        __Vtemp_12[1U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][1U];
        __Vtemp_12[2U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][2U];
        __Vtemp_12[3U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][3U];
        __Vtemp_12[4U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][4U];
        __Vtemp_12[5U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][5U];
        __Vtemp_12[6U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][6U];
        __Vtemp_12[7U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][7U];
        __Vtemp_12[8U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][8U];
        __Vtemp_12[9U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][9U];
        __Vtemp_12[0xaU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][0xaU];
        __Vtemp_12[0xbU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][0xbU];
        __Vtemp_12[0xcU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][0xcU];
        __Vtemp_12[0xdU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][0xdU];
        __Vtemp_12[0xeU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 6U))]][0xeU];
        bufp->chgWData(oldp+3934,(__Vtemp_12),459);
        __Vtemp_13[0U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][0U];
        __Vtemp_13[1U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][1U];
        __Vtemp_13[2U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][2U];
        __Vtemp_13[3U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][3U];
        __Vtemp_13[4U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][4U];
        __Vtemp_13[5U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][5U];
        __Vtemp_13[6U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][6U];
        __Vtemp_13[7U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][7U];
        __Vtemp_13[8U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][8U];
        __Vtemp_13[9U] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][9U];
        __Vtemp_13[0xaU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][0xaU];
        __Vtemp_13[0xbU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][0xbU];
        __Vtemp_13[0xcU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][0xcU];
        __Vtemp_13[0xdU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][0xdU];
        __Vtemp_13[0xeU] = vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval
            [vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel
            [(7U & ((IData)(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_raddr) 
                    >> 9U))]][0xeU];
        bufp->chgWData(oldp+3949,(__Vtemp_13),459);
        __Vtemp_15[0U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0U] 
                          & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0U]);
        __Vtemp_15[1U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[1U] 
                          & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[1U]);
        __Vtemp_15[2U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[2U] 
                          & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[2U]);
        __Vtemp_15[3U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[3U] 
                          & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[3U]);
        __Vtemp_15[4U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[4U] 
                          & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[4U]);
        __Vtemp_15[5U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[5U] 
                          & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[5U]);
        __Vtemp_15[6U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[6U] 
                          & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[6U]);
        __Vtemp_15[7U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[7U] 
                          & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[7U]);
        __Vtemp_15[8U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[8U] 
                          & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[8U]);
        __Vtemp_15[9U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[9U] 
                          & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[9U]);
        __Vtemp_15[0xaU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xaU] 
                            & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0xaU]);
        __Vtemp_15[0xbU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xbU] 
                            & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0xbU]);
        __Vtemp_15[0xcU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xcU] 
                            & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0xcU]);
        __Vtemp_15[0xdU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xdU] 
                            & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0xdU]);
        __Vtemp_15[0xeU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xeU] 
                            & vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0xeU]);
        bufp->chgWData(oldp+3964,(__Vtemp_15),459);
        __Vtemp_17[0U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0xfU] 
                              << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0xeU] 
                                           >> 0xbU)));
        __Vtemp_17[1U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[1U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x10U] 
                              << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0xfU] 
                                           >> 0xbU)));
        __Vtemp_17[2U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[2U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x11U] 
                              << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x10U] 
                                           >> 0xbU)));
        __Vtemp_17[3U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[3U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x12U] 
                              << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x11U] 
                                           >> 0xbU)));
        __Vtemp_17[4U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[4U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x13U] 
                              << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x12U] 
                                           >> 0xbU)));
        __Vtemp_17[5U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[5U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x14U] 
                              << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x13U] 
                                           >> 0xbU)));
        __Vtemp_17[6U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[6U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x15U] 
                              << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x14U] 
                                           >> 0xbU)));
        __Vtemp_17[7U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[7U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x16U] 
                              << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x15U] 
                                           >> 0xbU)));
        __Vtemp_17[8U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[8U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x17U] 
                              << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x16U] 
                                           >> 0xbU)));
        __Vtemp_17[9U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[9U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x18U] 
                              << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x17U] 
                                           >> 0xbU)));
        __Vtemp_17[0xaU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xaU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x19U] 
                                << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x18U] 
                                             >> 0xbU)));
        __Vtemp_17[0xbU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xbU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1aU] 
                                << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x19U] 
                                             >> 0xbU)));
        __Vtemp_17[0xcU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xcU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1bU] 
                                << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1aU] 
                                             >> 0xbU)));
        __Vtemp_17[0xdU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xdU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1cU] 
                                << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1bU] 
                                             >> 0xbU)));
        __Vtemp_17[0xeU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xeU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1dU] 
                                << 0x15U) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1cU] 
                                             >> 0xbU)));
        bufp->chgWData(oldp+3979,(__Vtemp_17),459);
        __Vtemp_19[0U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1dU] 
                              << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1cU] 
                                          >> 0x16U)));
        __Vtemp_19[1U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[1U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1eU] 
                              << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1dU] 
                                          >> 0x16U)));
        __Vtemp_19[2U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[2U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1fU] 
                              << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1eU] 
                                          >> 0x16U)));
        __Vtemp_19[3U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[3U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x20U] 
                              << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x1fU] 
                                          >> 0x16U)));
        __Vtemp_19[4U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[4U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x21U] 
                              << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x20U] 
                                          >> 0x16U)));
        __Vtemp_19[5U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[5U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x22U] 
                              << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x21U] 
                                          >> 0x16U)));
        __Vtemp_19[6U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[6U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x23U] 
                              << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x22U] 
                                          >> 0x16U)));
        __Vtemp_19[7U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[7U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x24U] 
                              << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x23U] 
                                          >> 0x16U)));
        __Vtemp_19[8U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[8U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x25U] 
                              << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x24U] 
                                          >> 0x16U)));
        __Vtemp_19[9U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[9U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x26U] 
                              << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x25U] 
                                          >> 0x16U)));
        __Vtemp_19[0xaU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xaU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x27U] 
                                << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x26U] 
                                            >> 0x16U)));
        __Vtemp_19[0xbU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xbU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x28U] 
                                << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x27U] 
                                            >> 0x16U)));
        __Vtemp_19[0xcU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xcU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x29U] 
                                << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x28U] 
                                            >> 0x16U)));
        __Vtemp_19[0xdU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xdU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x2aU] 
                                << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x29U] 
                                            >> 0x16U)));
        __Vtemp_19[0xeU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xeU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x2bU] 
                                << 0xaU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x2aU] 
                                            >> 0x16U)));
        bufp->chgWData(oldp+3994,(__Vtemp_19),459);
        __Vtemp_21[0U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x2cU] 
                              << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x2bU] 
                                           >> 1U)));
        __Vtemp_21[1U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[1U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x2dU] 
                              << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x2cU] 
                                           >> 1U)));
        __Vtemp_21[2U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[2U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x2eU] 
                              << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x2dU] 
                                           >> 1U)));
        __Vtemp_21[3U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[3U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x2fU] 
                              << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x2eU] 
                                           >> 1U)));
        __Vtemp_21[4U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[4U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x30U] 
                              << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x2fU] 
                                           >> 1U)));
        __Vtemp_21[5U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[5U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x31U] 
                              << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x30U] 
                                           >> 1U)));
        __Vtemp_21[6U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[6U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x32U] 
                              << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x31U] 
                                           >> 1U)));
        __Vtemp_21[7U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[7U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x33U] 
                              << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x32U] 
                                           >> 1U)));
        __Vtemp_21[8U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[8U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x34U] 
                              << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x33U] 
                                           >> 1U)));
        __Vtemp_21[9U] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[9U] 
                          & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x35U] 
                              << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x34U] 
                                           >> 1U)));
        __Vtemp_21[0xaU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xaU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x36U] 
                                << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x35U] 
                                             >> 1U)));
        __Vtemp_21[0xbU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xbU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x37U] 
                                << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x36U] 
                                             >> 1U)));
        __Vtemp_21[0xcU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xcU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x38U] 
                                << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x37U] 
                                             >> 1U)));
        __Vtemp_21[0xdU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xdU] 
                            & ((vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x39U] 
                                << 0x1fU) | (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x38U] 
                                             >> 1U)));
        __Vtemp_21[0xeU] = (Vvcore__ConstPool__CONST_h9eacd0e6_0[0xeU] 
                            & (vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_wvalue[0x39U] 
                               >> 1U));
        bufp->chgWData(oldp+4009,(__Vtemp_21),459);
        bufp->chgCData(oldp+4024,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel[0]),2);
        bufp->chgCData(oldp+4025,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel[1]),2);
        bufp->chgCData(oldp+4026,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel[2]),2);
        bufp->chgCData(oldp+4027,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel[3]),2);
        bufp->chgCData(oldp+4028,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel[4]),2);
        bufp->chgCData(oldp+4029,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel[5]),2);
        bufp->chgCData(oldp+4030,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel[6]),2);
        bufp->chgCData(oldp+4031,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__sel[7]),2);
        bufp->chgWData(oldp+4032,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[0]),459);
        bufp->chgWData(oldp+4047,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[1]),459);
        bufp->chgWData(oldp+4062,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[2]),459);
        bufp->chgWData(oldp+4077,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[3]),459);
        bufp->chgWData(oldp+4092,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[4]),459);
        bufp->chgWData(oldp+4107,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[5]),459);
        bufp->chgWData(oldp+4122,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[6]),459);
        bufp->chgWData(oldp+4137,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__0__KET____DOT__regs[7]),459);
        bufp->chgWData(oldp+4152,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[0]),459);
        bufp->chgWData(oldp+4167,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[1]),459);
        bufp->chgWData(oldp+4182,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[2]),459);
        bufp->chgWData(oldp+4197,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[3]),459);
        bufp->chgWData(oldp+4212,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[4]),459);
        bufp->chgWData(oldp+4227,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[5]),459);
        bufp->chgWData(oldp+4242,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[6]),459);
        bufp->chgWData(oldp+4257,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__1__KET____DOT__regs[7]),459);
        bufp->chgWData(oldp+4272,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[0]),459);
        bufp->chgWData(oldp+4287,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[1]),459);
        bufp->chgWData(oldp+4302,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[2]),459);
        bufp->chgWData(oldp+4317,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[3]),459);
        bufp->chgWData(oldp+4332,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[4]),459);
        bufp->chgWData(oldp+4347,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[5]),459);
        bufp->chgWData(oldp+4362,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[6]),459);
        bufp->chgWData(oldp+4377,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__2__KET____DOT__regs[7]),459);
        bufp->chgWData(oldp+4392,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[0]),459);
        bufp->chgWData(oldp+4407,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[1]),459);
        bufp->chgWData(oldp+4422,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[2]),459);
        bufp->chgWData(oldp+4437,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[3]),459);
        bufp->chgWData(oldp+4452,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[4]),459);
        bufp->chgWData(oldp+4467,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[5]),459);
        bufp->chgWData(oldp+4482,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[6]),459);
        bufp->chgWData(oldp+4497,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__dupregs__BRA__3__KET____DOT__regs[7]),459);
        bufp->chgWData(oldp+4512,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[0]),459);
        bufp->chgWData(oldp+4527,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[1]),459);
        bufp->chgWData(oldp+4542,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[2]),459);
        bufp->chgWData(oldp+4557,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__0__KET____DOT__dupval[3]),459);
        bufp->chgWData(oldp+4572,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[0]),459);
        bufp->chgWData(oldp+4587,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[1]),459);
        bufp->chgWData(oldp+4602,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[2]),459);
        bufp->chgWData(oldp+4617,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__1__KET____DOT__dupval[3]),459);
        bufp->chgWData(oldp+4632,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[0]),459);
        bufp->chgWData(oldp+4647,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[1]),459);
        bufp->chgWData(oldp+4662,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[2]),459);
        bufp->chgWData(oldp+4677,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__2__KET____DOT__dupval[3]),459);
        bufp->chgWData(oldp+4692,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[0]),459);
        bufp->chgWData(oldp+4707,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[1]),459);
        bufp->chgWData(oldp+4722,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[2]),459);
        bufp->chgWData(oldp+4737,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__genblk2__BRA__3__KET____DOT__dupval[3]),459);
        bufp->chgIData(oldp+4752,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__rq_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+4753,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+4754,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__unnamedblk18__DOT__i),32);
        bufp->chgIData(oldp+4755,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__unnamedblk19__DOT__i),32);
        bufp->chgIData(oldp+4756,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__unnamedblk20__DOT__i),32);
        bufp->chgIData(oldp+4757,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__unnamedblk22__DOT__i),32);
        bufp->chgIData(oldp+4758,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__unnamedblk9__DOT__i),32);
        bufp->chgIData(oldp+4759,(vlSelf->vcore__DOT__inst__DOT__ren_inst__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
        bufp->chgIData(oldp+4760,(vlSelf->vcore__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+4761,(vlSelf->vcore__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+4762,(vlSelf->vcore__DOT__unnamedblk5__DOT__i),32);
        bufp->chgBit(oldp+4763,(vlSymsp->TOP____024unit.single2double__Vstatic__sgn));
        bufp->chgCData(oldp+4764,(vlSymsp->TOP____024unit.single2double__Vstatic__e),8);
        bufp->chgIData(oldp+4765,(vlSymsp->TOP____024unit.single2double__Vstatic__b),23);
        bufp->chgBit(oldp+4766,(vlSymsp->TOP____024unit.double2single__Vstatic__s));
        bufp->chgBit(oldp+4767,(vlSymsp->TOP____024unit.double2single__Vstatic__ov));
        bufp->chgSData(oldp+4768,(vlSymsp->TOP____024unit.double2single__Vstatic__e),11);
        bufp->chgQData(oldp+4769,(vlSymsp->TOP____024unit.double2single__Vstatic__b),52);
    }
    bufp->chgBit(oldp+4771,(vlSelf->clk));
    bufp->chgBit(oldp+4772,(vlSelf->rst));
    bufp->chgQData(oldp+4773,(vlSelf->mip_ext),64);
    bufp->chgQData(oldp+4775,(vlSelf->mtime),64);
    bufp->chgCData(oldp+4777,(vlSelf->s_coh_rqst),8);
    bufp->chgCData(oldp+4778,(vlSelf->s_coh_trsc),8);
    bufp->chgQData(oldp+4779,(vlSelf->s_coh_addr),64);
    bufp->chgCData(oldp+4781,(vlSelf->s_coh_resp),8);
    bufp->chgCData(oldp+4782,(vlSelf->m_coh_rqst),8);
    bufp->chgCData(oldp+4783,(vlSelf->m_coh_trsc),8);
    bufp->chgQData(oldp+4784,(vlSelf->m_coh_addr),64);
    bufp->chgCData(oldp+4786,(vlSelf->m_coh_resp),8);
    bufp->chgCData(oldp+4787,(vlSelf->m_axi_awid),8);
    bufp->chgQData(oldp+4788,(vlSelf->m_axi_awaddr),64);
    bufp->chgCData(oldp+4790,(vlSelf->m_axi_awlen),8);
    bufp->chgCData(oldp+4791,(vlSelf->m_axi_awsize),3);
    bufp->chgCData(oldp+4792,(vlSelf->m_axi_awburst),2);
    bufp->chgBit(oldp+4793,(vlSelf->m_axi_awlock));
    bufp->chgCData(oldp+4794,(vlSelf->m_axi_awcache),4);
    bufp->chgCData(oldp+4795,(vlSelf->m_axi_awprot),3);
    bufp->chgCData(oldp+4796,(vlSelf->m_axi_awqos),4);
    bufp->chgBit(oldp+4797,(vlSelf->m_axi_awvalid));
    bufp->chgBit(oldp+4798,(vlSelf->m_axi_awready));
    bufp->chgQData(oldp+4799,(vlSelf->m_axi_wdata),64);
    bufp->chgCData(oldp+4801,(vlSelf->m_axi_wstrb),8);
    bufp->chgBit(oldp+4802,(vlSelf->m_axi_wlast));
    bufp->chgBit(oldp+4803,(vlSelf->m_axi_wvalid));
    bufp->chgBit(oldp+4804,(vlSelf->m_axi_wready));
    bufp->chgCData(oldp+4805,(vlSelf->m_axi_bid),8);
    bufp->chgCData(oldp+4806,(vlSelf->m_axi_bresp),2);
    bufp->chgBit(oldp+4807,(vlSelf->m_axi_bvalid));
    bufp->chgBit(oldp+4808,(vlSelf->m_axi_bready));
    bufp->chgCData(oldp+4809,(vlSelf->m_axi_arid),8);
    bufp->chgQData(oldp+4810,(vlSelf->m_axi_araddr),64);
    bufp->chgCData(oldp+4812,(vlSelf->m_axi_arlen),8);
    bufp->chgCData(oldp+4813,(vlSelf->m_axi_arsize),3);
    bufp->chgCData(oldp+4814,(vlSelf->m_axi_arburst),2);
    bufp->chgBit(oldp+4815,(vlSelf->m_axi_arlock));
    bufp->chgCData(oldp+4816,(vlSelf->m_axi_arcache),4);
    bufp->chgCData(oldp+4817,(vlSelf->m_axi_arprot),3);
    bufp->chgCData(oldp+4818,(vlSelf->m_axi_arqos),4);
    bufp->chgBit(oldp+4819,(vlSelf->m_axi_arvalid));
    bufp->chgBit(oldp+4820,(vlSelf->m_axi_arready));
    bufp->chgCData(oldp+4821,(vlSelf->m_axi_rid),8);
    bufp->chgQData(oldp+4822,(vlSelf->m_axi_rdata),64);
    bufp->chgCData(oldp+4824,(vlSelf->m_axi_rresp),2);
    bufp->chgBit(oldp+4825,(vlSelf->m_axi_rlast));
    bufp->chgBit(oldp+4826,(vlSelf->m_axi_rvalid));
    bufp->chgBit(oldp+4827,(vlSelf->m_axi_rready));
    bufp->chgBit(oldp+4828,(vlSelf->cmt[0]));
    bufp->chgBit(oldp+4829,(vlSelf->cmt[1]));
    bufp->chgBit(oldp+4830,(vlSelf->cmt[2]));
    bufp->chgBit(oldp+4831,(vlSelf->cmt[3]));
    bufp->chgCData(oldp+4832,(vlSelf->cmt_level[0]),2);
    bufp->chgCData(oldp+4833,(vlSelf->cmt_level[1]),2);
    bufp->chgCData(oldp+4834,(vlSelf->cmt_level[2]),2);
    bufp->chgCData(oldp+4835,(vlSelf->cmt_level[3]),2);
    bufp->chgQData(oldp+4836,(vlSelf->cmt_pc[0]),64);
    bufp->chgQData(oldp+4838,(vlSelf->cmt_pc[1]),64);
    bufp->chgQData(oldp+4840,(vlSelf->cmt_pc[2]),64);
    bufp->chgQData(oldp+4842,(vlSelf->cmt_pc[3]),64);
    bufp->chgIData(oldp+4844,(vlSelf->cmt_ir[0]),32);
    bufp->chgIData(oldp+4845,(vlSelf->cmt_ir[1]),32);
    bufp->chgIData(oldp+4846,(vlSelf->cmt_ir[2]),32);
    bufp->chgIData(oldp+4847,(vlSelf->cmt_ir[3]),32);
    bufp->chgBit(oldp+4848,(vlSelf->cmt_gpr[0]));
    bufp->chgBit(oldp+4849,(vlSelf->cmt_gpr[1]));
    bufp->chgBit(oldp+4850,(vlSelf->cmt_gpr[2]));
    bufp->chgBit(oldp+4851,(vlSelf->cmt_gpr[3]));
    bufp->chgBit(oldp+4852,(vlSelf->cmt_csr[0]));
    bufp->chgBit(oldp+4853,(vlSelf->cmt_csr[1]));
    bufp->chgBit(oldp+4854,(vlSelf->cmt_csr[2]));
    bufp->chgBit(oldp+4855,(vlSelf->cmt_csr[3]));
    bufp->chgBit(oldp+4856,(vlSelf->cmt_mem[0]));
    bufp->chgBit(oldp+4857,(vlSelf->cmt_mem[1]));
    bufp->chgBit(oldp+4858,(vlSelf->cmt_mem[2]));
    bufp->chgBit(oldp+4859,(vlSelf->cmt_mem[3]));
    bufp->chgBit(oldp+4860,(vlSelf->cmt_mexc));
    bufp->chgBit(oldp+4861,(vlSelf->cmt_sexc));
    bufp->chgBit(oldp+4862,(vlSelf->cmt_int));
    bufp->chgBit(oldp+4863,(vlSelf->cmt_ret));
    bufp->chgQData(oldp+4864,(vlSelf->cmt_mstatus),64);
    bufp->chgQData(oldp+4866,(vlSelf->cmt_misa),64);
    bufp->chgQData(oldp+4868,(vlSelf->cmt_mtvec),64);
    bufp->chgQData(oldp+4870,(vlSelf->cmt_mcause),64);
    bufp->chgQData(oldp+4872,(vlSelf->cmt_mepc),64);
    bufp->chgQData(oldp+4874,(vlSelf->cmt_mtval),64);
    bufp->chgQData(oldp+4876,(vlSelf->cmt_stvec),64);
    bufp->chgQData(oldp+4878,(vlSelf->cmt_scause),64);
    bufp->chgQData(oldp+4880,(vlSelf->cmt_sepc),64);
    bufp->chgQData(oldp+4882,(vlSelf->cmt_stval),64);
    bufp->chgQData(oldp+4884,(vlSelf->cmt_mip),64);
    bufp->chgQData(oldp+4886,(vlSelf->cmt_mcycle),64);
    bufp->chgQData(oldp+4888,(vlSelf->cmt_minstret),64);
    bufp->chgQData(oldp+4890,(vlSelf->cmt_mtime),64);
    bufp->chgBit(oldp+4892,(vlSelf->del_gprw[0]));
    bufp->chgBit(oldp+4893,(vlSelf->del_gprw[1]));
    bufp->chgBit(oldp+4894,(vlSelf->del_gprw[2]));
    bufp->chgBit(oldp+4895,(vlSelf->del_gprw[3]));
    bufp->chgCData(oldp+4896,(vlSelf->del_gpra[0]),6);
    bufp->chgCData(oldp+4897,(vlSelf->del_gpra[1]),6);
    bufp->chgCData(oldp+4898,(vlSelf->del_gpra[2]),6);
    bufp->chgCData(oldp+4899,(vlSelf->del_gpra[3]),6);
    bufp->chgQData(oldp+4900,(vlSelf->del_gprv[0]),64);
    bufp->chgQData(oldp+4902,(vlSelf->del_gprv[1]),64);
    bufp->chgQData(oldp+4904,(vlSelf->del_gprv[2]),64);
    bufp->chgQData(oldp+4906,(vlSelf->del_gprv[3]),64);
    bufp->chgBit(oldp+4908,(vlSelf->del_csrw));
    bufp->chgSData(oldp+4909,(vlSelf->del_csra),12);
    bufp->chgQData(oldp+4910,(vlSelf->del_csrv),64);
    bufp->chgCData(oldp+4912,(vlSelf->del_memw),8);
    bufp->chgQData(oldp+4913,(vlSelf->del_mema),64);
    bufp->chgQData(oldp+4915,(vlSelf->del_memv),64);
    bufp->chgQData(oldp+4917,(vlSelf->stallpc),64);
    bufp->chgQData(oldp+4919,(vlSelf->bmisp),64);
    bufp->chgQData(oldp+4921,(vlSelf->fmisp),64);
    bufp->chgQData(oldp+4923,(vlSelf->brmisp),64);
    bufp->chgQData(oldp+4925,(vlSelf->jmisp),64);
    bufp->chgQData(oldp+4927,(vlSelf->jrmisp),64);
    bufp->chgQData(oldp+4929,(vlSelf->icmiss),64);
    bufp->chgQData(oldp+4931,(vlSelf->dcmiss),64);
    bufp->chgQData(oldp+4933,(vlSelf->stmiss),64);
    bufp->chgQData(oldp+4935,(vlSelf->itmiss),64);
    bufp->chgQData(oldp+4937,(vlSelf->dtmiss),64);
    bufp->chgQData(oldp+4939,(vlSelf->loads),64);
    bufp->chgQData(oldp+4941,(vlSelf->stores),64);
    bufp->chgBit(oldp+4943,(((IData)(vlSelf->vcore__DOT__inst__DOT__use_htif)
                              ? (IData)(vlSelf->vcore__DOT__inst__DOT__s_axi_awready)
                              : (IData)(vlSelf->m_axi_awready))));
    bufp->chgBit(oldp+4944,(((IData)(vlSelf->vcore__DOT__inst__DOT__use_htif)
                              ? (IData)(vlSelf->vcore__DOT__inst__DOT__s_axi_wready)
                              : (IData)(vlSelf->m_axi_wready))));
    bufp->chgCData(oldp+4945,(((IData)(vlSelf->vcore__DOT__inst__DOT__use_htif)
                                ? 0U : (IData)(vlSelf->m_axi_bid))),8);
    bufp->chgCData(oldp+4946,(((IData)(vlSelf->vcore__DOT__inst__DOT__use_htif)
                                ? 0U : (IData)(vlSelf->m_axi_bresp))),2);
    bufp->chgBit(oldp+4947,(((IData)(vlSelf->vcore__DOT__inst__DOT__use_htif)
                              ? (IData)(vlSelf->vcore__DOT__inst__DOT__s_axi_bvalid)
                              : (IData)(vlSelf->m_axi_bvalid))));
    bufp->chgBit(oldp+4948,(((IData)(vlSelf->vcore__DOT__inst__DOT__use_htif)
                              ? (IData)(vlSelf->vcore__DOT__inst__DOT__s_axi_arready)
                              : (IData)(vlSelf->m_axi_arready))));
    bufp->chgCData(oldp+4949,(((IData)(vlSelf->vcore__DOT__inst__DOT__use_htif)
                                ? 0U : (IData)(vlSelf->m_axi_rid))),8);
    bufp->chgQData(oldp+4950,(((IData)(vlSelf->vcore__DOT__inst__DOT__use_htif)
                                ? vlSelf->vcore__DOT__inst__DOT__s_axi_rdata
                                : vlSelf->m_axi_rdata)),64);
    bufp->chgCData(oldp+4952,(((IData)(vlSelf->vcore__DOT__inst__DOT__use_htif)
                                ? 0U : (IData)(vlSelf->m_axi_rresp))),2);
    bufp->chgBit(oldp+4953,(((IData)(vlSelf->vcore__DOT__inst__DOT__use_htif)
                              ? (IData)(vlSelf->vcore__DOT__inst__DOT__s_axi_rvalid)
                              : (IData)(vlSelf->m_axi_rvalid))));
}
