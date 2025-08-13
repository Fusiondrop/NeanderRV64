// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsra.h for the primary calling header

#include "Vsra__pch.h"
#include "Vsra__Syms.h"
#include "Vsra___024root.h"

void Vsra___024root___ctor_var_reset(Vsra___024root* vlSelf);

Vsra___024root::Vsra___024root(Vsra__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsra___024root___ctor_var_reset(this);
}

void Vsra___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vsra___024root::~Vsra___024root() {
}
