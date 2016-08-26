Status
======

This module shows how status messages work. Modules must define a
`status_level` attribute and a `status_message` attribute. The status level can
either be `OK`, `WARN`, or `ERROR`. This provides a basic machine-readable
representation of how the module is doing. The status message is a
human-readable string that should be useful for debugging. The module can be
run as::

    openag firmware run_module -p csv -t upload --status_update_interval 1
    platformio serialports monitor

The `--status_update_interval` flag is used to adjust the frequency with which
status messages are published. We publish them more frequently for this example
just to help get the point across. By default, status messages are published
once every 5 seconds
