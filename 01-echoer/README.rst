echoer
======

This folder defines a module that constantly outputs a single float value. It
gets its initial value from an argument and the value can be changes by writing
to its input. To try it out, run::

    openag firmware run_module -p csv -t upload <inital_val>
    platformio serialports monitor

Replace `<initial_val>` with some initial float value for the module to output.
You can send a message to the input by typing `module,val,<val>` into the
prompt, replacing `<val>` with a valid float
