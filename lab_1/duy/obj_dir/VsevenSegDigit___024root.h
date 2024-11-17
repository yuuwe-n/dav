// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsevenSegDigit.h for the primary calling header

#ifndef VERILATED_VSEVENSEGDIGIT___024ROOT_H_
#define VERILATED_VSEVENSEGDIGIT___024ROOT_H_  // guard

#include "verilated.h"


class VsevenSegDigit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsevenSegDigit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(digit,3,0);
    VL_OUT8(displayBits,7,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsevenSegDigit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsevenSegDigit___024root(VsevenSegDigit__Syms* symsp, const char* v__name);
    ~VsevenSegDigit___024root();
    VL_UNCOPYABLE(VsevenSegDigit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
