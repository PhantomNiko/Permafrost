# Permafrost 0.3

A C/C++ source reconstruction of the supplied 0.4 Beta release, named
**Permafrost 0.3 Beta** here. This is the only build target. Earlier releases
remain available as Git milestones. The reconstructed kernel and host code use
Pooka's Free Software License; Lua retains its upstream license.

## Build

On macOS 15, install Python 3, NASM and Apple Command Line Tools. Place the
[Permafrost branch of Lua](https://github.com/PhantomNiko/lua/tree/Permafrost)
in the sibling checkout `../lua`, then run:

```sh
python3 tools/build.py
python3 tools/sdk.py
```

Pass `--nasm` or `--lua-source` to select a different tool/source location.
The outputs are `build/Permafrost-0.3.img`, `build/Permafrost0.3.sdk`, and
`build/Permafrost0.3.sdk.zip`. The 4 MiB raw disk image uses a legacy x86 BIOS,
not an Apple disk-image format. It requires an x86 emulator on Apple Silicon.
For example:

```sh
qemu-system-i386 -m 64 -drive format=raw,file=build/Permafrost-0.3.img,if=ide -serial stdio
```

The image contains WBPT firmware, recovery and user-data partitions. Firmware
and recovery use WMFS32; the growable user volume uses WMFS64. First boot runs
the supplied expansion/automount setup. A damaged primary kernel can fall back
to the recovery partition.

The normal build reads checked-in C/C++/assembly and the external Lua source;
it does not read the reference image or embed its executables. The kernel has
334 recovered C functions plus reviewed runtime/native-call support and a C++
display entry. Boot, firmware mode transitions, ABI bridges and nonlocal CPU
transfers retain assembly. Applications, including Wozmon and the Lua host, are
built from C/C++. Recovered code preserves fixed data layouts and remains low
level; it is not the author's original C/C++ source.

See [DEPENDENCIES.md](DEPENDENCIES.md) for the external-source policy and
[dependencies.json](dependencies.json) for the recorded Lua revision. Lua is
compiled and linked from that checkout, and its copyright/license is included
in the image. OpenBIOS was not identified in this release; when encountered in
a future reference, the sibling `../openbios` repository must supply it.

## Recovery and verification

`recovery/inventory.json` records hashes and files from all three reference
volumes. `recovery/layout.json` records code/state boundaries. Reference images
belong in the ignored `img` directory. Optional recovery commands are:

```sh
python3 tools/wmfs.py img/reference.img --partition 2 --extract build/reference-user
python3 tools/recover.py img/reference.img --out build/recovery
```

The reference kernel and loader reassemble byte-for-byte from the assembly
recovery. Normal builds do not require the reference, Ghidra or Java.

The complete bundled WinterScript self-test passes under Bochs with its full
BIOS. The differential suite checks a relocated SDK, original native calls,
571 memory/string comparisons, Wozmon operations, Binary Writer, WSBC versions
1 and 6, WMFS64 directory growth/overwrite/deletion, and Lua host services.
It runs both the reference and reconstructed kernels:

```sh
python3 tests/hardware_suite.py img/reference.img build/Permafrost-0.3.img \
  --bochs BOCHS --bios BIOS --vgabios VGABIOS
```

Supply local emulator and firmware locations for the uppercase placeholders.
Tests use temporary disk copies. The reference needs x87 initialization with
this BIOS; the suite changes only its entry prefix on the test copy. The
reconstructed kernel initializes x87 itself. Reference version variables still
report 0.3 Alpha despite its 0.4 Beta banner; the derivative consistently uses
0.3 Beta and updates its self-test's release assertion accordingly.

Unicorn-based lifecycle, boot, runtime, conformance and interactive writer
fixtures are also available. QEMU and physical hardware have not been verified.
Native programs execute with kernel privileges in a shared address space.

## Development

The SDK includes a flat i386 C/C++ linker, WMAP native-service headers, examples,
and WMFS32/WMFS64 image tools. See [docs/sdk.md](docs/sdk.md). Lua applications
can use the bundled Lua interpreter, file I/O and module loader. The VM is
linked from external source; it will be replaced when a future reference
actually introduces an in-house replacement.
