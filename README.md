# Permafrost 0.2

A source reconstruction of the supplied Permafrost 0.3 Alpha release, named
**Permafrost 0.2** here. This is the only maintained build target. Earlier
milestones are available through Git history. Derived source and binaries use
Pooka's Free Software License; see LICENSE.TXT and licenses/UPSTREAM.TXT.

## Build

On macOS 15, install Python 3, NASM and Apple Command Line Tools, then run from the repository root:

```sh
python3 tools/build.py
```

If NASM is outside PATH, pass `--nasm` followed by its location. The result is
`build/Permafrost-0.2.img`, a raw 1 MiB BIOS disk image. It is not an Apple disk
image and does not boot natively on Apple Silicon. Use an x86 PC emulator with a
legacy BIOS, at least 64 MiB RAM and an IDE disk, for example:

```sh
qemu-system-i386 -m 64 -drive format=raw,file=build/Permafrost-0.2.img,if=ide -serial stdio
```

The normal build compiles C/C++ and assembly and creates WMFS32 from scratch.
It does not read the reference image, copy its boot sectors, or embed its kernel
binary. The kernel implementation is C, with the public display entry in C++. Bundled
native applications are also built from C/C++.
`kernel/core` contains the recovered function bodies; `kernel/state.c` declares
the initial data layout in C. BIOS entry, mode transitions and the boot loader
use assembly. Generated adapters preserve original register and stack entry
conventions for legacy native programs. The recovered C remains low-level, with
address-based identifiers and explicit views of shared data and stack fields;
it is not the author's original source or a fully idiomatic rewrite.

## Recovery and validation

`docs/recovery.md` records the disk layout and observed interfaces. Local
reference images belong in `img/` and are not committed. These optional commands
inventory a reference and reproduce its initial unbranded assembly recovery:

```sh
python3 tools/wmfs.py img/reference.img --extract build/reference
python3 tools/recover.py img/reference.img --out build/recovery
```

The unbranded boot sector, second stage and complete kernel have been rebuilt
byte-for-byte from their assembly recovery. The checked-in source changes the
product name, kernel filename and displayed version in fixed-size data slots.
Compatibility identifiers WMLP, WMFS32, WSBC and the WinterScript language name
are retained for existing programs and tooling.

With the Python `unicorn` package available:

```sh
python3 tests/boot.py build/Permafrost-0.2.img
```

The reconstructed image boots under Bochs 2.8 with a complete BIOS/VGA BIOS
and passes the supplied WinterScript self-test. That covers closures, scopes,
loops, multiple returns, strings/patterns, math/table/io/utf8/os libraries,
error handling, file mutation, loaded chunks and the bundled desk model.

`tests/hardware_suite.py` compares both kernels under the same BIOS. It builds
programs using an SDK relocated to a directory with spaces, checks C/C++ return
values, original native utility calls, 571 memory/string calls, Wozmon
examine/store/run/exit behavior, the Binary Writer's saved executable, and
WSBC versions 1 and 6. The memory/string digest matches the original.

```sh
python3 tests/hardware_suite.py img/reference.img build/Permafrost-0.2.img \
  --bochs BOCHS --bios BIOS --vgabios VGABIOS
```

Supply emulator/firmware locations for the uppercase placeholders. These are
external test dependencies. Tests use temporary disk copies. The reference
inherits uninitialized x87 state from this BIOS; the suite initializes x87 in
its entry prefix on the test copy. The reconstructed kernel initializes x87
itself. Original C code and bundled self-test assertions remain intact except
for the derivative's version assertion and a serial completion marker.

`tests/hardware.py` runs a smaller startup test. Unicorn-based boot, runtime,
conformance and interactive writer fixtures remain available for development.
QEMU and physical hardware have not been verified. This remains an early-alpha
reconstruction with fixed-address, privileged native execution.

## SDK

Run `python3 tools/sdk.py` to produce `build/Permafrost0.2.sdk`, a relocatable
macOS 15 bundle and `build/Permafrost0.2.sdk.zip` for distribution. See
[the SDK guide](docs/sdk.md) for compilation, file installation and execution.
The SDK exposes this release's native entry addresses and supports C/C++ flat
i386 programs.
