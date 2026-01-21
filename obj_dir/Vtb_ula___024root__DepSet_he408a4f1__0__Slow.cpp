// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ula.h for the primary calling header

#include "Vtb_ula__pch.h"
#include "Vtb_ula___024root.h"

VL_ATTR_COLD void Vtb_ula___024root___eval_static(Vtb_ula___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ula___024root___eval_static\n"); );
    Vtb_ula__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_ula___024root___eval_final(Vtb_ula___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ula___024root___eval_final\n"); );
    Vtb_ula__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ula___024root___dump_triggers__stl(Vtb_ula___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_ula___024root___eval_phase__stl(Vtb_ula___024root* vlSelf);

VL_ATTR_COLD void Vtb_ula___024root___eval_settle(Vtb_ula___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ula___024root___eval_settle\n"); );
    Vtb_ula__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_ula___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/tb_ula.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_ula___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ula___024root___dump_triggers__stl(Vtb_ula___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ula___024root___dump_triggers__stl\n"); );
    Vtb_ula__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vtb_ula___024root___act_sequent__TOP__0(Vtb_ula___024root* vlSelf);

VL_ATTR_COLD void Vtb_ula___024root___eval_stl(Vtb_ula___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ula___024root___eval_stl\n"); );
    Vtb_ula__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_ula___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_ula___024root___eval_triggers__stl(Vtb_ula___024root* vlSelf);

VL_ATTR_COLD bool Vtb_ula___024root___eval_phase__stl(Vtb_ula___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ula___024root___eval_phase__stl\n"); );
    Vtb_ula__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_ula___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_ula___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ula___024root___dump_triggers__act(Vtb_ula___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ula___024root___dump_triggers__act\n"); );
    Vtb_ula__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ula___024root___dump_triggers__nba(Vtb_ula___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ula___024root___dump_triggers__nba\n"); );
    Vtb_ula__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_ula___024root___ctor_var_reset(Vtb_ula___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ula___024root___ctor_var_reset\n"); );
    Vtb_ula__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->tb_ula__DOT__word = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15965044886250492828ull);
    vlSelf->tb_ula__DOT__dataA = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11821259016024065988ull);
    vlSelf->tb_ula__DOT__dataB = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6277635389840813520ull);
    vlSelf->tb_ula__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18034166269452607208ull);
    vlSelf->tb_ula__DOT__ALUOut = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10179548346554084194ull);
    vlSelf->tb_ula__DOT__Overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 541472373475120352ull);
    vlSelf->tb_ula__DOT__Carry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12711032281693948549ull);
    }
