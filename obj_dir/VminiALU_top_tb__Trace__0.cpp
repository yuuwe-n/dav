// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VminiALU_top_tb__Syms.h"


void VminiALU_top_tb___024root__trace_chg_0_sub_0(VminiALU_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VminiALU_top_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top_tb___024root__trace_chg_0\n"); );
    // Init
    VminiALU_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VminiALU_top_tb___024root*>(voidSelf);
    VminiALU_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VminiALU_top_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VminiALU_top_tb___024root__trace_chg_0_sub_0(VminiALU_top_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VminiALU_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgSData(oldp+0,(vlSelfRef.miniALU_top_tb__DOT__switches),10);
        bufp->chgCData(oldp+1,((0xfU & ((IData)(vlSelfRef.miniALU_top_tb__DOT__switches) 
                                        >> 6U))),4);
        bufp->chgCData(oldp+2,((0xfU & ((IData)(vlSelfRef.miniALU_top_tb__DOT__switches) 
                                        >> 2U))),4);
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelfRef.miniALU_top_tb__DOT__switches) 
                                    >> 1U))));
        bufp->chgBit(oldp+4,((1U & (IData)(vlSelfRef.miniALU_top_tb__DOT__switches))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgQData(oldp+5,(vlSelfRef.miniALU_top_tb__DOT__displayBits),48);
        bufp->chgIData(oldp+7,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__result),20);
        bufp->chgCData(oldp+8,((0xfU & vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd)),4);
        bufp->chgCData(oldp+9,((0xfU & (vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                        >> 4U))),4);
        bufp->chgCData(oldp+10,((0xfU & (vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                         >> 8U))),4);
        bufp->chgCData(oldp+11,((0xfU & (vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+12,((0xfU & (vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                         >> 0x10U))),4);
        bufp->chgCData(oldp+13,((0xfU & (vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd 
                                         >> 0x14U))),4);
        bufp->chgIData(oldp+14,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT__bcd),24);
        bufp->chgCData(oldp+15,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay0__displayBits),8);
        bufp->chgCData(oldp+16,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay1__displayBits),8);
        bufp->chgCData(oldp+17,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay2__displayBits),8);
        bufp->chgCData(oldp+18,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay3__displayBits),8);
        bufp->chgCData(oldp+19,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay4__displayBits),8);
        bufp->chgCData(oldp+20,(vlSelfRef.miniALU_top_tb__DOT__uut__DOT__encoder_instance__DOT____Vcellout__digitDisplay5__displayBits),8);
    }
}

void VminiALU_top_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VminiALU_top_tb___024root__trace_cleanup\n"); );
    // Init
    VminiALU_top_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VminiALU_top_tb___024root*>(voidSelf);
    VminiALU_top_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
