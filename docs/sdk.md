# Permafrost 0.8 SDK for macOS 15

Build the SDK alongside the images or independently with
`python3 tools/sdk.py`. It requires Python 3 and Apple Command Line Tools and
can be moved without installation at a fixed path.

```sh
build/Permafrost0.8.sdk/bin/pf-cc sdk/examples/hello.c -o build/hello
build/Permafrost0.8.sdk/bin/pf-cc sdk/examples/nightmode.cpp -o build/nightmode
build/Permafrost0.8.sdk/bin/pf-wmfs build/Permafrost-0.8.img --partition 2 \
  --put hello=build/hello --out build/development.img
```

The default output is i386 Mach-O MH_PRELOAD. Select `--arch x86_64`,
`--arch armv7` (ARM32), `--arch arm64`, or `--arch universal` for all four
CPU slices. These choices also work with `--format flat`. Enter a native
program's filename at the OS prompt to run it. The x86 entry uses cdecl on
i386 and SysV on x86-64; ARM code uses the Darwin conventions selected by
the bundled compiler driver. C++ entry points use `extern "C" int main(void)`.

The default load address is 0x200000 on x86 and 0x42000000 on ARM. Programs
share the kernel address space and should return without corrupting it.

Use `--runtime` to link the supplied freestanding 64-bit arithmetic and memory
helpers. Their C sources are included in `usr/src`; omit the option when the
application supplies its own helpers.

```sh
build/Permafrost0.8.sdk/bin/pf-cc --runtime sdk/examples/wide-arithmetic.c -o build/wide-arithmetic
```

For raw code and callback modules, explicitly request flat output and select
the address used by the loading script:

```sh
build/Permafrost0.8.sdk/bin/pf-cc --format flat --base 0x240000 \
  sdk/examples/native-module.c -o build/native-module.bin
```

WMAP version 11 occupies 188 bytes at 0x6800 on x86 and 0x40010800 on ARM.
`pf_wire_api()` exposes its 44 service addresses as 32-bit integers.
`pf_api()` decodes them into native function pointers on every architecture.
Check the table's magic, version, and size before using its services.
`pf_status` preserves the native byte-sized C++ boolean return convention.

The header describes console, keyboard, graphics, files, callbacks, allocation,
PNG, WAV audio, fonts, framebuffer, pointer, directory, launch, thread, and
window entries. File blobs occupy 12 bytes, PNG images 24 bytes, and WAV
records 28 bytes. Use `pf_blob_data()`, `pf_image_data()`, and `pf_audio_data()`
to obtain native pointers from their address fields. PNG addresses have
separate low and high words. Callback values contain native pointers:
24 bytes on 32-bit CPUs and 40 bytes on 64-bit CPUs. Window query records
carry 64-bit addresses and occupy 112 bytes on every CPU; use
`pf_window_pixels()` to decode their pixel address.

The local integer/string log formatter uses WMAP rather than a private kernel
address, supporting both firmware variants. Unsupported format conversions
should be formatted by the application itself.

This is a freestanding SDK. It supplies basic types, native interfaces, examples,
small ELF32/ELF64 linkers, a Mach-O writer, and WBPT/WMFS/FAT32 image tools. It does
not supply a hosted C/C++ standard library, exceptions, RTTI, dynamic linking
or an Apple platform integration. In-house runtime implementation files are
application source, not an upstream Lua SDK dependency. See the bundle's license-scope document for component notices.

`PF_KERNEL_BASE` defaults to the BIOS i386 address, the x86-64 EFI address,
or 0x40400000 on ARM. The IA32 EFI kernel loads at 0x02000000; define the
macro explicitly when inspecting its private image. Public services use
WMAP and require no private kernel address. `pf-wmfs` edits the nested WBPT
volumes inside a GPT UEFI image while preserving its EFI partition.

The SDK also includes the nine current universal guest DLLs in `usr/lib`.
The compiler driver builds freestanding programs; these libraries preserve the
original guest C++ export names for existing Mach-O software and tooling.

In the current kernel scripting interface, `dir()` returns the current path;
use `dir("list")` to print the directory listing and file sizes.
