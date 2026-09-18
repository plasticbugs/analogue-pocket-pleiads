#!/usr/bin/env python3
"""Reference model for Pleiads' sound, ported from MAME.

Same role the video reference renderer plays: a readable, executable statement
of what the hardware does, checkable against MAME, and something to write RTL
against instead of re-deriving from C++.

Pleiads' sound is two things:

  * an Epson 7910E multi-melody chip, whose ROM has never been dumped. MAME
    substitutes a TMS3615 with hand-picked parameters. That stand-in is the
    best available reference and is what this core targets; matching the 1981
    board is not possible for anyone without a board to measure.
  * an analogue effects board: four 556-timer tones, a noise source and five
    RC envelope followers. MAME models it behaviourally in integer arithmetic
    with the author's own comments marking most component values unknown.

The port is deliberately literal, quirks included: tone3 computes its step
count from tone2's counter, divides by 33768 rather than 32768, and several
discharge paths add one sample period where the charge paths add n. Those are
MAME's, and MAME is what we are matching, so they are reproduced rather than
tidied. Each one is marked.

Usage:
    sound_model.py <trace.txt> <out.wav> [seconds]
"""
import sys, struct, wave

VMAX = 32767
VMIN = 0
PC4_MIN = int(VMAX * 7 / 50)
TONE1_CLOCK = 8000

EFFECT_RATE = 48000              # MAME's machine().sample_rate()
TMS_CLOCK = 247                  # Pleiads' TMS36XX clock
TMS_RATE = TMS_CLOCK * 64        # 15808 Hz, the device's own stream rate

FSCALE = 1024


# --------------------------------------------------------------------- TMS36XX
def _note_table():
    """tune4: the thirteen tones, six footages each, as tms36xx.cpp builds them."""
    semis = {'C': 1.18921, 'Cx': 1.25992, 'D': 1.33484, 'Dx': 1.41421,
             'E': 1.49831, 'F': 1.58740, 'Fx': 1.68179, 'G': 1.78180,
             'Gx': 1.88775, 'A': None, 'Ax': 1.05946, 'B': 1.12246}

    def val(name, n):
        if name == 'A':
            return int(FSCALE << n)
        if name in ('Ax', 'B'):
            return int((FSCALE << n) * semis[name])
        return int((FSCALE << (n - 1)) * semis[name])

    rows = [
        [('B', 0), ('B', 1), ('Dx', 2), ('B', 2), ('Dx', 3), ('B', 3)],
        [('C', 1), ('C', 2), ('E', 2), ('C', 3), ('E', 3), ('C', 4)],
        [('Cx', 1), ('Cx', 2), ('F', 2), ('Cx', 3), ('F', 3), ('Cx', 4)],
        [('D', 1), ('D', 2), ('Fx', 2), ('D', 3), ('Fx', 3), ('D', 4)],
        [('Dx', 1), ('Dx', 2), ('G', 2), ('Dx', 3), ('G', 3), ('Dx', 4)],
        [('E', 1), ('E', 2), ('Gx', 2), ('E', 3), ('Gx', 3), ('E', 4)],
        [('F', 1), ('F', 2), ('A', 2), ('F', 3), ('A', 3), ('F', 4)],
        [('Fx', 1), ('Fx', 2), ('Ax', 2), ('Fx', 3), ('Ax', 3), ('Fx', 4)],
        [('G', 1), ('G', 2), ('B', 2), ('G', 3), ('B', 3), ('G', 4)],
        [('Gx', 1), ('Gx', 2), ('C', 3), ('Gx', 3), ('C', 4), ('Gx', 4)],
        [('A', 1), ('A', 2), ('Cx', 3), ('A', 3), ('Cx', 4), ('A', 4)],
        [('Ax', 1), ('Ax', 2), ('D', 3), ('Ax', 3), ('D', 4), ('Ax', 4)],
        [('B', 1), ('B', 2), ('Dx', 3), ('B', 3), ('Dx', 4), ('B', 4)],
    ]
    out = []
    for r in rows:
        for (nm, n) in r:
            out.append(val(nm, n))
    return out


TUNE4 = _note_table()


class TMS36XX:
    """TMS3615 as configured for Pleiads: clock 247, decays on voices 0,1,3,5."""

    def __init__(self, clock=TMS_CLOCK, decays=(0.33, 0.33, 0, 0.33, 0, 0.33)):
        self.rate = clock * 64
        self.basefreq = clock
        self.decay = [0] * 12
        enable = 0
        for j, dt in enumerate(decays):
            if dt > 0:
                self.decay[j] = self.decay[j + 6] = int(VMAX / dt)
                enable |= 0x41 << j
        enable = (enable & 0x3f) | ((enable & 0x3f) << 6)
        self.enable = enable
        self.voices = 2 * sum(1 for j in range(6) if (enable >> j) & 1)
        self.vol = [0] * 12
        self.vol_counter = [0] * 12
        self.counter = [0] * 12
        self.frequency = [0] * 12
        self.output = 0
        self.octave = 0
        self.shift = 0
        self.tune_num = 0
        self.tune_ofs = 0
        self.tune_max = 0
        self.tune_counter = 0
        self.note_counter = 0
        self.speed = VMAX          # set_tune_speed is not called for Pleiads

    def note_w(self, octave, note):
        octave &= 3
        note &= 15
        if note > 12:
            return
        self.tune_counter = 0
        self.note_counter = 0
        self.vol_counter = [0] * 12
        self.counter = [0] * 12
        self.octave = octave
        self.tune_num = 4
        self.tune_ofs = note
        self.tune_max = note + 1

    def sample(self):
        if self.tune_num != 4 or self.voices == 0:
            return 0.0
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
                        t = TUNE4[self.tune_ofs * 6 + v]
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


# ------------------------------------------------------------- effects board
def _poly18():
    """The 4006 shift register's 18-bit sequence, as common_start() builds it."""
    table = [0] * (1 << (18 - 5))
    shiftreg = 0
    for i in range(1 << (18 - 5)):
        bits = 0
        for _ in range(32):
            bits = (bits >> 1) | ((shiftreg << 31) & 0xFFFFFFFF)
            if ((shiftreg >> 16) & 1) == ((shiftreg >> 17) & 1):
                shiftreg = ((shiftreg << 1) | 1) & 0xFFFFFFFF
            else:
                shiftreg = (shiftreg << 1) & 0xFFFFFFFF
        table[i] = bits
    return table


POLY18 = _poly18()


def _trunc(x):
    """C's (int) cast: truncation toward zero."""
    return int(x)


class PleiadsEffects:
    """The analogue effects board, at MAME's machine sample rate."""

    def __init__(self, rate=EFFECT_RATE):
        self.rate = rate
        self.a = self.b = self.c = 0

        self.t1_counter = 0; self.t1_output = 0; self.t1_max = 0
        self.t2_counter = 0; self.t2_output = 0; self.t2_max = 351
        self.t3_counter = 0; self.t3_output = 0; self.t3_max = 582
        self.t4_counter = 0; self.t4_output = 0; self.t4_max = 1315

        # (level, counter, charge_time, discharge_time)
        self.pa5 = [0, 0, 3.3, 2.2]
        self.pa6 = [0, 0, 0.000726, 0.022]
        self.pb4 = [0, 0, 0.1, 0.1]
        self.pc4 = [PC4_MIN, 0, 0.066, 0.022]
        self.pc5 = [0, 0, 0.0033, 0.1]

        self.pa5_resistor = 33
        self.pc5_resistor = 47
        self.polybit_resistor = 47
        self.opamp_resistor = 20

        self.noise_freq = 1412
        self.noise_counter = 0
        self.polyoffs = 0
        self.polybit = 0

    # -- envelope followers -------------------------------------------------
    def _charge(self, st, on, floor, n_on_discharge=True):
        """MAME's charge/discharge step. `n_on_discharge` False reproduces the
        places where the discharge path adds one sample period instead of n --
        update_c_pc5 and update_c_pa5 both do, and tone3 does something similar.
        """
        level, counter, ct, dt = st
        rate = self.rate
        if on:
            if level < VMAX:
                counter -= _trunc((VMAX - level) / ct)
                if counter <= 0:
                    n = (-counter // rate) + 1
                    counter += n * rate
                    level += n
                    if level > VMAX:
                        level = VMAX
        else:
            if level > floor:
                counter -= _trunc((level - floor) / dt)
                if counter <= 0:
                    n = (-counter // rate) + 1
                    counter += n * rate if n_on_discharge else rate
                    level -= n
                    if level < floor:
                        level = floor
        st[0], st[1] = level, counter
        return level

    # -- tone 1: a fixed 8 kHz clock divided by 1..15 -----------------------
    def tone1(self):
        if (self.a & 15) != 15:
            self.t1_counter -= TONE1_CLOCK
            while self.t1_counter <= 0:
                self.t1_counter += self.rate
                self.t1_max += 1
                if self.t1_max == 16:
                    self.t1_max = self.a & 15
                    self.t1_output ^= 1
        return VMAX if self.t1_output else -VMAX

    # -- tones 2 and 3: the upper 556, swept by the charge on PB4 -----------
    def tone23(self):
        level = VMAX - self._charge(self.pb4, self.b & 0x10, VMIN)
        if (self.b & 0x20) == 0:
            return 0
        if level < VMAX:
            self.t2_counter -= self.t2_max * level // 32768
            if self.t2_counter <= 0:
                n = (-self.t2_counter // self.rate) + 1
                self.t2_counter += n * self.rate
                self.t2_output = (self.t2_output + n) & 1
            # MAME divides by 33768 here, not 32768, and takes its step count
            # from tone2's counter rather than tone3's. Both look like slips,
            # both change the sound, and both are what we are matching.
            self.t3_counter -= self.t3_max * 1 // 3 + self.t3_max * 2 // 3 * level // 33768
            if self.t3_counter <= 0:
                n = (-self.t2_counter // self.rate) + 1
                self.t3_counter += self.rate
                self.t3_output = (self.t3_output + n) & 1
        s = (VMAX if self.t2_output else -VMAX) + (VMAX if self.t3_output else -VMAX)
        return s // 2

    # -- tone 4: the lower 556, gated by the polynomial bit ------------------
    def tone4(self):
        level = self._charge(self.pc4, self.c & 0x10, PC4_MIN)
        vpc5 = self._charge(self.pc5, self.c & 0x20, VMIN, n_on_discharge=False)
        vpa5 = self._charge(self.pa5, self.a & 0x20, VMIN, n_on_discharge=False)

        if self.polybit:
            level = level + (VMAX - level) * self.opamp_resistor // \
                    (self.opamp_resistor + self.polybit_resistor)
        else:
            level = level * self.polybit_resistor // \
                    (self.opamp_resistor + self.polybit_resistor)

        self.t4_counter -= self.t4_max * level // 32768
        if self.t4_counter <= 0:
            n = (-self.t4_counter // self.rate) + 1
            self.t4_counter += n * self.rate
            self.t4_output = (self.t4_output + n) & 1

        s = vpc5 * self.pa5_resistor // (self.pa5_resistor + self.pc5_resistor) + \
            vpa5 * self.pc5_resistor // (self.pa5_resistor + self.pc5_resistor)
        return s if self.t4_output else -s

    # -- noise: the 4006 shift register --------------------------------------
    def noise(self):
        # PA6's discharge only runs while the polynomial bit is high, and its
        # time constant there is hard-coded rather than taken from the struct.
        level, counter, ct, _dt = self.pa6
        rate = self.rate
        if self.a & 0x40:
            if level < VMAX:
                counter -= _trunc((VMAX - level) / ct)
                if counter <= 0:
                    n = (-counter // rate) + 1
                    counter += n * rate
                    level = min(VMAX, level + n)
        elif self.polybit and level > VMIN:
            counter -= _trunc((level - VMIN) / 0.1)
            if counter <= 0:
                n = (-counter // rate) + 1
                counter += n * rate
                level = max(VMIN, level - n)
        self.pa6[0], self.pa6[1] = level, counter

        if self.a & 0x10:
            self.noise_counter -= self.noise_freq * 2 // 3
        else:
            self.noise_counter -= self.noise_freq * 1 // 3
        if self.noise_counter <= 0:
            n = (-self.noise_counter // rate) + 1
            self.noise_counter += n * rate
            self.polyoffs = (self.polyoffs + n) & 0x3ffff
            self.polybit = (POLY18[self.polyoffs >> 5] >> (self.polyoffs & 31)) & 1

        s = 0
        if self.polybit:
            s += level
            if self.a & 0x80:
                s += VMAX
        else:
            s -= level
            if self.a & 0x80:
                s -= VMAX
        return s // 2

    def sample(self):
        s = self.tone1() // 2 + self.tone23() // 2 + self.tone4() + self.noise()
        return max(-1.0, min(1.0, s / 32768.0))


# ------------------------------------------------------------------- driver
def load_trace(path):
    ev = []
    for line in open(path):
        if line.startswith('#'):
            continue
        f = line.split()
        if len(f) == 3:
            ev.append((float(f[0]), f[1], int(f[2], 16)))
    return ev


def render(trace, seconds):
    tms = TMS36XX()
    fx = PleiadsEffects()
    n = int(seconds * EFFECT_RATE)
    out = [0] * n

    # The melody chip runs at its own 15808 Hz and has to be brought up to
    # 48 kHz. Holding each sample (the obvious thing) puts a staircase on the
    # output and showed up immediately as 45% too much energy above 4 kHz
    # against MAME, which resamples with a filter. Linear interpolation is
    # most of the way there and is one multiply-add in gateware.
    tms_acc = 0.0
    tms_step = TMS_RATE / EFFECT_RATE
    tms_prev = 0.0
    tms_next = 0.0

    ei = 0
    prev = {'A': None, 'B': None, 'C': None}
    for i in range(n):
        t = i / EFFECT_RATE
        while ei < len(trace) and trace[ei][0] <= t:
            _, latch, val = trace[ei]
            ei += 1
            if prev[latch] == val:
                continue          # MAME ignores a write that changes nothing
            prev[latch] = val
            if latch == 'A':
                fx.a = val
            elif latch == 'C':
                fx.c = val
            else:
                pitch = (val >> 6) & 3
                if pitch == 3:
                    pitch = 2     # IC2 and IC3 are tied together
                tms.note_w(pitch, val & 15)
                fx.b = val

        tms_acc += tms_step
        while tms_acc >= 1.0:
            tms_acc -= 1.0
            tms_prev = tms_next
            tms_next = tms.sample()
        tms_val = tms_prev + (tms_next - tms_prev) * tms_acc

        mixed = 0.75 * tms_val + 0.40 * fx.sample()
        out[i] = max(-32768, min(32767, int(mixed * 32768)))
    return out


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    seconds = float(sys.argv[3]) if len(sys.argv) > 3 else 20.0
    samples = render(load_trace(sys.argv[1]), seconds)
    with wave.open(sys.argv[2], 'wb') as w:
        w.setnchannels(1)
        w.setsampwidth(2)
        w.setframerate(EFFECT_RATE)
        w.writeframes(struct.pack(f'<{len(samples)}h', *samples))
    print(f'wrote {sys.argv[2]}: {len(samples)} samples at {EFFECT_RATE} Hz')


if __name__ == '__main__':
    main()
