-- Count writes to each video/sound register over a long run with play input,
-- and record the distinct values. Cross-checks whether install_write_tap
-- actually sees accesses that land on an installed write handler.
local mach = manager.machine
local sp = mach.devices[":maincpu"].spaces["program"]
_G.KEEP = {}
_G.C = {}
local function watch(name, lo, hi)
    _G.C[name] = { n = 0, vals = {} }
    _G.KEEP[name] = sp:install_write_tap(lo, hi, name, function(off, data, mask)
        local c = _G.C[name]
        c.n = c.n + 1
        c.vals[data & 0xff] = (c.vals[data & 0xff] or 0) + 1
        return data
    end)
end
watch("vreg", 0x5000, 0x53ff)
watch("scroll", 0x5800, 0x5bff)
watch("snda", 0x6000, 0x63ff)
watch("sndb", 0x6800, 0x6bff)

local ports = mach.ioport.ports
local function f(p, n) local q = ports[p]; return q and q.fields[n] end
local coin, st1 = f(":IN0", "Coin 1"), f(":IN0", "1 Player Start")
local fire, left, right = f(":CTRL", "P1 Button 1"), f(":CTRL", "P1 Left"), f(":CTRL", "P1 Right")
local function hold(x, on) if x then x:set_value(on and 1 or 0) end end
local frame = 0
local report
emu.register_frame_done(function()
    frame = frame + 1
    hold(coin, frame >= 100 and frame < 108)
    hold(st1, frame >= 130 and frame < 138)
    if frame > 200 then
        local p = frame % 240
        hold(left, p < 90); hold(right, p >= 120 and p < 210); hold(fire, (frame % 8) < 4)
    end
    if frame == 300 or frame == 1200 or frame == 2400 then report() end
end)
report = function()
    print("frames run: " .. frame)
    for name, c in pairs(_G.C) do
        local vs, n = {}, 0
        for v, k in pairs(c.vals) do n = n + 1; vs[#vs+1] = string.format("%02X(%d)", v, k) end
        table.sort(vs)
        print(string.format("%-7s writes=%-7d distinct=%-4d %s", name, c.n, n,
            table.concat(vs, " ", 1, math.min(#vs, 16))))
    end
end
