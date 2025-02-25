// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vintc__Syms.h"


void Vintc___024root__trace_chg_0_sub_0(Vintc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vintc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root__trace_chg_0\n"); );
    // Init
    Vintc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintc___024root*>(voidSelf);
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vintc___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vintc___024root__trace_chg_0_sub_0(Vintc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->intc__DOT__msip));
        bufp->chgQData(oldp+1,(vlSelf->intc__DOT__mtime),64);
        bufp->chgQData(oldp+3,(vlSelf->intc__DOT__mtimecmp),64);
        bufp->chgQData(oldp+5,(vlSelf->intc__DOT__timer),64);
        bufp->chgQData(oldp+7,(vlSelf->intc__DOT__waddr),64);
        bufp->chgQData(oldp+9,(vlSelf->intc__DOT__wdata),64);
    }
    bufp->chgBit(oldp+11,(vlSelf->clk));
    bufp->chgBit(oldp+12,(vlSelf->rst));
    bufp->chgQData(oldp+13,(vlSelf->int_pend),64);
    bufp->chgQData(oldp+15,(vlSelf->int_time),64);
    bufp->chgCData(oldp+17,(vlSelf->s_axi_awid),8);
    bufp->chgQData(oldp+18,(vlSelf->s_axi_awaddr),64);
    bufp->chgCData(oldp+20,(vlSelf->s_axi_awlen),8);
    bufp->chgCData(oldp+21,(vlSelf->s_axi_awsize),3);
    bufp->chgCData(oldp+22,(vlSelf->s_axi_awburst),2);
    bufp->chgBit(oldp+23,(vlSelf->s_axi_awlock));
    bufp->chgCData(oldp+24,(vlSelf->s_axi_awcache),4);
    bufp->chgCData(oldp+25,(vlSelf->s_axi_awprot),3);
    bufp->chgCData(oldp+26,(vlSelf->s_axi_awregion),4);
    bufp->chgCData(oldp+27,(vlSelf->s_axi_awqos),4);
    bufp->chgBit(oldp+28,(vlSelf->s_axi_awvalid));
    bufp->chgBit(oldp+29,(vlSelf->s_axi_awready));
    bufp->chgQData(oldp+30,(vlSelf->s_axi_wdata),64);
    bufp->chgCData(oldp+32,(vlSelf->s_axi_wstrb),8);
    bufp->chgBit(oldp+33,(vlSelf->s_axi_wlast));
    bufp->chgBit(oldp+34,(vlSelf->s_axi_wvalid));
    bufp->chgBit(oldp+35,(vlSelf->s_axi_wready));
    bufp->chgCData(oldp+36,(vlSelf->s_axi_bid),8);
    bufp->chgCData(oldp+37,(vlSelf->s_axi_bresp),2);
    bufp->chgBit(oldp+38,(vlSelf->s_axi_bvalid));
    bufp->chgBit(oldp+39,(vlSelf->s_axi_bready));
    bufp->chgCData(oldp+40,(vlSelf->s_axi_arid),8);
    bufp->chgQData(oldp+41,(vlSelf->s_axi_araddr),64);
    bufp->chgCData(oldp+43,(vlSelf->s_axi_arlen),8);
    bufp->chgCData(oldp+44,(vlSelf->s_axi_arsize),3);
    bufp->chgCData(oldp+45,(vlSelf->s_axi_arburst),2);
    bufp->chgBit(oldp+46,(vlSelf->s_axi_arlock));
    bufp->chgCData(oldp+47,(vlSelf->s_axi_arcache),4);
    bufp->chgCData(oldp+48,(vlSelf->s_axi_arprot),3);
    bufp->chgCData(oldp+49,(vlSelf->s_axi_arregion),4);
    bufp->chgCData(oldp+50,(vlSelf->s_axi_arqos),4);
    bufp->chgBit(oldp+51,(vlSelf->s_axi_arvalid));
    bufp->chgBit(oldp+52,(vlSelf->s_axi_arready));
    bufp->chgCData(oldp+53,(vlSelf->s_axi_rid),8);
    bufp->chgQData(oldp+54,(vlSelf->s_axi_rdata),64);
    bufp->chgCData(oldp+56,(vlSelf->s_axi_rresp),2);
    bufp->chgBit(oldp+57,(vlSelf->s_axi_rlast));
    bufp->chgBit(oldp+58,(vlSelf->s_axi_rvalid));
    bufp->chgBit(oldp+59,(vlSelf->s_axi_rready));
}

void Vintc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintc___024root__trace_cleanup\n"); );
    // Init
    Vintc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintc___024root*>(voidSelf);
    Vintc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
