// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VminiALU_tb__pch.h"

//============================================================
// Constructors

VminiALU_tb::VminiALU_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VminiALU_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VminiALU_tb::VminiALU_tb(const char* _vcname__)
    : VminiALU_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VminiALU_tb::~VminiALU_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VminiALU_tb___024root___eval_debug_assertions(VminiALU_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VminiALU_tb___024root___eval_static(VminiALU_tb___024root* vlSelf);
void VminiALU_tb___024root___eval_initial(VminiALU_tb___024root* vlSelf);
void VminiALU_tb___024root___eval_settle(VminiALU_tb___024root* vlSelf);
void VminiALU_tb___024root___eval(VminiALU_tb___024root* vlSelf);

void VminiALU_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VminiALU_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VminiALU_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VminiALU_tb___024root___eval_static(&(vlSymsp->TOP));
        VminiALU_tb___024root___eval_initial(&(vlSymsp->TOP));
        VminiALU_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VminiALU_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VminiALU_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VminiALU_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VminiALU_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VminiALU_tb___024root___eval_final(VminiALU_tb___024root* vlSelf);

VL_ATTR_COLD void VminiALU_tb::final() {
    VminiALU_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VminiALU_tb::hierName() const { return vlSymsp->name(); }
const char* VminiALU_tb::modelName() const { return "VminiALU_tb"; }
unsigned VminiALU_tb::threads() const { return 1; }
void VminiALU_tb::prepareClone() const { contextp()->prepareClone(); }
void VminiALU_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
