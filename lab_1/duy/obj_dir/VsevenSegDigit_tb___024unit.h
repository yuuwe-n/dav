// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsevenSegDigit_tb.h for the primary calling header

#ifndef VERILATED_VSEVENSEGDIGIT_TB___024UNIT_H_
#define VERILATED_VSEVENSEGDIGIT_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VsevenSegDigit_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsevenSegDigit_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    VsevenSegDigit_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsevenSegDigit_tb___024unit(VsevenSegDigit_tb__Syms* symsp, const char* v__name);
    ~VsevenSegDigit_tb___024unit();
    VL_UNCOPYABLE(VsevenSegDigit_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
