// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMINIALU__SYMS_H_
#define VERILATED_VMINIALU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VminiALU.h"

// INCLUDE MODULE CLASSES
#include "VminiALU___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VminiALU__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VminiALU* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VminiALU___024root             TOP;

    // CONSTRUCTORS
    VminiALU__Syms(VerilatedContext* contextp, const char* namep, VminiALU* modelp);
    ~VminiALU__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
