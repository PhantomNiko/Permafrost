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

Component work stays in sibling repositories. Amur checkpoint `fc368ce` builds
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

The WinterShell modules for all four CPUs now have C checkpoints. Twenty-eight statement
workflows and 331 direct lexer cases per CPU match the reference; seven additional
x64 public dispatch records match the
reference module against a reference kernel host. Repairs retain the native
public three-argument boundary, boolean string-builder results, integer prefix
contents, operator grouping and floating-point host call types. Boolean and
float-literal fixtures and full C-kernel VM integration
remain gates. Source-built Sleet renders in diagnostic VMs on all four CPUs. The IA32
BIOS run uses relative PS/2 input. ARM32 live window records confirm the
1040-by-680 surface and menu strings before its delayed first visible frame;
the reference-kernel control renders earlier. Other reference payloads remain
in these images. Launch timing and release parity remain gates; no tag is claimed.

The Stage4 modules for all four CPUs also build from recovered C. Initialization and 68
monitor command workflows per CPU match the reference, including actual stored-variable
output, conditional/loop execution, save/load and interface return values.
Private aggregate printing is expressed through C object pointers; public
module dispatch remains unchanged. Module lifecycle and kernel integration remain
in progress.

The extended monitor matrix also covers signed floor division and modulo,
larger integer values, monitor views, command repeat and missing input files.

Amur additionally passes twenty expression workflows per compiler host, including
execution of the emitted programs on every target CPU. Constant folding differs
for some expressions: runtime arithmetic produces the same tested results. The
comparison also retains the reference rejection of integer division in that
fixture. Broader language and compiler VM integration remain gates.

Private host analysis can resolve constant format pointers through bounded
ARM32 literal pools and can target selected functions with a longer decompiler
timeout. Current ARM32 WinterShell analysis resolves 106 constant-format calls;
its large builtin dispatcher is included in the ARM32 C checkpoint.

ARM64 WinterShell provider cleanup now matches native ownership for launch
arguments, scopes and frames. A C aggregate-return wrapper preserves the
provider null-value ABI. The C-kernel diagnostic with C WinterShell and Stage4
reaches Sleet's window and event loop; other reference payloads remain. Multiline
expression collection also retains token insertion results and passes two
controlled theme-file workflows. These checks do not establish release parity.

ARM32 WinterShell additionally matches two multiline theme-file workflows and
strict constructor, launch-vector and frame ownership checks. Float arithmetic
and formatting use typed C host callbacks; integer remainder is recovered in C.
The file fixture starts before deliberate error cases so existing reference
console errors cannot contaminate its success result. Integrated VM validation
and broader language coverage remain release gates.

The ARM32 C-kernel diagnostic now starts the desktop and Sleet with C WinterShell
and Stage4. Eight cached PC-relative host expressions were corrected after a
driver-package loading fault; the reference host global is selected from its
proved literal/PC pair rather than a temporary reused in another branch.

Expanded WinterShell checks cover boolean and theme assignments on every CPU.
The x64 suite now uses public dispatch for statements and also verifies owned
frames and multiline files. Scoped assignment and token insertion forward their
native boolean results in C, eliminating false allocation errors. The x64 suite
passes 36 commands, two files, 331 lexer cases and seven dispatch boundary cases.
VM integration checks and the remaining source inventory are still in progress.

IA32 WinterShell now also passes two multiline files and strict constructor,
launch-vector and local/decay-frame ownership checks. Its token insertion
forwards the reference boolean result in C. All four module suites include 36
statement workflows; the full release VM gates remain open.

All four diagnostic VMs reach Sleet with the C kernel and C WinterShell/Stage4
modules, including the IA32 BIOS/PS2 run. These are integration checkpoints,
not source-only release images; other native payloads remain in the diagnostics.

Zastruga Engine checkpoint `82d2ca6` builds 3,058 recovered x64 functions from C
in its sibling repository. Its guarded fixture matches 138 captured-object
payloads and all associated vtable targets. Clone pointer results and explicit
object receivers are preserved. Full startup, exception handling, rendering and
the other CPUs remain recovery gates. A bounded switch-analysis helper exposes
reviewed signed relative targets without copying executable code into C data.
Selected translation retains the full declaration map while updating only
requested units, so dependency functions remain code references.

The x64 and ARM64 C-kernel/module diagnostics also accept keyboard `1+1` and
display `2` in the C terminal. Further CPU runs and broader VM checks continue.

ARM32 also accepts `1+1` and displays `2` in the C terminal with both C
modules. The integrated IA32 keyboard run is still being checked. Its startup
fixture exposed eleven unadjusted call/pop PIC data anchors and lost builtin
boolean results. Restoring those contracts matches 42 commands, including a
protected driver-package call with two assigned results, plus the existing file,
ownership and lexer checks.

Array-valued null comparisons now read the recorded bits instead of a C array
address. Executable checks cover zero, nonzero and high-bit values on both word
sizes and retain pointer-based array stores. Packed-vector regression checks
also pass. These are recovery-tool repairs; full release parity is pending.

The updated IA32 BIOS integration also accepts typed `1+1` and displays `2`.
This completes the four-CPU terminal input checkpoint with C kernel and both
C modules. The release source inventory and complete VM parity remain open.

ARM64 analysis can retain independently typed scalar fields in merged globals.
Typed atomic counters preserve both increment and decrement, including unsigned
wraparound and concurrent updates; the acquisition regression also passes.

The engine now has C build checkpoints for all four CPUs. Basic interpreter
entry comparisons pass on each CPU; x64 with the reference kernel renders the
complete animated No Game scene. All four C engine builds now pass 27 extended interpreter workflows. The x64 C kernel preserves device volume names during validation:
204 parser/lookup/output cases pass and the startup script opens in QEMU.
The x64 Type1 font virtual ABI and floating context views now match 144 font
rasters and 72 metric records. The combined C kernel and C engine draw the
complete animated startup scene. ARM application startup and full release VM
parity remain incomplete.

The decimal parser preserves native double constants, sign bits and byte
whitespace comparisons; 35 values and end-pointer cases match. Type1 operand
decoding matches 246 native encodings. Font cache rotation, teardown and heap
guards pass alongside the Type1 and TrueType pixel comparisons. The optional
`tests/kernel_font.py --type1-image` fixture reads the reference font directly
from the supplied image, without retaining a bundled font copy.

The Type1 font matrix now passes 144 RGBA and 72 metric comparisons on every
CPU. ARM64 retains raw integer loader records, hidden glyph output and double
interpreter fields. IA32 decimal parsing preserves floating constants and byte
whitespace checks. The combined ARM64 C kernel and C engine now draw the complete
animated startup scene, alongside the existing x64 result. ARM32 font loading,
bitmap wrapping and title blitting reach the visible framebuffer; sustained
particle motion remains under test. These are diagnostic images with other
reference payloads, not complete source-only releases.

Engine checkpoint `58ae462` also restores IA32 file-stat outputs, numeric integer
arguments and owned-image registration. Four file sizes, 23 numeric arguments
and six image/pixel cases match the reference. ARM32 closure-cache initialization
is typed C data and matches three particle-table workflows. The IA32 black
graphics window, remaining payload inventory and complete VM equivalence remain
release gates. The normal builder is still awaiting the completed 1.1 migration.

Engine checkpoint `fe8b8fc` now draws the complete animated startup scene with
the C kernel on all four CPUs. ARM32 table arithmetic retains raw integer
payloads, matching 66 guarded operations and three particle-update workflows.
IA32 preserves native x87 storage and image field types; 160 scalar-math,
23 numeric-argument, 12 blit and 28 conditional workflows match. Its C kernel
also preserves volume labels during prefix validation, matching 204 guarded
lookup/output cases. Sustained scene runs show title text, scrolling mountain
layers and drifting particles. Other reference payloads remain in these
diagnostic images. Remaining libraries, payload recovery, release packaging and
complete source-only VM compatibility still gate the 1.1 tag.

Browser scripting, TLS and audio now have complete C source checkpoints for all
four CPUs. Browser execution, events and buffers match 100 cases per CPU. TLS
matches 85 primitive and 27 initialization/entropy cases, then completes TLS 1.3
handshakes, certificate verification outcomes and encrypted HTTP with an
independent peer. Audio matches 52 generation, mixing and transform cases and
WAV decoding, encoding and file callback checks. Each library also matches
12 heap workflows and 117 allocator forwarding/boundary cases per CPU. These
component checks do not establish complete release VM parity. Piet, the remaining
language runtimes, firmware, image assembly and final SDK validation continue.

Piet now compiles from C on all four CPUs and matches 115 native/source value,
variable and engine-state comparisons per CPU, plus the heap and allocator
matrices above. The recovered holder interface preserves virtual destructor,
clone and invocation operands. IA32 direction tables use typed C constants;
ARM32 retains inline data and its integer-print boundary. Direct state tests use
host oracles for imported stdio/division; complete console behavior remains a
VM release check. The 1.1 string parameter namespace changes on IA32 and x64
are represented by their native exported names.

The fresh ARM64 Lua recovery now builds from C and matches 13 core execution
fixtures, 20 standard-library comparisons, 12 heap workflows and 117 allocator
forwarding cases. It preserves the native structor returns, local-environment
lookup, floating argument registers and iterator register selection. The other
three Lua backends and complete VM error-path compatibility remain unfinished;
this is a component checkpoint and does not promote the release build target.

The fresh x86-64 Lua C backend now passes the same 13 core execution, 20 standard-library, 12 heap and 117 allocator-forwarding cases as ARM64. Recovered floating storage views preserve boxed integer payloads, numeric results and comparison dispatch. The 32-bit runtimes and release-wide VM parity remain incomplete.

The fresh ARM32 Lua C backend also matches 13 core execution fixtures, 20 standard-library cases, 12 heap workflows and 117 allocator-forwarding cases. Source recovery distinguishes C++ floating returns from runtime soft-float helpers and restores callback stack arguments. i386 recovery, exported numeric helper ABI review and complete VM error-path compatibility remain open.

Glacier now compiles from recovered C on i386, x86-64, ARM32 and ARM64, using
the recovered TerrorUI and TLS libraries. Each backend matches 11 native HTTP
URL cases across the complete output buffer; ARM64 also matches eight separate
percent-decoder cases. The other reference builds inline that decoder. Browser
rendering, scripting and encrypted navigation remain VM compatibility gates.

The saved Glacier checkpoints rebuild through the source-only application builder
on all four CPUs. Its x86-64 packed shifts, unsigned saturated subtraction and
minimum-double helpers match 2,048 SSE2 instruction comparisons, including NaNs
and signed zeros. ARM32 Lua additionally matches 18 public numeric constructor
and floating-getter ABI cases. Complete guest rendering and VM parity remain open.

Browser framebuffer checks now match 240 pixel-blending and 260 rectangle-fill
cases per architecture. These cover transparent and opaque colors, offscreen
bounds, zero and negative extents, and clip rectangles. The ARM64 fix preserves
the signed packed-coordinate comparison for translucent fills; i386 now passes
the native raster arguments explicitly. Full page layout and VM interaction
remain pending.

Fresh Lua C backends are now saved for all four architectures. i386 matches the same 13 core, 20 standard-library, 12 heap and 117 allocator-forwarding cases. Its recovery restores private register arguments, bounded conversion/parser branches, native callback arguments and immutable PC-relative data references. Complete VM callback and error-path compatibility remain release gates.

Recovery layouts can share identical ordered replacement tables through named
`source_replacement_groups`. The compaction tool preserves every function's
replacement sequence exactly; the four browser layouts shrink from about
133 MB to 25 MB without changing generated code or requiring reference binaries
for normal source builds.

ARM64 Glacier now matches eight native HTML preparation/layout workflows:
paragraphs, headings, inline emphasis, lists, Unicode/entities, inline styles,
tables and form controls. Comparisons include text buffers, layout counters and
ordering arrays. Image cleanup also covers null, empty, owned and repeated
cleanup through imported function pointers. Recovery preserves boxed JavaScript
returns, font cursor initialization and native variadic stack arguments. Full
page rendering, navigation and scripting in a booted VM remain release gates.

The fresh ARM64 Rwby backend builds from recovered C and matches all 20 core
execution fixtures, 20 serialized-bytecode comparisons, 12 heap workflows and
117 allocator-forwarding checks. Constructor state and allocation counts also
match under poisoned memory. Recovery restores map/string owner returns and
the unsigned token range used by indexed assignment. Other architectures,
full callback/exception behavior and booted VM integration remain unfinished.

The fresh x64 Rwby backend builds from recovered C and matches all 20 core
execution fixtures, 20 serialized-bytecode comparisons, 12 heap workflows and
117 allocator-forwarding checks. Recovery restores instruction/argument byte
offsets, floating storage and the finite-classifier register contract. Its
UTF-8 callback matches 238 native boundary and malformed-byte cases. The two
remaining architectures, full callback/exception behavior and booted VM
integration remain unfinished.

The fresh ARM64 standalone WinterScript runtime builds from recovered C and
matches 18 execution fixtures, 12 heap workflows and 117 allocator checks.
Recovery restores structor/string-search returns, preserves the token-vector
base while iterating, and reconnects outlined expression-cursor updates. The
other three architectures, complete callback/exception behavior and booted VM
integration remain release gates.

The fresh ARM32 Rwby backend builds from recovered C and matches all 20 core
execution fixtures, 20 serialized-bytecode comparisons, 12 heap workflows and
117 allocator-forwarding checks. Constructor state and allocation counts also
match under poisoned memory. Recovery restores map/string owner returns and
the unsigned token range used by indexed assignment. Its UTF-8 length callback matches 238 native boundary and malformed-byte cases.
The remaining i386 architecture, full callback/exception behavior and booted VM integration remain unfinished.

The x64 standalone WinterScript backend now builds from recovered C and matches
18 execution fixtures, 12 heap workflows and 117 allocator forwarding cases.
Recovery restores bounded variant dispatch, preserves release-owner arguments,
keeps the operator classifier's full enum return, and passes float literal bits
through the optimized parser helper ABI. ARM32/i386 recovery, complete exception
and callback compatibility, and booted VM integration remain release gates.

The i386 Rwby backend now builds from C and matches 20 execution fixtures,
20 exact bytecode comparisons, 238 UTF-8 cases, 12 heap workflows and 117
allocator forwarding checks. Recovery restores private register arguments,
bounded compiler/interpreter variant dispatch, integer payload bits, x87
division guards and explicit callback invocation arguments. Rwby now has C
checkpoints on all four architectures; full external callback/exception ABI
compatibility and booted VM integration remain release gates.

The ARM32 standalone WinterScript backend now builds from C and matches all 18
execution fixtures, 32 scalar conversion cases, 12 heap workflows and 117
allocator forwarding cases. Recovery restores operator and parser node-index
returns, decimal conversion words, the parser's hard-float S0 argument, and
scalar payload bit views. The i386 backend, complete exception/callback
compatibility and booted VM integration remain unfinished.

The x64 Lua command wrapper now builds from recovered C and links the recovered
Lua library. Eight native/source cases cover argument guards, case-insensitive
flags, repeated-flag precedence, unknown arguments and a long option value.
Script-file execution, the REPL, other architectures and VM integration remain
unverified; this checkpoint does not establish release compatibility.

Lua command argument parsing now has recovered C checkpoints on all four
architectures. Each backend matches eight guarded native argument cases. ARM32
restores PC-relative literal views; ARM64 restores hidden-result register
contracts and the string-find/allocation return values. Script-file execution,
REPL behavior, full import ABI compatibility and booted VM integration remain
unverified and are required before release promotion.

The ARM64 Lua command uses C aggregate-return adapters for the native X8
result convention. Five workflows compare script execution and numeric string
conversion with the native Lua library, guarding all 80 result bytes and all
24 string bytes. Exception-driven Lua returns need booted VM comparison: both native and source
libraries fail those paths in isolated execution. Full command/VM behavior
remains a release gate.

The i386 standalone WinterScript backend now builds from recovered C and matches
18 execution fixtures, 12 heap workflows and 117 allocator forwarding cases.
Recovery restores parser node-index returns, raw stack-word views, bounded
interpreter/result dispatch and native VM parameter spills. All four standalone
runtime backends now have core execution checkpoints. Full callback/exception
compatibility and booted VM behavior remain incomplete release gates.

The i386 Lua formatter now preserves the native signed 64-bit numeric
conversion before unsigned compensation, fixing the observed 2.5 to 3.500000
mismatch. The rebuilt source library retains its 13 execution and 20 standard
library comparisons and matches five guarded command result workflows.

Lua command result adapters now cover i386's aggregate callee cleanup as well
as ARM64's X8 convention. Both match five guarded native result workflows.
All four saved commands also match four missing-file/empty-script workflows.
The option tests now use the reference's actual Monitor option; interactive
startup, positive file execution and complete exception behavior remain gates.

Expanded ARM64 Lua command recovery retains reviewed import ABIs while restoring
48 calls to nine compiler-outlined sequences inside their original callers.
Six native/source Monitor workflows cover startup, help, input, variable
assignment, printing 42, quit, and disabled/overridden Monitor options. Positive
file execution, error paths and booted VM integration remain unverified.

Lua callback pointers now retain native aggregate-result entry adapters on
i386 and ARM64. Seven guarded native/source vtable calls on each architecture
check nil, integer, float, boolean, string, multiple and empty arguments plus the
hidden-result convention. Core execution and standard-library checks still
pass. These callback entry checks do not establish complete plugin or VM parity.

The six Monitor workflows now match native execution on all four architectures,
including the i386 printing path after its callback arguments and result ABI
were recovered. These are controlled kernel-service comparisons; complete
booted VM parity and the remaining release components are still outstanding.

Rwby and standalone WinterScript commands now have C source checkpoints for all
four architectures. Each command matches six Monitor startup, help, input,
execution and exit workflows, plus five decimal, negative, large-integer and
string output workflows. Saved checkpoints build using C sources and declared
library interfaces. ARM32 unsigned-to-double helpers additionally match 561
native word-ABI cases, including the reference accumulation order. Positive
script files, full exception/callback interoperability and booted VM parity
remain release gates.

The standalone monitor now has C source checkpoints on all four architectures.
Each matches 140 guarded hexadecimal-parser cases and nine console workflows
covering invalid input, memory ranges, byte storage, backspace, Escape, and
returning from guest code. Native transcripts normalize the requested Permafrost
display-name change. These controlled kernel-service checks do not establish
full booted release parity.

PFZ1 now has independently built C command checkpoints for all four architectures.
Each matches 15 guarded argument workflows and 17 file workflows covering exact
archive bytes, extraction, empty files, missing inputs, existing destinations,
corrupt checksums and truncated formats. The separately callable codec also
matches 37 guarded cases on i386, x64 and ARM32; ARM64's inlined codec is exercised
through the command. Directory traversal, alternate filesystem services, remaining
allocation failures and booted VM integration remain unverified.

Fontgen now has independently built C command checkpoints on all four
architectures. Native comparisons cover 47 numeric inputs, 84 geometry cases,
16 pixel/buffer workflows, 40 guarded output-path cases and eight interactive
workflows. Interactive tests compare WBF bytes and console output through
controlled PNG and filesystem services, including cancellation, invalid input,
decode failures and write failures. Complete service-error coverage and booted
PNG/filesystem integration remain release gates.

SSH has an independently built x64 C command checkpoint. Thirty-nine guarded
comparisons cover HMAC-SHA256, HMAC-SHA512, ChaCha20, X25519 and packet checksums.
Three controlled host workflows match native host-key fingerprints, unavailable
adapters, startup and Escape shutdown. Timestamp inputs are held equal for key
comparisons. Other architecture checkpoints, authenticated sessions, complete
configuration/key-file workflows and booted VM integration remain incomplete.

SSH checkpoints now cover independently built C sources on all four CPUs. Each
passes 42 HMAC, ChaCha20, X25519 and checksum comparisons, 50 guarded field and
Edwards comparisons, and three host startup/shutdown workflows. Host comparisons
include deterministic fingerprints, missing adapters, console output, exact
startup DHCP frames and Escape shutdown. ARM32 and i386 field arithmetic uses
explicit C convolution, carries and the recovered clamped ladder. Numeric curve
constants remain numeric during relocation; the native test fixture restricts
its vtable adjustment to the C++ VM commands. Saved PFZ1 and fontgen checks still
pass on every CPU. Authenticated sessions, complete configuration/key-file
handling and booted SSH integration remain release gates.

The 1.1 virtio GPU driver now has independently built C checkpoints on all four
architectures. Each matches the descriptor and seven guarded API cases, eight
PCI record cases, and 50 BAR mapping workflows, including configuration rereads,
64-bit BARs, unavailable mapping services, and untouched output guards. ARM64
also matches 216 MMIO, DMA, barrier, and unavailable-service cases. Queue setup,
GPU commands, presentation, and booted rendering remain incomplete.

The four GPU C checkpoints also match 17 guarded software-provider command and
raster workflows each, covering clear, clipped rectangles, triangles, degenerate
geometry, and invalid surfaces. The i386 surface, pixel, and edge helpers now
carry their recovered register arguments explicitly in C. These callback tests
do not establish device initialization or booted presentation parity.
