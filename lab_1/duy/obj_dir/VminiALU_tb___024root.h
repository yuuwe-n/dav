// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VminiALU_tb.h for the primary calling header

#ifndef VERILATED_VMINIALU_TB___024ROOT_H_
#define VERILATED_VMINIALU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VminiALU_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VminiALU_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ miniALU_tb__DOT__op1;
    CData/*3:0*/ miniALU_tb__DOT__op2;
    CData/*0:0*/ miniALU_tb__DOT__operation;
    CData/*0:0*/ miniALU_tb__DOT__sign;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*19:0*/ miniALU_tb__DOT__result;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VminiALU_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VminiALU_tb___024root(VminiALU_tb__Syms* symsp, const char* v__name);
    ~VminiALU_tb___024root();
    VL_UNCOPYABLE(VminiALU_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
