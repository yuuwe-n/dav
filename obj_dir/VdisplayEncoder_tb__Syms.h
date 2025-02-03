// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDISPLAYENCODER_TB__SYMS_H_
#define VERILATED_VDISPLAYENCODER_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VdisplayEncoder_tb.h"

// INCLUDE MODULE CLASSES
#include "VdisplayEncoder_tb___024root.h"
#include "VdisplayEncoder_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VdisplayEncoder_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VdisplayEncoder_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VdisplayEncoder_tb___024root   TOP;
    VdisplayEncoder_tb___024unit   TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_displayEncoder_tb;

    // CONSTRUCTORS
    VdisplayEncoder_tb__Syms(VerilatedContext* contextp, const char* namep, VdisplayEncoder_tb* modelp);
    ~VdisplayEncoder_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
