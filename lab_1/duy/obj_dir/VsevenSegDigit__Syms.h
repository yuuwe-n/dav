// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSEVENSEGDIGIT__SYMS_H_
#define VERILATED_VSEVENSEGDIGIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VsevenSegDigit.h"

// INCLUDE MODULE CLASSES
#include "VsevenSegDigit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VsevenSegDigit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VsevenSegDigit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VsevenSegDigit___024root       TOP;

    // CONSTRUCTORS
    VsevenSegDigit__Syms(VerilatedContext* contextp, const char* namep, VsevenSegDigit* modelp);
    ~VsevenSegDigit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
