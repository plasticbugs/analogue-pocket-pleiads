# ==============================================================================
# Quartus Prime Synopsys Design Constraint File
# ==============================================================================
# Pleiads / Phoenix core constraints.
#
# The Pocket BSP (platform/pocket/bsp/pocket/sys_constr.sdc) creates the APF
# clocks; this file describes only what is specific to this core.
#
# There is no external memory here at all -- the whole board is 24.5 KB of ROM
# and 8 KB of RAM and lives entirely in block RAM -- so there are no SDRAM pin
# constraints, no arbiter, and no fetch latency to constrain.
#
# There are no generated clocks either. The 8085 advances on a clock enable,
# not on a divided clock, so it is analysed against clk_sys like anything else.
# ==============================================================================

# ==============================================================================
# Clock groups
#
# core_pll general[0] = clk_sys       44.0 MHz (8x the dot clock)
#          general[1] = clk_vid        5.5 MHz (the board's real dot clock,
#                                               its 11 MHz crystal over two)
#          general[2] = clk_vid 90deg  5.5 MHz
#          general[3], general[4]      unused
#
# clk_sys and the two pixel clocks stay in ONE group on purpose. The video
# output is launched on clk_sys and sampled by the APF scaler on clk_vid; they
# are integer-related outputs of the same PLL, so that crossing is synchronous
# by construction and should be verified rather than cut. Cutting it would let
# each build route it blind and make the picture depend on the fitter seed.
#
# clk_74a, clk_74b, the bridge SPI clock and the audio PLL are genuinely
# asynchronous to the machine. The one multi-bit bus that crosses into clk_74b
# -- the audio sample -- is handed over with a toggle flag inside
# rtl/phoenix_audio.sv, so the capture is always of a value that has been still
# for several cycles.
# ==============================================================================
set_clock_groups -asynchronous \
 -group { bridge_spiclk } \
 -group { clk_74a } \
 -group { clk_74b } \
 -group { ic|core_pll|core_pll_inst|altera_pll_i|general[0].gpll~PLL_OUTPUT_COUNTER|divclk \
          ic|core_pll|core_pll_inst|altera_pll_i|general[1].gpll~PLL_OUTPUT_COUNTER|divclk \
          ic|core_pll|core_pll_inst|altera_pll_i|general[2].gpll~PLL_OUTPUT_COUNTER|divclk \
          ic|core_pll|core_pll_inst|altera_pll_i|general[3].gpll~PLL_OUTPUT_COUNTER|divclk \
          ic|core_pll|core_pll_inst|altera_pll_i|general[4].gpll~PLL_OUTPUT_COUNTER|divclk } \
 -group { ic|pocket_audio_mixer|audio_pll|mf_audio_pll_inst|altera_pll_i|general[0].gpll~PLL_OUTPUT_COUNTER|divclk } \
 -group { ic|pocket_audio_mixer|audio_pll|mf_audio_pll_inst|altera_pll_i|general[1].gpll~PLL_OUTPUT_COUNTER|divclk }

# ==============================================================================
# CPU multicycle.
#
# The 8085 advances one T-state every sixteen clk_sys cycles -- 2.75 MHz from
# 44 MHz -- so every register-to-register path inside it has sixteen clock
# periods to settle. Its widest combinational block is the opcode decode, which
# is a 256-way case.
#
# Deliberately scoped to paths that both start and end inside the processor:
# its address and data buses run to block RAM ports that are clocked every
# cycle, and those must still meet single-cycle timing.
#
# 8 rather than 16: half the provable margin, which is ample relief and leaves
# the constraint correct even if the enable generation is ever changed.
# ==============================================================================
set_multicycle_path -setup 8 -from [get_registers {*|i8085:*|*}] -to [get_registers {*|i8085:*|*}]
set_multicycle_path -hold  7 -from [get_registers {*|i8085:*|*}] -to [get_registers {*|i8085:*|*}]

# ==============================================================================
# Sound multicycle.
#
# The effects board produces one sample every 917 clk_sys cycles and the melody
# chip one every 2783, and both do their work in a short burst of states after
# the tick. The arithmetic in them -- a 48-bit multiply in the envelope step, a
# 26-bit one in the note frequency -- is far wider than anything else in the
# design and has no reason to close in a single 22.7 ns period.
#
# Scoped to paths inside each sound block, for the same reason as the CPU: what
# leaves them is registered and read a whole sample period later.
# ==============================================================================
# Scoped to the whole audio section rather than to each block inside it. The
# first attempt constrained pleiads_sound and tms36xx separately, and the worst
# path in the design promptly appeared as sound latch C -> tone 4's counter --
# starting one level up, in phoenix_core, and so matching neither -from. The
# latches are now registered inside the sound blocks as well, so no path enters
# from outside, but the constraint is written at the enclosing level anyway:
# everything in here is paced by a sample tick, and naming the boundary once is
# harder to get wrong than naming each block.
set_multicycle_path -setup 8 -from [get_registers {*|phoenix_audio:*|*}] -to [get_registers {*|phoenix_audio:*|*}]
set_multicycle_path -hold  7 -from [get_registers {*|phoenix_audio:*|*}] -to [get_registers {*|phoenix_audio:*|*}]
