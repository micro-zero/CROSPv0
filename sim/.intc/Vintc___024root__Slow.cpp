// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vintc.h for the primary calling header

#include "Vintc__pch.h"
#include "Vintc__Syms.h"
#include "Vintc___024root.h"

void Vintc___024root___ctor_var_reset(Vintc___024root* vlSelf);

Vintc___024root::Vintc___024root(Vintc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vintc___024root___ctor_var_reset(this);
}

void Vintc___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vintc___024root::~Vintc___024root() {
}

// Savable
void Vintc___024root::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x3d02c178aebee02bULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<clk;
    os<<rst;
    os<<s_axi_awid;
    os<<s_axi_awlen;
    os<<s_axi_awsize;
    os<<s_axi_awburst;
    os<<s_axi_awlock;
    os<<s_axi_awcache;
    os<<s_axi_awprot;
    os<<s_axi_awregion;
    os<<s_axi_awqos;
    os<<s_axi_awvalid;
    os<<s_axi_awready;
    os<<s_axi_wstrb;
    os<<s_axi_wlast;
    os<<s_axi_wvalid;
    os<<s_axi_wready;
    os<<s_axi_bid;
    os<<s_axi_bresp;
    os<<s_axi_bvalid;
    os<<s_axi_bready;
    os<<s_axi_arid;
    os<<s_axi_arlen;
    os<<s_axi_arsize;
    os<<s_axi_arburst;
    os<<s_axi_arlock;
    os<<s_axi_arcache;
    os<<s_axi_arprot;
    os<<s_axi_arregion;
    os<<s_axi_arqos;
    os<<s_axi_arvalid;
    os<<s_axi_arready;
    os<<s_axi_rid;
    os<<s_axi_rresp;
    os<<s_axi_rlast;
    os<<s_axi_rvalid;
    os<<s_axi_rready;
    os<<intc__DOT__msip;
    os<<__Vtrigprevexpr___TOP__clk__0;
    os<<__VactContinue;
    os<<__VstlIterCount;
    os<<__VactIterCount;
    os<<int_pend;
    os<<int_time;
    os<<s_axi_awaddr;
    os<<s_axi_wdata;
    os<<s_axi_araddr;
    os<<s_axi_rdata;
    os<<intc__DOT__mtime;
    os<<intc__DOT__mtimecmp;
    os<<intc__DOT__timer;
    os<<intc__DOT__waddr;
    os<<intc__DOT__wdata;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os<<__Vm_traceActivity[__Vi0];
    }
}
void Vintc___024root::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x3d02c178aebee02bULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>clk;
    os>>rst;
    os>>s_axi_awid;
    os>>s_axi_awlen;
    os>>s_axi_awsize;
    os>>s_axi_awburst;
    os>>s_axi_awlock;
    os>>s_axi_awcache;
    os>>s_axi_awprot;
    os>>s_axi_awregion;
    os>>s_axi_awqos;
    os>>s_axi_awvalid;
    os>>s_axi_awready;
    os>>s_axi_wstrb;
    os>>s_axi_wlast;
    os>>s_axi_wvalid;
    os>>s_axi_wready;
    os>>s_axi_bid;
    os>>s_axi_bresp;
    os>>s_axi_bvalid;
    os>>s_axi_bready;
    os>>s_axi_arid;
    os>>s_axi_arlen;
    os>>s_axi_arsize;
    os>>s_axi_arburst;
    os>>s_axi_arlock;
    os>>s_axi_arcache;
    os>>s_axi_arprot;
    os>>s_axi_arregion;
    os>>s_axi_arqos;
    os>>s_axi_arvalid;
    os>>s_axi_arready;
    os>>s_axi_rid;
    os>>s_axi_rresp;
    os>>s_axi_rlast;
    os>>s_axi_rvalid;
    os>>s_axi_rready;
    os>>intc__DOT__msip;
    os>>__Vtrigprevexpr___TOP__clk__0;
    os>>__VactContinue;
    os>>__VstlIterCount;
    os>>__VactIterCount;
    os>>int_pend;
    os>>int_time;
    os>>s_axi_awaddr;
    os>>s_axi_wdata;
    os>>s_axi_araddr;
    os>>s_axi_rdata;
    os>>intc__DOT__mtime;
    os>>intc__DOT__mtimecmp;
    os>>intc__DOT__timer;
    os>>intc__DOT__waddr;
    os>>intc__DOT__wdata;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        os>>__Vm_traceActivity[__Vi0];
    }
}
