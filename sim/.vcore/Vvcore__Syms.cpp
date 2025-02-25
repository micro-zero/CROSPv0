// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vvcore__pch.h"
#include "Vvcore.h"
#include "Vvcore___024root.h"
#include "Vvcore___024unit.h"

void Vvcore__Syms::__Vserialize(VerilatedSerialize& os) {
    // Internal state
    os<<__Vm_activity;
    os << __Vm_didInit;
    // Module instance state
    TOP.__Vserialize(os);
    TOP____024unit.__Vserialize(os);
}
void Vvcore__Syms::__Vdeserialize(VerilatedDeserialize& os) {
    // Internal state
    os>>__Vm_activity;
    os >> __Vm_didInit;
    // Module instance state
    TOP.__Vdeserialize(os);
    TOP____024unit.__Vdeserialize(os);
}

// FUNCTIONS
Vvcore__Syms::~Vvcore__Syms()
{
}

Vvcore__Syms::Vvcore__Syms(VerilatedContext* contextp, const char* namep, Vvcore* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_vcore.configure(this, name(), "vcore", "vcore", -12, VerilatedScope::SCOPE_OTHER);
}
