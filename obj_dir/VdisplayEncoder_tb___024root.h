// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VdisplayEncoder_tb.h for the primary calling header

#ifndef VERILATED_VDISPLAYENCODER_TB___024ROOT_H_
#define VERILATED_VDISPLAYENCODER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VdisplayEncoder_tb___024unit;


class VdisplayEncoder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VdisplayEncoder_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    VdisplayEncoder_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*19:0*/ displayEncoder_tb__DOT__result;
    IData/*19:0*/ __Vtrigprevexpr___TOP__displayEncoder_tb__DOT__result__0;
    IData/*31:0*/ __VactIterCount;
    QData/*47:0*/ displayEncoder_tb__DOT__displayBits;
    QData/*47:0*/ __Vtrigprevexpr___TOP__displayEncoder_tb__DOT__displayBits__0;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VdisplayEncoder_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VdisplayEncoder_tb___024root(VdisplayEncoder_tb__Syms* symsp, const char* v__name);
    ~VdisplayEncoder_tb___024root();
    VL_UNCOPYABLE(VdisplayEncoder_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
