// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VminiALU_tb__pch.h"
#include "VminiALU_tb.h"
#include "VminiALU_tb___024root.h"
#include "VminiALU_tb___024unit.h"

// FUNCTIONS
VminiALU_tb__Syms::~VminiALU_tb__Syms()
{
}

VminiALU_tb__Syms::VminiALU_tb__Syms(VerilatedContext* contextp, const char* namep, VminiALU_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(98);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_miniALU_top.configure(this, name(), "tb_miniALU_top", "tb_miniALU_top", "<null>", -9, VerilatedScope::SCOPE_OTHER);
}
