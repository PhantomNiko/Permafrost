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
