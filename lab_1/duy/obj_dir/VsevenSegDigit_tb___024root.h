// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsevenSegDigit_tb.h for the primary calling header

#ifndef VERILATED_VSEVENSEGDIGIT_TB___024ROOT_H_
#define VERILATED_VSEVENSEGDIGIT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VsevenSegDigit_tb___024unit;


class VsevenSegDigit_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsevenSegDigit_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    VsevenSegDigit_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ sevenSegDigit_tb__DOT__digit;
    CData/*7:0*/ sevenSegDigit_tb__DOT__displayBits;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*3:0*/ __Vtrigprevexpr___TOP__sevenSegDigit_tb__DOT__digit__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__sevenSegDigit_tb__DOT__displayBits__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsevenSegDigit_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsevenSegDigit_tb___024root(VsevenSegDigit_tb__Syms* symsp, const char* v__name);
    ~VsevenSegDigit_tb___024root();
    VL_UNCOPYABLE(VsevenSegDigit_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
