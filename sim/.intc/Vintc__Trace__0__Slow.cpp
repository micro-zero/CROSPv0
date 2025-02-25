// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vintc__Syms.h"


VL_ATTR_COLD void Vintc___024root__trace_init_sub__TOP__0(Vintc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+12,0,"clk", false,-1);
    tracep->declBit(c+13,0,"rst", false,-1);
    tracep->declQuad(c+14,0,"int_pend", false,-1, 63,0);
    tracep->declQuad(c+16,0,"int_time", false,-1, 63,0);
    tracep->declBus(c+18,0,"s_axi_awid", false,-1, 7,0);
    tracep->declQuad(c+19,0,"s_axi_awaddr", false,-1, 63,0);
    tracep->declBus(c+21,0,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+22,0,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+23,0,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+24,0,"s_axi_awlock", false,-1);
    tracep->declBus(c+25,0,"s_axi_awcache", false,-1, 3,0);
    tracep->declBus(c+26,0,"s_axi_awprot", false,-1, 2,0);
    tracep->declBus(c+27,0,"s_axi_awregion", false,-1, 3,0);
    tracep->declBus(c+28,0,"s_axi_awqos", false,-1, 3,0);
    tracep->declBit(c+29,0,"s_axi_awvalid", false,-1);
    tracep->declBit(c+30,0,"s_axi_awready", false,-1);
    tracep->declQuad(c+31,0,"s_axi_wdata", false,-1, 63,0);
    tracep->declBus(c+33,0,"s_axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+34,0,"s_axi_wlast", false,-1);
    tracep->declBit(c+35,0,"s_axi_wvalid", false,-1);
    tracep->declBit(c+36,0,"s_axi_wready", false,-1);
    tracep->declBus(c+37,0,"s_axi_bid", false,-1, 7,0);
    tracep->declBus(c+38,0,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+39,0,"s_axi_bvalid", false,-1);
    tracep->declBit(c+40,0,"s_axi_bready", false,-1);
    tracep->declBus(c+41,0,"s_axi_arid", false,-1, 7,0);
    tracep->declQuad(c+42,0,"s_axi_araddr", false,-1, 63,0);
    tracep->declBus(c+44,0,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+45,0,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+46,0,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+47,0,"s_axi_arlock", false,-1);
    tracep->declBus(c+48,0,"s_axi_arcache", false,-1, 3,0);
    tracep->declBus(c+49,0,"s_axi_arprot", false,-1, 2,0);
    tracep->declBus(c+50,0,"s_axi_arregion", false,-1, 3,0);
    tracep->declBus(c+51,0,"s_axi_arqos", false,-1, 3,0);
    tracep->declBit(c+52,0,"s_axi_arvalid", false,-1);
    tracep->declBit(c+53,0,"s_axi_arready", false,-1);
    tracep->declBus(c+54,0,"s_axi_rid", false,-1, 7,0);
    tracep->declQuad(c+55,0,"s_axi_rdata", false,-1, 63,0);
    tracep->declBus(c+57,0,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+58,0,"s_axi_rlast", false,-1);
    tracep->declBit(c+59,0,"s_axi_rvalid", false,-1);
    tracep->declBit(c+60,0,"s_axi_rready", false,-1);
    tracep->pushNamePrefix("intc ");
    tracep->declQuad(c+61,0,"cpufreq", false,-1, 63,0);
    tracep->declQuad(c+63,0,"tbfreq", false,-1, 63,0);
    tracep->declQuad(c+65,0,"clint", false,-1, 63,0);
    tracep->declBit(c+12,0,"clk", false,-1);
    tracep->declBit(c+13,0,"rst", false,-1);
    tracep->declQuad(c+14,0,"int_pend", false,-1, 63,0);
    tracep->declQuad(c+16,0,"int_time", false,-1, 63,0);
    tracep->declBus(c+18,0,"s_axi_awid", false,-1, 7,0);
    tracep->declQuad(c+19,0,"s_axi_awaddr", false,-1, 63,0);
    tracep->declBus(c+21,0,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+22,0,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+23,0,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+24,0,"s_axi_awlock", false,-1);
    tracep->declBus(c+25,0,"s_axi_awcache", false,-1, 3,0);
    tracep->declBus(c+26,0,"s_axi_awprot", false,-1, 2,0);
    tracep->declBus(c+27,0,"s_axi_awregion", false,-1, 3,0);
    tracep->declBus(c+28,0,"s_axi_awqos", false,-1, 3,0);
    tracep->declBit(c+29,0,"s_axi_awvalid", false,-1);
    tracep->declBit(c+30,0,"s_axi_awready", false,-1);
    tracep->declQuad(c+31,0,"s_axi_wdata", false,-1, 63,0);
    tracep->declBus(c+33,0,"s_axi_wstrb", false,-1, 7,0);
    tracep->declBit(c+34,0,"s_axi_wlast", false,-1);
    tracep->declBit(c+35,0,"s_axi_wvalid", false,-1);
    tracep->declBit(c+36,0,"s_axi_wready", false,-1);
    tracep->declBus(c+37,0,"s_axi_bid", false,-1, 7,0);
    tracep->declBus(c+38,0,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+39,0,"s_axi_bvalid", false,-1);
    tracep->declBit(c+40,0,"s_axi_bready", false,-1);
    tracep->declBus(c+41,0,"s_axi_arid", false,-1, 7,0);
    tracep->declQuad(c+42,0,"s_axi_araddr", false,-1, 63,0);
    tracep->declBus(c+44,0,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+45,0,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+46,0,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+47,0,"s_axi_arlock", false,-1);
    tracep->declBus(c+48,0,"s_axi_arcache", false,-1, 3,0);
    tracep->declBus(c+49,0,"s_axi_arprot", false,-1, 2,0);
    tracep->declBus(c+50,0,"s_axi_arregion", false,-1, 3,0);
    tracep->declBus(c+51,0,"s_axi_arqos", false,-1, 3,0);
    tracep->declBit(c+52,0,"s_axi_arvalid", false,-1);
    tracep->declBit(c+53,0,"s_axi_arready", false,-1);
    tracep->declBus(c+54,0,"s_axi_rid", false,-1, 7,0);
    tracep->declQuad(c+55,0,"s_axi_rdata", false,-1, 63,0);
    tracep->declBus(c+57,0,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+58,0,"s_axi_rlast", false,-1);
    tracep->declBit(c+59,0,"s_axi_rvalid", false,-1);
    tracep->declBit(c+60,0,"s_axi_rready", false,-1);
    tracep->declBit(c+1,0,"msip", false,-1);
    tracep->declQuad(c+2,0,"mtime", false,-1, 63,0);
    tracep->declQuad(c+4,0,"mtimecmp", false,-1, 63,0);
    tracep->declQuad(c+6,0,"timer", false,-1, 63,0);
    tracep->declQuad(c+8,0,"waddr", false,-1, 63,0);
    tracep->declQuad(c+10,0,"wdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vintc___024root__trace_init_top(Vintc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root__trace_init_top\n"); );
    // Body
    Vintc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vintc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vintc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vintc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vintc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vintc___024root__trace_register(Vintc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vintc___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vintc___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vintc___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vintc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vintc___024root__trace_const_0_sub_0(Vintc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vintc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root__trace_const_0\n"); );
    // Init
    Vintc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintc___024root*>(voidSelf);
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vintc___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vintc___024root__trace_const_0_sub_0(Vintc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+61,(0x1312d00ULL),64);
    bufp->fullQData(oldp+63,(0x989680ULL),64);
    bufp->fullQData(oldp+65,(0x2000000ULL),64);
}

VL_ATTR_COLD void Vintc___024root__trace_full_0_sub_0(Vintc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vintc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root__trace_full_0\n"); );
    // Init
    Vintc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintc___024root*>(voidSelf);
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vintc___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vintc___024root__trace_full_0_sub_0(Vintc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->intc__DOT__msip));
    bufp->fullQData(oldp+2,(vlSelf->intc__DOT__mtime),64);
    bufp->fullQData(oldp+4,(vlSelf->intc__DOT__mtimecmp),64);
    bufp->fullQData(oldp+6,(vlSelf->intc__DOT__timer),64);
    bufp->fullQData(oldp+8,(vlSelf->intc__DOT__waddr),64);
    bufp->fullQData(oldp+10,(vlSelf->intc__DOT__wdata),64);
    bufp->fullBit(oldp+12,(vlSelf->clk));
    bufp->fullBit(oldp+13,(vlSelf->rst));
    bufp->fullQData(oldp+14,(vlSelf->int_pend),64);
    bufp->fullQData(oldp+16,(vlSelf->int_time),64);
    bufp->fullCData(oldp+18,(vlSelf->s_axi_awid),8);
    bufp->fullQData(oldp+19,(vlSelf->s_axi_awaddr),64);
    bufp->fullCData(oldp+21,(vlSelf->s_axi_awlen),8);
    bufp->fullCData(oldp+22,(vlSelf->s_axi_awsize),3);
    bufp->fullCData(oldp+23,(vlSelf->s_axi_awburst),2);
    bufp->fullBit(oldp+24,(vlSelf->s_axi_awlock));
    bufp->fullCData(oldp+25,(vlSelf->s_axi_awcache),4);
    bufp->fullCData(oldp+26,(vlSelf->s_axi_awprot),3);
    bufp->fullCData(oldp+27,(vlSelf->s_axi_awregion),4);
    bufp->fullCData(oldp+28,(vlSelf->s_axi_awqos),4);
    bufp->fullBit(oldp+29,(vlSelf->s_axi_awvalid));
    bufp->fullBit(oldp+30,(vlSelf->s_axi_awready));
    bufp->fullQData(oldp+31,(vlSelf->s_axi_wdata),64);
    bufp->fullCData(oldp+33,(vlSelf->s_axi_wstrb),8);
    bufp->fullBit(oldp+34,(vlSelf->s_axi_wlast));
    bufp->fullBit(oldp+35,(vlSelf->s_axi_wvalid));
    bufp->fullBit(oldp+36,(vlSelf->s_axi_wready));
    bufp->fullCData(oldp+37,(vlSelf->s_axi_bid),8);
    bufp->fullCData(oldp+38,(vlSelf->s_axi_bresp),2);
    bufp->fullBit(oldp+39,(vlSelf->s_axi_bvalid));
    bufp->fullBit(oldp+40,(vlSelf->s_axi_bready));
    bufp->fullCData(oldp+41,(vlSelf->s_axi_arid),8);
    bufp->fullQData(oldp+42,(vlSelf->s_axi_araddr),64);
    bufp->fullCData(oldp+44,(vlSelf->s_axi_arlen),8);
    bufp->fullCData(oldp+45,(vlSelf->s_axi_arsize),3);
    bufp->fullCData(oldp+46,(vlSelf->s_axi_arburst),2);
    bufp->fullBit(oldp+47,(vlSelf->s_axi_arlock));
    bufp->fullCData(oldp+48,(vlSelf->s_axi_arcache),4);
    bufp->fullCData(oldp+49,(vlSelf->s_axi_arprot),3);
    bufp->fullCData(oldp+50,(vlSelf->s_axi_arregion),4);
    bufp->fullCData(oldp+51,(vlSelf->s_axi_arqos),4);
    bufp->fullBit(oldp+52,(vlSelf->s_axi_arvalid));
    bufp->fullBit(oldp+53,(vlSelf->s_axi_arready));
    bufp->fullCData(oldp+54,(vlSelf->s_axi_rid),8);
    bufp->fullQData(oldp+55,(vlSelf->s_axi_rdata),64);
    bufp->fullCData(oldp+57,(vlSelf->s_axi_rresp),2);
    bufp->fullBit(oldp+58,(vlSelf->s_axi_rlast));
    bufp->fullBit(oldp+59,(vlSelf->s_axi_rvalid));
    bufp->fullBit(oldp+60,(vlSelf->s_axi_rready));
}
