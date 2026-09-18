// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vphoenix_core.h for the primary calling header

#ifndef VERILATED_VPHOENIX_CORE___024ROOT_H_
#define VERILATED_VPHOENIX_CORE___024ROOT_H_  // guard

#include "verilated.h"


class Vphoenix_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vphoenix_core___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(clk_audio,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(dl_data,7,0);
        VL_IN8(dl_wr,0,0);
        VL_IN8(dl_done,0,0);
        VL_OUT8(game_phoenix,0,0);
        VL_OUT8(game_known,0,0);
        VL_IN8(coin1,0,0);
        VL_IN8(start1,0,0);
        VL_IN8(start2,0,0);
        VL_IN8(p1_left,0,0);
        VL_IN8(p1_right,0,0);
        VL_IN8(p1_fire,0,0);
        VL_IN8(p1_fire2,0,0);
        VL_IN8(p2_left,0,0);
        VL_IN8(p2_right,0,0);
        VL_IN8(p2_fire,0,0);
        VL_IN8(p2_fire2,0,0);
        VL_IN8(dsw,6,0);
        VL_IN8(cab_cocktail,0,0);
        VL_OUT8(hsync,0,0);
        VL_OUT8(vsync,0,0);
        VL_OUT8(hblank,0,0);
        VL_OUT8(vblank,0,0);
        VL_OUT8(de,0,0);
        VL_OUT8(cen_pix,0,0);
        VL_OUT8(snd_a,7,0);
        VL_OUT8(snd_b,7,0);
        VL_OUT8(snd_c,7,0);
        VL_OUT8(dbg_data,7,0);
        VL_OUT8(dbg_we,0,0);
        VL_OUT8(dbg_stb,0,0);
        VL_OUT8(dbg_fetch,0,0);
        VL_OUT8(dbg_vcnt,7,0);
        CData/*3:0*/ phoenix_core__DOT__div;
        CData/*7:0*/ phoenix_core__DOT__cpu_dout;
        CData/*7:0*/ phoenix_core__DOT__cpu_din;
        CData/*0:0*/ phoenix_core__DOT__cpu_mreq;
        CData/*0:0*/ phoenix_core__DOT__cpu_we;
        CData/*0:0*/ phoenix_core__DOT__cpu_fetch_q;
        CData/*0:0*/ phoenix_core__DOT__sel_vram;
        CData/*0:0*/ phoenix_core__DOT__sel_vreg;
        CData/*0:0*/ phoenix_core__DOT__wr_pulse;
        CData/*7:0*/ phoenix_core__DOT__videoreg;
        CData/*7:0*/ phoenix_core__DOT__scroll;
        CData/*7:0*/ phoenix_core__DOT__prog_data;
        CData/*7:0*/ phoenix_core__DOT__vram_dout;
        CData/*7:0*/ phoenix_core__DOT__vram_b_data;
        CData/*7:0*/ phoenix_core__DOT__bgrom_lsb;
        CData/*7:0*/ phoenix_core__DOT__bgrom_msb;
        CData/*7:0*/ phoenix_core__DOT__fgrom_lsb;
        CData/*7:0*/ phoenix_core__DOT__fgrom_msb;
        CData/*7:0*/ phoenix_core__DOT__prom_lo;
        CData/*7:0*/ phoenix_core__DOT__prom_hi;
        CData/*0:0*/ phoenix_core__DOT__u_mem__DOT__sel_prog;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__sample_tick;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__dbg_notes;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__tms_tick;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__note_we;
        CData/*1:0*/ phoenix_core__DOT__u_audio__DOT__note_octave;
        CData/*3:0*/ phoenix_core__DOT__u_audio__DOT__note_value;
        CData/*7:0*/ phoenix_core__DOT__u_audio__DOT__snd_b_q;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__fx_tick;
    };
    struct {
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__snd_tog;
        CData/*2:0*/ phoenix_core__DOT__u_audio__DOT__tog_sync;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__tick;
        CData/*3:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__t1_div;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__t1_out;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__t2_out;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__t3_out;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__t4_out;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__polybit;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__tick;
        CData/*2:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__shift;
        CData/*4:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__tune_ofs;
        CData/*4:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__tune_max;
        CData/*1:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__octave;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__playing;
        CData/*2:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__state;
        CData/*3:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__vi;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__note_pend;
        CData/*1:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__note_oct_l;
        CData/*3:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__note_val_l;
        CData/*2:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__unnamedblk2__DOT__n;
        CData/*0:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__unnamedblk3__DOT__ob;
        CData/*2:0*/ phoenix_core__DOT__u_video__DOT__phase;
        CData/*0:0*/ phoenix_core__DOT__u_video__DOT__cocktail;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__bx;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__fg_code;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__bg_code;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__fg_lsb;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__fg_msb;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__bg_lsb;
        CData/*7:0*/ phoenix_core__DOT__u_video__DOT__bg_msb;
        CData/*1:0*/ phoenix_core__DOT__u_video__DOT__fg_pen;
        CData/*0:0*/ phoenix_core__DOT__u_video__DOT__active;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT____VlemCall_0__zsp;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__rb;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__rc;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__rd_;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__re;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__rh;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__rl;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__ra;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__fl;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__ir;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__tleft;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__im;
        CData/*3:0*/ phoenix_core__DOT__u_cpu__DOT__ustep;
        CData/*1:0*/ phoenix_core__DOT__u_cpu__DOT__state;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__src_reg;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__src_reg_from_ddd;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__t;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk1__DOT__nf;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__nf;
        CData/*0:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk3__DOT__tk;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__s;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__v;
        CData/*7:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk7__DOT__nf;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_1;
        CData/*0:0*/ __VdfgRegularize_hebeb780c_0_4;
        CData/*3:0*/ __Vdly__phoenix_core__DOT__div;
        CData/*7:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__snd_b_q;
        CData/*0:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__snd_tog;
        CData/*2:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__shift;
        CData/*4:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__tune_ofs;
        CData/*4:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__tune_max;
    };
    struct {
        CData/*1:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__octave;
        CData/*0:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__playing;
        CData/*2:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__state;
        CData/*3:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__vi;
        CData/*0:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__note_pend;
        CData/*1:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__state;
        CData/*3:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__ustep;
        CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__tleft;
        CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__ra;
        CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__rc;
        CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__rh;
        CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__rl;
        CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__ir;
        CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__im;
        CData/*7:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__fl;
        CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__vol__v0;
        CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__vol__v1;
        CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__ctr__v12;
        CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__freq__v12;
        CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__vol__v12;
        CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__vol_ctr__v12;
        CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__vol__v13;
        CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__freq__v13;
        CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__vol__v14;
        CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__vol_ctr__v13;
        CData/*0:0*/ __VdlySet__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__vol_ctr__v14;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__dl_data__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dl_wr__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dl_done__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__coin1__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__start1__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__start2__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p1_left__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p1_right__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p1_fire__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p1_fire2__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p2_left__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p2_right__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p2_fire__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__p2_fire2__0;
        CData/*6:0*/ __Vtrigprevexpr___TOP__dsw__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__cab_cocktail__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_audio__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk_audio__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_OUT16(audio,15,0);
        VL_OUT16(audio_sync,15,0);
        VL_OUT16(dbg_addr,15,0);
        VL_OUT16(dbg_hcnt,8,0);
        SData/*15:0*/ phoenix_core__DOT__cpu_addr;
        SData/*12:0*/ phoenix_core__DOT__vram_b_addr;
        SData/*10:0*/ phoenix_core__DOT__bgrom_addr;
        SData/*10:0*/ phoenix_core__DOT__fgrom_addr;
        SData/*12:0*/ phoenix_core__DOT____Vcellinp__u_mem__vram_a_addr;
        SData/*13:0*/ phoenix_core__DOT__u_mem__DOT____Vcellinp__u_prog__a_addr;
        SData/*15:0*/ phoenix_core__DOT__u_audio__DOT__tms_sample;
    };
    struct {
        SData/*15:0*/ phoenix_core__DOT__u_audio__DOT__tms_prev;
        SData/*15:0*/ phoenix_core__DOT__u_audio__DOT__tms_cur;
        SData/*15:0*/ phoenix_core__DOT__u_audio__DOT__snd_hold;
        SData/*15:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__pa5_lvl;
        SData/*15:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__pa6_lvl;
        SData/*15:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__pb4_lvl;
        SData/*15:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__pc4_lvl;
        SData/*15:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__pc5_lvl;
        SData/*15:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__unnamedblk1__DOT__lvl23;
        SData/*15:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__unnamedblk1__DOT__lvl4;
        SData/*11:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__outbit;
        SData/*15:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__tune_entry;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__sp;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__pc;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__wz;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__tmp;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__hl;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__bc;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__de;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__rp_val;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__push_val;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__alu_out;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk4__DOT__ret;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk5__DOT__nv;
        SData/*15:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk8__DOT__ret;
        SData/*11:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__outbit;
        SData/*15:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__pc;
        SData/*15:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__sp;
        SData/*15:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__wz;
        SData/*15:0*/ __Vdly__phoenix_core__DOT__u_cpu__DOT__tmp;
        VL_IN(dl_addr,16,0);
        VL_OUT(rgb,23,0);
        IData/*31:0*/ phoenix_core__DOT__u_mem__DOT__prog_sum;
        IData/*17:0*/ phoenix_core__DOT__u_audio__DOT__fx_sample;
        IData/*31:0*/ phoenix_core__DOT__u_audio__DOT__unnamedblk1__DOT__interp;
        IData/*17:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_19__div2;
        IData/*17:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_18__div2;
        IData/*25:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_17__div_rate;
        IData/*25:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_12__div_rate;
        IData/*17:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCond_5;
        IData/*17:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_4__div2;
        IData/*25:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_3__div_rate;
        IData/*25:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_2__div_rate;
        IData/*26:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__acc;
        IData/*31:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__t1_ctr;
        IData/*31:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__t2_ctr;
        IData/*31:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__t3_ctr;
        IData/*31:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__t4_ctr;
        IData/*31:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__noise_ctr;
        IData/*31:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__pa5_ctr;
        IData/*31:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__pa6_ctr;
        IData/*31:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__pb4_ctr;
        IData/*31:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__pc4_ctr;
        IData/*31:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__pc5_ctr;
        IData/*17:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__lfsr;
        IData/*17:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t1;
        IData/*17:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t23;
        IData/*17:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_t4;
        IData/*17:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__unnamedblk1__DOT__s_noise;
        IData/*17:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__unnamedblk1__DOT__pa6_s;
        IData/*31:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__unnamedblk1__DOT__n;
        IData/*31:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__unnamedblk1__DOT__step;
        IData/*26:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__acc;
        IData/*23:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__tune_ctr;
    };
    struct {
        IData/*23:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__note_ctr;
        IData/*19:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__sum;
        IData/*23:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__unnamedblk1__DOT__vc;
        IData/*19:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__unnamedblk1__DOT__k;
        IData/*23:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__unnamedblk2__DOT__tc;
        IData/*23:0*/ phoenix_core__DOT__u_audio__DOT__u_tms__DOT__unnamedblk3__DOT__c;
        IData/*16:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk2__DOT__q;
        IData/*16:0*/ phoenix_core__DOT__u_cpu__DOT__unnamedblk6__DOT__q;
        IData/*26:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__acc;
        IData/*23:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__tune_ctr;
        IData/*23:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__note_ctr;
        IData/*19:0*/ __Vdly__phoenix_core__DOT__u_audio__DOT__u_tms__DOT__sum;
        IData/*16:0*/ __Vtrigprevexpr___TOP__dl_addr__0;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__unnamedblk1__DOT__mixed;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_16__rc_step;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_15__rc_step;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_14__rc_step;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_13__rc_step;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_11__rc_step;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_10__rc_step;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_9__rc_step;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_8__rc_step;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_7__rc_step;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_6__rc_step;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_1__rc_step;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT____VlemCall_0__rc_step;
        QData/*47:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__unnamedblk1__DOT__t3mul;
        QData/*40:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__unnamedblk1__DOT__r67mul;
        QData/*40:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__unnamedblk1__DOT__r80a;
        QData/*40:0*/ phoenix_core__DOT__u_audio__DOT__u_fx__DOT__unnamedblk1__DOT__r80b;
        QData/*51:0*/ __VdfgRegularize_hebeb780c_0_5;
        VlUnpacked<CData/*7:0*/, 2048> phoenix_core__DOT__u_mem__DOT__u_fgm__DOT__mem;
        VlUnpacked<CData/*7:0*/, 2048> phoenix_core__DOT__u_mem__DOT__u_fgl__DOT__mem;
        VlUnpacked<CData/*7:0*/, 2048> phoenix_core__DOT__u_mem__DOT__u_bgm__DOT__mem;
        VlUnpacked<CData/*7:0*/, 2048> phoenix_core__DOT__u_mem__DOT__u_bgl__DOT__mem;
        VlUnpacked<CData/*7:0*/, 256> phoenix_core__DOT__u_mem__DOT__u_ph__DOT__mem;
        VlUnpacked<CData/*7:0*/, 256> phoenix_core__DOT__u_mem__DOT__u_pl__DOT__mem;
        VlUnpacked<CData/*7:0*/, 8192> phoenix_core__DOT__u_mem__DOT__u_vram__DOT__mem;
        VlUnpacked<CData/*7:0*/, 16384> phoenix_core__DOT__u_mem__DOT__u_prog__DOT__mem;
        VlUnpacked<SData/*15:0*/, 12> phoenix_core__DOT__u_audio__DOT__u_tms__DOT__vol;
        VlUnpacked<IData/*23:0*/, 12> phoenix_core__DOT__u_audio__DOT__u_tms__DOT__vol_ctr;
        VlUnpacked<IData/*23:0*/, 12> phoenix_core__DOT__u_audio__DOT__u_tms__DOT__ctr;
        VlUnpacked<SData/*15:0*/, 12> phoenix_core__DOT__u_audio__DOT__u_tms__DOT__freq;
        VlUnpacked<CData/*7:0*/, 256> phoenix_core__DOT__u_cpu__DOT__cyc_lut;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vphoenix_core__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr VlUnpacked<SData/*15:0*/, 78> phoenix_core__DOT__u_audio__DOT__u_tms__DOT__TMS_TUNE4 = {{
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
    static constexpr VlUnpacked<IData/*23:0*/, 64> phoenix_core__DOT__u_video__DOT__PAL_LUT = {{
        0U, 0U, 0x00070691U, 0x000a07bdU,
        0U, 0U, 0x00070691U, 0x000a07bdU,
        0x0023ad24U, 0x0023ad24U, 0x002ab5b6U, 0x002db8e0U,
        0x002edf2dU, 0x002edf2dU, 0x0035e7bfU, 0x0036e8e9U,
        0U, 0U, 0x00070691U, 0x000a07bdU,
        0U, 0U, 0x00070691U, 0x000a07bdU,
        0x0023ad24U, 0x0023ad24U, 0x002ab5b6U, 0x002db8e0U,
        0x002edf2dU, 0x002edf2dU, 0x0035e7bfU, 0x0036e8e9U,
        0x009f1114U, 0x009f1114U, 0x00a518a5U, 0x00a71bceU,
        0x009f1114U, 0x009f1114U, 0x00a518a5U, 0x00a71bceU,
        0x00c0c136U, 0x00c0c136U, 0x00c8c8c8U, 0x00cccaf1U,
        0x00cdf040U, 0x00cdf040U, 0x00d4f7d5U, 0x00d5fbf9U,
        0x00ca1618U, 0x00ca1618U, 0x00d11eaaU, 0x00d31fd2U,
        0x00ca1618U, 0x00ca1618U, 0x00d11eaaU, 0x00d31fd2U,
        0x00edc63aU, 0x00edc63aU, 0x00f4cdcfU, 0x00f5d0f5U,
        0x00f6f644U, 0x00f6f644U, 0x00fdfdd9U, 0x00ffffffU
    }};

    // CONSTRUCTORS
    Vphoenix_core___024root(Vphoenix_core__Syms* symsp, const char* namep);
    ~Vphoenix_core___024root();
    VL_UNCOPYABLE(Vphoenix_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
