Calibration
===========

This module is an example of how to write a module that requires regular
calibration. It is similar to the previous 2 examples in that it outputs a
static value, but the value is stored in the EEPROM and can only be changed by
reflashing the Arduino in calibration mode and writing to the calibration
input. You can run the module in normal mode as follows::

    openag firmware run_module -p csv -t upload
    pio serialports monitor

In this mode, the Ardunio will continuously output the value from the first
cell in its EEPROM on its `val` output. You can run the module in calibration
mode as follows::

    openag firmware run_module -p csv -t upload -c calibration
    pio serialports monitor

In this mode, the Arduino will continuously print a debug message telling you
that it is in calibration mode. You can write to the input `module,val,<val>`
into the prompt, replacing `<val>` with a valid float. This will write the val
to the first cell in the Arduino's EEPROM. You can reflash the Arduino in
normal mode and watch the output to see if it worked.
