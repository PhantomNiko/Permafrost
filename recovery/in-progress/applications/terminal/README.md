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

The source terminal opens and executes `2+3`, displaying `5`, in an x86-64
diagnostic with the C kernel and twelve C libraries. That disk retains other
reference programs and drivers and is not a release image.

An initially inactive window could retain TerrorUI's cached inactive record
indefinitely: presenting invalidates that cache, but an idle inactive terminal
can skip presentation. The native terminal also stalls in the delayed-focus
fixture. `refresh_focus.h` refreshes inactive cached records at the start of
the recovered terminal's loop. This intentional correction leaves TerrorUI's
public caching behavior unchanged. Four source regression cases require delayed
activation to execute a command; four additional native comparisons preserve
the already-active terminal's pixels, output, and service calls.
