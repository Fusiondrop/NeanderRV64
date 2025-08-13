// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsra.h for the primary calling header

#ifndef VERILATED_VSRA___024ROOT_H_
#define VERILATED_VSRA___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsra__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsra___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb_sra__DOT__amount;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_sra__DOT__dataIn;
    SData/*15:0*/ tb_sra__DOT__DataOut;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsra__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsra___024root(Vsra__Syms* symsp, const char* v__name);
    ~Vsra___024root();
    VL_UNCOPYABLE(Vsra___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
