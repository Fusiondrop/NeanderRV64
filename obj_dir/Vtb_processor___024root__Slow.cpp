// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_processor.h for the primary calling header

#include "Vtb_processor__pch.h"
#include "Vtb_processor__Syms.h"
#include "Vtb_processor___024root.h"

void Vtb_processor___024root___ctor_var_reset(Vtb_processor___024root* vlSelf);

Vtb_processor___024root::Vtb_processor___024root(Vtb_processor__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_processor___024root___ctor_var_reset(this);
}

void Vtb_processor___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_processor___024root::~Vtb_processor___024root() {
}
