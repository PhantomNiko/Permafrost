# Permafrost 0.3 SDK for macOS 15

Build the relocatable bundle with `python3 tools/sdk.py`. Python 3 and host
Clang/Clang++ from Apple Command Line Tools are required. The bundle supplies
headers, examples, a small ELF32 linker and partition-aware filesystem tools.
It is a freestanding cross-development bundle, without Apple/Xcode platform
integration, a hosted libc or the C++ standard library.

```sh
build/Permafrost0.3.sdk/bin/pf-cc sdk/examples/hello.c -o build/hello.bin
build/Permafrost0.3.sdk/bin/pf-cc sdk/examples/nightmode.cpp -o build/nightmode-cpp.bin
build/Permafrost0.3.sdk/bin/pf-wmfs build/Permafrost-0.3.img --partition 2 \
  --put hello.bin=build/hello.bin \
  --put nightmode-cpp.bin=build/nightmode-cpp.bin \
  --out build/development.img
```

After the normal automount setup, the shell targets the WMFS64 user volume:

```text
serial(runcode("/hello.bin", $200000))
serial(runcode("/nightmode-cpp.bin", $200000))
```

The C example returns 42; the C++ example returns 1. Native programs are flat
i386 machine code. `pf-cc` defaults to 0x200000; use `--base` and the matching
runcode address for a different location. Its entry shim calls the C-linkage
`main`, then returns its EAX value to WinterScript. Multiple C/C++/ELF32 object
inputs are supported. Constructors, exceptions, RTTI and dynamic libraries
are not supplied. Unsupported relocations and unresolved symbols are errors.

`permafrost.h` declares the WMAP version-1 service table, including console,
keyboard, theme and file operations. File-read buffers are borrowed from the
kernel; do not free or retain them across filesystem mutations. Native code
shares kernel privileges and must preserve i386 cdecl registers and stack.
Formatted logging is version-specific; the remaining public wrappers use WMAP.

The image includes a Lua interpreter compiled from the external source listed
in DEPENDENCIES.md. Install `.lua` files with `pf-wmfs --partition 2`. Run
`runcode("/lua.bin", $230000)`, then `dofile("hello.lua")` in its prompt. It
loads `index.lua` automatically, supports `require` with `?.lua;?/init.lua`,
and returns to WinterScript on `exit` or Escape. The native return value is 1,
matching the supplied application's convention.

`pf-wmfs` extracts any WBPT volume with `--partition 0`, `1` or `2`. Rebuilding
one volume retains the others. Use `--sectors` when an output copy needs more
space. WMFS64 allocation and directory chains are checked on readback.

The SDK can be moved, including to a directory containing spaces. Its linker
emits allocated sections only and handles R_386_32/R_386_PC32 relocations.
Compiler metadata and build-machine filenames are excluded from native binaries.
