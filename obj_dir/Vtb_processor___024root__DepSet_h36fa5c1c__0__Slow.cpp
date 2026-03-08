// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_processor.h for the primary calling header

#include "Vtb_processor__pch.h"
#include "Vtb_processor___024root.h"

VL_ATTR_COLD void Vtb_processor___024root___eval_static(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_static\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_processor__DOT__clk__0 
        = vlSelfRef.tb_processor__DOT__clk;
}

VL_ATTR_COLD void Vtb_processor___024root___eval_initial__TOP(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_initial__TOP\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.tb_processor__DOT__dp__DOT__instr_mem__DOT__I_mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_processor___024root___eval_final(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_final\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor___024root___dump_triggers__stl(Vtb_processor___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_processor___024root___eval_phase__stl(Vtb_processor___024root* vlSelf);

VL_ATTR_COLD void Vtb_processor___024root___eval_settle(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_settle\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_processor___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/tb_processor.sv", 14, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_processor___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor___024root___dump_triggers__stl(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___dump_triggers__stl\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_processor___024root___act_sequent__TOP__0(Vtb_processor___024root* vlSelf);

VL_ATTR_COLD void Vtb_processor___024root___eval_stl(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_stl\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_processor___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_processor___024root___eval_triggers__stl(Vtb_processor___024root* vlSelf);

VL_ATTR_COLD bool Vtb_processor___024root___eval_phase__stl(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___eval_phase__stl\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_processor___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_processor___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor___024root___dump_triggers__act(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___dump_triggers__act\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_processor.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_processor___024root___dump_triggers__nba(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___dump_triggers__nba\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_processor.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_processor___024root___ctor_var_reset(Vtb_processor___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_processor___024root___ctor_var_reset\n"); );
    Vtb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_processor__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15064323546484546977ull);
    vlSelf->tb_processor__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9361976395941776395ull);
    vlSelf->tb_processor__DOT__regWriteEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14232586259530766125ull);
    vlSelf->tb_processor__DOT__sel_mux_writeback = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1585291902038072156ull);
    vlSelf->tb_processor__DOT__funct3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5889686874785249307ull);
    vlSelf->tb_processor__DOT__dp__DOT__pc_index = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10082588252159958408ull);
    vlSelf->tb_processor__DOT__dp__DOT__w_mux_pc_next = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11000378689712660885ull);
    vlSelf->tb_processor__DOT__dp__DOT__ALUResult = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9702362583310480434ull);
    vlSelf->tb_processor__DOT__dp__DOT__w_memWriteEnable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13138135969484016247ull);
    vlSelf->tb_processor__DOT__dp__DOT__w_memWriteMask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 631089231682829941ull);
    vlSelf->tb_processor__DOT__dp__DOT__w_memWriteData = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1863078153385838175ull);
    vlSelf->tb_processor__DOT__dp__DOT____Vcellinp__reg_file__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1084117535027900245ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_processor__DOT__dp__DOT__instr_mem__DOT__I_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8691256687857412515ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_processor__DOT__dp__DOT__reg_file__DOT__Registers[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17472198380320933095ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_processor__DOT__dp__DOT__data_mem__DOT__D_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4009728192931073843ull);
    }
    vlSelf->tb_processor__DOT__dp__DOT__load_ext__DOT__shifted = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11032503532140722563ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_processor__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11388477932360743952ull);
}
