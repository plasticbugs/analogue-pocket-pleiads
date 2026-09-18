-- Print every ioport field so the capture script can drive the game by name.
local mach = manager.machine
for pname, port in pairs(mach.ioport.ports) do
    print("PORT " .. pname)
    for fname, f in pairs(port.fields) do
        print(string.format("   %-24s mask=%02X type=%s", fname, f.mask, tostring(f.type)))
    end
end
emu.add_machine_stop_notifier(function() end)
