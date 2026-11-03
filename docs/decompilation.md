# C/C++ migration method

The assembly recovery is the executable baseline. The initial C memory/string
runtime and C++ public display entry are integrated into the normal image build.

The larger translation uses Ghidra to recover structured control flow. Its raw
output is working material, not buildable source or a correctness certificate.
The scripts in `tools/ghidra` seed direct-call targets, recover register arguments,
correct known function signatures, and export inferred stack and global layouts.
Intermediate output stays in the ignored build directory. Native decompiler
binaries, Java runtimes, projects, logs and host preferences are not distributed.

The translation preserves aliases between fields sharing the original stack
frame and uses explicit fixed-address views of the original data region. It
separates byte-addressed labels from larger overlapping reads. Variadic wrappers,
64-bit arithmetic and numeric literal parsing need manual implementations when
decompiler output loses calling-convention or register-alias information.

The promotion checks are: compilation, original-vs-rewrite routine tests,
startup and shell execution, script/collection/filesystem/native-program/WSBC
conformance, and a boot under a complete BIOS/hardware emulator. Incomplete
translations remain experimental until these checks pass. The normal build must
continue to work without Ghidra or the reference image.
