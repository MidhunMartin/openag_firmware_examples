openag\_firmware\_examples
==========================

This repository contains a set of example firmware modules for demonstration
purposes.

Each firmware module is a GitHub repository that has:

* A `module.json` manifest used to configure Arduino code gen.
* A C++ class that inherits from the base class defined in
  `openag_firmware_module <https://github.com/OpenAgInitiative/openag_firmware_module>`_.


Setup
-----

To get these running, first install `openag_python
<https://github.com/OpenAgInitiative/openag_python.git>`_ on your machine. This
can be done using pip::

    pip install openag

Then you can clone this repository and start looking around. Note that if you
are running these outside of the `openag_brain <https://github.com/OpenAgInitiative/openag_brain>`_ ROS environment, you will also
need to `install the platform.io CLI <http://platformio.org/get-started/cli>`_.


More Examples
-------------

For more examples, you can take a look at the Firmware modules used in the OpenAg Food Computer.

* `openag_atlas_orp <https://github.com/OpenAgInitiative/openag_atlas_orp>`_
* `openag_atlas_ph <https://github.com/OpenAgInitiative/openag_atlas_ph>`_
* `openag_atlas_ec <https://github.com/OpenAgInitiative/openag_atlas_ec>`_
* `openag_atlas_do <https://github.com/OpenAgInitiative/openag_atlas_do>`_
* `openag_ds18b20 <https://github.com/OpenAgInitiative/openag_ds18b20>`_
* `openag_gc0012 <https://github.com/OpenAgInitiative/openag_gc0012>`_
* `openag_dht22 <https://github.com/OpenAgInitiative/openag_dht22>`_
* `openag_mhz16 <https://github.com/OpenAgInitiative/openag_mhz16>`_
* `openag_atlas_rgb <https://github.com/OpenAgInitiative/openag_atlas_rgb>`_
* `openag_am2315 <https://github.com/OpenAgInitiative/openag_am2315>`_
* `openag_binary_actuator <https://github.com/OpenAgInitiative/openag_binary_actuator>`_
* `openag_pwm_actuator <https://github.com/OpenAgInitiative/openag_pwm_actuator>`_
