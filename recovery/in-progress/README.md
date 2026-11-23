# Permafrost 1.1 source recovery

This is an incomplete recovery checkpoint, not a second release build target.
The completed 1.0 milestone remains tagged. The active migration is to 1.1;
the normal image and SDK builders have not yet been promoted to these sources.
Embedded Mach distributions remain excluded from recovery.

The candidate shared EFI loader builds for all four CPUs with the existing
`tools/uefi_portable.py --source` recovery interface. Its `build.json` selects
the freestanding PolynyaFS and PFZ1 C modules. The loader uses WFE context
version 11. Its legacy bridge requests the kernel's supported firmware
retention policy; a complete native processor/firmware handoff is still being
recovered. Booting with original OS payloads is a differential test, not a
source-built release.

The retained-service test path reaches the desktop on x64, ARM32 and ARM64.
x64 and ARM32 pass a pointer-driven desktop exit and shell `1+1` input check.
ARM64 opens the menu, but the subsequent selection/input check remains
unresolved. These checks still use the original kernel and applications.

The kernel folders contain candidate C, initialized data, ABI metadata and
manual replacements. `recovery.json` records translation settings and reviewed
exclusive-store expectations. Complete C translations for all four architectures compile to
objects; x64, ARM32 and ARM64 also link with the recovered 1.1 image codec.
The x64 text-output and firmware flush ABI corrections pass direct comparisons.
Startup advances through PFS admission and module metadata probing. The next
VM blocker is dynamic module loading: a memory allocator was inferred as
returning void, leaving its callers with undefined pointers. Its ABI is being
recovered before the next VM comparison. ARM64 timer, peripheral and spurious
IRQ comparisons preserve integer, SIMD and system state; geometry aggregate
returns match 260 finite and exceptional input pairs.
ARM64 analysis expands machine-outliner blocks before decompilation. ARM32
exclusive operations now use explicit hardware primitives and retain native
retry paths; primitive and native/source heap-lock comparisons pass.

Image codecs for all four architectures link from recovered C. Fourteen
native/source PNG decode cases pass on every architecture. The scalar 32-bit
DEFLATE reconstruction also passes 87 stream, size-limit and malformed-input
comparisons on i386 and ARM32. All four x64 writers pass cross-decoding and
invalid-dimension checks; the XCF fixture matches the native bytes. Encoder
and file-I/O checks on the other architectures remain in progress. The
1.1 codec exports BMP, PNG, TGA and XCF writers; its exports do not include the
older REI and JPEG writers. The source-kernel VM is still a differential test
with reference application payloads.

These files do not establish VM equivalence. Promotion, complete source builds
for the kernel and all installed modules/applications, portable SDK validation,
VM keyboard/storage/graphics comparisons and the 1.1 milestone tag remain
outstanding. See the reconstruction progress record for completed component
checks. Pooka's Free Software License applies throughout this checkpoint.

The kernel PFZ1 Mach-O wrapper shares the firmware token/checksum decoder,
with the native size policy and output validation. Fourteen native/source
cases preserve output, error strings and allocation/free behavior. The shared
firmware decoder also passes bounds and malformed-stream checks on all four
CPUs. Temporary VM tracing remains in ignored build output.
