// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPHOENIX_CORE_H_
#define VERILATED_VPHOENIX_CORE_H_  // guard

#include "verilated.h"

class Vphoenix_core__Syms;
class Vphoenix_core___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vphoenix_core VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vphoenix_core__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&dl_data,7,0);
    VL_IN8(&dl_wr,0,0);
    VL_IN8(&dl_done,0,0);
    VL_OUT8(&game_phoenix,0,0);
    VL_OUT8(&game_known,0,0);
    VL_IN8(&coin1,0,0);
    VL_IN8(&start1,0,0);
    VL_IN8(&start2,0,0);
    VL_IN8(&p1_left,0,0);
    VL_IN8(&p1_right,0,0);
    VL_IN8(&p1_fire,0,0);
    VL_IN8(&p1_fire2,0,0);
    VL_IN8(&p2_left,0,0);
    VL_IN8(&p2_right,0,0);
    VL_IN8(&p2_fire,0,0);
    VL_IN8(&p2_fire2,0,0);
    VL_IN8(&dsw,6,0);
    VL_IN8(&cab_cocktail,0,0);
    VL_OUT8(&hsync,0,0);
    VL_OUT8(&vsync,0,0);
    VL_OUT8(&hblank,0,0);
    VL_OUT8(&vblank,0,0);
    VL_OUT8(&de,0,0);
    VL_OUT8(&cen_pix,0,0);
    VL_OUT8(&snd_a,7,0);
    VL_OUT8(&snd_b,7,0);
    VL_OUT8(&snd_c,7,0);
    VL_OUT8(&dbg_data,7,0);
    VL_OUT8(&dbg_we,0,0);
    VL_OUT8(&dbg_stb,0,0);
    VL_OUT8(&dbg_fetch,0,0);
    VL_OUT16(&dbg_addr,15,0);
    VL_IN(&dl_addr,16,0);
    VL_OUT(&rgb,23,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vphoenix_core___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vphoenix_core(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vphoenix_core(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vphoenix_core();
  private:
    VL_UNCOPYABLE(Vphoenix_core);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
