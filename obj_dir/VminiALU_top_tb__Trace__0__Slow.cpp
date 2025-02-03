// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VminiALU_top_tb__Syms.h"


VL_ATTR_COLD void VminiALU_top_tb___024root__trace_init_sub__TOP__0(VminiALU_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top_tb___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("miniALU_top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"switches",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+6,0,"displayBits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"switches",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+6,0,"displayBits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+2,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+4,0,"operation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("alu_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"operation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+5,0,"sign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+8,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->pushPrefix("encoder_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+6,0,"displayBits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+9,0,"digit0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+10,0,"digit1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"digit2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"digit3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"digit4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"digit5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"bcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("digitDisplay0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"digit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"displayBits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("digitDisplay1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+10,0,"digit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"displayBits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("digitDisplay2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+11,0,"digit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"displayBits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("digitDisplay3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"digit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"displayBits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("digitDisplay4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"digit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"displayBits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("digitDisplay5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"digit",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"displayBits",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VminiALU_top_tb___024root__trace_init_top(VminiALU_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top_tb___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VminiALU_top_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VminiALU_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VminiALU_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VminiALU_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VminiALU_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VminiALU_top_tb___024root__trace_register(VminiALU_top_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top_tb___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VminiALU_top_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VminiALU_top_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VminiALU_top_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VminiALU_top_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VminiALU_top_tb___024root__trace_const_0_sub_0(VminiALU_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VminiALU_top_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top_tb___024root__trace_const_0\n"); );
    // Init
    VminiALU_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VminiALU_top_tb___024root*>(voidSelf);
    VminiALU_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VminiALU_top_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VminiALU_top_tb___024root__trace_const_0_sub_0(VminiALU_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top_tb___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+22,(0x14U),32);
}

VL_ATTR_COLD void VminiALU_top_tb___024root__trace_full_0_sub_0(VminiALU_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VminiALU_top_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top_tb___024root__trace_full_0\n"); );
    // Init
    VminiALU_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VminiALU_top_tb___024root*>(voidSelf);
    VminiALU_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VminiALU_top_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VminiALU_top_tb___024root__trace_full_0_sub_0(VminiALU_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top_tb___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelfRef.miniALU_top_tb__DOT__switches),10);
    bufp->fullCData(oldp+2,((0xfU & ((IData)(vlSelfRef.miniALU_top_tb__DOT__switches) 
                                     >> 6U))),4);
    bufp->fullCData(oldp+3,((0xfU & ((IData)(vlSelfRef.miniALU_top_tb__DOT__switches) 
                                     >> 2U))),4);
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelfRef.miniALU_top_tb__DOT__switches) 
                                 >> 1U))));
    bufp->fullBit(oldp+5,((1U & (IData)(vlSelfRef.miniALU_top_tb__DOT__switches))));
    bufp->fullQData(oldp+6,(vlSelfRef.miniALU_top_tb__DOT__displayBits),48);
    bufp->fullIData(oldp+8,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__result),20);
    bufp->fullCData(oldp+9,((0xfU & vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd)),4);
    bufp->fullCData(oldp+10,((0xfU & (vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                      >> 4U))),4);
    bufp->fullCData(oldp+11,((0xfU & (vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                      >> 8U))),4);
    bufp->fullCData(oldp+12,((0xfU & (vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                      >> 0xcU))),4);
    bufp->fullCData(oldp+13,((0xfU & (vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                      >> 0x10U))),4);
    bufp->fullCData(oldp+14,((0xfU & (vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                      >> 0x14U))),4);
    bufp->fullIData(oldp+15,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd),24);
    bufp->fullCData(oldp+16,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay0__displayBits),8);
    bufp->fullCData(oldp+17,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay1__displayBits),8);
    bufp->fullCData(oldp+18,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay2__displayBits),8);
    bufp->fullCData(oldp+19,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay3__displayBits),8);
    bufp->fullCData(oldp+20,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay4__displayBits),8);
    bufp->fullCData(oldp+21,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay5__displayBits),8);
}
