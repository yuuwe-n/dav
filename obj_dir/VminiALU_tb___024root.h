// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VminiALU_tb.h for the primary calling header

#ifndef VERILATED_VMINIALU_TB___024ROOT_H_
#define VERILATED_VMINIALU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VminiALU_tb___024unit;


class VminiALU_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VminiALU_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    VminiALU_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_miniALU_top__DOT__switches;
    SData/*9:0*/ __Vtrigprevexpr___TOP__tb_miniALU_top__DOT__switches__0;
    IData/*31:0*/ __VactIterCount;
    QData/*47:0*/ tb_miniALU_top__DOT__displayBits;
    QData/*47:0*/ __Vtrigprevexpr___TOP__tb_miniALU_top__DOT__displayBits__0;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

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
