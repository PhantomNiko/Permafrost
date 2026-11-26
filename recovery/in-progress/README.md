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
kernel wrappers explicitly return the native result. The later IA32 command-pointer repair below resolves the BIOS calculation check.

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

Terminal VM checks now accept and display a calculation on all four CPUs.
Full VM parity and the 1.1 source inventory remain incomplete.

The cube candidate is common C source for all four CPUs. The 1.1 theme colours,
frame lifecycle and timeout arguments pass native comparisons: eleven lifecycle
modes, sixteen timeout cases and twelve CPU raster cases per CPU. Historical
1.0 sources remain outside this candidate until the release target is promoted.

The x64 desktop now preserves full-width dirty rectangles. Ten guarded native
client rasters cover full and partial presentation, including coordinates above
255. The x64 VM terminal retains its command and result after this repair.
ARM32 and ARM64 terminals also accept and display a calculation. The BIOS IA32 calculation also passes after the command-pointer repair. VM
parity and the remaining source inventory are not complete.

Diagnostics has recovered C checkpoints for IA32, x64 and ARM64, matching the
reference slice coverage. Nine native comparisons per CPU cover fallback UI,
populated records, all five power-policy controls, zero services and counts at
and above the 72-record limit. ARM64 telemetry retains its dynamic format stack
arguments. The x64 and ARM64 VMs display live hardware and service rows. The reference has no ARM32 diagnostics slice.

The candidate SDK now defaults to the native 1.1 x86 table at 0x280800. Its
terminal, script-variable and damaged-rectangle wrappers pass 63 availability,
argument and result cases per CPU in both C and C++. Candidate runtime archives
build from C/C++ and dispatch allocation through the 1.1 table on every CPU.
The inherited runtime still needs complete 1.1 equivalence and VM validation.

ARM64 window creation and the menu centering action now preserve signed
coordinates when a window exceeds the display height. Ten native placement
records cover both paths. The repaired VM displays the diagnostics window.
Three failed-window paths per CPU also compare native cleanup and window IDs;
the IA32, x64 and ARM32 close forwarders now retain their native arguments.

The SDK exposes the recovered scrollbar drawing entry point. Thirty-six native
raster comparisons per CPU cover both orientations, clipping, coordinate
offsets, row padding and buffer guards.

Activity Monitor builds from its recovered C checkpoint on all four CPUs. Seven
native comparisons per CPU cover populated and unavailable process data, text
alpha and the five graph tabs. The x64 and ARM64 VMs display live process
rows and graphs. Broader VM integration checks are still in progress.

The IA32 shell request now retains its command pointer from the native ECX
argument. Ninety native request/output/status comparisons pass. A clean C
kernel build evaluates `1+1` to `2` in the BIOS terminal. Script-variable
queries still produce stray PicoFrost menu rows; broader integration remains open.

The font library carries forward the recovered C backend after native 1.1
checks, with the new metrics export implemented in common C. Every CPU passes
twelve generated-font rasters, thirty-nine invalid-font/alpha/missing-glyph
cases, and 140 resize and text-metrics records. These isolated comparisons do
not establish complete release compatibility.

Hex Editor has reviewed C checkpoints on all four CPUs. Six native workflows
per CPU cover fallback UI, text alpha and resizing, byte editing, file loading,
actual file saves and extended clipboard round trips. ARM byte rendering now
retains unsigned printable-range checks. The ARM64 ordinary save path uses its
native shared tail helper; IA32 retains file-path register arguments. These
application comparisons do not establish release-wide VM parity.

Text Editor has C checkpoints for every CPU. Five native workflows per CPU
cover empty documents, multiline keyboard input, binary-to-text file filtering,
actual menu saves and clipboard round trips. The x64 and ARM32 window-spec
copies retain all fields; ARM64 preserves unsigned text-range tests and status
message arguments. The source checkpoints reproduce the tested binaries.
Release-wide VM compatibility remains incomplete.

Steward builds from recovered C on all four CPUs. Each CPU passes 484 native
console, shell-variable, CSV and guarded-output cases, plus saved-register and
nonlocal-context comparisons. The candidate SDK exposes the recovered C
interface, and C/C++ callers link on every CPU. The reference's bundled headers
confirm unsigned-integer results for the console and shell operations. A
symbol-bounded analysis helper restores an ARM32 entry removed by speculative
flow analysis. These checks do not complete release-wide VM compatibility.

WinterScript native-function registration now carries both arguments explicitly
through the x64, ARM32 and ARM64 provider forwarders. Thirty-six native callback
argument/result records pass per CPU, including IA32. The previous x64 machine
code happened to retain register arguments, so this source repair alone does
not establish the cause of the remaining VM menu mismatch. Direct x64 variable
queries also match 160 capture-ownership, CPU-slot and provider records.

Component work stays in sibling repositories. Amur checkpoint `dcad4bd` builds
IA32, x64, ARM32 and ARM64 compiler hosts from C and matches ten native workflows per host,
including byte-identical constant-return compilation for all four CPUs. Sleet
checkpoint `736e134` builds its client from C on all four CPUs and matches fallback UI pixels,
69 service calls and 113 guarded HTTP decoding cases. Those limited checkpoints
are not full component releases. Broader compiler language and
network coverage, remaining components and release VM parity are still pending.

The x64 kernel menu store and complete window-query wire records match 45
native cases, including title/menu strings, multiple windows, truncation and
guards. An initialized reference WinterShell module also runs seven statement
workflows against native and C kernel host services with matching assignments,
nested values and console output. Both compatibility entries and direct C host
callback targets are intercepted in that differential fixture. These checks
narrow, but do not resolve, the remaining live desktop integration differences.

Private module host callbacks now have a separate analysis helper. It follows
casted loads through a host-table global and recovers call-site signatures
without changing the fixed-width public WMAP table. The current WinterShell
analysis resolves 1,596 such calls; its source recovery remains in progress.

The IA32, x64 and ARM64 WinterShell modules now have C checkpoints. Twenty-eight statement
workflows and 331 direct lexer cases per CPU match the reference; seven additional
x64 public dispatch records match the
reference module against a reference kernel host. Repairs retain the native
public three-argument boundary, boolean string-builder results, integer prefix
contents, operator grouping and floating-point host call types. Boolean and
float-literal fixtures, remaining architectures and C-kernel VM integration
remain gates. Source-built Sleet renders in diagnostic VMs on all four CPUs. The IA32
BIOS run uses relative PS/2 input. ARM32 live window records confirm the
1040-by-680 surface and menu strings before its delayed first visible frame;
the reference-kernel control renders earlier. Other reference payloads remain
in these images. Launch timing and release parity remain gates; no tag is claimed.

The Stage4 modules for all four CPUs also build from recovered C. Initialization and 52
monitor command workflows per CPU match the reference, including actual stored-variable
output, conditional/loop execution, save/load and interface return values.
Private aggregate printing is expressed through C object pointers; public
module dispatch remains unchanged. Module lifecycle and kernel integration remain
in progress.
