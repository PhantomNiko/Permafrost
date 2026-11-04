# Permafrost 0.7 SDK for macOS 15

Build the SDK alongside the images or independently with
`python3 tools/sdk.py`. It requires Python 3 and Apple Command Line Tools and
can be moved without installation at a fixed path.

```sh
build/Permafrost0.7.sdk/bin/pf-cc sdk/examples/hello.c -o build/hello
build/Permafrost0.7.sdk/bin/pf-cc sdk/examples/nightmode.cpp -o build/nightmode
build/Permafrost0.7.sdk/bin/pf-wmfs build/Permafrost-0.7.img --partition 2 \
  --put hello=build/hello --out build/development.img
```

The default output is i386 Mach-O MH_PRELOAD. Use `--arch x86_64` for the
64-bit SysV ABI or `--arch universal` to package both CPU variants. The same
architecture options work with `--format flat`. Enter a native program's
filename at the OS prompt to run it. `main` uses cdecl on i386 and SysV on x86-64. The preferred address is 0x200000; programs share the kernel address
space and should return without corrupting it.

Use `--runtime` to link the supplied freestanding 64-bit arithmetic and memory
helpers. Their C sources are included in `usr/src`; omit the option when the
application supplies its own helpers.

```sh
build/Permafrost0.7.sdk/bin/pf-cc --runtime sdk/examples/wide-arithmetic.c -o build/wide-arithmetic
```

For raw code and callback modules, explicitly request flat output and select
the address used by the loading script:

```sh
build/Permafrost0.7.sdk/bin/pf-cc --format flat --base 0x240000 \
  sdk/examples/native-module.c -o build/native-module.bin
```

WMAP version 4 occupies 124 bytes at 0x6800. `permafrost.h` describes its existing
console, keyboard, graphics, file, callback and allocation entries, plus image
and font service slots. Status services return a byte in AL; the header uses
`pf_status` to preserve that ABI. Native callback values use native pointer fields: 24 bytes on i386 and
40 bytes on LP64 x86-64.
`pf_wire_api()` exposes the 124-byte record. On x86-64, `pf_api()` decodes
its service addresses into native function pointers before calls. Data records
remain fixed-width for file/image services: blobs are 12 bytes. Callback
values follow the native pointer layout described above.

The local integer/string log formatter uses WMAP rather than a private kernel
address, supporting both firmware variants. Unsupported format conversions
should be formatted by the application itself.

This is a freestanding SDK. It supplies basic types, native interfaces, examples,
small ELF32/ELF64 linkers, a Mach-O writer, and WBPT/WMFS/FAT32 image tools. It does
not supply a hosted C/C++ standard library, exceptions, RTTI, dynamic linking
or an Apple platform integration. In-house runtime implementation files are
application source, not an upstream Lua SDK dependency. See the bundle's license-scope document for component notices.

`PF_KERNEL_BASE` defaults to the BIOS i386 address or the x86-64 address.
The IA32 EFI kernel loads at 0x02000000; define `PF_KERNEL_BASE` explicitly
when inspecting its private image. Public services use WMAP at 0x6800 on
all variants and do not require a kernel base. `pf-wmfs` also edits the nested
WBPT volumes inside the GPT UEFI image while preserving its EFI partition.
