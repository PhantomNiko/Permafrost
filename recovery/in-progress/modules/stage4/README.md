# Permafrost 1.1 Stage4 module recovery

The x64 and ARM64 checkpoints build from C and initialized non-executable data:

```sh
python3 tools/library_native.py recovery/in-progress/modules/stage4/x86_64 build/stage4-110/x86_64
```

`tests/stage4_module_110.py` accepts reference and source-built modules. It
compares initialization and 52 command workflows against controlled monitor
services. These cover arithmetic, strings, booleans, nil, error output, stored
variables, if/else, while, program listing, save/load and interface calls.
Assertions require actual stored-variable output and the interface result.

Private value formatting uses an explicit object pointer in C; the native
aggregate argument copies are removed at its three internal callers. The
public module ABI is preserved. Line-boundary returns and interface result
initialization retain the native ordering. ARM64 also retains an explicit two-pointer parser cursor and implements the
reviewed native floor division/modulo jump-table branches in C. IA32, ARM32, full
lifecycle and integration with the kernel remain in progress. These checks
do not establish release-wide VM parity. Pooka's Free Software License applies.
