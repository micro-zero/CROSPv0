// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvcore.h for the primary calling header

#ifndef VERILATED_VVCORE___024UNIT_H_
#define VERILATED_VVCORE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_save.h"


class Vvcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvcore___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ single2double__Vstatic__sgn;
    CData/*0:0*/ __PVT__single2double__Vstatic__ov;
    CData/*7:0*/ single2double__Vstatic__e;
    CData/*0:0*/ double2single__Vstatic__s;
    CData/*0:0*/ double2single__Vstatic__ov;
    CData/*0:0*/ __Vconcswap_1_h306bf3c6__0;
    SData/*10:0*/ double2single__Vstatic__e;
    IData/*22:0*/ single2double__Vstatic__b;
    IData/*22:0*/ __Vconcswap_1_h233e8209__0;
    QData/*51:0*/ double2single__Vstatic__b;

    // INTERNAL VARIABLES
    Vvcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvcore___024unit(Vvcore__Syms* symsp, const char* v__name);
    ~Vvcore___024unit();
    VL_UNCOPYABLE(Vvcore___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};


#endif  // guard
