// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VControlUnit.h for the primary calling header

#ifndef VERILATED_VCONTROLUNIT___024ROOT_H_
#define VERILATED_VCONTROLUNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VControlUnit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VControlUnit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ tb_ProgramCounter__DOT__clk;
    VL_IN8(data0,0,0);
    VL_IN8(data1,0,0);
    VL_IN8(data2,0,0);
    VL_IN8(data3,0,0);
    VL_IN8(sel,1,0);
    VL_OUT8(mux_out,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ tb_ProgramCounter__DOT__rst;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ProgramCounter__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_ProgramCounter__DOT__PC_in;
    QData/*63:0*/ tb_ProgramCounter__DOT__PC_out;
    VlUnpacked<IData/*31:0*/, 1024> TopLevel__DOT__dp__DOT__instr_mem__DOT__I_mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h0e2caa4e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VControlUnit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VControlUnit___024root(VControlUnit__Syms* symsp, const char* v__name);
    ~VControlUnit___024root();
    VL_UNCOPYABLE(VControlUnit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
