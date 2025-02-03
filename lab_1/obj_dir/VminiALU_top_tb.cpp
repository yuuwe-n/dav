// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VminiALU_top_tb__pch.h"

//============================================================
// Constructors

VminiALU_top_tb::VminiALU_top_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VminiALU_top_tb__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VminiALU_top_tb::VminiALU_top_tb(const char* _vcname__)
    : VminiALU_top_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VminiALU_top_tb::~VminiALU_top_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VminiALU_top_tb___024root___eval_debug_assertions(VminiALU_top_tb___024root* vlSelf);
#endif  // VL_DEBUG
void VminiALU_top_tb___024root___eval_static(VminiALU_top_tb___024root* vlSelf);
void VminiALU_top_tb___024root___eval_initial(VminiALU_top_tb___024root* vlSelf);
void VminiALU_top_tb___024root___eval_settle(VminiALU_top_tb___024root* vlSelf);
void VminiALU_top_tb___024root___eval(VminiALU_top_tb___024root* vlSelf);

void VminiALU_top_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VminiALU_top_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VminiALU_top_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VminiALU_top_tb___024root___eval_static(&(vlSymsp->TOP));
        VminiALU_top_tb___024root___eval_initial(&(vlSymsp->TOP));
        VminiALU_top_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VminiALU_top_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VminiALU_top_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VminiALU_top_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VminiALU_top_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VminiALU_top_tb___024root___eval_final(VminiALU_top_tb___024root* vlSelf);

VL_ATTR_COLD void VminiALU_top_tb::final() {
    VminiALU_top_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VminiALU_top_tb::hierName() const { return vlSymsp->name(); }
const char* VminiALU_top_tb::modelName() const { return "VminiALU_top_tb"; }
unsigned VminiALU_top_tb::threads() const { return 1; }
void VminiALU_top_tb::prepareClone() const { contextp()->prepareClone(); }
void VminiALU_top_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
