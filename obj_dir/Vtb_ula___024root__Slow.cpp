// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ula.h for the primary calling header

#include "Vtb_ula__pch.h"
#include "Vtb_ula__Syms.h"
#include "Vtb_ula___024root.h"

void Vtb_ula___024root___ctor_var_reset(Vtb_ula___024root* vlSelf);

Vtb_ula___024root::Vtb_ula___024root(Vtb_ula__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_ula___024root___ctor_var_reset(this);
}

void Vtb_ula___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_ula___024root::~Vtb_ula___024root() {
}
