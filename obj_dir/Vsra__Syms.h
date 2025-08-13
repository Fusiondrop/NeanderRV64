// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSRA__SYMS_H_
#define VERILATED_VSRA__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsra.h"

// INCLUDE MODULE CLASSES
#include "Vsra___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsra__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsra* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsra___024root                 TOP;

    // CONSTRUCTORS
    Vsra__Syms(VerilatedContext* contextp, const char* namep, Vsra* modelp);
    ~Vsra__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
