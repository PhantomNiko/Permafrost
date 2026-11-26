# Permafrost 1.1 Stage4 module recovery

The checkpoints for all four CPUs build from C and initialized non-executable data:

```sh
python3 tools/library_native.py recovery/in-progress/modules/stage4/x86_64 build/stage4-110/x86_64
```

`tests/stage4_module_110.py` accepts reference and source-built modules. It
compares initialization and 68 command workflows against controlled monitor
services. These cover arithmetic, strings, booleans, nil, error output, stored
variables, if/else, while, program listing, save/load and interface calls.
Assertions require actual stored-variable output and the interface result.

Private value formatting uses an explicit object pointer in C; the native
aggregate argument copies are removed at its three internal callers. The
public module ABI is preserved. Line-boundary returns and interface result
initialization retain the native ordering. ARM64 also retains an explicit two-pointer parser cursor and implements the
reviewed native floor division/modulo jump-table branches in C. Full
lifecycle and integration with the kernel remain in progress. These checks
do not establish release-wide VM parity. Pooka's Free Software License applies.

The IA32 checkpoint also matches initialization and 68 monitor command workflows.
Its private aggregate printer uses an object pointer, and its arithmetic helpers
use explicit 64-bit C contracts with freestanding division and shift support.
`tests/stage4_module_i386_110.py` compares the two IA32 module files.

The ARM32 checkpoint also matches all 68 command workflows. Read-only literal
pools retain constants; reviewed PC-relative address calculations resolve to
source data. The host-call analysis limits pool reads to the supplied text range.
`tests/stage4_module_armv7_110.py` checks the ARM32 module pair.

The extended monitor matrix also covers signed floor division and modulo,
larger integer values, monitor views, command repeat and missing input files.
