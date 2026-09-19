#!/usr/bin/env python3
"""Reference model for Phoenix's sound, ported from MAME.

Phoenix is the same board as Pleiads with a different sound section, and it is
three sources where Pleiads has two:

  * an **MM6221AA** multi-melody chip playing one of three built-in tunes,
    selected by the top two bits of sound latch B. MAME models it with the same
    TMS36XX device as Pleiads but in tune mode rather than single-note mode,
    and at a different clock (372 Hz against 247) with different decays.
  * a **custom analogue board** that, unlike Pleiads', produces *only noise* --
    two RC envelopes on latch A bits 6 and 7 set its rate and level, and a 4006
    shift register makes the noise itself.
  * a **discrete netlist** of two 555-based effect generators driven by the low
    bits of both latches. That is a genuine circuit simulation in MAME and is
    modelled separately -- see PhoenixEffects below for what is and is not
    reproduced.

Usage: sound_model_phoenix.py <trace.txt> <out.wav> [seconds] [--no-melody]
                                                             [--no-noise]
                                                             [--no-effects]
"""
import os, sys, struct, wave, math, re

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import importlib.util as iu
_s = iu.spec_from_file_location('sm', os.path.join(HERE, 'sound_model.py'))
sm = iu.module_from_spec(_s); _s.loader.exec_module(sm)
_g = iu.spec_from_file_location('gt', os.path.join(HERE, 'gen_tune_tables.py'))
gt = iu.module_from_spec(_g); _g.loader.exec_module(gt)

VMAX = 32767
VMIN = 0
EFFECT_RATE = 48000          # MAME's machine sample rate
TMS_CLOCK = 372              # Phoenix's TMS36XX clock
FSCALE = 1024

_src = open(os.path.join(HERE, '..', 'ref', 'mame', 'tms36xx.cpp')).read()
TUNES = {n: gt.parse_tune(_src, f'tune{n}') for n in (1, 2, 3)}


class MM6221AA(sm.TMS36XX):
    """The TMS36XX device as Phoenix configures it: tune mode, clock 372,
    decays 0.50 and 1.05 on voices 0 and 3, tune speed 0.21."""

    def __init__(self):
        super().__init__(clock=TMS_CLOCK, decays=(0.50, 0, 0, 1.05, 0, 0))
        self.speed = int(VMAX / 0.21)      # set_tune_speed
        self.tune_num = 0

    def tune_w(self, tune):
        tune &= 3
        if tune == self.tune_num:
            return
        self.tune_num = tune
        self.tune_ofs = 0
        self.tune_max = 96                 # fixed, as MAME has it

    def sample(self):
        # tunes[0] is a null pointer in MAME, so tune 0 is silence and the
        # stream update returns before touching any state.
        if self.tune_num == 0 or self.voices == 0:
            return 0.0
        table = TUNES[self.tune_num]
        rate = self.rate
        total = 0

        for v in range(12):
            if self.vol[v] > VMIN:
                self.vol_counter[v] -= self.decay[v]
                while self.vol_counter[v] <= 0:
                    self.vol_counter[v] += rate
                    self.vol[v] -= 1
                    if self.vol[v] <= VMIN:
                        self.frequency[v] = 0
                        self.vol[v] = VMIN
                        break

        self.tune_counter -= self.speed
        if self.tune_counter <= 0:
            n = (-self.tune_counter // rate) + 1
            self.tune_counter += n * rate
            self.note_counter -= n
            if self.note_counter <= 0:
                self.note_counter += VMAX
                if self.tune_ofs < self.tune_max:
                    self.shift ^= 6
                    for v in range(6):
                        t = table[self.tune_ofs * 6 + v]
                        if t:
                            self.frequency[self.shift + v] = \
                                t * (self.basefreq << self.octave) // FSCALE
                            self.vol[self.shift + v] = VMAX
                    self.tune_ofs += 1

        for v in range(12):
            if (self.enable & (1 << v)) and self.frequency[v]:
                self.counter[v] -= self.frequency[v]
                while self.counter[v] <= 0:
                    self.counter[v] += rate
                    self.output ^= 1 << v
                if self.output & self.enable & (1 << v):
                    total += self.vol[v]

        return total / (32768.0 * self.voices)


class PhoenixNoise:
    """The custom board. Unlike Pleiads', it makes *only* noise.

    Latch A bit 6 charges/discharges C24, which sets the noise clock rate;
    bit 7 does the same for C25, which sets a second level. Both feed the
    output, one gated by the raw polynomial bit and one by a 400 Hz
    low-passed version of it.
    """

    C24 = 6.8e-6; R49 = 1000; R51 = 330; R52 = 20000
    C25 = 6.8e-6; R50 = 1000; R53 = 330; R54 = 47000

    def __init__(self, rate=EFFECT_RATE):
        self.rate = rate
        self.a = 0
        self.c24 = [0, 0]      # level, counter
        self.c25 = [0, 0]
        self.noise_counter = 0
        self.polyoffs = 0
        self.polybit = 0
        self.lowpass_counter = 0
        self.lowpass_polybit = 0

    def _step(self, st, charging, tau_charge, tau_discharge):
        level, counter = st
        rate = self.rate
        if charging:
            if level < VMAX:
                counter -= int((VMAX - level) / tau_charge)
                if counter <= 0:
                    n = -counter // rate + 1
                    counter += n * rate
                    level = min(VMAX, level + n)
        else:
            if level > VMIN:
                counter -= int((level - VMIN) / tau_discharge)
                if counter <= 0:
                    n = -counter // rate + 1
                    counter += n * rate
                    level = max(VMIN, level - n)
        st[0], st[1] = level, counter
        return level

    def sample(self):
        # C24: bit 6 HIGH discharges, LOW charges -- the opposite way round
        # from C25, and the return is inverted too.
        self._step(self.c24, not (self.a & 0x40),
                   (self.R51 + self.R49) * self.C24, self.R52 * self.C24)
        vc24 = VMAX - self.c24[0]
        vc25 = self._step(self.c25, self.a & 0x80,
                          (self.R50 + self.R53) * self.C25, self.R54 * self.C25)

        # The two levels are averaged to control the noise clock rate.
        if vc24 < vc25:
            level = vc24 + (vc25 - vc24) // 2
        else:
            level = vc25 + (vc24 - vc25) // 2
        frequency = 588 + 6325 * level // 32768

        self.noise_counter -= frequency
        if self.noise_counter <= 0:
            n = (-self.noise_counter // self.rate) + 1
            self.noise_counter += n * self.rate
            self.polyoffs = (self.polyoffs + n) & 0x3ffff
            self.polybit = (sm.POLY18[self.polyoffs >> 5] >> (self.polyoffs & 31)) & 1

        total = 0
        if not self.polybit:
            total += vc24

        self.lowpass_counter -= 400
        if self.lowpass_counter <= 0:
            self.lowpass_counter += self.rate
            self.lowpass_polybit = self.polybit
        if not self.lowpass_polybit:
            total += vc25

        return total


def _div2(x):
    return -((-x) // 2) if x < 0 else x // 2


class Astable555:
    """A free-running 555 astable, carried as capacitor state the way MAME's
    dsd_555_astbl carries it rather than as a phase accumulator.

    The distinction is not cosmetic here. The game switches C16/C17/C18 under
    IC44 while it is oscillating, and MAME keeps the capacitor voltage across
    the change so the oscillator continues from wherever it had got to with a
    new time constant. A phase accumulator instead preserves the *fraction* of
    a cycle, which is a different waveform every time the select changes -- and
    the game toggles it about ten times a second while a bird is on screen.

    Carrying the capacitor also gets the duty cycle for free: charging is
    through R1+R2 and discharging through R2 alone, so the output is high for
    (R1+R2)/(R1+2*R2) of the cycle, never half.
    """

    def __init__(self, r1, r2, c, dt, v_pos=5.0, v_high=4.0):
        self.r1, self.r2, self.dt = r1, r2, dt
        self.v_charge = v_pos
        self.v_high = v_high
        self.threshold = v_pos * 2.0 / 3.0
        self.trigger = v_pos / 3.0
        self.c = None
        self._set_c(c)
        self.flip_flop = 1          # MAME resets charging, with an empty cap
        self.v_cap = 0.0

    def _set_c(self, c):
        if c == self.c:
            return
        self.c = c
        self.exp_charge = 1.0 - math.exp(-self.dt / ((self.r1 + self.r2) * c))
        self.exp_discharge = 1.0 - math.exp(-self.dt / (self.r2 * c))

    def step(self, c=None):
        if c is not None:
            self._set_c(c)
        if self.flip_flop:
            self.v_cap += (self.v_charge - self.v_cap) * self.exp_charge
            if self.v_cap >= self.threshold:
                self.v_cap = self.threshold
                self.flip_flop = 0
        else:
            self.v_cap -= self.v_cap * self.exp_discharge
            if self.v_cap <= self.trigger:
                self.v_cap = self.trigger
                self.flip_flop = 1
        return self.v_high if self.flip_flop else 0.0


class PhoenixEffects:
    """The discrete netlist's two 555-based effect generators.

    MAME simulates each 555 at the capacitor, integrating the charge and
    discharge exponentials and resolving edges to sub-sample precision. That is
    faithful, and it is also floating-point with logarithms in the inner loop.

    Modelled here by **frequency** instead: every 555 in this circuit is a
    clock, and what reaches the speaker is a counter's division of it, so the
    capacitor waveform is never heard. For an astable with control voltage the
    period is closed-form --

        t_high = (R1 + R2) * C * ln((Vch - Vcv/2) / (Vch - Vcv))
        t_low  =       R2  * C * ln(2)

    -- which is one evaluation per audio sample against MAME's inner loop, and
    is the form that ports to gateware.

    Effect 1 is the shield, the bird explosion, the level 3-4 sirens and the
    level 5 spaceship. Effect 2 is the bird flying and the various hits.
    Effects 3 and 4 exist in the netlist but nothing drives them; MAME defines
    their nodes as constant 0.
    """

    LN2 = math.log(2.0)
    TTL1 = 3.4                      # DEFAULT_TTL_V_LOGIC_1

    def __init__(self, rate=EFFECT_RATE):
        self.rate = rate
        self.dt = 1.0 / rate
        self.e1_data = self.e1_freq = self.e1_filt = 0
        self.e2_data = self.e2_freq = 0

        # --- effect 1 control voltage: RCDISC4 type 1 -----------------------
        # R22=470, R23=100k, R24=33k, C7=6.8u, 12V. Two voltage-divider states
        # with different time constants: fast when the input is high, slow when
        # it is low, which is what makes the siren sweep.
        R1, R2, R3, C1, VP = 470.0, 100e3, 33e3, 6.8e-6, 12.0
        v = VP - 0.5                                   # diode drop
        r = R1 * R3 / (R1 + R3)
        self.rc4_v = [0.0, 0.0]
        self.rc4_exp = [0.0, 0.0]
        i = v / (R2 + r)
        self.rc4_v[1] = i * r + 0.5
        rT = R2 * r / (R2 + r)
        self.rc4_exp[1] = 1.0 - math.exp(-self.dt / (rT * C1))
        i = v / (R2 + R3)
        self.rc4_v[0] = i * R3 + 0.5
        rT = R2 * R3 / (R2 + R3)
        self.rc4_exp[0] = 1.0 - math.exp(-self.dt / (rT * C1))
        self.rc4_vc = 0.0
        self.rc4_max = VP - 1.5                        # OP_AMP_VP_RAIL_OFFSET

        self.ph1 = 0.0
        self.ph2 = 0.0
        self.lp1 = 0.0                                 # C5 low-pass on effect 1
        # R19||R20 = 10k||100k with C5 = 0.047u
        rlp = 1.0 / (1.0 / 10e3 + 1.0 / 100e3)
        self.lp1_exp = 1.0 - math.exp(-self.dt / (rlp * 0.047e-6))

        # --- effect 2 control voltage --------------------------------------
        # IC51: a 510k/510k/1uF astable -- about 1 Hz, the slow wobble.
        # IC44's capacitor is selected by the two frequency bits; IC51 is
        # fixed at 510k/510k/1uF, about 1 Hz -- the slow wobble under
        # everything. C20 is confirmed on real boards as 1uF, not the 10uF the
        # schematic shows.
        self.ic44 = Astable555(47e3, 100e3, 0.01e-6, self.dt)   # R40, R41
        self.ic51 = Astable555(510e3, 510e3, 1e-6, self.dt)     # R23, R24
        self.c22 = 0.0                                 # MAME resets the cap empty
        # C22 charges through R45 || (R46 + R42||R5k||R10k)
        rc22 = 1.0 / (1.0 / 5.1e3 + 1.0 / (5.1e3 + 1.0 / (1.0/10e3 + 1.0/5e3 + 1.0/10e3)))
        self.c22_exp = 1.0 - math.exp(-self.dt / (rc22 * 100e-6))
        # --- final mixer ---------------------------------------------------
        # phoenix_mixer, with MAME's own numbers rather than a fitted gain.
        # r_total is every leg in parallel *including* VR1, which is what
        # dst_mixer's Millman sum divides by; each input is high-passed by its
        # coupling cap into (r || rF); C32 high-passes the sum, and MAME
        # assumes a flat 100k final-stage impedance for it.
        self.r_total = 1.0 / (1/57e3 + 1/30e3 + 1/20e3 + 1/20e3 + 1/10e3)
        self.hp1 = self.hp2 = 0.0
        self.hp1_exp = 1.0 - math.exp(-self.dt / ((1/(1/57e3 + 1/10e3)) * 10e-6))
        self.hp2_exp = 1.0 - math.exp(-self.dt / ((1/(1/30e3 + 1/10e3)) * 10e-6))
        self.dc = 0.0
        self.dc_exp = 1.0 - math.exp(-self.dt / (100e3 * 10e-6))

    @staticmethod
    def _f555_cv(r1, r2, c, v_cv, v_charge=5.0):
        """Astable frequency with the control pin driven to v_cv."""
        v_cv = max(0.05, min(v_charge - 0.05, v_cv))
        t_hi = (r1 + r2) * c * math.log((v_charge - v_cv / 2.0) / (v_charge - v_cv))
        t_lo = r2 * c * PhoenixEffects.LN2
        return 1.0 / (t_hi + t_lo) if (t_hi + t_lo) > 0 else 0.0

    @staticmethod
    def _square_energy(phase, step):
        """Advance a 50% square by `step` cycles and return the fraction of the
        step spent high -- MAME's DISC_OUT_IS_ENERGY, which is what keeps a
        13 kHz tone from aliasing at a 48 kHz sample rate."""
        if step <= 0:
            return phase, 1.0 if phase < 0.5 else 0.0
        if step >= 1.0:
            return (phase + step) % 1.0, 0.5
        end = phase + step
        # integrate the high half over [phase, end)
        hi = 0.0
        a, b = phase, end
        while a < b:
            seg_end = min(b, math.floor(a) + 0.5) if (a % 1.0) < 0.5 else min(b, math.floor(a) + 1.0)
            if (a % 1.0) < 0.5:
                hi += seg_end - a
            a = seg_end + (1e-12 if seg_end == a else 0.0)
        return end % 1.0, hi / step

    def sample(self):
        # ---- effect 1 -----------------------------------------------------
        inp = 1 if self.e1_freq else 0
        self.rc4_vc += (self.rc4_v[inp] - self.rc4_vc) * self.rc4_exp[inp]
        cv1 = max(0.0, min(self.rc4_max, self.rc4_vc))

        # DISCRETE_NOTE does not count at all while the preload equals the
        # counter's maximum: "if (DSS_NOTE__DATA != DSS_NOTE__MAX1)". Data 15
        # is therefore the OFF state, not the fastest tone -- and it is what
        # both effects sit at for most of a game. Running the counter anyway
        # buries the mix in a tone MAME never makes; it measured as 128x too
        # much energy above 4 kHz and dragged the correlation down by a third.
        if self.e1_data == 0x0f:
            e1 = 0.0
        else:
            f1 = self._f555_cv(47e3, 47e3, 0.001e-6, cv1)
            div1 = (16 - self.e1_data) * 2
            self.ph1, e1 = self._square_energy(self.ph1, f1 / div1 * self.dt)
        amp1 = self.TTL1 if not self.e1_filt else self.TTL1 * 100e3 / (10e3 + 100e3)
        v1 = e1 * amp1
        self.lp1 += (v1 - self.lp1) * self.lp1_exp
        snd1 = self.lp1 if self.e1_filt else v1

        # ---- effect 2 -----------------------------------------------------
        # IC44: its capacitor is selected by the two frequency bits, so this
        # oscillator's rate is what the game changes when it picks an effect.
        # DISCRETE_COMP_ADDER sums the selected capacitors in parallel on top
        # of C18, which is always in circuit.
        cap = 0.01e-6 + (0.47e-6 if (self.e2_freq & 1) else 0.0) \
                      + (1.0e-6 if (self.e2_freq & 2) else 0.0)
        v33 = self.ic44.step(cap)
        v34 = self.ic51.step()

        # The two outputs and B+ mix onto C22, which is 100uF and therefore
        # the slowest thing in the circuit.
        v35 = (v33 / 10e3 + v34 / (5.1e3 + 5.1e3) + 5.0 / 5e3) \
              / (1.0 / 10e3 + 1.0 / (5.1e3 + 5.1e3) + 1.0 / 5e3 + 1.0 / 10e3)
        v36 = (v34 / 5.1e3 + v35 / 5.1e3) / (1.0 / 5.1e3 + 1.0 / 5.1e3)
        self.c22 += (v36 - self.c22) * self.c22_exp
        g = 1.0 / 10e3 + 1.0 / 5.1e3 + 1.0 / 5e3 + 1.0 / 10e3
        cv2 = (v33 / 10e3 + self.c22 / 5.1e3 + 5.0 / 5e3) / g

        if self.e2_data == 0x0f:
            e2 = 0.0
        else:
            f39 = self._f555_cv(20e3, 20e3, 0.001e-6, cv2)
            div2 = (16 - self.e2_data) * 2
            self.ph2, e2 = self._square_energy(self.ph2, f39 / div2 * self.dt)
        # DISCRETE_SWITCH is `SWITCH ? IN1 : IN0`, and the netlist passes
        # IN0 = TTL_1, IN1 = TTL_1/2. So the HIGH frequency bit makes this
        # quieter, not louder. Having it the other way round doubled the
        # level over 11.5-16.5 s, where the game sits on 0x66/0x67 and
        # effect 2 is the loudest thing in the mix.
        amp2 = self.TTL1 / 2.0 if (self.e2_freq & 2) else self.TTL1
        snd2 = e2 * amp2

        # ---- final mixer --------------------------------------------------
        # R19+R21 = 57k and R38+R47 = 30k, each AC-coupled by a 10uF cap so the
        # DC the square waves carry never reaches the speaker, summed as
        # currents and turned back into a voltage by every leg in parallel.
        # The 40000 is the netlist's own final gain; MAME's discrete stream is
        # already in +/-32768 units, so dividing by 32768 puts this on the same
        # +/-1 footing as the melody and the noise board.
        self.hp1 += (snd1 - self.hp1) * self.hp1_exp
        self.hp2 += (snd2 - self.hp2) * self.hp2_exp
        v = ((snd1 - self.hp1) / 57e3 + (snd2 - self.hp2) / 30e3) * self.r_total
        self.dc += (v - self.dc) * self.dc_exp
        return (v - self.dc) * 40000.0 / 32768.0


def load_trace(path):
    ev = []
    for line in open(path):
        if line.startswith('#'):
            continue
        f = line.split()
        if len(f) == 3:
            ev.append((float(f[0]), f[1], int(f[2], 16)))
    return ev


def render(trace, seconds, melody=True, noise=True, effects=True):
    tms = MM6221AA()
    nz = PhoenixNoise()
    fx = PhoenixEffects() if effects else None

    n = int(seconds * EFFECT_RATE)
    out = [0] * n
    tms_acc = 0.0
    tms_step = tms.rate / EFFECT_RATE
    prev = nxt = 0.0

    ei = 0
    last = {'A': None, 'B': None, 'C': None}
    for i in range(n):
        t = i / EFFECT_RATE
        while ei < len(trace) and trace[ei][0] <= t:
            _, latch, val = trace[ei]
            ei += 1
            if last[latch] == val:
                continue
            last[latch] = val
            if latch == 'A':
                # bits 0-3 effect 2 data, bits 4-5 effect 2 frequency select,
                # bits 6-7 the noise envelopes
                nz.a = val
                if fx:
                    fx.e2_data = val & 0x0f
                    fx.e2_freq = (val & 0x30) >> 4
            elif latch == 'B':
                # bits 0-3 effect 1 data, bit 4 frequency, bit 5 filter,
                # bits 6-7 the tune
                tms.tune_w(val >> 6)
                if fx:
                    fx.e1_data = val & 0x0f
                    fx.e1_freq = 1 if (val & 0x10) else 0
                    fx.e1_filt = 1 if (val & 0x20) else 0
            # latch C is Pleiads-only; Phoenix's videoreg write goes nowhere

        tms_acc += tms_step
        while tms_acc >= 1.0:
            tms_acc -= 1.0
            prev = nxt
            nxt = tms.sample()
        v_tms = prev + (nxt - prev) * tms_acc if melody else 0.0

        v_nz = (_div2(nz.sample()) / 32768.0) if noise else 0.0
        v_fx = fx.sample() if fx else 0.0

        mixed = 0.5 * v_tms + 0.4 * max(-1.0, min(1.0, v_nz)) + 0.6 * v_fx
        out[i] = max(-32768, min(32767, int(mixed * 32768)))
    return out


def main():
    args = [a for a in sys.argv[1:] if not a.startswith('--')]
    flags = {a for a in sys.argv[1:] if a.startswith('--')}
    if len(args) < 2:
        sys.exit(__doc__)
    seconds = float(args[2]) if len(args) > 2 else 20.0
    samples = render(load_trace(args[0]), seconds,
                     melody='--no-melody' not in flags,
                     noise='--no-noise' not in flags,
                     effects='--no-effects' not in flags)
    with wave.open(args[1], 'wb') as w:
        w.setnchannels(1); w.setsampwidth(2); w.setframerate(EFFECT_RATE)
        w.writeframes(struct.pack(f'<{len(samples)}h', *samples))
    print(f'wrote {args[1]}: {len(samples)} samples')


if __name__ == '__main__':
    main()
