# Permafrost 0.9 recovery

The supplied 1.0r147-Prerelease disk is the reference for this milestone. Only Permafrost
0.9 is an active image build target. Its hash and four-architecture inventory
are recorded in `recovery/reference.json`.

The BIOS chain, shared four-architecture EFI loader, kernels, nine native DLLs
and bundled utilities build from C/C++ source. Normal builds require neither
reference executables nor a decompiler. Small architectural transitions and
ABI adapters use inline assembly inside C. Python generates containers and
relocation tables.

Both x86 kernels load at 0x02000000. IA32 EFI shares the BIOS C implementation
with a firmware-specific profile and separate initialized data; ARM kernels load at 0x40400000. WMAP v13 is 252 bytes with
32-bit service addresses on all CPUs, at 0x6800 on x86 and 0x40010800 on ARM.
The SDK converts those slots into native function pointers and uses explicit
record layouts.

Native/source comparisons cover twelve generated TrueType raster fixtures on
each CPU, including scaled linear and quadratic outlines. Lua passes seven VM
fixtures per CPU; Rwby and standalone WinterScript pass eight each. Those tests
cover arithmetic, signed values, precedence, loops, arrays, float arithmetic
and string conditionals;
Rwby and WinterScript also cover functions. The 32-bit Rwby compiler produces
byte-identical arithmetic and loop bytecode. ABI probes cover ARM64 X8 result
pointers and Darwin i386 aggregate-return stack cleanup.

Recovery fixes include unsigned ASCII classification, integer/float storage
views, full 64-bit returns on 32-bit CPUs, incoming stack parameters, private
VFP conventions, shared-pointer receiver arguments, token-vector ownership,
fast condition outputs and source implementations of numeric conversions.
The i386 program allocation services preserve incoming arguments and results.

Hardware validation uses Bochs for BIOS and QEMU for EFI. All three VM DLLs
pass their fixtures through both string and file APIs on all five boot paths,
for 230 booted cases. The complete bundled kernel self-test also passes each
path. Public SDK checks exercise allocation, files, PNG decoding and native
callbacks. BIOS additionally runs relocated-SDK C, C++ and runtime Mach-O
programs. Emulated API comparisons complement those boots. These checks do not establish equivalence
for every application or physical hardware configuration.

Known limits:

- TrueType Type 1 and compound-glyph paths are outside the raster fixtures.
- The native Lua reference terminates on the current function-declaration
  fixture, so Lua closures/functions are outside the conformance suite.
- The SDK is freestanding; new applications do not receive a hosted C++
  standard library, exceptions or RTTI. The guest DLLs preserve original C++
  export names for compatibility; exhaustive foreign vtable interoperability
  is not established by the direct-entry fixtures.

UEFI follow-up fixes cover interactive x86-64 line copying, ARM32 console
result ownership, the full-width
firmware bridge used when ARM64 firmware loads above 4 GiB, and GOP
PixelBltOnly displays. The loader supplies a reserved BGRA surface and
presents it with GOP.Blt during input polling and waits. UTM virtio-ramfb
boots now have visible output on ARM32 and ARM64; ARM64 is also tested
with 4096 MiB of RAM.

The console regression types expressions, strings and variable assignments
through QEMU keyboard events rather than relying only on startup scripts.
`tests/uefi.py --command` supports this check, `--expect` requires serial
result lines, and `--screenshot` captures the display.

Follow-up validation includes typed x86-64 expressions and persistent
variables, ARM32/ARM64 virtio-ramfb framebuffer and window lifecycle checks,
ARM64 SDK services with 4096 MiB RAM, and the BIOS hardware suite.

The recovered 32-bit stdio code reads the file data pointer and byte count
from the native metadata record. i386 flat calls align the stack for native
C++ DLLs, and i386 Mach-O code uses x87 without requiring SSE firmware state.
Native/source emulation starts with the FPU state established by the boot
chain. Guest VM checks protect the null page and validate heap ownership.
