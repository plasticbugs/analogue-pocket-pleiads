-- Log every DSW0 read with the emulated time it happened at, so the vblank
-- bit's polarity and window can be read straight off the transitions instead
-- of derived from a cycle count.
local mach = manager.machine
local sp   = mach.devices[":maincpu"].spaces["program"]
_G.KEEP = {}
_G.L = {}
_G.KEEP.r = sp:install_read_tap(0x7800, 0x7bff, "dsw", function(off, data, mask)
    if #_G.L < 4000 then _G.L[#_G.L + 1] = { mach.time:as_double(), data & 0xff } end
    return data
end)
local frames = 0
emu.register_frame_done(function()
    frames = frames + 1
    if frames ~= 20 then return end
    -- Pixel clock 5.5 MHz, 352 clocks a line, 256 lines a frame.
    local prev = nil
    local shown = 0
    print("transitions of DSW0 bit 7, with the raster line they happen on:")
    for i = 1, #_G.L do
        local t, d = _G.L[i][1], _G.L[i][2]
        local b = (d & 0x80) ~= 0
        if prev ~= nil and b ~= prev and shown < 14 then
            local px = t * 5500000.0
            local line = math.floor(px / 352) % 256
            print(string.format("  t=%.7f  line=%3d  bit7 -> %s  (DSW0=%02X)",
                t, line, b and "1" or "0", d))
            shown = shown + 1
        end
        prev = b
    end
    print(string.format("total DSW0 reads logged: %d", #_G.L))
end)
