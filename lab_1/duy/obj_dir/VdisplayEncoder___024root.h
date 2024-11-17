// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VdisplayEncoder.h for the primary calling header

#ifndef VERILATED_VDISPLAYENCODER___024ROOT_H_
#define VERILATED_VDISPLAYENCODER___024ROOT_H_  // guard

#include "verilated.h"


class VdisplayEncoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) VdisplayEncoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(result,19,0);
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(displayBits,47,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VdisplayEncoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    VdisplayEncoder___024root(VdisplayEncoder__Syms* symsp, const char* v__name);
    ~VdisplayEncoder___024root();
    VL_UNCOPYABLE(VdisplayEncoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
