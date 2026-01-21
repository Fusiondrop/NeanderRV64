// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ula.h for the primary calling header

#ifndef VERILATED_VTB_ULA___024ROOT_H_
#define VERILATED_VTB_ULA___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ula__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ula___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_ula__DOT__word;
    CData/*3:0*/ tb_ula__DOT__ALUControl;
    CData/*0:0*/ tb_ula__DOT__Overflow;
    CData/*0:0*/ tb_ula__DOT__Carry;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_ula__DOT__dataA;
    QData/*63:0*/ tb_ula__DOT__dataB;
    QData/*63:0*/ tb_ula__DOT__ALUOut;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ula__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ula___024root(Vtb_ula__Syms* symsp, const char* v__name);
    ~Vtb_ula___024root();
    VL_UNCOPYABLE(Vtb_ula___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
