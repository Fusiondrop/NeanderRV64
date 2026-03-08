// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VControlUnit.h for the primary calling header

#include "VControlUnit__pch.h"
#include "VControlUnit__Syms.h"
#include "VControlUnit___024root.h"

void VControlUnit___024root___ctor_var_reset(VControlUnit___024root* vlSelf);

VControlUnit___024root::VControlUnit___024root(VControlUnit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VControlUnit___024root___ctor_var_reset(this);
}

void VControlUnit___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VControlUnit___024root::~VControlUnit___024root() {
}
