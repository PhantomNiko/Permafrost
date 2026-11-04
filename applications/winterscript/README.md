# WinterScript 0.4 source recovery

1434 native functions are reconstructed in `runtime.c`, with shared
freestanding support in `kernel`. `functions.h` retains semantic names and
`abi.json` records the original incoming argument locations. `state.c` holds
initialized data and constants; original VM instruction bytes are excluded.

Build independently with `python3 tools/application.py winterscript`.
The recovery profile and signature overrides are in `recovery/applications`.
Pooka's Free Software License applies; see the repository license and notices.
