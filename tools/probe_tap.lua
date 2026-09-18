-- Two facts the capture script depends on:
--   1. is the offset passed to a write tap absolute or range-relative?
--   2. does the game actually get past its power-on self test?
local mach = manager.machine
local sp = mach.devices[":maincpu"].spaces["program"]
_G.KEEP, _G.S = {}, { first = nil, n = 0, lo = 0xffff, hi = 0 }
_G.KEEP.v = sp:install_write_tap(0x4000, 0x4fff, "vram", function(off, data, mask)
    if _G.S.first == nil then _G.S.first = off end
    _G.S.n = _G.S.n + 1
    if off < _G.S.lo then _G.S.lo = off end
    if off > _G.S.hi then _G.S.hi = off end
    return data
end)
local frame = 0
emu.register_frame_done(function()
    frame = frame + 1
    if frame == 60 or frame == 240 or frame == 600 then
        mach.screens[":screen"]:snapshot()
        print(string.format("frame %d: PC=%04X vram writes=%d range=%04X..%04X first=%04X",
            frame, mach.devices[":maincpu"].state["PC"].value, _G.S.n, _G.S.lo, _G.S.hi,
            _G.S.first or 0))
    end
end)
emu.add_machine_stop_notifier(function()
    print(string.format("TOTAL vram writes=%d first_offset=%04X (>=4000 means absolute)",
        _G.S.n, _G.S.first or 0))
end)
