// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VminiALU_top.h for the primary calling header

#ifndef VERILATED_VMINIALU_TOP___024ROOT_H_
#define VERILATED_VMINIALU_TOP___024ROOT_H_  // guard

#include "verilated.h"


class VminiALU_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) VminiALU_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN16(switches,9,0);
    VL_OUT16(leds,9,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VminiALU_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    VminiALU_top___024root(VminiALU_top__Syms* symsp, const char* v__name);
    ~VminiALU_top___024root();
    VL_UNCOPYABLE(VminiALU_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
