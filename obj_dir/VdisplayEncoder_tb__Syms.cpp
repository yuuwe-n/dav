// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VdisplayEncoder_tb__pch.h"
#include "VdisplayEncoder_tb.h"
#include "VdisplayEncoder_tb___024root.h"
#include "VdisplayEncoder_tb___024unit.h"

// FUNCTIONS
VdisplayEncoder_tb__Syms::~VdisplayEncoder_tb__Syms()
{
}

VdisplayEncoder_tb__Syms::VdisplayEncoder_tb__Syms(VerilatedContext* contextp, const char* namep, VdisplayEncoder_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(82);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_displayEncoder_tb.configure(this, name(), "displayEncoder_tb", "displayEncoder_tb", -12, VerilatedScope::SCOPE_OTHER);
}
