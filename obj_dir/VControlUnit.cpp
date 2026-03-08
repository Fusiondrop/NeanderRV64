// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VControlUnit__pch.h"

//============================================================
// Constructors

VControlUnit::VControlUnit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VControlUnit__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , data0{vlSymsp->TOP.data0}
    , data1{vlSymsp->TOP.data1}
    , data2{vlSymsp->TOP.data2}
    , data3{vlSymsp->TOP.data3}
    , sel{vlSymsp->TOP.sel}
    , mux_out{vlSymsp->TOP.mux_out}
    , rst{vlSymsp->TOP.rst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VControlUnit::VControlUnit(const char* _vcname__)
    : VControlUnit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VControlUnit::~VControlUnit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VControlUnit___024root___eval_debug_assertions(VControlUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VControlUnit___024root___eval_static(VControlUnit___024root* vlSelf);
void VControlUnit___024root___eval_initial(VControlUnit___024root* vlSelf);
void VControlUnit___024root___eval_settle(VControlUnit___024root* vlSelf);
void VControlUnit___024root___eval(VControlUnit___024root* vlSelf);

void VControlUnit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VControlUnit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VControlUnit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VControlUnit___024root___eval_static(&(vlSymsp->TOP));
        VControlUnit___024root___eval_initial(&(vlSymsp->TOP));
        VControlUnit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VControlUnit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VControlUnit::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VControlUnit::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VControlUnit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VControlUnit___024root___eval_final(VControlUnit___024root* vlSelf);

VL_ATTR_COLD void VControlUnit::final() {
    VControlUnit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VControlUnit::hierName() const { return vlSymsp->name(); }
const char* VControlUnit::modelName() const { return "VControlUnit"; }
unsigned VControlUnit::threads() const { return 1; }
void VControlUnit::prepareClone() const { contextp()->prepareClone(); }
void VControlUnit::atClone() const {
    contextp()->threadPoolpOnClone();
}
