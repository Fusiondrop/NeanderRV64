// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_controlunit.h for the primary calling header

#ifndef VERILATED_VTB_CONTROLUNIT___024ROOT_H_
#define VERILATED_VTB_CONTROLUNIT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_controlunit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_controlunit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_controlunit__DOT__Zero;
    CData/*0:0*/ tb_controlunit__DOT__Negative;
    CData/*0:0*/ tb_controlunit__DOT__Carry;
    CData/*0:0*/ tb_controlunit__DOT__Overflow;
    CData/*0:0*/ tb_controlunit__DOT__funct7;
    CData/*2:0*/ tb_controlunit__DOT__funct3;
    CData/*6:0*/ tb_controlunit__DOT__opcode;
    CData/*0:0*/ tb_controlunit__DOT__regWriteEnable;
    CData/*0:0*/ tb_controlunit__DOT__load;
    CData/*0:0*/ tb_controlunit__DOT__store;
    CData/*0:0*/ tb_controlunit__DOT__word;
    CData/*3:0*/ tb_controlunit__DOT__ALUControl;
    CData/*0:0*/ tb_controlunit__DOT__JALR;
    CData/*0:0*/ tb_controlunit__DOT__sel_mux_pcnext;
    CData/*0:0*/ tb_controlunit__DOT__sel_mux_srcB;
    CData/*1:0*/ tb_controlunit__DOT__sel_mux_srcA;
    CData/*1:0*/ tb_controlunit__DOT__sel_mux_writeback;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_controlunit__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_controlunit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_controlunit___024root(Vtb_controlunit__Syms* symsp, const char* v__name);
    ~Vtb_controlunit___024root();
    VL_UNCOPYABLE(Vtb_controlunit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
