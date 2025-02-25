// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vintc.h for the primary calling header

#ifndef VERILATED_VINTC___024ROOT_H_
#define VERILATED_VINTC___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_save.h"


class Vintc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vintc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(s_axi_awid,7,0);
    VL_IN8(s_axi_awlen,7,0);
    VL_IN8(s_axi_awsize,2,0);
    VL_IN8(s_axi_awburst,1,0);
    VL_IN8(s_axi_awlock,0,0);
    VL_IN8(s_axi_awcache,3,0);
    VL_IN8(s_axi_awprot,2,0);
    VL_IN8(s_axi_awregion,3,0);
    VL_IN8(s_axi_awqos,3,0);
    VL_IN8(s_axi_awvalid,0,0);
    VL_OUT8(s_axi_awready,0,0);
    VL_IN8(s_axi_wstrb,7,0);
    VL_IN8(s_axi_wlast,0,0);
    VL_IN8(s_axi_wvalid,0,0);
    VL_OUT8(s_axi_wready,0,0);
    VL_OUT8(s_axi_bid,7,0);
    VL_OUT8(s_axi_bresp,1,0);
    VL_OUT8(s_axi_bvalid,0,0);
    VL_IN8(s_axi_bready,0,0);
    VL_IN8(s_axi_arid,7,0);
    VL_IN8(s_axi_arlen,7,0);
    VL_IN8(s_axi_arsize,2,0);
    VL_IN8(s_axi_arburst,1,0);
    VL_IN8(s_axi_arlock,0,0);
    VL_IN8(s_axi_arcache,3,0);
    VL_IN8(s_axi_arprot,2,0);
    VL_IN8(s_axi_arregion,3,0);
    VL_IN8(s_axi_arqos,3,0);
    VL_IN8(s_axi_arvalid,0,0);
    VL_OUT8(s_axi_arready,0,0);
    VL_OUT8(s_axi_rid,7,0);
    VL_OUT8(s_axi_rresp,1,0);
    VL_OUT8(s_axi_rlast,0,0);
    VL_OUT8(s_axi_rvalid,0,0);
    VL_IN8(s_axi_rready,0,0);
    CData/*0:0*/ intc__DOT__msip;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(int_pend,63,0);
    VL_OUT64(int_time,63,0);
    VL_IN64(s_axi_awaddr,63,0);
    VL_IN64(s_axi_wdata,63,0);
    VL_IN64(s_axi_araddr,63,0);
    VL_OUT64(s_axi_rdata,63,0);
    QData/*63:0*/ intc__DOT__mtime;
    QData/*63:0*/ intc__DOT__mtimecmp;
    QData/*63:0*/ intc__DOT__timer;
    QData/*63:0*/ intc__DOT__waddr;
    QData/*63:0*/ intc__DOT__wdata;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vintc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vintc___024root(Vintc__Syms* symsp, const char* v__name);
    ~Vintc___024root();
    VL_UNCOPYABLE(Vintc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
