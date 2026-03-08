// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VControlUnit.h for the primary calling header

#include "VControlUnit__pch.h"
#include "VControlUnit___024root.h"

VL_ATTR_COLD void VControlUnit___024root___eval_static(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_static\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ProgramCounter__DOT__clk__0 
        = vlSelfRef.tb_ProgramCounter__DOT__clk;
}

VL_ATTR_COLD void VControlUnit___024root___eval_initial__TOP(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_initial__TOP\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.TopLevel__DOT__dp__DOT__instr_mem__DOT__I_mem)
                 , 0, ~0ULL);
    vlSelfRef.tb_ProgramCounter__DOT__clk = 0U;
}

VL_ATTR_COLD void VControlUnit___024root___eval_final(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_final\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__stl(VControlUnit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VControlUnit___024root___eval_phase__stl(VControlUnit___024root* vlSelf);

VL_ATTR_COLD void VControlUnit___024root___eval_settle(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_settle\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VControlUnit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Generic_components/mux4.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VControlUnit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__stl(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___dump_triggers__stl\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void VControlUnit___024root___ico_sequent__TOP__0(VControlUnit___024root* vlSelf);

VL_ATTR_COLD void VControlUnit___024root___eval_stl(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_stl\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VControlUnit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VControlUnit___024root___eval_triggers__stl(VControlUnit___024root* vlSelf);

VL_ATTR_COLD bool VControlUnit___024root___eval_phase__stl(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___eval_phase__stl\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VControlUnit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VControlUnit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__ico(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___dump_triggers__ico\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__act(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___dump_triggers__act\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_ProgramCounter.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VControlUnit___024root___dump_triggers__nba(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___dump_triggers__nba\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_ProgramCounter.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VControlUnit___024root___ctor_var_reset(VControlUnit___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VControlUnit___024root___ctor_var_reset\n"); );
    VControlUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->data0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1260465023307557660ull);
    vlSelf->data1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13461337712137131508ull);
    vlSelf->data2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2099290849777515148ull);
    vlSelf->data3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13185943227689233706ull);
    vlSelf->sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14660815779230110548ull);
    vlSelf->mux_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2898645970647042890ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->TopLevel__DOT__dp__DOT__instr_mem__DOT__I_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16954798893950883933ull);
    }
    vlSelf->tb_ProgramCounter__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14178181404114660735ull);
    vlSelf->tb_ProgramCounter__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7843564281386714481ull);
    vlSelf->tb_ProgramCounter__DOT__PC_in = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12586808866168210311ull);
    vlSelf->tb_ProgramCounter__DOT__PC_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2339378633519270870ull);
    vlSelf->__Vtrigprevexpr___TOP__tb_ProgramCounter__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5046171478893484627ull);
}
