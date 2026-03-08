// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_processor.h for the primary calling header

#ifndef VERILATED_VTB_PROCESSOR___024ROOT_H_
#define VERILATED_VTB_PROCESSOR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_processor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_processor___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_processor__DOT__clk;
    CData/*0:0*/ tb_processor__DOT__rst;
    CData/*0:0*/ tb_processor__DOT__regWriteEnable;
    CData/*1:0*/ tb_processor__DOT__sel_mux_writeback;
    CData/*2:0*/ tb_processor__DOT__funct3;
    CData/*0:0*/ tb_processor__DOT__dp__DOT__w_memWriteEnable;
    CData/*7:0*/ tb_processor__DOT__dp__DOT__w_memWriteMask;
    CData/*4:0*/ tb_processor__DOT__dp__DOT____Vcellinp__reg_file__rd;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_processor__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_processor__DOT__dp__DOT__pc_index;
    QData/*63:0*/ tb_processor__DOT__dp__DOT__w_mux_pc_next;
    QData/*63:0*/ tb_processor__DOT__dp__DOT__ALUResult;
    QData/*63:0*/ tb_processor__DOT__dp__DOT__w_memWriteData;
    QData/*63:0*/ tb_processor__DOT__dp__DOT__load_ext__DOT__shifted;
    VlUnpacked<IData/*31:0*/, 1024> tb_processor__DOT__dp__DOT__instr_mem__DOT__I_mem;
    VlUnpacked<QData/*63:0*/, 32> tb_processor__DOT__dp__DOT__reg_file__DOT__Registers;
    VlUnpacked<QData/*63:0*/, 1024> tb_processor__DOT__dp__DOT__data_mem__DOT__D_mem;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_processor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_processor___024root(Vtb_processor__Syms* symsp, const char* v__name);
    ~Vtb_processor___024root();
    VL_UNCOPYABLE(Vtb_processor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
