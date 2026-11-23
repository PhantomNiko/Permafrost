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
objects; the x64 kernel also links with the recovered 1.1 image codec. Its first
VM test exposed a firmware text-output ABI defect, now repaired and compared
with the original for every byte value. Startup advances to framebuffer
initialization but still halts during storage initialization. The captured-state
comparison isolates a missing command pointer in the firmware flush path;
the correction is undergoing mount and VM verification. ARM64 timer, peripheral
and spurious IRQ comparisons preserve integer, SIMD and system state; geometry
aggregate returns match 260 finite and exceptional input pairs.
ARM64 analysis expands machine-outliner blocks before decompilation. ARM32
exclusive operations now use explicit hardware primitives and retain native
retry paths; primitive and native/source heap-lock comparisons pass.

The x64 image codec builds from 234 recovered C functions. Fourteen native/source
PNG decode cases pass. Encoder and file-I/O recovery remains in progress. The
1.1 codec exports BMP, PNG, TGA and XCF writers; its exports do not include the
older REI and JPEG writers. The source-kernel VM is still a differential test
with reference application payloads.

These files do not establish VM equivalence. Promotion, complete source builds
for the kernel and all installed modules/applications, portable SDK validation,
VM keyboard/storage/graphics comparisons and the 1.1 milestone tag remain
outstanding. See the reconstruction progress record for completed component
checks. Pooka's Free Software License applies throughout this checkpoint.
