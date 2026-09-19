# Measurements

Facts established by instrumenting MAME rather than by reading the driver.
Each one is something I would otherwise have had to guess at.

## Video registers are write-only, and taps do see them

`install_write_tap` on `5000-53FF` and `5800-5BFF` *does* observe writes that
land on an installed write handler, contrary to the caution in METHODOLOGY §4.
Measured over 2400 frames of attract mode plus play:

| Register | Writes | Distinct values |
|---|---|---|
| videoreg `5000` | 1580 | `00` (1579), `01` (1) |
| scroll `5800` | 49 | `00` only |
| sound A `6000` | 2371 | 16 distinct, mostly `0F`, also `8F` |
| sound B `6800` | 2371 | 26 distinct, `00`-`1B` range |

Tap callbacks receive an **absolute** address, not one relative to the tap
range (measured: writes in `4000-4FFF` arrive as `4000`..`4BFE`).

## The vblank bit

`DSW0` bit 7 reads **0 during vblank** and 1 during active display
(`IP_ACTIVE_LOW` over the screen's vblank line). Measured values of DSW0 with
default switches: `E0` active, `60` in vblank.

## The protection bit polarity

With the video register holding `00`, `pleiads_protection_r()` returns 0, and
the CPU reads IN0 bit 3 as **1**. So the port bit is the *inverse* of the
function's return value:

```
IN0[3] = !protection(videoreg & 0xFC)
```

where protection() is 1 for questions `0C`/`30` and 0 for `00`/`20`.

## Input polling rate

The game reads IN0 **once per frame**. A forced input has to be held for tens
of frames to be observed; an 8-frame pulse is invisible to the game. Every
capture made with short pulses silently stayed in attract mode.

Measured IN0 values: `FF` idle, `FE` coin held, `FD` start-1 held — all active
low, as documented.

## Tile x order (cost a round)

`charlayout` declares `xoffset {7,6,5,4,3,2,1,0}` and the driver calls it a
"pretty straightforward layout". MAME counts gfx bit offsets from the MSB, so
that list means column 0 takes bit 0 of the byte — tiles are laid out LSB
first, the opposite of the natural reading.

Rendering it the obvious way mirrors every tile about its own centre. On the
Pleiads attract screen that still produces a starfield, a city skyline and a
galaxy in the right places, and 89% of pixels matched. It was only obviously
wrong on text.

What found it was making MAME draw a chosen pattern rather than staring at a
diff of the game's own output: `tools/probe_pattern.lua` fills the foreground
tilemap with an ascending tile-code ramp, and matching each rendered 8×8 cell
back to the tile whose shape it is showed that *no* tile matched — which
points at the within-tile decode rather than at addressing or colour.

## Palette normalisation (cost a round)

`palette_t::normalize_range` defaults are `lum_min = 0, lum_max = 255`, not
`-1`. With `-1` the function would leave the luminance range alone; with the
real defaults it always stretches to full range. The raw resistor ladder tops
out at 186, so reading the defaults wrong made every colour about a fifth too
dark — plausible-looking on screen, and the sort of error that invites a hunt
through the resistor network instead.

Raw ladder levels for the 2-bit input, before normalisation: `[5, 5, 147, 186]`.
Levels 0 and 1 are identical because MAME models the second PROM's direct
connection as a 1 Ω resistor, which swamps the 270 Ω low bit.

## Coverage actually achieved

| State | What it exercises |
|---|---|
| pleiads 3600 | `VREG 04` — palette bank 2 |
| phoenix 0900 | `SCROLL 68` |
| phoenix 1800 | `SCROLL F8` — scroll wrap |
| phoenix 2600 | `SCROLL 48` + `VREG 02` — palette bank 1 |

Pleiads never writes a non-zero scroll in any capture taken so far; the
background scroll path is covered by Phoenix instead. Both games agree with
MAME to zero pixels across 14 states.

## MAME's screen starts in vblank

At CPU reset MAME's screen is at the **start of vblank** (line 208), not at
line 0. Measured by logging every DSW0 read with the time it happened and
looking at where bit 7 changes: the transitions to 0 land exactly 48 lines
before a naive `t x 5.5MHz / 352` line count would put them.

This matters only for the full-system bench. The core starts its raster at the
same place so the two agree from reset; on hardware the power-on phase is
arbitrary and nothing depends on it.

## The address decode (cost a round, and would have cost a build)

The board decodes A14 down to A11. Getting A12 out of the decode made
`sel_vram` cover `4000-5FFF` instead of `4000-4FFF`, and shifted every register
up one block -- so a write to sound control A at `6000` landed on the video
register, whose bit 0 is the video RAM page select. The game's scratch RAM
silently switched pages mid-frame.

Nothing in the video regression could see this: that bench sets the video
registers directly and never exercises the CPU's decode. The bus trace found
it at transaction 50668, as a read of `438D` returning 00 where MAME returned
0F -- a value that had been correctly written 37000 transactions earlier.

## What the bus trace can and cannot prove

Against MAME, from reset, with the same ROM:

| | transactions identical |
|---|---|
| Pleiads | 53 004 |
| Phoenix | 100 985 |

Both then diverge at a DSW0 read, in bit 7 only. That is not a fault. MAME
executes a whole instruction and charges its cycles afterwards, so when the
game reads DSW0 the screen's vblank line is evaluated as of the instruction's
*start*. Real hardware, and this core, sample it three or four T-states in.
The offset is fixed, not accumulating; it only becomes visible when a vblank
edge lands inside that window, and then the polling loop runs one extra
iteration and the two are no longer comparable -- they are running the same
program from different loop counts.

The timing half of the check is therefore separate and exact:
`tools/check_cycles.py` parses `lut_cycles_8085` straight out of
`ref/mame/i8085.cpp` and compares it against the T-states the RTL actually
spent on every instruction it executed, taken-branch extras included.

| | instructions checked | opcodes exercised | mismatches |
|---|---|---|---|
| Pleiads | 131 393 | 75 | 0 |
| Phoenix | 135 027 | 71 | 0 |

## End to end

`sim/run_endtoend.sh` gives the core nothing but the ROM image, lets it boot
and run the game's own code, and diffs its own video output against MAME's
picture of the same moment.

| game | frames checked | result |
|---|---|---|
| Pleiads | 200, 600, 1200, 1800 | 0 differing pixels |
| Phoenix | 200, 600, 1200 | 0 differing pixels |

Frame numbering does not line up exactly and is not assumed to: MAME starts
mid-vblank so its first frame is short, and its frozen dump is the video RAM as
it stands at the *end* of a frame while the core renders during one. The
matching offset starts at 4 frames and converges to 1 by frame 1800, which is
those two effects and nothing else. The bench captures a window and requires an
exact match somewhere in it.

## Sound: what the target actually is

Pleiads' sound is two devices and neither can be matched bit for bit, for
reasons that are worth stating plainly rather than discovering later.

The melody is an Epson **7910E multi-melody IC whose ROM has never been
dumped**. MAME substitutes a TMS3615 with hand-picked parameters and flags the
driver `MACHINE_IMPERFECT_SOUND` because of it. That stand-in is the best
reference anyone has, and it is what this core targets.

The effects are an **analogue board** — four 556-timer tones, a noise source
and five RC envelope followers — which MAME models behaviourally, with its
author's own comments marking most component values unknown (`10u??`,
`330K??`). Matching MAME is achievable and checkable; matching the 1981 board
is not, without a board to measure.

So the bar is METHODOLOGY §4's: same command stream, same window, compare
level and spectral balance. `tools/sound_model.py` is a literal port of MAME's
model and `tools/compare_audio.py` holds it to MAME's own recording of the
same 20 seconds of play:

| measure | ratio to MAME |
|---|---|
| overall RMS | 0.98 |
| RMS per 4 s window | 0.89 – 1.09 |
| 20–200 Hz | 1.03 |
| 200–600 Hz | 1.17 |
| 600–1500 Hz | 0.96 |
| 1500–4000 Hz | 0.91 |
| 4000–12000 Hz | 0.76 |
| **waveform correlation, first 4 s** | **+0.89** |

The correlation is the number that matters: +0.89 says this is substantially
the same waveform, not merely a similar-sounding noise with the same energy.

The top band is resampling, not the model. The melody chip runs at its own
15808 Hz and has to reach 48 kHz. Holding each sample gave 1.44 in that band;
linear interpolation gives 0.76; MAME resamples with a filter and sits between
them. Linear interpolation is the closer of the two and is one multiply-add in
gateware, so that is what the core does.

### Quirks reproduced deliberately

MAME's model has several things that look like slips. They change the sound, and
MAME is what we are matching, so the port reproduces them and marks each one:

- `tone3` takes its step count from **tone2's** counter, not its own.
- `tone3` divides the modulation level by **33768**, not 32768.
- `tone3`, `update_c_pc5` and `update_c_pa5` add one sample period to their
  counter where the corresponding charge paths add *n*.
- `tone1` reuses its `max_freq` field as the divider's counter.
- `update_c_pa6`'s discharge path uses a hard-coded 0.1 s constant rather than
  the `discharge_time` in its own struct, and only runs while the polynomial
  bit is high.

## Sound in gateware

`sim/run_audio.sh` replays MAME's own sound command stream into the RTL and
compares what comes out against MAME's recording of the same twenty seconds:

| measure | RTL / MAME |
|---|---|
| peak | 1.00 |
| overall RMS | 0.91 |
| RMS per 4 s window | 0.83 – 1.00 |
| 20–200 Hz | 0.99 |
| 200–600 Hz | 1.005 |
| 600–1500 Hz | 0.98 |
| 1500–4000 Hz | 0.97 |
| 4000–12000 Hz | 1.48 |
| **waveform correlation, first 4 s** | **+0.9991** |

A correlation of 0.9991 is not "the same kind of noise at the same level" — it
is the same waveform. The gateware tracks MAME's model essentially sample for
sample, which is more than the bar set above and more than an analogue board
with unknown component values strictly deserves.

The RTL matches MAME *better* than the Python reference does (+0.9991 against
+0.89). That is not a contradiction: the reference applies each sound command
at a 48 kHz sample boundary, while the RTL sees the same command stream at
clock resolution, which is much closer to when MAME actually applied it. The
reference remains the readable spec; the gateware is the faithful one.

The 4–12 kHz band is the melody chip's resampling, unchanged from the earlier
measurement and documented above.

### Three bugs the audio bench caught, none of which any tool warned about

**A 32-bit constant overflow.** The RC time constants are written as
`(4096 * 1000000) / microseconds`. That numerator is 4 096 000 000, and a bare
integer expression in SystemVerilog is 32-bit *signed*, so it wraps negative
and every time constant came out wrong. PB4 never charged, tones 2 and 3 never
swept, and the effects board sat at a constant −16383 — which reads like a dead
module rather than arithmetic. Fixed by making the literals 64-bit.

**Operator precedence in the interpolator.** `a + b * c >>> 8` parses as
`(a + b * c) >>> 8`, because `>>>` binds looser than `+`. The melody's
interpolator became a differentiator and contributed nothing to the mix. The
tell was that the output peaked at exactly 13107, which is 0.4 × 32767 — the
effects gain alone, to the count.

**A task that silently dropped its results.** The envelope step was a task with
`inout` arguments; it never wrote them back. Returning `{counter, level}`
packed from a function fixed it and leaves nothing to interpret.

There is also one in the *reference model*, worth recording because it ran the
other way: `s // 2` in Python floors where C's `s / 2` truncates toward zero,
so on −32767 the two differ by one count — a DC offset on every sample. The
RTL was right and the reference was wrong, which is exactly why the two are
compared against MAME separately rather than only against each other.

## What is not verified

**The cocktail flip.** MAME flips the whole 32×32 tilemap, which is 256×256 —
not the 256×208 visible window — so a flipped screen row 0 shows tilemap row
255 and the normally-unused rows below the picture come into view. The core
implements it that way, and the reference renderer agrees with the core, but
neither has been checked against MAME because **no capture reaches the path**.

The flip is `page_bit AND cabinet_link`, and Pleiads writes the video register
1580 times in a 40-second run with the page bit set exactly **once**, at
initialisation. Forcing the cabinet link from Lua does not help: with the page
bit clear the flip cannot engage whatever the link says. So the two halves of
the condition never coincide in anything the game does on its own.

This is stated rather than papered over. The path is reachable only in a real
two-player cocktail game, and it is the one part of the video hardware that
rests on reading MAME's source correctly rather than on a measurement.

**Phoenix's sound.** Phoenix is the same board with a different sound section:
its own custom analogue board, an MM6221AA melody chip playing built-in tunes
rather than single notes, and a discrete netlist that MAME models as a separate
device. The core currently gives Phoenix Pleiads' sound section, which is
wrong. Its video, CPU and timing are verified; its audio is not implemented.

**Hardware.** Nothing here has been run on a Pocket.

## Timing: the constraint that did not cover the path it was written for

The first full compile fitted comfortably -- 29% of the logic, 82% of the DSP
blocks -- and **failed timing by 19.1 ns on a 22.7 ns clock**, with 1168 ns of
total negative slack. Synthesis had said nothing; `quartus_map` cannot, because
it does not place or route.

Asking the timing analyser to name the registers rather than reading the
summary gave the path immediately:

```
-19.129  phoenix_core|snd_c[4]
      -> phoenix_core|phoenix_audio|pleiads_sound|t4_ctr[0]
```

Sound control latch C, through the PC4 envelope's multiply, through the op-amp
divider's multiply, into tone 4's counter multiply. Three chained multipliers
in one combinational path, about 42 ns.

The SDC already had a multicycle for exactly this, and it did not apply:

```tcl
set_multicycle_path -setup 4 -from [get_registers {*|pleiads_sound:*|*}] ...
```

The path *starts* at `snd_c`, which lives one level up in `phoenix_core`, so it
matched neither `-from` nor `-to`. The constraint was true and useless.

Two changes, either of which would have done, and both are worth having:

- The three control latches are now registered inside `pleiads_sound`, and the
  note write inside `phoenix_audio`. One system clock of latency -- 23 ns
  against a 20.8 us sample period -- and every path in the sound section now
  both starts and ends there.
- The multicycle is written at the enclosing level, `phoenix_audio`, rather
  than at each block inside it. Everything in there is paced by a sample tick
  917 clocks apart, so naming the boundary once is both truer and harder to get
  wrong than naming each block and hoping the list is complete.

### After the fix

| | before | after |
|---|---|---|
| clk_sys setup slack | **−19.129 ns** | **+8.844 ns** |
| total negative slack | −1167.877 ns | 0.000 ns |
| logic (ALMs) | 5,443 / 18,480 | 5,359 / 18,480 |
| DSP blocks | 54 / 66 | 54 / 66 |

No negative slack on any clock at any corner — setup, hold or minimum pulse
width, at 0 °C and 85 °C.

## The Pocket's two image formats

Recorded because neither is what you would assume, and both were established by
decoding files already on a card rather than from documentation. The core ships
**no artwork**; this is here so whoever draws it knows what to produce.

| | icon | platform banner |
|---|---|---|
| file | `Cores/<id>/icon.bin` | `Platforms/_images/<id>.bin` |
| size | 2 592 bytes | 171 930 bytes |
| pixels | 36 × 36 | 521 × 165 as displayed |
| storage | row-major, as displayed | **rotated**: 165 per row, 521 rows |
| pixel | RGB565 **little**-endian | RGB565 **big**-endian |

Storage index `(x, y)` in the banner maps to display `(row = x, col = 520 - y)`.

Two things to know if you ever decode one:

- Reading the banner as 521 wide gives sheared noise. The right width was found
  by scoring candidates on how well adjacent rows correlate — a real image is
  smooth vertically, a wrong width is not. 165 scored 0.81 against 521's 0.60.
- Reading it little-endian gives a legible but heavily blue-cast image, which
  looks like a bad dump rather than a wrong reader. Big-endian is correct.

`tools/make_icon.py` and `tools/make_platform_image.py` encode both formats and
round-trip through the same decoder that read the existing files. They are
tooling, not content -- nothing they produce is shipped.

## Phoenix's sound

Phoenix is the same board as Pleiads with a different sound section, and the
core originally gave it Pleiads'. On hardware that was not subtly wrong, it was
wrong: measured against MAME, correlation **−0.725** and essentially no AC
content at all — Pleiads' tone 1 sat at DC because Phoenix's latch values never
disable it the way Pleiads' do.

Phoenix has three sources where Pleiads has two:

| | |
|---|---|
| melody | **MM6221AA** playing one of three built-in tunes, picked by latch B bits 7:6. MAME uses the same TMS36XX device as Pleiads but in tune mode, at 372 Hz rather than 247, with decays 0.50 and 1.05 on voices 0 and 3 and a tune speed of 0.21 |
| noise | a custom board that, unlike Pleiads', makes **only** noise — two RC envelopes on latch A bits 6 and 7 set its rate and level, and a 4006 shift register makes the noise |
| effects | a **discrete netlist** of two 555-based generators driven by the low bits of both latches |

### The melody was the whole of what was missing

Latch B reads `CF` and `0F` — tune 3 and silence. The core fed those to the
single-note path, where MAME's `note > 12` check discards them, so **no music
played at all**. Melody and noise alone took correlation from −0.725 to +0.886.

### DISCRETE_NOTE's off state (cost a round)

The two effects are counters preloaded from the latch, and the obvious reading
is that the output frequency is `clock / ((16 - data) * 2)`, so data 15 is the
fastest tone. It is the opposite. MAME's counter does not run at all when the
preload equals the maximum:

```c
if (DSS_NOTE__DATA != DSS_NOTE__MAX1) { ...count... }
```

Data 15 is **silence**, and both effects sit there for most of a game —
measured over 20 seconds of play, effect 1 is armed 0.1% of the time and effect
2 is 32%. Running the counter anyway put 128× too much energy above 4 kHz into
the mix and dragged the correlation down by a third.

### Frequency, not capacitors

MAME simulates each 555 at the capacitor, integrating the charge and discharge
exponentials and resolving edges to sub-sample precision. Every 555 here is a
*clock* whose divided output is what reaches the speaker, so the core works in
frequency instead — `tools/gen_555_lut.py` tabulates

```
t_high = (R1 + R2) * C * ln((Vch - Vcv/2) / (Vch - Vcv))
t_low  =       R2  * C * ln(2)
```

against control voltage, and a phase accumulator does the rest. The capacitor
waveform is never heard.

That holds for the 555 at the *end* of each chain, the one clocking the
counter, and it is still what the core does there. It does **not** hold for the
oscillators upstream that shape the control voltage, which is where this
reasoning was applied too widely and had to be undone — see "Carrying the
capacitor, not the phase" below.

Anti-aliasing is 4× oversampling rather than MAME's energy output, because the
energy fraction needs a divide by a *variable* phase step; Quartus builds that
as a real divider and it took the design from 54 DSP blocks to 81 on a device
with 66. A box average over four ticks at 192 kHz costs two adders and sounds
the same.

### Where it ended up

| | RTL vs MAME | reference vs MAME | RTL vs reference |
|---|---|---|---|
| correlation, first 4 s | **+0.889** | +0.908 | **+0.984** |
| overall RMS | 0.86 | 0.87 | 1.00 |
| 20–200 Hz | 1.01 | 1.01 | 1.00 |
| 200–600 Hz | 0.99 | 0.99 | 1.00 |
| 600–1500 Hz | 1.17 | 1.16 | 1.01 |
| 1500–4000 Hz | 1.03 | 0.98 | 1.05 |
| 4000–12000 Hz | 1.12 | 0.80 | 1.41 |

That table is attract mode, and reading it as the answer was the mistake that
sent the first release out with the in-game music wrong. See
"The headline number covered four seconds of the wrong thing" below.

Global correlation is the wrong metric for these effects and was nearly a
trap: adding them *lowers* it, because an oscillator free-running against
MAME's is phase-incoherent even when its content is right. In the windows where
effect 2 is actually armed, the upper bands go from 0.23 and 0.38 without it to
0.95 and 1.16 with it. That is what gets heard.

### Fitting it

The two sound boards between them wanted 79 DSP blocks on a device with 66,
while using 40% of the logic — five unshared envelope multipliers in Pleiads'
board and two in Phoenix's, because a SystemVerilog function is inlined at
every call site. Sequencing them through one datapath would be tidier and there
is ample time for it, but the short resource was DSP blocks and the spare one
was logic, so the QSF says so and the synthesiser moves those multipliers into
LUTs: 23 DSP blocks and 12 660 ALMs.


## The headline number covered four seconds of the wrong thing

Phoenix shipped in v0.1.0-alpha on a measured **+0.889** correlation, and the
music in a running game was still bad. The number was taken over the first four
seconds of the capture. The game does not start until 3.4 s. Every figure in
the table above describes attract mode, and nothing in the bench looked past
7 s — `sim/run_audio.sh` correlates the first 4 s and takes one band-energy
window at 7 s.

Per-2 s correlation against MAME told a different story, and it is the shape
that matters rather than the values:

```
   0s +0.049 | 2s +0.914 | 4s +0.850 | 6s +0.739 | 8s +0.526
  10s +0.075 | 12s +0.010 | 14s -0.008 | 16s +0.041 | 18s +0.007
```

### Correlation was the wrong instrument, twice

Chasing that collapse cost most of a day on a false trail. Note-by-note pitch
comparison said the melody matched exactly for notes 0–30, diverged for 31–62
and matched again from 63, which reads like a tune-table or note-timing bug. It
was not. A lag search of ±300 ms on a melody-only render found best
correlations of 0.86, 0.74, 0.77, **0.34, 0.37, 0.27**, 0.78, 0.86 at lags that
were not monotonic — so not a tempo error either.

What settled it was measuring **band energies instead of waveform
correlation**. Over 18–20 s, where the effects are silent and only the melody
and the noise board are sounding:

| band | MAME | core |
|---|---|---|
| 150–400 Hz | 2.36e6 | 1.69e6 |
| 400–800 Hz | 2.24e7 | 2.26e7 |
| 800–1600 Hz | 2.52e6 | 2.53e6 |
| 1600–3200 Hz | 1.10e6 | 1.06e6 |
| 3200–8000 Hz | 1.26e6 | 1.04e6 |

The melody was never wrong. Two square-wave synthesisers with a sub-note timing
offset are spectrally identical and correlate at +0.007, and 70 notes into a
tune that offset is arbitrary. Correlation is the right tool for Pleiads, whose
melody chip is restarted by the CPU on every note and so stays phase-locked to
MAME for the whole capture (+1.0000). It is the wrong tool for anything
free-running.

The real fault was **effect 2**, whose armed span — 11.31 s to 16.59 s — is
exactly where the collapse sits.

### Three bugs in effect 2, two of them in the netlist reading

1. **The amplitude switch was inverted.** `DISCRETE_SWITCH(NODE, ENAB, SWITCH,
   INP0, INP1)` evaluates as `SWITCH ? IN1 : IN0`, and the netlist passes
   `IN0 = TTL_1`, `IN1 = TTL_1/2`. The high frequency-select bit therefore makes
   effect 2 *quieter*. Reading it the other way round doubled the level over
   exactly the stretch where the game sits on latch A = 0x66.

2. **Both free-running 555s were 50% duty.** A 555 astable charges through
   R1+R2 and discharges through R2, so it is high for (R1+R2)/(R1+2·R2) —
   59.5% for IC44, 66.7% for IC51. Those two squares are summed onto C22 to
   make effect 2's control voltage, so their duty *is* the shape of the swoop.

3. **The level was fitted when it did not need to be.** The earlier note that
   the netlist's 40000 gain "does not survive being reasoned about" was wrong;
   the arithmetic just has to include every leg. `dst_mixer` is Millman with
   the feedback resistor counted in the denominator:
   `v = Σ(Vi/Ri) / (Σ(1/Ri) + 1/rF)`, and for `phoenix_mixer` that denominator
   is 1/57k + 1/30k + 1/20k + 1/20k + 1/10k, giving 3986 Ω. A 3.4 V square on
   the effect-2 leg is then 3.4/30k × 3986 × 40000 = 18069 of 32768, which is
   what MAME produces. The fitted 0.25 was 1.95× short. Both the model and the
   RTL now use the netlist's own numbers, including the per-input 10 µF
   coupling caps and C32.

### Carrying the capacitor, not the phase

The remaining error was in *when* the swoop moved. IC44's capacitor is
selected by the game — C18 alone, or with C16 and/or C17 — giving 584, 12.2,
5.8 or 3.95 Hz, and the game switches it about ten times a second while a bird
is on screen. MAME keeps the capacitor voltage across the change, so the
oscillator carries on from wherever it had got to with a new time constant. A
phase accumulator instead preserves the *fraction* of a cycle, which is a
different waveform every time the select changes. Both the model and the RTL
now carry `v_cap` and the flip-flop, as `dsd_555_astbl` does, which also makes
the duty cycle fall out for free rather than being a constant to get right.

In gateware the exponential steps are tiny — IC51 moves five parts per million
of the way to its rail per 192 kHz tick — so each RC keeps a 24-bit residue and
commits only whole millivolts. Without that the increments truncate to zero and
the slow oscillators never start at all.

### Two more, found by running the core rather than the bench

`sim/run_audio.sh` feeds `phoenix_audio` a command stream captured from MAME.
That proves the sound module right when given the right commands and says
nothing about whether the core produces them. `sim/tb_system.cpp` now has an
`audio` mode that runs the whole core from reset, records its own audio output
and logs the sound-latch writes it makes in the same format. The core's stream
is identical to MAME's, values and timestamps to six figures:

```
MAME                      core
0.033504364 C 01          0.0335018409 C 01
0.066962182 C 00          0.0669596591 C 00
0.082029455 A 0F          0.0820276591 A 0f
```

Comparing the core's audio against the model driven by *that* stream found two
things the trace-replay bench could not:

4. **Effect 1's sweep constants were 48 kHz values used at 192 kHz, and paired
   the wrong way round.** `latch_b[4]` selects the 0.553 V target, which goes
   with the *fast* 3.137 ms time constant; the RTL gave it the slow 168.7 ms
   one. That asymmetry is the siren. Effect 1 is silent for this whole capture
   (both games sit at data 15), so no amount of replaying it would have shown
   this.

5. **`dst_rcdisc4` resets its capacitor to 0**, so effect 1's control voltage
   starts at zero and sweeps up. The RTL started it at its resting value.

### The instrument was broken too

Writing the per-second check into the bench turned up a row that could not be
true: at 3 s MAME's RMS was 2900 and its band energies read 1e-23.
`band_energies` took a single 8192-point frame from the *start* of whatever it
was handed — 0.17 s, however long the window — and Phoenix's tune starts at
3.382 s. So the bench's "band energy over a 4.0 s window" had always covered a
twenty-third of that window, and every per-second figure gathered during this
investigation described the first 171 ms of its second. It now averages
Hann-windowed frames at 50% overlap across the whole window. The conclusions
held; the numbers below are the re-measured ones.

### Where it actually ended up

RTL against MAME, band energy per second as a ratio, v0.1.0-alpha as shipped
and now. Rebuilt from git rather than remembered:

| t | 800–1600 Hz | 1600–3200 Hz | 3200–8000 Hz | | 800–1600 Hz | 1600–3200 Hz | 3200–8000 Hz |
|---|---|---|---|---|---|---|---|
| | *shipped* | | | | *now* | | |
| 0 s | 0.00 | 0.00 | 0.00 | | 0.99 | 0.98 | 0.99 |
| 9 s | 1.00 | 0.97 | 0.43 | | 1.00 | 0.97 | 1.01 |
| 10 s | 0.18 | 0.36 | 0.23 | | 0.98 | 1.22 | 1.02 |
| 11 s | 0.13 | 0.45 | 0.22 | | 1.06 | 1.06 | 1.02 |
| 12 s | 0.13 | 0.31 | 0.21 | | 1.04 | 0.96 | 0.99 |
| 13 s | 0.19 | 0.28 | 0.29 | | 0.97 | 1.01 | 1.04 |
| 14 s | 0.22 | 0.26 | 0.27 | | 1.01 | 0.92 | 1.03 |
| 15 s | 0.16 | 0.34 | 0.23 | | 1.02 | 1.05 | 1.00 |
| 16 s | 0.38 | 0.43 | 0.45 | | 0.96 | 1.34 | 1.00 |

Mean |log| band-energy error over 5 bands from 150 Hz to 8 kHz, silent windows
excluded, 0 being an identical spectrum:

| | shipped | now |
|---|---|---|
| whole capture | 1.062 | **0.028** |
| in-game, 10–17 s | 0.883 | **0.050** |

The shipped core was producing effect 2 at about a sixth of its proper energy
and at the wrong pitch, under a melody that was right all along. Pleiads is
unchanged at +1.0000 against MAME, and the video and bus regressions still pass
unaltered.

### What is still not right

Effect 2's swoop is driven by two oscillators that free-run from power-on, so
their phase against MAME's after ten seconds is not something this reproduces
sample for sample. Averaged over a second it no longer shows: the worst band in
the in-game stretch is 1.34.

The first 82 ms — the power-on blip, before both latches settle at 0x0f — has
the RTL's noise board louder than the model's, peak 23084 against 16543. It
predates this work (the 20 s trace-replay bench puts RTL and model at 1.004 on
peak), it is confined to that one burst, and it is not diagnosed.


## Phoenix never ran as Phoenix on hardware

After all of the above the Pocket still played no intro tune and only beeps in
play, while the simulator's recording of the same gateware was, by ear, the
right music. So the sound section was right and was not being used.

Game detection sums the program region as the image loads. `phoenix_mem` added
`dl_data` on every clock that `dl_wr` was high, and every bench strobed each
byte for exactly one clock. The Pocket does not: `data_io` holds the write
enable for `DIO_HOLD` clocks per byte — four, in `core_top` — with address and
data stable underneath. A RAM write repeated four times is harmless, which is
why the image always loaded and the picture was always right. A sum repeated
four times is four times the sum, and matches neither game.

```
phoenix  hold=1  ->  game detected: phoenix (known=1)
phoenix  hold=4  ->  game detected: pleiads (known=0)
pleiads  hold=4  ->  game detected: pleiads (known=0)
```

Nothing was ever recognised on hardware. Pleiads worked because unrecognised
falls through to Pleiads. Phoenix ran its program on Pleiads' sound board,
which ignores the tune select — latch B's low nibble is 15, not a note — and
turns the effect commands into held tones. `artifacts/waves.html` has the
picture: the simulator told it is Phoenix, and the same gateware not told.

It also means every Phoenix-on-hardware report before this one, including the
two that sent the sound work off in the first place, was a report about
Pleiads' sound board. The modelling faults found on the way were real — they
were measured against MAME — but none of them was what was being heard.

The fix counts a byte once: a strobe that has just risen, or whose address has
moved, so it holds with or without a gap between bytes. Detection is now right
at holds of 1, 2, 4 and 7 for both games. The bench's `load_rom` defaults to
the Pocket's four-clock hold with a gap, so the bus and end-to-end regressions
now load the image the way the hardware does; `PL_DL_HOLD` overrides it.

The general point is the one METHODOLOGY makes about the platform boundary:
the benches were exact about the machine and approximate about how the Pocket
talks to it, and the approximation was idempotent for everything except the
one thing that was not.


## Cabinet reverb: the port that would have clipped one sample in eight

The reverb is the other cores' — three feedback combs at 29.7, 37.1 and 41.1 ms
with a one-pole low-pass in each loop, from Punch-Out!! by way of Cloak &
Dagger's mono version — and the intent was to port it unchanged so the setting
means the same thing everywhere. `tools/reverb_model.py` is a bit-exact integer
model of it and `sim/run_reverb.sh` holds the RTL to that on real game audio in
all four modes, with the input scribbled on between samples and only twelve
clocks between them where the core gives 917.

Ported unchanged it was bit-exact and wrong for this board. Counting samples at
the rails in a 20 s capture:

| | dry | Light | Medium | Heavy |
|---|---|---|---|---|
| Phoenix, as ported | 0 | 113 | 1,334 | 2,392 |
| Pleiads, as ported | 178 | 17,120 | **114,023** | 19,425 |
| Phoenix, DC-blocked send | 0 | 0 | 0 | 0 |
| Pleiads, DC-blocked send | 178 | 675 | 1,103 | 1,158 |

This board's mix carries a DC offset, +2686 on Phoenix and −2118 on Pleiads of
32767. MAME's carries the same one, so it stays in the dry path. But a feedback
comb has a gain of 1/(1−g) at 0 Hz — 2.7× at 5/8, 5.3× for Heavy's 13/16 — and
three of them summed turned Pleiads' −2118 into −6431, on a mix that already
reaches full scale. The other cores' mixes are presumably DC-free and never
showed it.

So the *send into the combs* is high-passed at 7.5 Hz and the dry path is not
touched. A room has nothing to say about 0 Hz. On Phoenix, where neither
version clips much, band energy from 150 Hz to 8 kHz is within 1.5% of the
unblocked filter in every band, so it is the same reverb.

### Where it lives, and why not where it would be tidier

The SDC gives every register-to-register path inside `phoenix_audio` eight
clocks, which is right for sound generators with hundreds of clocks per sample
and wrong for a state machine that sets a RAM address on one clock and takes
the data two later. Inside that boundary the reverb would have been relaxed
with everything else, met timing on paper, and been free to fail on hardware —
the same shape of fault as the ROM checksum, a thing every tool calls correct.
So it is instantiated in `phoenix_core`, and the handover to the audio clock,
which has to follow it, moved out of `phoenix_audio` too.

### What was checked

- RTL against the model, 959,999 samples, both games, four modes: 0 differ.
- Off against its own input: 0 differ.
- The sound section's output after the restructure: byte-identical, both games.
- The whole core with the reverb Off: byte-identical to the capture taken
  before the reverb existed.
- The whole core on Medium against the model run on the core's own dry output:
  0 of 287,999 samples differ — which is the check on the wiring rather than on
  the filter.
