// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpleiads_sound__pch.h"

//============================================================
// Constructors

Vpleiads_sound::Vpleiads_sound(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpleiads_sound__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , latch_a{vlSymsp->TOP.latch_a}
    , latch_b{vlSymsp->TOP.latch_b}
    , latch_c{vlSymsp->TOP.latch_c}
    , sample_tick{vlSymsp->TOP.sample_tick}
    , dbg_t1{vlSymsp->TOP.dbg_t1}
    , dbg_t4{vlSymsp->TOP.dbg_t4}
    , dbg_poly{vlSymsp->TOP.dbg_poly}
    , dbg_pb4{vlSymsp->TOP.dbg_pb4}
    , dbg_pa6{vlSymsp->TOP.dbg_pa6}
    , dbg_pc5{vlSymsp->TOP.dbg_pc5}
    , dbg_pa5{vlSymsp->TOP.dbg_pa5}
    , sample{vlSymsp->TOP.sample}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpleiads_sound::Vpleiads_sound(const char* _vcname__)
    : Vpleiads_sound(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpleiads_sound::~Vpleiads_sound() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpleiads_sound___024root___eval_debug_assertions(Vpleiads_sound___024root* vlSelf);
#endif  // VL_DEBUG
void Vpleiads_sound___024root___eval_static(Vpleiads_sound___024root* vlSelf);
void Vpleiads_sound___024root___eval_initial(Vpleiads_sound___024root* vlSelf);
void Vpleiads_sound___024root___eval_settle(Vpleiads_sound___024root* vlSelf);
void Vpleiads_sound___024root___eval(Vpleiads_sound___024root* vlSelf);

void Vpleiads_sound::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpleiads_sound::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpleiads_sound___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpleiads_sound___024root___eval_static(&(vlSymsp->TOP));
        Vpleiads_sound___024root___eval_initial(&(vlSymsp->TOP));
        Vpleiads_sound___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpleiads_sound___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpleiads_sound::eventsPending() { return false; }

uint64_t Vpleiads_sound::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpleiads_sound::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpleiads_sound___024root___eval_final(Vpleiads_sound___024root* vlSelf);

VL_ATTR_COLD void Vpleiads_sound::final() {
    contextp()->executingFinal(true);
    Vpleiads_sound___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpleiads_sound::hierName() const { return vlSymsp->name(); }
const char* Vpleiads_sound::modelName() const { return "Vpleiads_sound"; }
unsigned Vpleiads_sound::threads() const { return 1; }
void Vpleiads_sound::prepareClone() const { contextp()->prepareClone(); }
void Vpleiads_sound::atClone() const {
    contextp()->threadPoolpOnClone();
}
