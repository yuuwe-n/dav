// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VsevenSegDigit_tb__pch.h"
#include "VsevenSegDigit_tb.h"
#include "VsevenSegDigit_tb___024root.h"
#include "VsevenSegDigit_tb___024unit.h"

// FUNCTIONS
VsevenSegDigit_tb__Syms::~VsevenSegDigit_tb__Syms()
{
}

VsevenSegDigit_tb__Syms::VsevenSegDigit_tb__Syms(VerilatedContext* contextp, const char* namep, VsevenSegDigit_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(22);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_sevenSegDigit_tb.configure(this, name(), "sevenSegDigit_tb", "sevenSegDigit_tb", -12, VerilatedScope::SCOPE_OTHER);
}
