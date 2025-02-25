// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVCORE__SYMS_H_
#define VERILATED_VVCORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vvcore.h"

// INCLUDE MODULE CLASSES
#include "Vvcore___024root.h"
#include "Vvcore___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vvcore__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vvcore* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vvcore___024root               TOP;
    Vvcore___024unit               TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_vcore;

    // CONSTRUCTORS
    Vvcore__Syms(VerilatedContext* contextp, const char* namep, Vvcore* modelp);
    ~Vvcore__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void __Vserialize(VerilatedSerialize& os);
    void __Vdeserialize(VerilatedDeserialize& os);
};

#endif  // guard
