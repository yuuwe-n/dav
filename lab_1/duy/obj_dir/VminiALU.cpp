// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VminiALU__pch.h"

//============================================================
// Constructors

VminiALU::VminiALU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VminiALU__Syms(contextp(), _vcname__, this)}
    , op1{vlSymsp->TOP.op1}
    , op2{vlSymsp->TOP.op2}
    , operation{vlSymsp->TOP.operation}
    , sign{vlSymsp->TOP.sign}
    , result{vlSymsp->TOP.result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VminiALU::VminiALU(const char* _vcname__)
    : VminiALU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VminiALU::~VminiALU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VminiALU___024root___eval_debug_assertions(VminiALU___024root* vlSelf);
#endif  // VL_DEBUG
void VminiALU___024root___eval_static(VminiALU___024root* vlSelf);
void VminiALU___024root___eval_initial(VminiALU___024root* vlSelf);
void VminiALU___024root___eval_settle(VminiALU___024root* vlSelf);
void VminiALU___024root___eval(VminiALU___024root* vlSelf);

void VminiALU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VminiALU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VminiALU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VminiALU___024root___eval_static(&(vlSymsp->TOP));
        VminiALU___024root___eval_initial(&(vlSymsp->TOP));
        VminiALU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VminiALU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VminiALU::eventsPending() { return false; }

uint64_t VminiALU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VminiALU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VminiALU___024root___eval_final(VminiALU___024root* vlSelf);

VL_ATTR_COLD void VminiALU::final() {
    VminiALU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VminiALU::hierName() const { return vlSymsp->name(); }
const char* VminiALU::modelName() const { return "VminiALU"; }
unsigned VminiALU::threads() const { return 1; }
void VminiALU::prepareClone() const { contextp()->prepareClone(); }
void VminiALU::atClone() const {
    contextp()->threadPoolpOnClone();
}
