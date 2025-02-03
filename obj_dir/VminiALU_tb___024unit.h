// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VminiALU_tb.h for the primary calling header

#ifndef VERILATED_VMINIALU_TB___024UNIT_H_
#define VERILATED_VMINIALU_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VminiALU_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VminiALU_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    VminiALU_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VminiALU_tb___024unit(VminiALU_tb__Syms* symsp, const char* v__name);
    ~VminiALU_tb___024unit();
    VL_UNCOPYABLE(VminiALU_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
