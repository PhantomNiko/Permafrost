# SDK runtime recovery

`cpp.cpp` recovers the reference archive's C++ allocation, deletion,
termination, static-initialization guards, and destructor-registration ABI.
It compiles for i386, x64, ARM32, and ARM64 with the recovered SDK headers.
`tests/sdk_cpp_runtime.py` compares 407 allocation, alignment, failure,
delete, guard, and termination cases per architecture against reference
objects linked into diagnostic libraries. Reference objects are test inputs.

The native runtime terminates on ordinary allocation failure; its aligned
nothrow allocation returns null. Aligned pointers retain their original heap
pointer immediately before the returned address. Guard release preserves
other bits, and the native destructor-registration entry returns success
without retaining callbacks. The recovered implementation preserves these
behaviors.

This is a recovery checkpoint. Final SDK integration and VM validation are
required before it replaces the active release runtime.

The architecture directories now recover the guest C runtime from C source.
`crt.c` supplies process startup, argument parsing, constructor and finalizer
ranges, and periodic yields. `compiler.c` and `memory.c` supply freestanding
compiler support; private headers record the recovered C types. The runtime
closure excludes Snowflake's compiler functions. Initialized data is expressed
as C constants and pointer relocations.

`tools/sdk_runtime.py` builds `crt1.o` and `libtayga.a` for each architecture
without reading reference objects or archives. All public C symbols exported
by the reference SDK objects are present. `tests/sdk_c_runtime.py` compares
522 string, memory, and integer-conversion cases per architecture, while
`tests/sdk_crt_startup.py` compares six startup scenarios per architecture,
including constructor ordering, reverse finalization, null slots, and yields.
The startup fixture uses explicit section placement (`-no_data_const`) so the
linker preserves the two constructor ranges consistently.

These checks establish the covered interfaces. Guest file services, the rest
of the C runtime, linked C/C++ programs in VMs, and packaging in the final
macOS SDK remain release gates.

`tools/tayga_cc.py` links ordinary C/C++ source with these startup and runtime
objects from an SDK bundle. The C++ entry uses C linkage. The SDK examples
exercise heap strings, formatted output, vectors, accumulation, and a static
constructor. Both examples cross-compile for all four architectures; the ARM64
VM also runs them and prints their expected results. Other VM architectures
and the remaining runtime services still need validation.

The portable bundle check also rebuilds its ARM64 runtime from the bundled
C/C++ sources outside the repository, then links both examples for every CPU.
Archive member timestamps, user IDs, and group IDs are normalized to zero.
Generated sample executables are checked for embedded host paths.
