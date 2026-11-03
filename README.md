# Permafrost 0.1

An open-source reconstruction of the first public Permafrost kernel release,
historically shipped as WinterMoon OS 0.2. This project calls the reconstructed
release **Permafrost 0.1**. Derived source and binaries use Pooka's Free Software
License; see LICENSE.TXT and licenses/UPSTREAM.TXT.

## Build

On macOS 15, install Python 3 and NASM, then run from the repository root:

```sh
python3 tools/build.py
```

If NASM is outside PATH, pass `--nasm` followed by its location. The result is
`build/Permafrost-0.1.img`, a raw 1 MiB BIOS disk image. It is not an Apple disk
image and does not boot natively on Apple Silicon. Use an x86 PC emulator with a
legacy BIOS, at least 64 MiB RAM and an IDE disk, for example:

```sh
qemu-system-i386 -m 64 -drive format=raw,file=build/Permafrost-0.1.img,if=ide -serial stdio
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
python3 tests/boot.py build/Permafrost-0.1.img
```

The BIOS fixture executes the boot sector and loader, protected-mode entry,
kernel initialization, WMFS mount, startup script and a serial script command.
The rebuilt image has reached the interactive shell and emitted the command's
expected result. This fixture exercises VGA text fallback, disk reads/writes
and BIOS mode transitions. The verified image has also booted under Bochs 2.8
with its complete BIOS, VGA BIOS and emulated devices, loaded a startup script,
and emitted the expected arithmetic result through the emulated serial port.
QEMU and physical hardware have not yet been verified. This is an early-alpha kernel with the behavior
and limitations inherited from the supplied release.

The rewritten C runtime also passes 523 differential cases against the original
kernel, including overlap handling, unsigned byte comparisons, empty strings,
null-tolerant string length, return values and the i386 calling convention:

```sh
python3 tests/runtime.py img/reference.img
```

The kernel build requires Clang and Clang++ in addition to NASM and Python 3.

The default C/C++ image also matches the supplied release's conformance output
for arithmetic, floats, strings, arrays, tables, loops, file mutation, raw native
calls, SDK programs, and saved WSBC bytecode:

```sh
python3 tests/conformance.py img/reference.img build/Permafrost-0.1.img
```

The recovered Binary Writer application also accepts interactive byte input,
saves a native executable, and runs it with the same result on both kernels:

```sh
python3 tests/writer.py img/reference.img build/Permafrost-0.1.img
```

`tests/hardware.py` repeats the full BIOS test using a locally supplied Bochs
executable and firmware (`--bochs`, `--bios`, `--vgabios`). It operates on a
temporary test copy of the image. Firmware and emulator binaries are external
test dependencies and are not included in this repository.

## SDK

Run `python3 tools/sdk.py` to produce `build/Permafrost0.1.sdk`, a relocatable
macOS 15 bundle and `build/Permafrost0.1.sdk.zip` for distribution. See
[the SDK guide](docs/sdk.md) for compilation, file installation and execution.
The bundle was relocated to a directory containing spaces; both SDK examples
compiled there and executed successfully inside the rebuilt kernel.
