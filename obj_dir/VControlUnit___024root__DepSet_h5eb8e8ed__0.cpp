// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VControlUnit.h for the primary calling header

#include "VControlUnit__pch.h"
#include "VControlUnit__Syms.h"
#include "VControlUnit___024root.h"

VL_INLINE_OPT VlCoroutine VControlUnit___024root___eval_initial__TOP__Vtiming__1(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_initial__TOP__Vtiming__1\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "testbench/tb_ProgramCounter.sv", 
                                             19);
        vlSelfRef.tb_ProgramCounter__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_ProgramCounter__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__ico(VControlUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VControlUnit___024root___eval_triggers__ico(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_triggers__ico\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VControlUnit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__act(VControlUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VControlUnit___024root___eval_triggers__act(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_triggers__act\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_ProgramCounter__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ProgramCounter__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ProgramCounter__DOT__clk__0 
        = vlSelfRef.tb_ProgramCounter__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VControlUnit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
