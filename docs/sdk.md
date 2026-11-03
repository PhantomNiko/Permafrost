# Permafrost SDK for macOS 15

Create the relocatable bundle with `python3 tools/sdk.py`. The output is
`build/Permafrost0.1.sdk`. It requires Python 3 and host Clang/Clang++ from Apple
Command Line Tools. The SDK supplies headers, examples, a small ELF32 static
linker and WMFS32 image tools. It does not require an installed GNU cross linker.

```sh
build/Permafrost0.1.sdk/bin/pf-cc sdk/examples/hello.c -o build/hello.bin
build/Permafrost0.1.sdk/bin/pf-cc sdk/examples/nightmode.cpp -o build/nightmode-cpp.bin
build/Permafrost0.1.sdk/bin/pf-wmfs build/Permafrost-0.1.img \
  --put hello.bin=build/hello.bin \
  --put nightmode-cpp.bin=build/nightmode-cpp.bin \
  --out build/development.img
```

At the Permafrost shell:

```text
serial(runcode("/hello.bin", $200000))
serial(runcode("/nightmode-cpp.bin", $200000))
```

The verified results are `Hello from Permafrost C, result=42`, return value 42,
and return value 1 from the C++ night-mode utility. The BIOS fixture executes
both compiled programs within the running kernel, through its script loader.

Native programs are flat i386 machine code loaded at the requested address.
`pf-cc` defaults to 0x200000; pass `--base` to change it and use the same address
in runcode. The entry shim calls the C-linkage `main` (or `--entry` symbol), then
returns to WinterScript with its EAX result. Multiple C/C++/ELF32 object inputs
are supported. C++ entry functions must use C linkage. Constructors, exceptions,
RTTI, threads, dynamic libraries and the C++ standard library are not supplied.
Unresolved symbols and unsupported ELF relocations are build errors.

`permafrost.h` supplies the two entry points demonstrated by the original native
utilities and the kernel's formatted log function. Other kernel routines have
not been declared stable SDK interfaces. There is no process isolation: native
programs run with kernel privileges and must preserve the cdecl ABI, stack and
machine state. This is a freestanding cross-development SDK hosted on macOS 15,
not an Apple platform SDK or an Xcode platform plug-in.

The bundle records no host installation path and can be relocated. The small
ELF linker applies R_386_32 and R_386_PC32 relocations, including absolute calls
to existing kernel addresses. It emits allocated sections only; symbol tables,
compiler metadata and source filenames are not copied into native executables.
