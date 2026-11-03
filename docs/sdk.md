# Permafrost 0.4 SDK for macOS 15

Build with `python3 tools/sdk.py`. The relocatable bundle requires Python 3 and
Clang/Clang++ from Apple Command Line Tools. It contains freestanding headers,
examples, an ELF32 linker and WBPT/WMFS32/WMFS64 image tools.

```sh
build/Permafrost0.4.sdk/bin/pf-cc sdk/examples/hello.c -o build/hello.bin
build/Permafrost0.4.sdk/bin/pf-cc sdk/examples/nightmode.cpp -o build/nightmode.bin
build/Permafrost0.4.sdk/bin/pf-cc sdk/examples/hello.c --variant IA64 -o build/hello-IA64.bin
build/Permafrost0.4.sdk/bin/pf-wmfs build/Permafrost-0.4-i386.img --partition 2 \
  --put hello.bin=build/hello.bin --out build/development.img
```

Use binaries compiled for the image's variant. Both variants run flat i386
applications. IA64 selects WMAP at 0x6400; i386 selects 0x6200. Native `main`
uses cdecl and returns an integer in EAX. The default link/load address is
0x200000; use `--base` and the same `runcode` address to change it.

```text
serial(runcode("/hello.bin", $200000))
```

The example returns 42. Multiple C/C++/ELF32 inputs are supported. The bundle
has no hosted libc, C++ standard library, constructors, exceptions, RTTI,
dynamic linking or Apple/Xcode platform integration. Unsupported relocations
and unresolved symbols are errors.

`permafrost.h` declares the 76-byte WMAP version-2 service table, including
console, keyboard, theme, video, file and native callback operations. File-read
buffers are borrowed; do not free or retain them across filesystem mutations.
Formatted logging is a release-specific entry outside WMAP. Preserve cdecl
stack/callee-saved registers; all code shares kernel privileges and memory.

## Native WinterScript functions

Compile `Examples/native-module.c` at 0x240000 and install it in the user volume:

```sh
build/Permafrost0.4.sdk/bin/pf-cc sdk/examples/native-module.c \
  --base 0x240000 -o build/native-module.bin
```

Load it with `runcode("/native-module.bin", $240000)`, then call
`nativeExample["add"](17,25)`. `pf_register_native` accepts a dotted registration
name and a cdecl callback. Callbacks receive an array of 24-byte native values,
argument count, output value, error text buffer and its capacity. Return 1 on
success; return 0 with an error message on failure. Tags cover not, integers,
numbers, text, byte buffers, booleans and pointers. Returned text/bytes must
remain valid until the kernel copies them after the callback.

Keep the module resident while its functions remain registered. Loading another
program over its code invalidates those callback pointers. WinterScript uses
bracket lookup for the example's namespaced function.

## Graphics and Lua

`pf_graphics_enter` and `pf_graphics_leave` use the native video services.
WinterScript supplies `graphicsProbe`, `graphicsInfo`, `graphicsResize`,
`graphicsColorDepth`, `graphicsFill`, `graphicsPixel`, `graphicsLine` and
`graphicsWait`; the included `.ws` examples demonstrate them.

Each image includes Lua linked from the external source in DEPENDENCIES.md.
Install `.lua` files using partition 2. Run `runcode("/lua.bin", $230000)`, then
`dofile("hello.lua")`. It autoruns `index.lua`, loads modules with
`?.lua;?/init.lua`, and returns 1 on `exit` or Escape.

`pf-wmfs --partition 0`, `1` or `2` selects a WBPT volume. Rebuilding preserves
the other volumes and their geometry; use `--sectors` to enlarge an output copy.
Allocation and directory chains are checked on readback. The SDK can be moved,
including to a directory with spaces. Its linker emits allocated sections and
handles R_386_32/R_386_PC32. Host filenames and compiler metadata are excluded
from native binaries.
