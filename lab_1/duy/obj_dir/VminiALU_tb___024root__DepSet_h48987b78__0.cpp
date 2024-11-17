// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VminiALU_tb.h for the primary calling header

#include "VminiALU_tb__pch.h"
#include "VminiALU_tb___024root.h"

VlCoroutine VminiALU_tb___024root___eval_initial__TOP__Vtiming__0(VminiALU_tb___024root* vlSelf);
VlCoroutine VminiALU_tb___024root___eval_initial__TOP__Vtiming__1(VminiALU_tb___024root* vlSelf);

void VminiALU_tb___024root___eval_initial(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VminiALU_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VminiALU_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine VminiALU_tb___024root___eval_initial__TOP__Vtiming__0(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Test miniALU_top - a =   10\n",0);
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         16);
}

VL_INLINE_OPT VlCoroutine VminiALU_tb___024root___eval_initial__TOP__Vtiming__1(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 0;
    CData/*3:0*/ __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 0;
    CData/*3:0*/ __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 0;
    CData/*3:0*/ __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 0;
    CData/*3:0*/ __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 0;
    CData/*3:0*/ __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 0;
    CData/*3:0*/ __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 0;
    CData/*3:0*/ __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 0;
    // Body
    VL_WRITEF_NX("Starting ALU Testbench...\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 0\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 1\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 2\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 2U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 3\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 3U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 3U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 3U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 3U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 4\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 4U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 4U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 4U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 4U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 5\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 5U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 5U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 5U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 5U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 6\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 6U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 6U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 6U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 6U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 7\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 7U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 7U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 7U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 7U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 8\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 8U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 8U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 8U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 8U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 9\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 9U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 9U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 9U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 9U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 10\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 11\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 0xbU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 12\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 0xcU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 13\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 0xdU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 14\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 0xeU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         76);
    VL_WRITEF_NX("TEST 15\n",0);
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         78);
    __Vtask_miniALU_tb__DOT__addition_operation__0__b = 3U;
    __Vtask_miniALU_tb__DOT__addition_operation__0__a = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         35);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         36);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__addition_operation__0__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__addition_operation__0__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         81);
    VL_WRITEF_NX("Addition: %2# + %2# = %0#\n",0,4,
                 vlSelfRef.miniALU_tb__DOT__op1,4,(IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__b = 1U;
    __Vtask_miniALU_tb__DOT__subtraction_operation__1__a = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         44);
    vlSelfRef.miniALU_tb__DOT__operation = 0U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         45);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__subtraction_operation__1__b;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         86);
    VL_WRITEF_NX("Subtraction: %2# - %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__left_shift_operation__2__a = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         53);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         54);
    vlSelfRef.miniALU_tb__DOT__sign = 0U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__left_shift_operation__2__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         91);
    VL_WRITEF_NX("Left Shift: %2# << %2# = %0#\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt = 1U;
    __Vtask_miniALU_tb__DOT__right_shift_operation__3__a = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         62);
    vlSelfRef.miniALU_tb__DOT__operation = 1U;
    co_await vlSelfRef.__VdlySched.delay(5ULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         63);
    vlSelfRef.miniALU_tb__DOT__sign = 1U;
    vlSelfRef.miniALU_tb__DOT__op1 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__a;
    vlSelfRef.miniALU_tb__DOT__op2 = __Vtask_miniALU_tb__DOT__right_shift_operation__3__shift_amt;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "miniALU_tb.sv", 
                                         96);
    VL_WRITEF_NX("Right Shift: %2# >> %2# = %0#\n\n------------\n\nALU Testbench Completed.\n",0,
                 4,vlSelfRef.miniALU_tb__DOT__op1,4,
                 (IData)(vlSelfRef.miniALU_tb__DOT__op2),
                 20,vlSelfRef.miniALU_tb__DOT__result);
    VL_FINISH_MT("miniALU_tb.sv", 102, "");
}

void VminiALU_tb___024root___act_sequent__TOP__0(VminiALU_tb___024root* vlSelf);

void VminiALU_tb___024root___eval_act(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VminiALU_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VminiALU_tb___024root___act_sequent__TOP__0(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.miniALU_tb__DOT__result = (0xfffffU & 
                                         ((IData)(vlSelfRef.miniALU_tb__DOT__operation)
                                           ? ((IData)(vlSelfRef.miniALU_tb__DOT__sign)
                                               ? ((IData)(vlSelfRef.miniALU_tb__DOT__op1) 
                                                  >> (IData)(vlSelfRef.miniALU_tb__DOT__op2))
                                               : ((IData)(vlSelfRef.miniALU_tb__DOT__op1) 
                                                  << (IData)(vlSelfRef.miniALU_tb__DOT__op2)))
                                           : ((IData)(vlSelfRef.miniALU_tb__DOT__sign)
                                               ? ((IData)(vlSelfRef.miniALU_tb__DOT__op1) 
                                                  - (IData)(vlSelfRef.miniALU_tb__DOT__op2))
                                               : ((IData)(vlSelfRef.miniALU_tb__DOT__op1) 
                                                  + (IData)(vlSelfRef.miniALU_tb__DOT__op2)))));
}

void VminiALU_tb___024root___eval_nba(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VminiALU_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VminiALU_tb___024root___timing_resume(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VminiALU_tb___024root___eval_triggers__act(VminiALU_tb___024root* vlSelf);

bool VminiALU_tb___024root___eval_phase__act(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VminiALU_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VminiALU_tb___024root___timing_resume(vlSelf);
        VminiALU_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VminiALU_tb___024root___eval_phase__nba(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VminiALU_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_tb___024root___dump_triggers__nba(VminiALU_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VminiALU_tb___024root___dump_triggers__act(VminiALU_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VminiALU_tb___024root___eval(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VminiALU_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("miniALU_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VminiALU_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("miniALU_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VminiALU_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VminiALU_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VminiALU_tb___024root___eval_debug_assertions(VminiALU_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
