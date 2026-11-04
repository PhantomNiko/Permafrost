# Permafrost 0.6

Permafrost 0.6 reconstructs the supplied 0.7 Beta BIOS and OpenBIOS releases.
It is the current build target; historical source and SDK milestones remain
in Git history.

The BIOS and OpenBIOS kernels, built-in WinterScript runtime, WinterLua 0.2,
and native monitor build from C/C++ source. Assembly is limited to boot and
CPU/BIOS transitions. OpenBIOS firmware builds from the pinned sibling
`../openbios` checkout. Standalone WinterRwby and WinterScript retain their
licensed VM binaries, packaged with source-built integer helpers; see
[their provenance](applications/bundled/README.md).

## Build

Use macOS 15, Python 3, NASM and Apple Command Line Tools. The OpenBIOS build
also requires GNU i386 ELF binutils and the pinned external source revision
listed in [dependencies](DEPENDENCIES.md).

```sh
python3 tools/build.py --nasm nasm --binutils-prefix i386-elf-
```

The build produces:

- `build/Permafrost-0.6.img` — BIOS image, 40 MiB.
- `build/Permafrost-0.6-OpenBIOS.img` — source OpenBIOS firmware and kernel, 40 MiB.
- `build/Permafrost0.6.sdk` and `build/Permafrost0.6.sdk.zip` — macOS 15 development bundle.
- `build/release.json` — artifact sizes and SHA-256 hashes.

`--variant bios` and `--variant openbios` select a firmware variant of this
release. Reference images and decompiler tools are analysis inputs and are
not required by normal builds. The covered bundled native VMs are checked
against their recorded hashes before packaging.

The images have firmware, recovery and FAT32 user partitions. The OpenBIOS
variant uses a boot-image RAM disk and requires at least 64 MiB of RAM for the
default image. Its disk writes last for the boot session. The BIOS variant
uses its disk drivers for persistent writes.

## Development and validation

The [SDK guide](docs/sdk.md) explains C/C++ Mach-O programs, native callbacks,
and image tools. The bundle is relocatable and requires host Clang; it is a
freestanding SDK without a hosted C++ standard library or Xcode integration.

`tests/hardware_suite.py` checks complete hardware boots, the bundled language
self-test, public allocation/file/PNG services, relocated-SDK C/C++ programs,
source WinterLua, and directory file sizes. `tests/runtime.py` compares kernel
routines with the reference, including stack and callee-saved registers.
`tests/lua.py` covers the in-house Lua subset and observed reference limitations.
Bochs, its BIOS/VGA BIOS, and Unicorn for CPU tests are supplied separately.

See [release findings](docs/release.md), [recovery method](docs/decompilation.md),
[license scope](LICENSES.md), and [source dependencies](DEPENDENCIES.md).
Third-party licenses retain their original scope. The current release uses
in-house WinterLua and does not link upstream Lua.
