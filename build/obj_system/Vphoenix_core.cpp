// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vphoenix_core__pch.h"

//============================================================
// Constructors

Vphoenix_core::Vphoenix_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vphoenix_core__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , dl_data{vlSymsp->TOP.dl_data}
    , dl_wr{vlSymsp->TOP.dl_wr}
    , dl_done{vlSymsp->TOP.dl_done}
    , game_phoenix{vlSymsp->TOP.game_phoenix}
    , game_known{vlSymsp->TOP.game_known}
    , coin1{vlSymsp->TOP.coin1}
    , start1{vlSymsp->TOP.start1}
    , start2{vlSymsp->TOP.start2}
    , p1_left{vlSymsp->TOP.p1_left}
    , p1_right{vlSymsp->TOP.p1_right}
    , p1_fire{vlSymsp->TOP.p1_fire}
    , p1_fire2{vlSymsp->TOP.p1_fire2}
    , p2_left{vlSymsp->TOP.p2_left}
    , p2_right{vlSymsp->TOP.p2_right}
    , p2_fire{vlSymsp->TOP.p2_fire}
    , p2_fire2{vlSymsp->TOP.p2_fire2}
    , dsw{vlSymsp->TOP.dsw}
    , cab_cocktail{vlSymsp->TOP.cab_cocktail}
    , hsync{vlSymsp->TOP.hsync}
    , vsync{vlSymsp->TOP.vsync}
    , hblank{vlSymsp->TOP.hblank}
    , vblank{vlSymsp->TOP.vblank}
    , de{vlSymsp->TOP.de}
    , cen_pix{vlSymsp->TOP.cen_pix}
    , snd_a{vlSymsp->TOP.snd_a}
    , snd_b{vlSymsp->TOP.snd_b}
    , snd_c{vlSymsp->TOP.snd_c}
    , dbg_data{vlSymsp->TOP.dbg_data}
    , dbg_we{vlSymsp->TOP.dbg_we}
    , dbg_stb{vlSymsp->TOP.dbg_stb}
    , dbg_fetch{vlSymsp->TOP.dbg_fetch}
    , dbg_vcnt{vlSymsp->TOP.dbg_vcnt}
    , dbg_addr{vlSymsp->TOP.dbg_addr}
    , dbg_hcnt{vlSymsp->TOP.dbg_hcnt}
    , dl_addr{vlSymsp->TOP.dl_addr}
    , rgb{vlSymsp->TOP.rgb}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vphoenix_core::Vphoenix_core(const char* _vcname__)
    : Vphoenix_core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vphoenix_core::~Vphoenix_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vphoenix_core___024root___eval_debug_assertions(Vphoenix_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vphoenix_core___024root___eval_static(Vphoenix_core___024root* vlSelf);
void Vphoenix_core___024root___eval_initial(Vphoenix_core___024root* vlSelf);
void Vphoenix_core___024root___eval_settle(Vphoenix_core___024root* vlSelf);
void Vphoenix_core___024root___eval(Vphoenix_core___024root* vlSelf);

void Vphoenix_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vphoenix_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vphoenix_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vphoenix_core___024root___eval_static(&(vlSymsp->TOP));
        Vphoenix_core___024root___eval_initial(&(vlSymsp->TOP));
        Vphoenix_core___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vphoenix_core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vphoenix_core::eventsPending() { return false; }

uint64_t Vphoenix_core::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vphoenix_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vphoenix_core___024root___eval_final(Vphoenix_core___024root* vlSelf);

VL_ATTR_COLD void Vphoenix_core::final() {
    contextp()->executingFinal(true);
    Vphoenix_core___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vphoenix_core::hierName() const { return vlSymsp->name(); }
const char* Vphoenix_core::modelName() const { return "Vphoenix_core"; }
unsigned Vphoenix_core::threads() const { return 1; }
void Vphoenix_core::prepareClone() const { contextp()->prepareClone(); }
void Vphoenix_core::atClone() const {
    contextp()->threadPoolpOnClone();
}
