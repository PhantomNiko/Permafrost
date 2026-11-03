# Permafrost 0.4

A C/C++ reconstruction of the supplied 0.5 Beta i386 and IA64 releases, named
**Permafrost 0.4 Beta**. These two variants are the only build targets. Earlier
releases remain Git milestones. Reconstructed code uses Pooka's Free Software
License; external Lua retains its upstream license.

## Build

On macOS 15, install Python 3, NASM and Apple Command Line Tools. Place the
[Permafrost branch of Lua](https://github.com/PhantomNiko/lua/tree/Permafrost)
in the sibling checkout `../lua`, then run:

```sh
python3 tools/build.py
python3 tools/sdk.py
```

Outputs:

- `build/Permafrost-0.4-i386.img` — 4 MiB BIOS disk image.
- `build/Permafrost-0.4-IA64.img` — 8 MiB BIOS disk image.
- `build/Permafrost0.4.sdk` and `build/Permafrost0.4.sdk.zip` — macOS 15 SDK.

Pass `--nasm`, `--lua-source`, `--out` or `--sectors` to override build inputs.
The images require an x86 emulator on Apple Silicon. For example:

```sh
qemu-system-i386 -m 64 -drive format=raw,file=build/Permafrost-0.4-i386.img,if=ide -serial stdio
qemu-system-x86_64 -m 64 -drive format=raw,file=build/Permafrost-0.4-IA64.img,if=ide -serial stdio
```

IA64 is the upstream label for the x86-64 entry variant. Its kernel and native
applications execute as 32-bit compatibility-mode code. It includes a legacy
fallback kernel; a capable CPU takes the 64-bit entry before returning to the
32-bit kernel. The variants have distinct native-service addresses.

WBPT firmware and recovery partitions use WMFS32. User data uses WMFS64.
First boot installs the supplied expansion/automount setup. An invalid primary
kernel can fall back to the recovery volume. Filesystem tools preserve each
variant's partition geometry when updating a volume.

## Source and interfaces

Normal builds use checked-in C/C++/assembly and external Lua source. They do
not read reference images or embed reference executables. The i386 and IA64
layouts contain 365 and 364 recovered C functions, respectively, with shared
C runtime/compiler support and a C++ display entry. Boot, BIOS mode changes,
CPU entry and nonlocal transfers retain assembly. Fixed data layouts preserve
native compatibility; the recovered source remains low level.

WMAP version 2 exposes 16 native services, including WinterScript callback
registration. The SDK supports both variants with `pf-cc --variant i386` or
`pf-cc --variant IA64`; both produce i386 application code. Graphics entry,
exit, drawing, canvas sizing and color-depth controls are available through
the native/script interfaces. See [docs/sdk.md](docs/sdk.md).

Lua is compiled and linked from the requested sibling repository, with its
license included in each image. OpenBIOS has not been identified in these
references. See [DEPENDENCIES.md](DEPENDENCIES.md) and
[dependencies.json](dependencies.json) for source locations and replacement
policy when a future release introduces the in-house Lua replacement.

## Recovery and verification

[recovery/inventory.json](recovery/inventory.json) records both reference hashes
and all three volume inventories. The two layout manifests record code/state
boundaries and original native signatures. Reference images belong in ignored
`img`; decompiler projects and intermediate exports stay outside tracked source.

```sh
python3 tools/wmfs.py img/reference.img --partition 2 --extract build/reference-user
python3 tools/recover.py img/reference.img --variant i386 --out build/recovery
python3 tests/hardware_suite.py img/reference.img build/Permafrost-0.4-i386.img \
  --variant i386 --bochs BOCHS --bios BIOS --vgabios VGABIOS
```

Use `--variant IA64` and the corresponding image for the other build. Supply
local emulator/firmware locations for the uppercase placeholders. The IA64 test
requires a Bochs build with x86-64 support. Tests use temporary disk copies.
Reference tests initialize x87 in the entry prefix; reconstructed kernels do
so themselves. Normal builds need neither Ghidra nor Java.

Both variants pass the bundled self-test, relocated SDK C/C++ programs, original
native utilities, Wozmon, Binary Writer, WSBC execution, WMFS64 mutation stress,
original/source-linked Lua, and native callback success/error checks under a
complete Bochs BIOS. Graphics diagnostics match the references, including the
IA64 long entry. Further validation is recorded in [docs/release.md](docs/release.md).
QEMU and physical hardware have not been verified. Native code shares kernel
privileges and memory.
