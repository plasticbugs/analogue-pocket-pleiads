// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpleiads_sound.h for the primary calling header

#ifndef VERILATED_VPLEIADS_SOUND___024ROOT_H_
#define VERILATED_VPLEIADS_SOUND___024ROOT_H_  // guard

#include "verilated.h"


class Vpleiads_sound__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpleiads_sound___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(latch_a,7,0);
        VL_IN8(latch_b,7,0);
        VL_IN8(latch_c,7,0);
        VL_OUT8(sample_tick,0,0);
        VL_OUT8(dbg_t1,0,0);
        VL_OUT8(dbg_t4,0,0);
        VL_OUT8(dbg_poly,0,0);
        CData/*0:0*/ pleiads_sound__DOT__tick;
        CData/*3:0*/ pleiads_sound__DOT__t1_div;
        CData/*0:0*/ pleiads_sound__DOT__t1_out;
        CData/*0:0*/ pleiads_sound__DOT__t2_out;
        CData/*0:0*/ pleiads_sound__DOT__t3_out;
        CData/*0:0*/ pleiads_sound__DOT__t4_out;
        CData/*0:0*/ pleiads_sound__DOT__polybit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_OUT16(dbg_pb4,15,0);
        VL_OUT16(dbg_pa6,15,0);
        VL_OUT16(dbg_pc5,15,0);
        VL_OUT16(dbg_pa5,15,0);
        SData/*15:0*/ pleiads_sound__DOT__pa5_lvl;
        SData/*15:0*/ pleiads_sound__DOT__pa6_lvl;
        SData/*15:0*/ pleiads_sound__DOT__pb4_lvl;
        SData/*15:0*/ pleiads_sound__DOT__pc4_lvl;
        SData/*15:0*/ pleiads_sound__DOT__pc5_lvl;
        SData/*15:0*/ pleiads_sound__DOT__unnamedblk1__DOT__lvl23;
        SData/*15:0*/ pleiads_sound__DOT__unnamedblk1__DOT__lvl4;
        VL_OUT(sample,17,0);
        IData/*26:0*/ pleiads_sound__DOT__acc;
        IData/*31:0*/ pleiads_sound__DOT__t1_ctr;
        IData/*31:0*/ pleiads_sound__DOT__t2_ctr;
        IData/*31:0*/ pleiads_sound__DOT__t3_ctr;
        IData/*31:0*/ pleiads_sound__DOT__t4_ctr;
        IData/*31:0*/ pleiads_sound__DOT__noise_ctr;
        IData/*31:0*/ pleiads_sound__DOT__pa5_ctr;
        IData/*31:0*/ pleiads_sound__DOT__pa6_ctr;
        IData/*31:0*/ pleiads_sound__DOT__pb4_ctr;
        IData/*31:0*/ pleiads_sound__DOT__pc4_ctr;
        IData/*31:0*/ pleiads_sound__DOT__pc5_ctr;
        IData/*17:0*/ pleiads_sound__DOT__lfsr;
        IData/*17:0*/ pleiads_sound__DOT__unnamedblk1__DOT__s_t1;
        IData/*17:0*/ pleiads_sound__DOT__unnamedblk1__DOT__s_t23;
        IData/*17:0*/ pleiads_sound__DOT__unnamedblk1__DOT__s_t4;
        IData/*17:0*/ pleiads_sound__DOT__unnamedblk1__DOT__s_noise;
        IData/*31:0*/ pleiads_sound__DOT__unnamedblk1__DOT__n;
        IData/*31:0*/ pleiads_sound__DOT__unnamedblk1__DOT__step;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ pleiads_sound__DOT____VlemCall_11__rc_step;
        QData/*47:0*/ pleiads_sound__DOT____VlemCall_10__rc_step;
        QData/*47:0*/ pleiads_sound__DOT____VlemCall_9__rc_step;
        QData/*47:0*/ pleiads_sound__DOT____VlemCall_8__rc_step;
        QData/*47:0*/ pleiads_sound__DOT____VlemCall_7__rc_step;
        QData/*47:0*/ pleiads_sound__DOT____VlemCall_6__rc_step;
        QData/*47:0*/ pleiads_sound__DOT____VlemCall_5__rc_step;
        QData/*47:0*/ pleiads_sound__DOT____VlemCall_4__rc_step;
        QData/*47:0*/ pleiads_sound__DOT____VlemCall_3__rc_step;
        QData/*47:0*/ pleiads_sound__DOT____VlemCall_2__rc_step;
        QData/*47:0*/ pleiads_sound__DOT____VlemCall_1__rc_step;
        QData/*47:0*/ pleiads_sound__DOT____VlemCall_0__rc_step;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vpleiads_sound__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpleiads_sound___024root(Vpleiads_sound__Syms* symsp, const char* namep);
    ~Vpleiads_sound___024root();
    VL_UNCOPYABLE(Vpleiads_sound___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
