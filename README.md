# Permafrost 0.2

A source reconstruction of the supplied Permafrost 0.3 Alpha release, named
**Permafrost 0.2** here. This is the only maintained build target. Earlier
milestones are available through Git history. Derived source and binaries use
Pooka's Free Software License; see LICENSE.TXT and licenses/UPSTREAM.TXT.

## Build

On macOS 15, install Python 3 and NASM, then run from the repository root:

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
binary. The kernel implementation is C, with the public display entry in C++.
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

The BIOS fixture executes the boot sector, loader, protected-mode entry,
initialization, filesystem mount and script commands. The current C rebuild has
reached its interactive shell; expanded runtime validation is in progress.
The supplied original passes its bundled language self-test.

The kernel build requires Clang and Clang++ in addition to NASM and Python 3.

The bundled WinterScript self-test covers functions, closures, standard
libraries, patterns, file handles, and loaded chunks. Additional differential
checks are available in `tests/runtime.py`, `tests/conformance.py`, and
`tests/writer.py`. They execute both the reference and reconstructed images.

`tests/hardware.py` repeats the full BIOS test using a locally supplied Bochs
executable and firmware (`--bochs`, `--bios`, `--vgabios`). It operates on a
temporary test copy of the image. Firmware and emulator binaries are external
test dependencies and are not included in this repository.

## SDK

Run `python3 tools/sdk.py` to produce `build/Permafrost0.2.sdk`, a relocatable
macOS 15 bundle and `build/Permafrost0.2.sdk.zip` for distribution. See
[the SDK guide](docs/sdk.md) for compilation, file installation and execution.
The SDK exposes this release's native entry addresses and supports C/C++ flat
i386 programs.
