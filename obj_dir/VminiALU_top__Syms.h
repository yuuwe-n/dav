// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMINIALU_TOP__SYMS_H_
#define VERILATED_VMINIALU_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VminiALU_top.h"

// INCLUDE MODULE CLASSES
#include "VminiALU_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VminiALU_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VminiALU_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VminiALU_top___024root         TOP;

    // CONSTRUCTORS
    VminiALU_top__Syms(VerilatedContext* contextp, const char* namep, VminiALU_top* modelp);
    ~VminiALU_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
