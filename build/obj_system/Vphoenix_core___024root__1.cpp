// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vphoenix_core.h for the primary calling header

#include "Vphoenix_core__pch.h"

void Vphoenix_core___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vphoenix_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vphoenix_core___024root___eval_phase__act(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___eval_phase__act\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vphoenix_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vphoenix_core___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vphoenix_core___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vphoenix_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vphoenix_core___024root___nba_sequent__TOP__0(Vphoenix_core___024root* vlSelf);

bool Vphoenix_core___024root___eval_phase__nba(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___eval_phase__nba\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vphoenix_core___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vphoenix_core___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vphoenix_core___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vphoenix_core___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vphoenix_core___024root___eval_phase__ico(Vphoenix_core___024root* vlSelf);

void Vphoenix_core___024root___eval(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___eval\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vphoenix_core___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl/phoenix_core.sv", 29, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vphoenix_core___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vphoenix_core___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl/phoenix_core.sv", 29, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vphoenix_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl/phoenix_core.sv", 29, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vphoenix_core___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vphoenix_core___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vphoenix_core___024root___eval_debug_assertions(Vphoenix_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_core___024root___eval_debug_assertions\n"); );
    Vphoenix_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.dl_addr & 0xfffe0000U)))) {
        Verilated::overWidthError("dl_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.dl_wr & 0xfeU)))) {
        Verilated::overWidthError("dl_wr");
    }
    if (VL_UNLIKELY(((vlSelfRef.dl_done & 0xfeU)))) {
        Verilated::overWidthError("dl_done");
    }
    if (VL_UNLIKELY(((vlSelfRef.coin1 & 0xfeU)))) {
        Verilated::overWidthError("coin1");
    }
    if (VL_UNLIKELY(((vlSelfRef.start1 & 0xfeU)))) {
        Verilated::overWidthError("start1");
    }
    if (VL_UNLIKELY(((vlSelfRef.start2 & 0xfeU)))) {
        Verilated::overWidthError("start2");
    }
    if (VL_UNLIKELY(((vlSelfRef.p1_left & 0xfeU)))) {
        Verilated::overWidthError("p1_left");
    }
    if (VL_UNLIKELY(((vlSelfRef.p1_right & 0xfeU)))) {
        Verilated::overWidthError("p1_right");
    }
    if (VL_UNLIKELY(((vlSelfRef.p1_fire & 0xfeU)))) {
        Verilated::overWidthError("p1_fire");
    }
    if (VL_UNLIKELY(((vlSelfRef.p1_fire2 & 0xfeU)))) {
        Verilated::overWidthError("p1_fire2");
    }
    if (VL_UNLIKELY(((vlSelfRef.p2_left & 0xfeU)))) {
        Verilated::overWidthError("p2_left");
    }
    if (VL_UNLIKELY(((vlSelfRef.p2_right & 0xfeU)))) {
        Verilated::overWidthError("p2_right");
    }
    if (VL_UNLIKELY(((vlSelfRef.p2_fire & 0xfeU)))) {
        Verilated::overWidthError("p2_fire");
    }
    if (VL_UNLIKELY(((vlSelfRef.p2_fire2 & 0xfeU)))) {
        Verilated::overWidthError("p2_fire2");
    }
    if (VL_UNLIKELY(((vlSelfRef.dsw & 0x80U)))) {
        Verilated::overWidthError("dsw");
    }
    if (VL_UNLIKELY(((vlSelfRef.cab_cocktail & 0xfeU)))) {
        Verilated::overWidthError("cab_cocktail");
    }
}
#endif  // VL_DEBUG
