# Permafrost 0.5

A C/C++ reconstruction of the supplied 0.6 Beta release, named **Permafrost
0.5 Beta**. This is the sole build target. Earlier releases remain Git
milestones. Reconstructed code uses Pooka's Free Software License; external
Lua retains its upstream license.

## Build

On macOS 15, install Python 3, NASM and Apple Command Line Tools. Place the
[Permafrost branch of Lua](https://github.com/PhantomNiko/lua/tree/Permafrost)
in the sibling checkout `../lua`, then run:

```sh
python3 tools/build.py
python3 tools/sdk.py
```

The outputs are `build/Permafrost-0.5.img`, `build/Permafrost0.5.sdk`, and
`build/Permafrost0.5.sdk.zip`. The 40 MiB BIOS disk image contains WMFS32
firmware/recovery and a FAT32 user volume. FAT32 needs at least 65525 data
clusters. `--sectors` can change the image size within the format's limits;
`--nasm`, `--lua-source` and `--out` select other build inputs/outputs.

The kernel and native applications use i386 code. An x86 emulator is required
on Apple Silicon. For example:

```sh
qemu-system-i386 -m 64 -drive format=raw,file=build/Permafrost-0.5.img,if=ide -serial stdio
```

Startup mounts the FAT32 user volume and loads its font. Firmware and recovery
retain the bootable WMFS32 layout. A damaged primary kernel can fall back to
recovery. This release has one kernel layout and native ABI.

## Source and development

Normal builds use checked-in C/C++/assembly and external Lua source. They do
not consume the reference image. The kernel contains 386 recovered C functions,
reviewed C runtime/compiler support and a C++ display entry. Boot, BIOS mode
changes and CPU/nonlocal transfers retain assembly. Fixed layouts preserve
native compatibility; the recovered source remains low level.

The SDK provides a flat i386 C/C++ compiler/linker wrapper, WMAP version-2
headers, examples, and WMFS32/WMFS64/FAT32 volume tools. Native callbacks can
register WinterScript functions. Graphics, Lua modules and file I/O are
available through the native/script interfaces. See [docs/sdk.md](docs/sdk.md).

Lua is compiled and linked from `../lua`, with its license included in the
image. Its reference binary is unchanged from the previous release. OpenBIOS
has not been identified. [DEPENDENCIES.md](DEPENDENCIES.md) records the source
policy, including replacing external Lua when a future release actually uses
an in-house replacement.

## Recovery and verification

[recovery/inventory.json](recovery/inventory.json) records the reference hash
and all three volume inventories. Layout/signature manifests record code and
state boundaries. Reference images stay in ignored `img`; intermediate
exports and decompiler projects are excluded from tracked source.

```sh
python3 tools/wmfs.py img/reference.img --partition 2 --extract build/reference-user
python3 tools/recover.py img/reference.img --out build/recovery
python3 tests/hardware_suite.py img/reference.img build/Permafrost-0.5.img \
  --bochs BOCHS --bios BIOS --vgabios VGABIOS
```

Supply local emulator/firmware locations for the uppercase placeholders.
Tests use temporary disk copies. Reference tests initialize x87 in its entry
prefix; the reconstructed kernel initializes it itself. Normal builds need
neither Ghidra nor Java.

The full Bochs suite passes the bundled self-test, relocated SDK C/C++ programs,
original native utilities, Wozmon, Binary Writer, WSBC, FAT32 create/read/
overwrite/delete, original/source-linked Lua and native callback success/error
checks. Framebuffer hashes match at five requested color depths. Further
validation is recorded in [docs/release.md](docs/release.md). QEMU and physical
hardware have not been verified. Native code shares kernel privileges/memory.
