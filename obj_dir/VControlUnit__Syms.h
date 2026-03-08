// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONTROLUNIT__SYMS_H_
#define VERILATED_VCONTROLUNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VControlUnit.h"

// INCLUDE MODULE CLASSES
#include "VControlUnit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VControlUnit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VControlUnit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VControlUnit___024root         TOP;

    // CONSTRUCTORS
    VControlUnit__Syms(VerilatedContext* contextp, const char* namep, VControlUnit* modelp);
    ~VControlUnit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
