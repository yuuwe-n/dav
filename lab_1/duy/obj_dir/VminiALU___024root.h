// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VminiALU.h for the primary calling header

#ifndef VERILATED_VMINIALU___024ROOT_H_
#define VERILATED_VMINIALU___024ROOT_H_  // guard

#include "verilated.h"


class VminiALU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VminiALU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(op1,3,0);
    VL_IN8(op2,3,0);
    VL_IN8(operation,0,0);
    VL_IN8(sign,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_OUT(result,19,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VminiALU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VminiALU___024root(VminiALU__Syms* symsp, const char* v__name);
    ~VminiALU___024root();
    VL_UNCOPYABLE(VminiALU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
