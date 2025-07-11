# Tcl script to sample PMU counters
set base 0x20000
set evnum 12
proc axiwrite {address value} {
    create_hw_axi_txn -force txn [get_hw_axis hw_axi_1] -address $address -data $value -len 1 -type write
    run_hw_axi -quiet txn
    delete_hw_axi_txn txn
}
proc axiread {address} {
    create_hw_axi_txn -force txn [get_hw_axis hw_axi_1] -address $address -len 1 -type read
    run_hw_axi -quiet txn
    set ret [get_property DATA [get_hw_axi_txn txn]]
    delete_hw_axi_txn txn
    return $ret
}
proc save_sample {filename} {
    set file [open $filename a]
    for {set i 0} {$i < $::evnum} {incr i} {
        set sample [axiread [format %lx [expr $::base + 8 * $i]]]
        if {$i == [expr $::evnum - 1]} {
            puts $file 0x$sample
        } else {
            puts -nonewline $file 0x$sample,
        }
    }
    close $file
}
proc get_control {} {
    set ctrl [axiread [format %lx [expr $::base + 8 * $::evnum]]]
    return 0x$ctrl
}
proc get_comparator {} {
    set comp [axiread [format %lx [expr $::base + 8 * ($::evnum + 1)]]]
    return 0x$comp
}
proc set_control {ena sel pid} {
    set ctrl [format %016lx [expr ($pid << 32) | ($sel << 8) | ($ena << 4)]]
    axiwrite [format %lx [expr $::base + 8 * $::evnum]] $ctrl
}
proc set_comparator {comp} {
    axiwrite [format %lx [expr $::base + 8 * ($::evnum + 1)]] [format %016lx $comp]
}
proc reset_counter {} {
    set ena [format 0x%lx [expr ([get_control] & 0xff)       >> 4]]
    set sel [format 0x%lx [expr ([get_control] & 0xffffffff) >> 8]]
    set pid [format 0x%lx [expr ([get_control])              >> 32]]
    set comp [get_comparator]
    set_control $ena $sel $pid
    set_comparator 0
    set_control $ena $sel $pid
    set_comparator $comp
    set_control $ena $sel $pid
}
proc auto_sample {file} {
    set ena [format 0x%lx [expr ([get_control] & 0xff)       >> 4]]
    set sel [format 0x%lx [expr ([get_control] & 0xffffffff) >> 8]]
    set pid [format 0x%lx [expr ([get_control])              >> 32]]
    set num 0
    while {1} {
        set_control $ena $sel $pid
        set num [expr $num + 1]
        while {!([expr [get_control] & 1])} {after 1}
        puts "Sample $num triggered by comparator of counter $sel"
        save_sample $file
        after 1
    }
}
proc rest_sample {file} {
    set comp [get_comparator]
    set_comparator 0
    save_sample $file
    set_comparator $comp
    reset_counter
}
