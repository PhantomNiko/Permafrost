# C/C++ migration method

The in-house WinterLua 0.2 application is recovered in
`applications/lua/runtime.c`, `functions.h` and `state.c`: 1,004 function bodies,
with demangled signatures beside the recovered C implementations.
`tools/application.py lua` builds its Mach-O executable without a reference
binary or an external Lua checkout. The application profile records the source
layout and reconstruction details. No original executable instruction region
is copied into the resulting program.

The C++ exception machinery uses C setjmp/longjmp checkpoints recovered from
the original exception contexts. Ghidra-only control-flow patches expose
exception landing pads and one-entry cleanup tables; those patches are analysis
inputs, never shipped instructions. Integer compiler helpers use the common
freestanding implementation, fixing recursive variable-shift helpers in the
reference. `tests/lua.py` checks arithmetic, assertions, tables, loops, and the
reference's closure/dofile limitations through the native loader.

The assembly recovery provides the executable oracle for the current reference.
The default kernel now compiles 721 recovered C function bodies, the handwritten
C runtime/compiler support, and the C++ public display entry. Superseded kernel
assembly has been removed. Initial state is a packed, statically checked C
structure; only boot and BIOS/CPU transition code remains in assembly.

The larger translation uses Ghidra to recover structured control flow. Its raw
output is working material, not buildable source or a correctness certificate.
The scripts in `tools/ghidra` seed direct-call targets, recover register arguments,
correct known function signatures, and export inferred stack and global layouts.
Intermediate output stays in the ignored build directory; reviewed C is saved
in `kernel/recovered.c`, with declarations in `kernel/functions.h`.
Known public services use semantic names recorded in `recovery/symbols.json`.
`tools/ghidra/merge.py` consolidates analysis units and isolates their temporary
macros so generated working files do not become the source layout. Native decompiler
binaries, Java runtimes, projects, logs and host preferences are not distributed.

The translation preserves aliases between named objects sharing the original
stack frame. Distinct decompiler temporaries that reuse a spill slot remain
independent C values. Fixed-address views preserve the original data region.
The translation separates byte-addressed labels from larger overlapping reads. Variadic wrappers,
64-bit arithmetic and numeric literal parsing need manual implementations when
decompiler output loses calling-convention or register-alias information.

The promotion checks are: compilation, original-vs-rewrite routine tests,
startup and shell execution, script/collection/filesystem/native-program/WSBC
conformance, and a boot under a complete BIOS/hardware emulator. Incomplete
translations remain experimental until these checks pass. The bundled release self-test is the primary oracle for the expanded runtime.
Current validation results are recorded in README.md. Normal builds require neither Ghidra nor the reference image.

`kernel/abi.json` records the original register/stack locations of arguments.
`tools/kernel.py` generates short jumps at the original addresses and out-of-line
adapters that marshal register arguments into the C calling convention. The
public memory and display entries use their reviewed implementations. This
retains fixed-address compatibility while allowing the compiled C layout to vary.

The migration preserves the filesystem chain reader's ECX/EDX arguments
alongside its nine stack arguments. CPUID and ID-flag probing use reviewed C
with CPU intrinsics. Synthetic unnamed stack references retain their original
frame offsets. The i386 status renderer has a shared variadic call site with
two, three or four strings; its four-string branch needs an argument omitted
by the raw decompiler export. The translation restores that verified argument.

The 0.6 BIOS recovery preserves the chain reader's two register arguments
alongside nine stack arguments. The source-built core is LZ4-compressed for
BIOS staging below VGA memory and decoded by a small C bootstrap routine.
Directory output restores the size argument omitted by Ghidra at a shared
file/directory format call. Its independent disk-record comparison passes
under Bochs, including empty and multi-cluster files. Full runtime and in-house
application validation remain in progress.
