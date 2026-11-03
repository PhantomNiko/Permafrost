# C/C++ migration method

The assembly recovery provides the executable oracle for the current reference.
The default kernel now compiles 365 i386 and 364 IA64 recovered C function bodies, the handwritten
C runtime/compiler support, and the C++ public display entry. Superseded kernel
assembly has been removed. Initial state is a packed, statically checked C
structure; only boot and BIOS/CPU transition code remains in assembly.

The larger translation uses Ghidra to recover structured control flow. Its raw
output is working material, not buildable source or a correctness certificate.
The scripts in `tools/ghidra` seed direct-call targets, recover register arguments,
correct known function signatures, and export inferred stack and global layouts.
Intermediate output stays in the ignored build directory; reviewed C is saved
in `kernel/core/i386` and `kernel/core/IA64`. Native decompiler
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

`kernel/abi-i386.json` and `kernel/abi-IA64.json` record the original register/stack locations of arguments.
`tools/kernel.py` generates short jumps at the original addresses and out-of-line
adapters that marshal register arguments into the C calling convention. The
public memory and display entries use their reviewed implementations. This
retains fixed-address compatibility while allowing the compiled C layout to vary.

The 0.4 migration preserves the filesystem chain reader's ECX/EDX arguments
alongside its nine stack arguments. CPUID and ID-flag probing use reviewed C
with CPU intrinsics. Synthetic unnamed stack references retain their original
frame offsets. The i386 status renderer has a shared variadic call site with
two, three or four strings; its four-string branch needs an argument omitted
by the raw decompiler export. The translation restores that verified argument.
