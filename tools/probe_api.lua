-- One-off probe: find out how this MAME build exposes the palette, the
-- screen and the write taps for the Phoenix video registers. Printing the
-- API beats guessing at it.
local mach = manager.machine

local function keys(t, label)
    print("--- " .. label .. " ---")
    local ok, err = pcall(function()
        local n = 0
        for k, v in pairs(t) do
            print(string.format("  %-28s %s", tostring(k), type(v)))
            n = n + 1
            if n > 60 then print("  ...") break end
        end
    end)
    if not ok then print("  (not iterable: " .. tostring(err) .. ")") end
end

print("=== MAME " .. emu.app_version() .. " ===")

keys(mach.devices, "machine.devices")

local pal = mach.devices[":palette"]
print("palette device: " .. tostring(pal))
if pal then
    keys(pal, "palette device fields")
    for _, name in ipairs({"palette", "entries", "pen", "pens"}) do
        local ok, v = pcall(function() return pal[name] end)
        print(string.format("  pal.%-10s -> %s %s", name, ok and type(v) or "ERR", tostring(v)))
    end
    local ok, p = pcall(function() return pal.palette end)
    if ok and p then
        keys(p, "pal.palette fields")
        local ok2, c = pcall(function() return p:pen_color(0) end)
        print("  pen_color(0) -> " .. tostring(ok2) .. " " .. tostring(c))
        local ok3, e = pcall(function() return p.entries end)
        print("  entries -> " .. tostring(ok3) .. " " .. tostring(e))
    end
end

keys(mach.screens, "machine.screens")
keys(mach.memory.regions, "machine.memory.regions")
keys(mach.memory.shares, "machine.memory.shares")

-- Does a write tap see writes that go to an installed handler?
local sp = mach.devices[":maincpu"].spaces["program"]
_G.KEEP = {}
_G.SAW = { vreg = 0, scroll = 0, nvreg = 0, nscroll = 0 }
_G.KEEP.vreg = sp:install_write_tap(0x5000, 0x53ff, "vreg", function(off, data, mask)
    _G.SAW.vreg = data & 0xff; _G.SAW.nvreg = _G.SAW.nvreg + 1; return data
end)
_G.KEEP.scroll = sp:install_write_tap(0x5800, 0x5bff, "scroll", function(off, data, mask)
    _G.SAW.scroll = data & 0xff; _G.SAW.nscroll = _G.SAW.nscroll + 1; return data
end)

emu.add_machine_stop_notifier(function()
    print(string.format("TAPS: videoreg writes=%d last=%02X | scroll writes=%d last=%02X",
        _G.SAW.nvreg, _G.SAW.vreg, _G.SAW.nscroll, _G.SAW.scroll))
end)
