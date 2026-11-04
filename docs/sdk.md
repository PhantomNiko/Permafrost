# Permafrost 0.6 SDK for macOS 15

Build the SDK alongside the images or independently with
`python3 tools/sdk.py`. It requires Python 3 and Apple Command Line Tools and
can be moved without installation at a fixed path.

```sh
build/Permafrost0.6.sdk/bin/pf-cc sdk/examples/hello.c -o build/hello
build/Permafrost0.6.sdk/bin/pf-cc sdk/examples/nightmode.cpp -o build/nightmode
build/Permafrost0.6.sdk/bin/pf-wmfs build/Permafrost-0.6.img --partition 2 \
  --put hello=build/hello --out build/development.img
```

The default output is 32-bit i386 Mach-O MH_PRELOAD, matching the current
reference's segment/thread-state loading interface. Enter a native program's
filename at the OS prompt to run it. `main` uses cdecl and returns an integer
in EAX. The preferred address is 0x200000; programs share the kernel address
space and should return without corrupting it.

Use `--runtime` to link the supplied freestanding 64-bit arithmetic and memory
helpers. Their C sources are included in `usr/src`; omit the option when the
application supplies its own helpers.

```sh
build/Permafrost0.6.sdk/bin/pf-cc --runtime sdk/examples/wide-arithmetic.c -o build/wide-arithmetic
```

For raw code and callback modules, explicitly request flat output and select
the address used by the loading script:

```sh
build/Permafrost0.6.sdk/bin/pf-cc --format flat --base 0x240000 \
  sdk/examples/native-module.c -o build/native-module.bin
```

WMAP version 4 occupies 124 bytes at 0x6200. `permafrost.h` describes its existing
console, keyboard, graphics, file, callback and allocation entries, plus image
and font service slots. Status services return a byte in AL; the header uses
`pf_status` to preserve that ABI. Native callback values retain their 24-byte layout.
The local integer/string log formatter uses WMAP rather than a private kernel
address, supporting both firmware variants. Unsupported format conversions
should be formatted by the application itself.

This is a freestanding SDK. It supplies basic types, native interfaces, examples,
a small ELF32 linker, a Mach-O writer, and WBPT/WMFS/FAT32 image tools. It does
not supply a hosted C/C++ standard library, exceptions, RTTI, dynamic linking
or an Apple platform integration. In-house runtime implementation files are
application source, not an upstream Lua SDK dependency. Third-party firmware
retains its own license; see the bundle's license-scope document.
