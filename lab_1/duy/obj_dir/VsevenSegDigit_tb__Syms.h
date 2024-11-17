// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSEVENSEGDIGIT_TB__SYMS_H_
#define VERILATED_VSEVENSEGDIGIT_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VsevenSegDigit_tb.h"

// INCLUDE MODULE CLASSES
#include "VsevenSegDigit_tb___024root.h"
#include "VsevenSegDigit_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VsevenSegDigit_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VsevenSegDigit_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VsevenSegDigit_tb___024root    TOP;
    VsevenSegDigit_tb___024unit    TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_sevenSegDigit_tb;

    // CONSTRUCTORS
    VsevenSegDigit_tb__Syms(VerilatedContext* contextp, const char* namep, VsevenSegDigit_tb* modelp);
    ~VsevenSegDigit_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
