// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvcore.h for the primary calling header

#include "Vvcore__pch.h"
#include "Vvcore__Syms.h"
#include "Vvcore___024unit.h"

void Vvcore___024unit___ctor_var_reset(Vvcore___024unit* vlSelf);

Vvcore___024unit::Vvcore___024unit(Vvcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vvcore___024unit___ctor_var_reset(this);
}

void Vvcore___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vvcore___024unit::~Vvcore___024unit() {
}

// Savable
void Vvcore___024unit::__Vserialize(VerilatedSerialize& os) {
    uint64_t __Vcheckval = 0x6ac13b15a92d897eULL;
    os << __Vcheckval;
    os << vlSymsp->_vm_contextp__;
    os<<single2double__Vstatic__sgn;
    os<<__PVT__single2double__Vstatic__ov;
    os<<single2double__Vstatic__e;
    os<<double2single__Vstatic__s;
    os<<double2single__Vstatic__ov;
    os<<__Vconcswap_1_h306bf3c6__0;
    os<<double2single__Vstatic__e;
    os<<single2double__Vstatic__b;
    os<<__Vconcswap_1_h233e8209__0;
    os<<double2single__Vstatic__b;
}
void Vvcore___024unit::__Vdeserialize(VerilatedDeserialize& os) {
    uint64_t __Vcheckval = 0x6ac13b15a92d897eULL;
    os.readAssert(__Vcheckval);
    os >> vlSymsp->_vm_contextp__;
    os>>single2double__Vstatic__sgn;
    os>>__PVT__single2double__Vstatic__ov;
    os>>single2double__Vstatic__e;
    os>>double2single__Vstatic__s;
    os>>double2single__Vstatic__ov;
    os>>__Vconcswap_1_h306bf3c6__0;
    os>>double2single__Vstatic__e;
    os>>single2double__Vstatic__b;
    os>>__Vconcswap_1_h233e8209__0;
    os>>double2single__Vstatic__b;
}
