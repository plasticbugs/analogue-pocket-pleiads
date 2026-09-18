// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vphoenix_audio.h for the primary calling header

#ifndef VERILATED_VPHOENIX_AUDIO___024ROOT_H_
#define VERILATED_VPHOENIX_AUDIO___024ROOT_H_  // guard

#include "verilated.h"


class Vphoenix_audio__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vphoenix_audio___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(clk_audio,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(is_phoenix,0,0);
        VL_IN8(snd_a,7,0);
        VL_IN8(snd_b,7,0);
        VL_IN8(snd_c,7,0);
        VL_OUT8(sample_tick,0,0);
        VL_OUT8(dbg_notes,0,0);
        VL_OUT8(dbg_poly,0,0);
        CData/*0:0*/ phoenix_audio__DOT__tms_tick;
        CData/*0:0*/ phoenix_audio__DOT__note_we;
        CData/*1:0*/ phoenix_audio__DOT__note_octave;
        CData/*3:0*/ phoenix_audio__DOT__note_value;
        CData/*7:0*/ phoenix_audio__DOT__snd_b_q;
        CData/*0:0*/ phoenix_audio__DOT__fx_tick;
        CData/*0:0*/ phoenix_audio__DOT__snd_tog;
        CData/*2:0*/ phoenix_audio__DOT__tog_sync;
        CData/*0:0*/ phoenix_audio__DOT__u_fx__DOT__tick;
        CData/*3:0*/ phoenix_audio__DOT__u_fx__DOT__t1_div;
        CData/*0:0*/ phoenix_audio__DOT__u_fx__DOT__t1_out;
        CData/*0:0*/ phoenix_audio__DOT__u_fx__DOT__t2_out;
        CData/*0:0*/ phoenix_audio__DOT__u_fx__DOT__t3_out;
        CData/*0:0*/ phoenix_audio__DOT__u_fx__DOT__t4_out;
        CData/*0:0*/ phoenix_audio__DOT__u_fx__DOT__polybit;
        CData/*0:0*/ phoenix_audio__DOT__u_tms__DOT__tick;
        CData/*2:0*/ phoenix_audio__DOT__u_tms__DOT__shift;
        CData/*4:0*/ phoenix_audio__DOT__u_tms__DOT__tune_ofs;
        CData/*4:0*/ phoenix_audio__DOT__u_tms__DOT__tune_max;
        CData/*1:0*/ phoenix_audio__DOT__u_tms__DOT__octave;
        CData/*0:0*/ phoenix_audio__DOT__u_tms__DOT__playing;
        CData/*2:0*/ phoenix_audio__DOT__u_tms__DOT__state;
        CData/*3:0*/ phoenix_audio__DOT__u_tms__DOT__vi;
        CData/*0:0*/ phoenix_audio__DOT__u_tms__DOT__note_pend;
        CData/*1:0*/ phoenix_audio__DOT__u_tms__DOT__note_oct_l;
        CData/*3:0*/ phoenix_audio__DOT__u_tms__DOT__note_val_l;
        CData/*2:0*/ phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__n;
        CData/*0:0*/ phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__ob;
        CData/*7:0*/ __Vdly__phoenix_audio__DOT__snd_b_q;
        CData/*0:0*/ __Vdly__phoenix_audio__DOT__snd_tog;
        CData/*2:0*/ __Vdly__phoenix_audio__DOT__u_tms__DOT__shift;
        CData/*4:0*/ __Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ofs;
        CData/*4:0*/ __Vdly__phoenix_audio__DOT__u_tms__DOT__tune_max;
        CData/*1:0*/ __Vdly__phoenix_audio__DOT__u_tms__DOT__octave;
        CData/*0:0*/ __Vdly__phoenix_audio__DOT__u_tms__DOT__playing;
        CData/*2:0*/ __Vdly__phoenix_audio__DOT__u_tms__DOT__state;
        CData/*3:0*/ __Vdly__phoenix_audio__DOT__u_tms__DOT__vi;
        CData/*0:0*/ __Vdly__phoenix_audio__DOT__u_tms__DOT__note_pend;
        CData/*0:0*/ __VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v0;
        CData/*0:0*/ __VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v1;
        CData/*0:0*/ __VdlySet__phoenix_audio__DOT__u_tms__DOT__ctr__v12;
        CData/*0:0*/ __VdlySet__phoenix_audio__DOT__u_tms__DOT__freq__v12;
        CData/*0:0*/ __VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v12;
        CData/*0:0*/ __VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v12;
        CData/*0:0*/ __VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v13;
        CData/*0:0*/ __VdlySet__phoenix_audio__DOT__u_tms__DOT__freq__v13;
        CData/*0:0*/ __VdlySet__phoenix_audio__DOT__u_tms__DOT__vol__v14;
        CData/*0:0*/ __VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v13;
        CData/*0:0*/ __VdlySet__phoenix_audio__DOT__u_tms__DOT__vol_ctr__v14;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_audio__0;
        CData/*0:0*/ __VactPhaseResult;
    };
    struct {
        CData/*0:0*/ __VnbaPhaseResult;
        VL_OUT16(sample,15,0);
        VL_OUT16(audio_out,15,0);
        VL_OUT16(dbg_tms,15,0);
        VL_OUT16(dbg_freq0,15,0);
        VL_OUT16(dbg_vol0,15,0);
        VL_OUT16(dbg_pb4,15,0);
        VL_OUT16(dbg_pa6,15,0);
        VL_OUT16(dbg_pc5,15,0);
        VL_OUT16(dbg_pa5,15,0);
        SData/*15:0*/ phoenix_audio__DOT__tms_sample;
        SData/*15:0*/ phoenix_audio__DOT__tms_prev;
        SData/*15:0*/ phoenix_audio__DOT__tms_cur;
        SData/*15:0*/ phoenix_audio__DOT__snd_hold;
        SData/*15:0*/ phoenix_audio__DOT__u_fx__DOT__pa5_lvl;
        SData/*15:0*/ phoenix_audio__DOT__u_fx__DOT__pa6_lvl;
        SData/*15:0*/ phoenix_audio__DOT__u_fx__DOT__pb4_lvl;
        SData/*15:0*/ phoenix_audio__DOT__u_fx__DOT__pc4_lvl;
        SData/*15:0*/ phoenix_audio__DOT__u_fx__DOT__pc5_lvl;
        SData/*15:0*/ phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__lvl23;
        SData/*15:0*/ phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__lvl4;
        SData/*11:0*/ phoenix_audio__DOT__u_tms__DOT__outbit;
        SData/*15:0*/ phoenix_audio__DOT__u_tms__DOT__tune_entry;
        SData/*11:0*/ __Vdly__phoenix_audio__DOT__u_tms__DOT__outbit;
        VL_OUT(dbg_fx,17,0);
        IData/*17:0*/ phoenix_audio__DOT__fx_sample;
        IData/*31:0*/ phoenix_audio__DOT__unnamedblk1__DOT__interp;
        IData/*26:0*/ phoenix_audio__DOT__u_fx__DOT__acc;
        IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT__t1_ctr;
        IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT__t2_ctr;
        IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT__t3_ctr;
        IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT__t4_ctr;
        IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT__noise_ctr;
        IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT__pa5_ctr;
        IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT__pa6_ctr;
        IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT__pb4_ctr;
        IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT__pc4_ctr;
        IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT__pc5_ctr;
        IData/*17:0*/ phoenix_audio__DOT__u_fx__DOT__lfsr;
        IData/*17:0*/ phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t1;
        IData/*17:0*/ phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t23;
        IData/*17:0*/ phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t4;
        IData/*17:0*/ phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_noise;
        IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n;
        IData/*31:0*/ phoenix_audio__DOT__u_fx__DOT__unnamedblk1__DOT__step;
        IData/*26:0*/ phoenix_audio__DOT__u_tms__DOT__acc;
        IData/*23:0*/ phoenix_audio__DOT__u_tms__DOT__tune_ctr;
        IData/*23:0*/ phoenix_audio__DOT__u_tms__DOT__note_ctr;
        IData/*19:0*/ phoenix_audio__DOT__u_tms__DOT__sum;
        IData/*23:0*/ phoenix_audio__DOT__u_tms__DOT__unnamedblk1__DOT__vc;
        IData/*19:0*/ phoenix_audio__DOT__u_tms__DOT__unnamedblk1__DOT__k;
        IData/*23:0*/ phoenix_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc;
        IData/*23:0*/ phoenix_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c;
        IData/*26:0*/ __Vdly__phoenix_audio__DOT__u_tms__DOT__acc;
        IData/*23:0*/ __Vdly__phoenix_audio__DOT__u_tms__DOT__tune_ctr;
        IData/*23:0*/ __Vdly__phoenix_audio__DOT__u_tms__DOT__note_ctr;
        IData/*19:0*/ __Vdly__phoenix_audio__DOT__u_tms__DOT__sum;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ phoenix_audio__DOT__unnamedblk1__DOT__mixed;
        QData/*47:0*/ phoenix_audio__DOT__u_fx__DOT____VlemCall_11__rc_step;
        QData/*47:0*/ phoenix_audio__DOT__u_fx__DOT____VlemCall_10__rc_step;
        QData/*47:0*/ phoenix_audio__DOT__u_fx__DOT____VlemCall_9__rc_step;
        QData/*47:0*/ phoenix_audio__DOT__u_fx__DOT____VlemCall_8__rc_step;
        QData/*47:0*/ phoenix_audio__DOT__u_fx__DOT____VlemCall_7__rc_step;
    };
    struct {
        QData/*47:0*/ phoenix_audio__DOT__u_fx__DOT____VlemCall_6__rc_step;
        QData/*47:0*/ phoenix_audio__DOT__u_fx__DOT____VlemCall_5__rc_step;
        QData/*47:0*/ phoenix_audio__DOT__u_fx__DOT____VlemCall_4__rc_step;
        QData/*47:0*/ phoenix_audio__DOT__u_fx__DOT____VlemCall_3__rc_step;
        QData/*47:0*/ phoenix_audio__DOT__u_fx__DOT____VlemCall_2__rc_step;
        QData/*47:0*/ phoenix_audio__DOT__u_fx__DOT____VlemCall_1__rc_step;
        QData/*47:0*/ phoenix_audio__DOT__u_fx__DOT____VlemCall_0__rc_step;
        QData/*51:0*/ __VdfgRegularize_hebeb780c_0_0;
        VlUnpacked<SData/*15:0*/, 12> phoenix_audio__DOT__u_tms__DOT__vol;
        VlUnpacked<IData/*23:0*/, 12> phoenix_audio__DOT__u_tms__DOT__vol_ctr;
        VlUnpacked<IData/*23:0*/, 12> phoenix_audio__DOT__u_tms__DOT__ctr;
        VlUnpacked<SData/*15:0*/, 12> phoenix_audio__DOT__u_tms__DOT__freq;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vphoenix_audio__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<SData/*15:0*/, 78> phoenix_audio__DOT__u_tms__DOT__TMS_TUNE4 = {{
        0x047dU, 0x08faU, 0x0b50U, 0x11f5U, 0x16a0U, 0x23ebU, 0x04c1U, 0x0983U,
        0x0bfcU, 0x1307U, 0x17f9U, 0x260eU, 0x050aU, 0x0a14U, 0x0cb2U, 0x1428U,
        0x1965U, 0x2851U, 0x0556U, 0x0aadU, 0x0d74U, 0x155bU, 0x1ae8U, 0x2ab7U,
        0x05a8U, 0x0b50U, 0x0e41U, 0x16a0U, 0x1c82U, 0x2d41U, 0x05feU, 0x0bfcU,
        0x0f1aU, 0x17f9U, 0x1e34U, 0x2ff2U, 0x0659U, 0x0cb2U, 0x1000U, 0x1965U,
        0x2000U, 0x32cbU, 0x06baU, 0x0d74U, 0x10f3U, 0x1ae8U, 0x21e7U, 0x35d1U,
        0x0720U, 0x0e41U, 0x11f5U, 0x1c82U, 0x23ebU, 0x3904U, 0x078dU, 0x0f1aU,
        0x1307U, 0x1e34U, 0x260eU, 0x3c68U, 0x0800U, 0x1000U, 0x1428U, 0x2000U,
        0x2851U, 0x4000U, 0x0879U, 0x10f3U, 0x155bU, 0x21e7U, 0x2ab7U, 0x43ceU,
        0x08faU, 0x11f5U, 0x16a0U, 0x23ebU, 0x2d41U, 0x47d6U
    }};

    // CONSTRUCTORS
    Vphoenix_audio___024root(Vphoenix_audio__Syms* symsp, const char* namep);
    ~Vphoenix_audio___024root();
    VL_UNCOPYABLE(Vphoenix_audio___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
