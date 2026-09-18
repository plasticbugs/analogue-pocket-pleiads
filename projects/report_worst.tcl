# Name the registers on the worst setup paths, which the summary does not.
project_open pleiads_pocket
create_timing_netlist
read_sdc
update_timing_netlist
puts "=========== WORST SETUP PATHS ==========="
foreach_in_collection path [get_timing_paths -setup -npaths 12 -detail summary] {
    set slack [get_path_info $path -slack]
    set from  [get_node_info [get_path_info $path -from] -name]
    set to    [get_node_info [get_path_info $path -to]   -name]
    puts [format "%9.3f  %s\n           -> %s" $slack $from $to]
}
project_close
