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
The x64 diagnostic advances through PFS admission, module metadata and dynamic
loading into WinterShell. Known allocator return values, module initialization
descriptors, stack-origin alignment and forwarded script paths have been
recovered. Full startup and VM parity remain unfinished. ARM64 timer, peripheral and spurious
IRQ comparisons preserve integer, SIMD and system state; geometry aggregate
returns match 260 finite and exceptional input pairs.
ARM64 analysis expands machine-outliner blocks before decompilation. ARM32
exclusive operations now use explicit hardware primitives and retain native
retry paths; primitive and native/source heap-lock comparisons pass.

Image codecs for all four architectures link from recovered C. Fourteen
native/source PNG decode cases pass on every architecture. The scalar 32-bit
DEFLATE reconstruction also passes 87 stream, size-limit and malformed-input
comparisons on i386 and ARM32. All four writers pass cross-decoding and
invalid-dimension checks on every architecture. The small XCF fixture matches
the native bytes. Broader encoder and VM checks remain in progress. The
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

The desktop candidate now has C source checkpoints for every CPU. Its typed
16-point font services, configuration string returns and path comparisons pass
native/source fixtures on all four CPUs. ARM32 wallpaper scaling preserves full
32-bit image dimensions, including heights above 255; nine guarded crop and
scaling rasters match. The x64 desktop launches and interacts with the source
UI guest in the VM. ARM32 now starts and launches the source UI guest after restoring the owned-file
service arguments and result. ARM64 full-width geometry, theme roles and signed
script-setting conversion pass direct comparisons; the VM renders the source
UI guest and its colour-change callback. Broader input, time and BIOS checks
still need compatibility work. These desktop sources do not complete recovery
of the other installed applications.

IA32 desktop text drawing now retains its native ECX/EDX coordinates through
image blitting. Four guarded TrueType call/clipping comparisons pass and VM
menu and desktop labels are visible. The extended owned-file service passes
argument, result and guard comparisons on every CPU; the IA32, x64 and ARM32
kernel wrappers explicitly return the native result. BIOS shell input remains
unresolved despite matching direct routing replays.

The candidate SDK header exposes the 608-byte 1.1 wire table, retaining its
five unassigned slots and the original fixed-width service addresses. The
reviewed owned-file and script-run wrappers pass C and C++ argument, result
and unavailable-service checks on every CPU. The SDK bundle is not promoted.

The Cancer terminal now has C source checkpoints for every CPU. Native/source
comparisons cover empty startup, wide windows, command workers, worker failure,
custom menus, partial presentation, extended pointer state and terminal output
draining. The recovered x64 lane shifts pass 1,806 comparisons against SSE2.
Scrollbar snapshots pass seven guarded capture/restore cases per CPU, including
resizing and release. The candidate SDK declares the matching snapshot layout.
Pigeon shares the Cancer implementation: its native code and initialized runtime
sections are identical; ARM64 differs only in a name in the link-edit segment.
Both applications build from the checked-in C sources on every CPU.

VM checks still expose kernel and integration defects. The x64 terminal evaluates
a command but emits the result outside its window; the native terminal reproduces
this on the candidate kernel. ARM32 terminal launch needs further work. These
checkpoints do not establish full VM parity or finish the 1.1 application inventory.

The cube candidate is common C source for all four CPUs. The 1.1 theme colours,
frame lifecycle and timeout arguments pass native comparisons: eleven lifecycle
modes, sixteen timeout cases and twelve CPU raster cases per CPU. Historical
1.0 sources remain outside this candidate until the release target is promoted.

The x64 desktop now preserves full-width dirty rectangles. Ten guarded native
client rasters cover full and partial presentation, including coordinates above
255. The x64 VM terminal retains its command and result after this repair.
ARM32 and ARM64 terminals also accept and display a calculation. BIOS IA32
accepts the keyboard command, but its shell routing still rejects it. VM parity
and the remaining source inventory are not complete.
