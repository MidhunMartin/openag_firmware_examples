Single Output
=============

This folder defines a module with a single output, `output`, which constantly
outputs a static float value. It can be compiled and run as follows::

    openag firmware run_module -p csv -t upload

Note: be sure to plug an Arduino via USB before running this command, or you will see an error.

The `-p csv` flag enables a CSV plugin for the project which outputs the data
from the module output over the Arduino's Serial port in CSV format. You can
watch this output by running::

    platformio serialports monitor
