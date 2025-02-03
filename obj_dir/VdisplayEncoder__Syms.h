// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDISPLAYENCODER__SYMS_H_
#define VERILATED_VDISPLAYENCODER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VdisplayEncoder.h"

// INCLUDE MODULE CLASSES
#include "VdisplayEncoder___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VdisplayEncoder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VdisplayEncoder* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VdisplayEncoder___024root      TOP;

    // CONSTRUCTORS
    VdisplayEncoder__Syms(VerilatedContext* contextp, const char* namep, VdisplayEncoder* modelp);
    ~VdisplayEncoder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
