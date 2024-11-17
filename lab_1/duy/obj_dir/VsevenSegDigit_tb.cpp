// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsevenSegDigit_tb__pch.h"

//============================================================
// Constructors

VsevenSegDigit_tb::VsevenSegDigit_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsevenSegDigit_tb__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VsevenSegDigit_tb::VsevenSegDigit_tb(const char* _vcname__)
    : VsevenSegDigit_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsevenSegDigit_tb::~VsevenSegDigit_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VsevenSegDigit_tb___024root___eval_debug_assertions(VsevenSegDigit_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VsevenSegDigit_tb___024root___eval_static(VsevenSegDigit_tb___024root* vlSelf);
void VsevenSegDigit_tb___024root___eval_initial(VsevenSegDigit_tb___024root* vlSelf);
void VsevenSegDigit_tb___024root___eval_settle(VsevenSegDigit_tb___024root* vlSelf);
void VsevenSegDigit_tb___024root___eval(VsevenSegDigit_tb___024root* vlSelf);

void VsevenSegDigit_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsevenSegDigit_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsevenSegDigit_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VsevenSegDigit_tb___024root___eval_static(&(vlSymsp->TOP));
        VsevenSegDigit_tb___024root___eval_initial(&(vlSymsp->TOP));
        VsevenSegDigit_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VsevenSegDigit_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VsevenSegDigit_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VsevenSegDigit_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VsevenSegDigit_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VsevenSegDigit_tb___024root___eval_final(VsevenSegDigit_tb___024root* vlSelf);

VL_ATTR_COLD void VsevenSegDigit_tb::final() {
    VsevenSegDigit_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsevenSegDigit_tb::hierName() const { return vlSymsp->name(); }
const char* VsevenSegDigit_tb::modelName() const { return "VsevenSegDigit_tb"; }
unsigned VsevenSegDigit_tb::threads() const { return 1; }
void VsevenSegDigit_tb::prepareClone() const { contextp()->prepareClone(); }
void VsevenSegDigit_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
