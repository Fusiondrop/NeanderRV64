// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_processor__pch.h"

//============================================================
// Constructors

Vtb_processor::Vtb_processor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_processor__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_processor::Vtb_processor(const char* _vcname__)
    : Vtb_processor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_processor::~Vtb_processor() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_processor___024root___eval_debug_assertions(Vtb_processor___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_processor___024root___eval_static(Vtb_processor___024root* vlSelf);
void Vtb_processor___024root___eval_initial(Vtb_processor___024root* vlSelf);
void Vtb_processor___024root___eval_settle(Vtb_processor___024root* vlSelf);
void Vtb_processor___024root___eval(Vtb_processor___024root* vlSelf);

void Vtb_processor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_processor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_processor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_processor___024root___eval_static(&(vlSymsp->TOP));
        Vtb_processor___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_processor___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_processor___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_processor::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_processor::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_processor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_processor___024root___eval_final(Vtb_processor___024root* vlSelf);

VL_ATTR_COLD void Vtb_processor::final() {
    Vtb_processor___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_processor::hierName() const { return vlSymsp->name(); }
const char* Vtb_processor::modelName() const { return "Vtb_processor"; }
unsigned Vtb_processor::threads() const { return 1; }
void Vtb_processor::prepareClone() const { contextp()->prepareClone(); }
void Vtb_processor::atClone() const {
    contextp()->threadPoolpOnClone();
}
