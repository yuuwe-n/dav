// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VclockDivider.h for the primary calling header

#ifndef VERILATED_VCLOCKDIVIDER___024ROOT_H_
#define VERILATED_VCLOCKDIVIDER___024ROOT_H_  // guard

#include "verilated.h"


class VclockDivider__Syms;

class alignas(VL_CACHE_LINE_BYTES) VclockDivider___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VL_IN8(clk[2],0,0);
    VL_IN8(speed[20],0,0);
    VL_IN8(rst[2],0,0);
    VL_OUT8(outClk[2],0,0);
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VclockDivider__Syms* const vlSymsp;

    // CONSTRUCTORS
    VclockDivider___024root(VclockDivider__Syms* symsp, const char* v__name);
    ~VclockDivider___024root();
    VL_UNCOPYABLE(VclockDivider___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
