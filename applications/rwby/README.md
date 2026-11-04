# WinterRwby 0.1 source recovery

873 native functions are reconstructed in `runtime.c`, with shared
freestanding support in `kernel`. `functions.h` retains semantic names and
`abi.json` records the original incoming argument locations. `state.c` holds
initialized data and constants; original VM instruction bytes are excluded.

Build independently with `python3 tools/application.py rwby`.
The recovery profile and signature overrides are in `recovery/applications`.
Pooka's Free Software License applies; see the repository license and notices.
