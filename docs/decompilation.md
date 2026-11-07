# C/C++ recovery method

Reference universal executables are inspected with `tools/native.py`;
`tools/pe.py` inspects the EFI format. Ghidra export scripts in `tools/ghidra`
produce working notes, types, stack-storage records, and globals. Those exports
require review before they become compilable source.

Recovery restores actual register arguments, scalar return conventions,
variadic functions, floating-point bit views, escaping stack objects, and
C++ SJLJ checkpoints. Two-double geometry results retain their XMM0/XMM1
return ABI. The recovered signed-literal parser is expressed directly in C
to avoid an incorrect array alias in the raw decompilation.

The checked-in C implementations and data arrays are the canonical build
inputs. Recovery tooling does not certify equivalence. Emulator boots,
language fixtures, public service probes, reference comparisons, and SDK
compilation validate the behavior exercised by those checks.

Older source layouts, OpenBIOS integration, and assembly build targets remain
in Git history and are not active build paths.

The 0.9 reference introduces ARM32 and ARM64. ARM64 machine-outliner helpers
share instructions, registers, and stack slots with their callers. Ordinary
function prototypes lose that context. `tools/ghidra/expand_arm64.py` expands
the shared sequences in an analysis snapshot, including tail calls and
PC-relative references. The snapshot is never a release build input.
`tests/arm64_outline.py` compares the expanded and original execution of
integer parsing, tokenization, and Darwin stack-vararg formatting.

Library analysis snapshots must be relocated away from fixed OS service
addresses before decompilation. Source library data must then refer to its
compiled state array; retaining an analysis address produces an invalid
pointer after loading. `tests/png_library.py` compares decoded pixels,
all five PNG filters, stored and compressed streams, and malformed inputs
between a reference and source-built x86-64 library.

Darwin ARM64 variadic arguments occupy caller stack slots. `Varargs.java`
recovers constant format strings, including alternatives selected by branches,
and assigns each call an analysis signature with the required stack words.
The emitted aliases resolve to ordinary C variadic implementations. Native
formatting comparisons also exercise these call sites across size boundaries.
Dynamic formats remain explicit review items.

`Export.java` accepts optional timeout, inference-pass count, `units-only`,
and maximum-payload-MiB arguments after its normal five arguments. Large
WinterScript functions require a larger response limit than Ghidra's default.
These limits affect analysis only; release builds consume checked-in C/C++.

Decompiler field metadata preserves floating register lanes separately from
integer lanes. A synthetic byte-array field may carry a double value even
though its containing array has no floating declaration. The exporter records
that view per occurrence, and C translation keeps reads and writes in their
IEEE representation. `tests/translation_float_fields.py` executes mixed
floating and integer lanes to guard against numeric truncation.
