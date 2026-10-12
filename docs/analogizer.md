# The Analogizer

[Analogizer](https://github.com/RndMnkIII/Analogizer) is RndMnkIII's adapter
for the Pocket's cartridge slot. It gives analog video out of a VGA connector
(RGBS, RGsB, YPbPr, Y/C, and a scandoubled RGBHV) and takes native controllers
through SNAC adapters. Its wiki is the authority on the adapter itself:
[specifications](https://github.com/RndMnkIII/Analogizer/wiki/Analogizer-Specifications),
[how to configure it](https://github.com/RndMnkIII/Analogizer/wiki/Supported-Cores-and-How-to-Configure-Them).

This page covers what this core does with it, for the person using it and for
whoever changes the core next. The pieces come from
[pocket-core-template](https://github.com/plasticbugs/pocket-core-template)
(`docs/analogizer-retrofit.md` there is the order of work this followed).

## For the player

**Settings are in the core's own menu**, under the game's other options,
like RndMnkIII's own "Pocket Menu" Analogizer cores. No `analogizer.bin` is
needed. The Pocket remembers them for this core.

| entry | options |
|---|---|
| Analogizer | Off (the default), On, On, Pocket off (the picture goes to the CRT only) |
| Analogizer Video | RGBS, RGsB, YPbPr, Y/C NTSC, Y/C PAL, Scandoubler, Scandoubler 25% / 50% / 75%, Scandoubler HQ2x |
| SNAC Adapter | None, DB15, NES, SNES, PCE 2-button, PCE 6-button, PCE Multitap, DB15 Fast, SNES A,B<->X,Y, PSX Digital, PSX Digital Fast, PSX Analog, PSX Analog Fast |
| SNAC Assignment | the six below |
| Analogizer H Position | -28 to +16 dots; + moves the picture right |
| Analogizer V Position | -36 to +8 lines; + moves the picture down |
| Analogizer H Size | -20% to +15%; + wider. With the set on its side, the game's height |

With **Analogizer** off the core behaves exactly as it did without Analogizer
support. The adapter itself is set up as its wiki's
[How to use it](https://github.com/RndMnkIII/Analogizer/wiki/How-to-use-it%3F)
says: SNAC switch in position A, 5 V into its USB-C port, the SCART cable's
audio jack in the Pocket's headphone socket.

**A vertical game: turn the set.** Pleiads' and Phoenix's cabinet monitor is mounted
on its side, and the CRT gets the board's own signal exactly as the board
scans it, unrotated -- only the Pocket's own screen is turned, by its scaler.
On a CRT standing on its side, turned clockwise as you face it (its top to
the right, MAME's ROT90), the picture is upright. On a set left flat it is
sideways.

**Video.** 256 × 208 visible, 352 × 256 dots at 5.5 MHz: 15.625 kHz lines,
61.04 Hz frames, the timing a 15 kHz arcade monitor or a PVM expects (the
scandoubled modes are 31.25 kHz).

| mode | SOG switch | notes |
|---|---|---|
| RGBS | off | VGA-to-SCART or VGA-to-BNC |
| RGsB | on | R2/R3 adapters only |
| YPbPr | on | R2/R3 adapters only |
| Y/C NTSC, Y/C PAL | off | needs an active Y/C adapter on the VGA port |
| SC 0% / 25% / 50% / 75% / HQ2x | off | scandoubled for a VGA monitor |

"On, Pocket off" turns the Pocket's own picture black while the CRT keeps
it.

**Width.** "Analogizer H Size" makes the picture narrower or wider about
its centre, in percent, in the 15 kHz modes (RGBS, RGsB, YPbPr, Y/C): the
core plays each line back a little faster or slower. With the CRT stood on
its side, as this board's monitor was, that is the game's height. The
board starts hsync 16 dots after the picture and leaves 48 after it, so
first centre the picture with H Position (about -6), then widen it. Where the two together
would put picture on the sync or on the colour burst after it, the core
crops the picture's edge instead, so the set never loses sync. There is
no vertical equivalent (a CRT's height is its sweep), and the scandoubler
modes are left alone. How it works is in the template's
docs/analogizer.md, "Picture width". The range stops at +15%: centred, the
picture has about 22 dots to spare either side once hsync and the colour
burst are kept clear, and +15% uses 19 of them.

**Position.** The two sliders move the picture on the CRT, in the board's
own dots and lines (on a turned set, "H" moves it up and down the glass and
"V" across). They move the syncs, not the picture, so nothing is cropped and
every mode follows; the size is still the set's to adjust. 0 is the board's
own timing. The ranges are what the board's blanking allows: 16 dots
between the end of the picture and hsync, 48 after it less the colour
burst; 8 lines between the picture and vsync, 36 after it.

**Controllers.** SNAC pads (DB15, NES, SNES, PC Engine 2/6-button and
multitap, PlayStation) replace the Pocket's controls according to the
**SNAC Assignment** chosen in the menu:

| assignment | pad 1 | pad 2 |
|---|---|---|
| SNAC P1 → Pocket P1 | SNAC 1 | the Pocket's own controls |
| SNAC P1 → Pocket P2 | Pocket | SNAC 1 |
| SNAC P1,P2 → P1,P2 | SNAC 1 | SNAC 2 |
| SNAC P1,P2 → P2,P1 | SNAC 2 | SNAC 1 |

Pleiads and Phoenix are a two-way stick and one or two buttons, and the two
players take turns on the same controls, so the core merges the two pads
(the `gamepad` helper's alternate mode): either one plays whichever turn is
up. With "SNAC P1 → Pocket P1" the Pocket's own buttons keep working
alongside the SNAC pad. The two remaining assignments (P3,P4 and P1-P4) put
SNAC pads where this game never reads, so they do nothing here. Buttons map
as on the Pocket: B fires, A is Phoenix's barrier, Select is coin, Start is
1 player start, Y (or a second pad's Start) is 2 player start; up and down
do nothing (the stick is two-way). A PlayStation pad in analog mode steers
with its left stick. **Cocktail Cabinet** in the menu changes nothing for
SNAC: the core feeds player 2's port from the same merged controls, so on
player 2's turn the picture flips and the same pads play.

**Cart power is on for everyone.** `core.json` declares the cartridge
adapter, so the Pocket powers the slot whether or not an Analogizer is in it.
Do not leave a game cartridge in the slot while this core runs.

**Confirmed on a Pocket with an Analogizer and a CRT** (0.2.0). What the bench proves is listed under *What
was measured* below. Send problems with the adapter itself to the Analogizer
project.

**First time on hardware, in this order** (each reading tells the next where
to look):

1. Menu "Analogizer: Off" (the default): both games exactly as before, on
   the Pocket's screen and controls. If not, the cart port is not idle:
   stop there.
2. Analogizer On, Video RGBS, SNAC None, the set on its side: the same
   picture on the CRT as on the Pocket, 15.625 kHz / 61.04 Hz. No picture at
   all: say whether the set reports a signal.
3. Each other video mode (RGsB and YPbPr need the SOG switch on).
4. H and V Position to centre it; then H Size (centre first, then widen).
   A slider showing a value other than the one set means the firmware is
   not reading 0xF7000004/8/C back as written.
5. SNAC: one pad, "SNAC P1 -> P1"; then the menu's memory: quit, reload,
   the settings should still be there.

## For the developer

### The pieces

| file | what |
|---|---|
| `target/pocket/analogizer/` | RndMnkIII's `openFPGA_Pocket_Analogizer` and what it instantiates, **verbatim**, as the template carries it (from MiraxPocket). Its `analogizer.qip` is the template's: only what is used. |
| `target/pocket/pocket_analogizer.sv` | the wrapper: pixel hand-over, Y/C constants, picture position and width, SNAC → controller words. Core-agnostic; the template's file (9233037), unchanged. |
| `target/pocket/core_top.sv` | `USE_ANALOGIZER`, the instance (`LINE_LEN` 352, `CLK_HZ` 44,000,000), `key1..key4` into the `gamepad` helper in place of `cont1..4_key`, the bridge read at `0xF7xxxxxx`, the Pocket-screen blank, and the cart pins' idle levels when it is off. |
| `pkg/.../interact.json` | the entries above: ids 70–73, each a masked field of the word at `0xF7000000`, 74–75, signed sliders at `0xF7000004` and `0xF7000008`, and 76, the width slider at `0xF700000C`. 15 entries with the game's own 8, 50 options in all (the firmware has refused menus of 70 and more). |
| `pkg/.../core.json` | `"cartridge_adapter": 0` (powers the slot) |
| `sim/run_analogizer.sh`, `sim/tb_analogizer.sv` | the bench (below), at Pleiads' raster |
| `tools/check_json.py` | the template's: fails if an entry writes outside its mask, none sets the enable, a position or width slider is not signed within ±127, a data slot also writes `0xF7000000`, the slot is not powered, or the menu is larger than the firmware has been seen to load |

### The settings word

One 32-bit word at `0xF7000000`, the layout RndMnkIII's adapter module (1.4)
decodes. Each menu entry is a list with a mask that keeps every bit but its
own field (or fields), so the four entries share the word:

| bits | field | values |
|---|---|---|
| 4:0 | SNAC type | 0 none, 1 DB15, 2 NES, 3 SNES, 4 PCE 2-button, 5 PCE 6-button, 6 PCE multitap, 9 DB15 fast, 0xB SNES A/B↔X/Y, 0xC–0xF PS/2 keyboard (not in the menu), 0x10/0x11 PSX digital, 0x12/0x13 PSX analog |
| 5 | enable | 0: the port stays idle and nothing else applies |
| 9:6 | SNAC assignment | 0–5 as in the table above |
| 13:10 | video | 0 RGBS, 1 RGsB, 2 YPbPr, 3 Y/C NTSC, 4 Y/C PAL, 5–9 scandoubler 0/25/50/75%/HQ2x |
| 14 | blank the Pocket screen | |
| 15 | OSD on the Analogizer output | not used; no menu entry |

The word is written as a number (the module is told `bridge_endian_little =
1`) and read back from the wrapper's own copy, combinationally: the firmware
merges a masked entry by reading the word back every frame, and the
module's own read-back would hand it the previous read's value.

**Picture position.** `0xF7000004` (horizontal, dots, + right) and
`0xF7000008` (vertical, lines, + down), whole signed slider words. The
wrapper re-makes hsync and vsync from the source's own edges, earlier or
later, as wide as the source's; pixels and blanking pass untouched.

**Picture width.** `0xF700000C`, percent: the template's width stage (its
`docs/analogizer.md`, "Picture width") plays each 15 kHz line back from a
two-line buffer a little faster or slower about its centre, vsync and vblank
a line late so the picture does not move, and crops rather than let the
picture reach hsync or the colour burst. Off, or in a scandoubler mode,
everything passes as before.

The ranges are this board's, from its blanking (`rtl/phoenix_video.sv`; the
bench numbers lines from two lines into vblank, the core's line 210):

- hsync is dots 272–303, the picture 0–255: 16 dots of front porch, so +16
  right puts hsync on the first blank dot. Leftward, 48 dots of back porch
  less the Y/C colour burst (about 3.5 µs after hsync, 20 dots at 5.5 MHz)
  allow -28.
- vsync is lines 216–219, the picture 0–207: 8 lines of front porch, so +8
  down; 36 lines after vsync, so -36 up.
- width: the free blanking is 16 dots before hsync and 28 after it (less
  the burst); centred by H Position -6 that is about 22 dots a side, so
  +15% (19 dots a side) is offered.

One step past each end the bench fails: +17 and +9 put a sync on the
picture, -29 dots puts the picture in the colour burst, -37 lines puts
vsync on the first picture line, and +17% width crops the picture.

### Clocks

`clk_sys` is 44 MHz, eight clocks a dot (the board's 11 MHz crystal over two
is the 5.5 MHz dot). The shipped Analogizer cores clock the adapter at
42.95–48 MHz and the retrofit order is to pass a 40–50 MHz `clk_sys` as both
the source and the Analogizer clock, so no PLL output is added and the SDC
is unchanged. The hand-over takes each pixel two clocks
after `ce_pix` (`PIX_LAG` 2; the video module registers colour, syncs and
blanks together on `ce_pix`), and the scandoubler, at twice the dot rate,
still has four clocks a dot.

### Using SNAC in the game's inputs

`pocket_analogizer`'s `key1..key4` feed the `gamepad` helper in place of
`cont1..4_key`; nothing else in the core reads the controller words. The
helper runs with two pads in alternate mode, which ORs them into the
cabinet's one set of controls.

### What was measured

- `sim/run_analogizer.sh` (PASS): the wrapper and the vendored module at
  this raster and clock, read at the cartridge pins as the DAC reads them.
  - Menu: all 32 options of the four lists set by read-merge-write at the
    bridge's timing, each seen by the adapter; defaults leave every pin as
    on a core without it and the controller words passing through.
  - RGBS: 53,248 visible dots in 208 lines, 0 differ; 252 csync pulses of
    32 dots.
  - Scandoubler: 512 lines per frame at 1,408 clocks, twice the lines at
    half the period.
  - Position +16,+8 and -28,-36: csync moves 128 and -224 clocks (16 and
    28 dots) and 8 and 36 lines, never low while a dot is drawn, the
    picture unchanged; scandoubler unchanged at both; back at 0, where it
    started.
  - Jumps written just after a pulse (V +8 to +3, H +16 to -17, and the
    large steps to 0, V +5 and H +16): csync never low in the picture over
    three frames.
  - Width, centred by H Position -6: +15% and -20% give 208 lines of 2,356
    and 1,639 clocks (asked 2,355 and 1,638), centred to the clock, every
    dot in order, held 9/10 and 6/7 clocks, the lines as far from vsync as
    at 0; at +15% with H Position +16 and -28, csync never low in the
    picture and the colour burst clear.
  - One step past each end fails: +17 dots and +9 lines (a sync on the
    picture), -29 dots (the picture in the burst), -37 lines (vsync on the
    picture), +17% (the line cropped short of what was asked).
  - YPbPr and Y/C NTSC/PAL without an unknown on any pin; SNAC assignments
    0-5, the analog stick and type none; the blank bit; off again is idle.
  - Two bench changes against the template's: the frame is counted from
    two lines into vblank (this board draws to the last line before
    vblank, and the width stage's line of delay would otherwise straddle
    the bench's frame), and the vsync search counts a low run only after
    seeing csync high (V +8 puts vsync where the search starts, and the
    tail of it read as an ordinary hsync, a line short).
- `sim/lint.sh`: clean, with the wrapper linted on its own.
- `sim/run_video.sh`: the 14 frozen states (Pleiads and Phoenix) still match
  MAME on every pixel (the game's RTL did not change).
- `tools/check_json.py --active 256x208`: clean (15 entries, 50 options).
- Quartus 18.1 (the CI's flow): compiles with no negative slack at any
  corner (worst setup +1.860 ns, slow 0C, clk_sys; worst hold +0.123 ns,
  fast 0C, clk_sys). The Analogizer costs 1,937 ALMs (13,477 -> 15,414,
  83%), 15 RAM blocks (57 -> 72 of 308) and 6 DSP blocks (49 -> 55 of 66).
  The constraints Quartus reports ignored are the ones it ignored before
  this: `pleiads_pocket.sdc`'s clock groups (line 38) are read before
  `sys_constr.sdc` creates the clocks, so the platform's own groups are the
  ones in force, and the platform's two `dram_clk` output delays; `projects/`
  is unchanged and the Analogizer adds no clock.

**Not proven:** anything on hardware; that the firmware writes a signed
slider as a two's-complement word (Analogue documents signed sliders, no
installed core is known to use one); the SNAC serial protocols, which are
the adapter module's and are forced at its outputs in the bench; Y/C and
YPbPr beyond running without unknowns; how a consumer set takes 15.625 kHz
and 61.04 Hz (an arcade monitor or PVM is the board's own load).

### Turning it off

Set `USE_ANALOGIZER = 0` in `core_top.sv`, and take the seven menu entries and
`cartridge_adapter: 0` out of the JSON.
