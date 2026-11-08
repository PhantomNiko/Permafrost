# Terminal recovery checkpoint

Pooka's Free Software License applies to this recovered application source.

The Cancer terminal builds from C for i386, x86-64, ARM32 and ARM64 with
the source TerrorUI library. For example:

```sh
python3 tools/application_native.py recovery/in-progress/applications/terminal/x86_64 build/terminal --library /lib/TerrorUI.dylib=build/lib-100/TerrorUI/x86_64/TerrorUI
```

Reference executables are not build inputs. Initialized data, compiler helper
contracts, and imported services are recovered explicitly. The i386 command
parser uses C switches for three fixed-address jump tables and a C function
pointer for its command worker. ARM64's indirect memory-clear import resolves
to the source implementation. Packed coordinates preserve signed constants;
resize comparisons extract the two original vector sign bits.

`tests/terminal_application.py` compares native and source applications through
the same C TerrorUI library and controlled kernel services. It checks complete
frame bytes and service calls, keyboard input, deferred command-worker output,
worker-creation failure, partial-alpha glyphs, and window size changes. The
command fixture asserts that execution actually occurred, while the failure
fixture asserts that worker creation was attempted without executing a command.
All four architectures pass empty-input, command-output, failed-worker, and
larger-window comparisons: sixteen native/source cases in total.

This checkpoint does not establish complete terminal or VM parity. File commands,
clipboard interaction, pointer selection, persistence, and integration with the
real kernel command interpreter still need broader comparisons. It does not
advance the canonical release target or replace the full-image validation gate.
