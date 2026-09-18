// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vphoenix_audio.h for the primary calling header

#include "Vphoenix_audio__pch.h"

VL_ATTR_COLD void Vphoenix_audio___024root___eval_static(Vphoenix_audio___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___eval_static\n"); );
    Vphoenix_audio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.phoenix_audio__DOT__unnamedblk1__DOT__interp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17974601304211226694ull);
        vlSelfRef.phoenix_audio__DOT__unnamedblk1__DOT__mixed = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 10202195797872817522ull);
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t1 = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 7402389581517021328ull);
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t23 = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 2488600108395051857ull);
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t4 = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16168409650979701388ull);
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_noise = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 10632455742212762934ull);
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__pa6_s = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16099400190395802984ull);
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__t3mul = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 11200907220910538535ull);
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__r67mul = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 18090997389404184699ull);
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__r80a = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 13706676440515052858ull);
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__r80b = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 17390882196711512697ull);
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__lvl23 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11320801270271606752ull);
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__lvl4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14016276114632252229ull);
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 126587966011386664ull);
        vlSelfRef.phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__step = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8361875734651051193ull);
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk1__DOT__vc = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10112024910800672437ull);
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk1__DOT__k = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 11831389480882786621ull);
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1233149714158769223ull);
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5884567709149412943ull);
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12177682468977862555ull);
        vlSelfRef.phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__ob = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7742673895865068542ull);
    }
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_audio__0 = vlSelfRef.clk_audio;
}

VL_ATTR_COLD void Vphoenix_audio___024root___eval_initial(Vphoenix_audio___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___eval_initial\n"); );
    Vphoenix_audio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vphoenix_audio___024root___eval_final(Vphoenix_audio___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___eval_final\n"); );
    Vphoenix_audio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vphoenix_audio___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vphoenix_audio___024root___eval_phase__stl(Vphoenix_audio___024root* vlSelf);

VL_ATTR_COLD void Vphoenix_audio___024root___eval_settle(Vphoenix_audio___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___eval_settle\n"); );
    Vphoenix_audio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vphoenix_audio___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/phoenix_audio.sv", 19, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vphoenix_audio___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vphoenix_audio___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vphoenix_audio___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vphoenix_audio___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vphoenix_audio___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<12>/*383:0*/ Vphoenix_audio__ConstPool__CONST_h31ebeb16_0;
extern const VlUnpacked<QData/*51:0*/, 6> Vphoenix_audio__ConstPool__TABLE_h4f0555cb_0;

VL_ATTR_COLD bool Vphoenix_audio___024root___eval_phase__stl(Vphoenix_audio___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___eval_phase__stl\n"); );
    Vphoenix_audio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vphoenix_audio___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vphoenix_audio___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    CData/*6:0*/ __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_hebeb780c_0_1;
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_hebeb780c_0_1 = 0;
                    IData/*31:0*/ __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0___Vtemp_1;
                    vlSelfRef.dbg_tms = vlSelfRef.phoenix_audio__DOT__tms_sample;
                    vlSelfRef.dbg_fx = vlSelfRef.phoenix_audio__DOT__fx_sample;
                    vlSelfRef.dbg_freq0 = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__freq[0U];
                    vlSelfRef.dbg_vol0 = vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vol[0U];
                    vlSelfRef.dbg_pb4 = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pb4_lvl;
                    vlSelfRef.dbg_poly = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__polybit;
                    vlSelfRef.dbg_pa6 = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa6_lvl;
                    vlSelfRef.dbg_pc5 = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pc5_lvl;
                    vlSelfRef.dbg_pa5 = vlSelfRef.phoenix_audio__DOT__u_fx__DOT__pa5_lvl;
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0___Vtemp_1 
                        = VL_MATCHMASKED_I(32, (0x0000000fU 
                                                & ((6U 
                                                    <= (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))
                                                    ? 
                                                   ((IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi) 
                                                    - (IData)(6U))
                                                    : (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi))), Vphoenix_audio__ConstPool__CONST_h31ebeb16_0);
                    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                        = Vphoenix_audio__ConstPool__TABLE_h4f0555cb_0
                        [__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0___Vtemp_1];
                    __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_hebeb780c_0_1 
                        = (0x0000007fU & (((IData)(6U) 
                                           * (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_ofs)) 
                                          + (IData)(vlSelfRef.phoenix_audio__DOT__u_tms__DOT__vi)));
                    vlSelfRef.phoenix_audio__DOT__u_tms__DOT__tune_entry 
                        = (vlSelfRef.phoenix_audio__DOT__u_tms__DOT__TMS_TUNE4
                           [__Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_hebeb780c_0_1] 
                           & (- (IData)((0x4dU >= __Vinline_0__eval_stl___Vinline_0__stl_sequent__TOP__0___VdfgRegularize_hebeb780c_0_1))));
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vphoenix_audio___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vphoenix_audio___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vphoenix_audio___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge clk_audio)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vphoenix_audio___024root___ctor_var_reset(Vphoenix_audio___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vphoenix_audio___024root___ctor_var_reset\n"); );
    Vphoenix_audio__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->is_phoenix = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14313895850605658429ull);
    vlSelf->snd_a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16130822892161450432ull);
    vlSelf->snd_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5848752275648079737ull);
    vlSelf->snd_c = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7316865929743495349ull);
    vlSelf->sample = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14877665802122487536ull);
    vlSelf->sample_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9982232731012092892ull);
    vlSelf->clk_audio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3590482352682242802ull);
    vlSelf->audio_out = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16887251779955964156ull);
    vlSelf->dbg_tms = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13531283349445653708ull);
    vlSelf->dbg_fx = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 14390527725106558086ull);
    vlSelf->dbg_freq0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11534571076892315553ull);
    vlSelf->dbg_vol0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16988248254701176750ull);
    vlSelf->dbg_pb4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12494186529828643015ull);
    vlSelf->dbg_notes = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5851992456379025895ull);
    vlSelf->dbg_poly = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13231376933470231595ull);
    vlSelf->dbg_pa6 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10017545002084197655ull);
    vlSelf->dbg_pc5 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9515137707156683181ull);
    vlSelf->dbg_pa5 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8104947041339407626ull);
    vlSelf->phoenix_audio__DOT__tms_sample = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7511534320988626654ull);
    vlSelf->phoenix_audio__DOT__tms_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13629459242733627635ull);
    vlSelf->phoenix_audio__DOT__note_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12287155283978452003ull);
    vlSelf->phoenix_audio__DOT__note_octave = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 740511780941471102ull);
    vlSelf->phoenix_audio__DOT__note_value = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6169346210588780684ull);
    vlSelf->phoenix_audio__DOT__snd_b_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18098610284105134628ull);
    vlSelf->phoenix_audio__DOT__fx_sample = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 9182936756023952862ull);
    vlSelf->phoenix_audio__DOT__fx_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17769413593344639275ull);
    vlSelf->phoenix_audio__DOT__tms_prev = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6274063160900282858ull);
    vlSelf->phoenix_audio__DOT__tms_cur = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3575474889747060531ull);
    vlSelf->phoenix_audio__DOT__snd_tog = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13500219115052515829ull);
    vlSelf->phoenix_audio__DOT__snd_hold = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9195056266471532699ull);
    vlSelf->phoenix_audio__DOT__tog_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15366816498152386690ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__acc = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 10056944886949469084ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9489349072204567301ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__t1_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11584176771124951350ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__t2_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1506621075365869761ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__t3_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18095088535817240328ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__t4_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9234622221860007844ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__noise_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16301122169655084091ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__t1_div = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5450963170521270916ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__t1_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 466942256244124199ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__t2_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12718443625888143339ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__t3_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11665696515757731653ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__t4_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8151409701095154940ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__pa5_lvl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4749626205877672642ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__pa6_lvl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13454418460492368019ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__pb4_lvl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12529811151754596608ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__pc4_lvl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14650186481139331507ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__pc5_lvl = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14325897887267583086ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__pa5_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18035133535861921656ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__pa6_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5731284816533721595ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__pb4_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2711822066081298400ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__pc4_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15634061745476560726ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__pc5_ctr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8674019333629830533ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__lfsr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 14880309289134271378ull);
    vlSelf->phoenix_audio__DOT__u_fx__DOT__polybit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17443338290675460019ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__acc = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 10639174229478882076ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2944735173803675827ull);
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->phoenix_audio__DOT__u_tms__DOT__vol[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1964925591893224352ull);
    }
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->phoenix_audio__DOT__u_tms__DOT__vol_ctr[__Vi0] = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8639559900506781481ull);
    }
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->phoenix_audio__DOT__u_tms__DOT__ctr[__Vi0] = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 18065940429354597971ull);
    }
    for (int __Vi0 = 0; __Vi0 < 12; ++__Vi0) {
        vlSelf->phoenix_audio__DOT__u_tms__DOT__freq[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6496715441960974463ull);
    }
    vlSelf->phoenix_audio__DOT__u_tms__DOT__outbit = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11959876107428243161ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__tune_ctr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14435376700758684744ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__note_ctr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 18089042601378782659ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__shift = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15928219048257937146ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__tune_ofs = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 96024154150684715ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__tune_max = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9830735328304029687ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__octave = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13606579470904328058ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__playing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3589894778240276717ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4803626219014273550ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__vi = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9448676821815818353ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__sum = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 3789326732595260907ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__note_pend = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17197235865832802520ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__note_oct_l = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1229328073749040484ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__note_val_l = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8715688269367722023ull);
    vlSelf->phoenix_audio__DOT__u_tms__DOT__tune_entry = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10734612224370904148ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__snd_b_q = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__snd_tog = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__u_tms__DOT__acc = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__u_tms__DOT__outbit = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ctr = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__u_tms__DOT__note_ctr = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__u_tms__DOT__shift = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ofs = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__u_tms__DOT__tune_max = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__u_tms__DOT__octave = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__u_tms__DOT__playing = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__u_tms__DOT__state = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__u_tms__DOT__vi = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__u_tms__DOT__sum = 0;
    vlSelf->__Vdly__phoenix_audio__DOT__u_tms__DOT__note_pend = 0;
    vlSelf->__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v0 = 0;
    vlSelf->__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v1 = 0;
    vlSelf->__VdlySet__phoenix_audio__DOT__u_tms__DOT__ctr__v12 = 0;
    vlSelf->__VdlySet__phoenix_audio__DOT__u_tms__DOT__freq__v12 = 0;
    vlSelf->__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v12 = 0;
    vlSelf->__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v12 = 0;
    vlSelf->__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v13 = 0;
    vlSelf->__VdlySet__phoenix_audio__DOT__u_tms__DOT__freq__v13 = 0;
    vlSelf->__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v14 = 0;
    vlSelf->__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v13 = 0;
    vlSelf->__VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v14 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk_audio__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
