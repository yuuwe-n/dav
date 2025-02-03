// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsevenSegDigit__pch.h"

//============================================================
// Constructors

VsevenSegDigit::VsevenSegDigit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsevenSegDigit__Syms(contextp(), _vcname__, this)}
    , digit{vlSymsp->TOP.digit}
    , displayBits{vlSymsp->TOP.displayBits}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VsevenSegDigit::VsevenSegDigit(const char* _vcname__)
    : VsevenSegDigit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsevenSegDigit::~VsevenSegDigit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VsevenSegDigit___024root___eval_debug_assertions(VsevenSegDigit___024root* vlSelf);
#endif  // VL_DEBUG
void VsevenSegDigit___024root___eval_static(VsevenSegDigit___024root* vlSelf);
void VsevenSegDigit___024root___eval_initial(VsevenSegDigit___024root* vlSelf);
void VsevenSegDigit___024root___eval_settle(VsevenSegDigit___024root* vlSelf);
void VsevenSegDigit___024root___eval(VsevenSegDigit___024root* vlSelf);

void VsevenSegDigit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsevenSegDigit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsevenSegDigit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VsevenSegDigit___024root___eval_static(&(vlSymsp->TOP));
        VsevenSegDigit___024root___eval_initial(&(vlSymsp->TOP));
        VsevenSegDigit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VsevenSegDigit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VsevenSegDigit::eventsPending() { return false; }

uint64_t VsevenSegDigit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VsevenSegDigit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VsevenSegDigit___024root___eval_final(VsevenSegDigit___024root* vlSelf);

VL_ATTR_COLD void VsevenSegDigit::final() {
    VsevenSegDigit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsevenSegDigit::hierName() const { return vlSymsp->name(); }
const char* VsevenSegDigit::modelName() const { return "VsevenSegDigit"; }
unsigned VsevenSegDigit::threads() const { return 1; }
void VsevenSegDigit::prepareClone() const { contextp()->prepareClone(); }
void VsevenSegDigit::atClone() const {
    contextp()->threadPoolpOnClone();
}
