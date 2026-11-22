# Permafrost 1.0 validation

This milestone recovers the supplied 1.0r232 Beta for i386, x86-64, ARM32 and
ARM64. `recovery/reference.json` records the input hash and architecture
inventory. Only 1.0 is an active build target.

The normal build compiles kernels, BIOS/UEFI firmware, twelve libraries,
hardware drivers, nine applications, twenty-four Tayga command wrappers,
and the C/C++ SDK startup/runtime from source. The embedded Mach distribution
is retained unchanged with its own notices and excluded from source recovery.
Assets are checked against a manifest; normal builds do not open a reference
image. Installed binaries and retained Mach files have release provenance hashes.

VM validation uses BIOS/VBE for i386, UEFI for x64, and UEFI `virt` machines
with GICv3, `virtio-ramfb`, a virtio block disk and USB keyboard/tablet for ARM.
The graphical desktop boots on all four architectures. Pointer launches,
keyboard entry and terminal expression evaluation are exercised. The tested
configurations use 512 MiB on x86, 1 GiB on ARM32 and 2 GiB on ARM64. The EFI image
also includes an IA32 loader; the i386 VM coverage uses BIOS.

Each architecture VM compiles and runs a C++ program using the guest Snowflake
compiler. Each also executes SDK C and C++ programs that exercise allocation,
formatted output, vectors, accumulation and constructor initialization, followed
by a file write/read round trip. Test variants append capture-only log storage
and substitute an automatic test application; they do not patch kernel service
behavior. These diagnostic kernels and applications are not release artifacts.

Native/source comparison fixtures cover language runtimes, numerical helpers,
image/font rendering, saved contexts, GUI pixels, events, filesystem interfaces,
driver records and the C/C++ runtime. The recovered desktop, terminal, editor,
activity monitor and cube have application-level comparison fixtures. TLS tests
exercise independent OpenSSL handshakes and encrypted HTTP exchanges.

Recent BIOS repairs restore private USB/PCI arguments, pointer-provider output
forwarding, WMFS detection, file lookup, desktop startup, pixel copy arguments,
menu bounds, cooperative-yield arguments, and command-output capture. The latter
passes 400 native log-copy, clipping, error-range and buffer-guard comparisons.
Both file-window toolbar paths retain the native pinned-path pointer. BIOS
platform ticks advance while the flat loader masks interrupts, and desktop
frames yield so slow C rendering cannot starve other processes.

The x64 driver cache compares unsigned device IDs consistently, avoiding repeated
mounts of BIOS-numbered drives. Firmware-owned input bypasses competing raw
providers. ARM64 enters a reserved kernel stack while retaining the firmware
stack for EFI service calls; this prevents large command frames from reaching
an EFI stack guard. Platform pointer providers retain the output pointer on all
eight applicable slices.

The SDK portability test copies the bundle outside the repository, rebuilds its
ARM64 runtime from bundled sources and cross-compiles C/C++ examples for all
four CPUs without repository headers. Archive identities and timestamps are
normalized. Source and packaged-artifact checks reject embedded host paths.

These checks establish the behavior they exercise, rather than proving every
possible guest program equivalent. Architectural boundaries use small inline
instruction sequences in C translation units. Original ABI symbol names remain
where required for software compatibility; visible OS branding is Permafrost.
