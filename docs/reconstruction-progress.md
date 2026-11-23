# Permafrost 1.0 recovery record

The recovered sources have been promoted into the active source tree. These
chronological working notes record comparisons and repairs; later entries
supersede earlier descriptions of incomplete work. See release.md for the
current validation status.


These are working C replacements, ABI hints and firmware changes for the next
milestone. They preserve the recovery work before it replaces the active source
tree. They are not an additional build target or a completed release.

`reference.json` identifies the input image and intended version. The queued
release order is 1.1, 1.2 and 1.3. The supplied 1.3r411 Polynya, minimal,
installer and architecture-specific minimal images are future analysis inputs;
they do not change the current 1.0 recovery target or create build targets. The kernel
directories contain decompiler signature corrections, source replacements and
explicit C implementations. The firmware directory contains the current shared
EFI loader work. The repository license applies throughout.

The library directories contain candidate C implementations, initialized data
and export/relocation metadata. All four PNG slices pass the decoding corpus and reader/writer checks for
the reference's four supported formats. ARM32 also cross-decodes both native
and source output. The retained window
slices pass creation, title, size, query-record, numeric and math comparisons
on all four architectures. These checks
do not establish release-wide VM equivalence. The retained C font candidates
pass the raster, numeric and new math ABI corpora on all four architectures;
ARM64 shared-service addresses have been moved to the current kernel base. ARM32's `missing-inputs.txt`
records functions reviewed through the incoming-register recovery pass before
export; obsolete manual units for those functions have been removed.

The audio candidates pass 52 native/source generation, mixing, trim, pitch, speed and
invalid-input comparisons on each architecture. WAV conversion, malformed input,
saving and cross-decoding also match, as do saved context buffers and register
restoration. The ARM32 tests use Darwin's four-byte argument alignment for
64-bit values. Release-wide VM behavior still needs validation.

The retained Lua C core is adapted to the current exports and ARM64 service
base. Each architecture passes 13 script fixtures, eight clock/counter checks,
46 numeric ABI checks and 63 math checks. The exported chrono counter is separate
from the private `clock()` counter. This corpus does not cover all language
behavior: function declarations still fail to complete in the reference probe,
and broader application and VM comparisons remain outstanding.

The JavaScript candidates compile entirely from C on all four architectures.
Each passes 100 comparisons of basic execution, DOM output, browser events,
navigation, value lookup, URL encoding, templates and buffer boundaries, plus
the numeric, math and context ABI corpora. The event harness includes arguments
spilled to the stack, including Darwin ARM64's mixed pointer/integer layout.

All six candidate libraries also pass native/source saved-context and scope
unwind checks on every architecture. The retained Lua, font and window context
primitives now restore the full native register sets; the shared scope-unwind
entry restores the saved stack and frame before transferring control. These
entry points use the required architecture instructions in C translation units.

The TLS candidates are also entirely C on all four architectures. Each passes
85 independent hash, key-derivation, stream-cipher, curve and authentication-tag
checks, 27 initialization/date/entropy scenarios with repeated state transitions,
and the numeric, math and context ABI corpora. Native and source clients complete
TLS 1.3 handshakes, certificate-digest and verifier-callback checks, and encrypted
HTTP exchanges with an independent in-memory OpenSSL server. These tests require
PyOpenSSL and cryptography as host test dependencies; neither is linked into the
guest library. ARM64 also passes with only the current shared-service base mapped.

TLS field arithmetic, ChaCha blocks and Poly1305 padding use explicit portable C
implementations validated against the reference. Obsolete private field-helper
units are removed from the candidate after their callers move to that C core.
ARM32 additionally corrects an implicit argument in the program-memory release
wrapper and a certificate-data offset that generic decompilation lost on one
length branch. Known ABI declarations can now be excluded from speculative
incoming-register recovery.

The TerrorUI candidates compile from C on all four architectures. Each passes
332 value-constructor/modifier cases, 273 recursive layout cases with 127 text
service calls, and 182 window/input operations with 294 service calls. The latter
checks compare rendered pixels, text alpha blending, stack layout, button
callbacks, appearance settings, cached queries, application-loop termination,
and unavailable services. The numeric, math and saved-context corpora also pass.

Explicit C value types preserve each native aggregate ABI. Typed service wrappers
preserve arguments lost by indirect tail-call decompilation. Pointer events
retain the fifth flags argument, and input tests use the kernel's actual
28-byte pointer-state field order. The i386 query path
retains the original cached record across temporary reuse. ARM32 reconstructs
repeated RGBA vectors instead of reading Ghidra register-space addresses as RAM.
ARM64 restores hash return values and text-image field loads omitted by analysis.
These library-level checks still need integration into the source-built VM image.

The current console-window implementation is recovered afresh on all four
architectures. Its retained predecessor failed window creation under poisoned
allocation checks. The replacements pass 78 offscreen-raster, framebuffer,
resizing, title, mouse and keyboard comparisons per architecture, including
framebuffer row padding and boundary guards. Numeric, math and context checks
also pass. Raster composition and framebuffer presentation use portable C.
ARM64 explicitly preserves the string allocator's pointer return and all four
signed min/max lanes when resizing. Direct framebuffer comparison includes the
software cursor rather than relying only on offscreen captures.

The current Piet candidates compile from C on all four architectures and pass
115 value, variable, cursor, bounded-execution and installed-builtin comparisons
per architecture. All 22 installed builtins are invoked through their virtual
function tables. Numeric, math and context checks pass too. ARM64 aggregate
exports use X8 adapters; i386 aggregate exports pop the hidden result pointer,
which the comparison test checks explicitly. Virtual clone/destructor calls
retain their object arguments, and ARM64 vector moves preserve the returned
destination pointer. The x86-64 jump-coordinate clamp uses an explicitly signed
minimum value. These cases do not yet establish complete image-program or VM
compatibility.

The current Rwby candidates compile from C on all four architectures. Each
passes 20 native/source script-execution comparisons and 20 bytecode
serialization comparisons, including 64-bit integers, decimal arithmetic,
branches, array reads and writes, UTF-8 length, nested calls and recursion.
Numeric, math and saved-context checks also pass on every architecture.
Explicit value copies preserve integer and floating payload bits. Recovered
switches use C control flow, and builtin calls retain their full virtual-call
arguments. UTF-8 counting uses a scalar C implementation. ARM64 constructors
preserve destination returns needed by map and vector initialization.
These successful-script cases do not establish exception-path or complete VM
compatibility; those remain release gates alongside the standalone runtime.

The four standalone WinterScript architecture checkpoints build from C and pass 18
native/source execution comparisons, covering arithmetic, branching, loops,
recursive and nested function calls, array indexing and updates, floating
arithmetic, decimal literals and string comparison. Each also passes 46 numeric-helper and 63 math comparisons,
plus native saved-buffer, register-restoration and scope-unwind context checks.
Recovered token iteration preserves the owning vector, assignment parsing uses
the initialized cursor, and floating results retain their native return ABI.
ARM32 static-data references resolve against module state, and its floating
helpers preserve the distinct integer-register and VFP return conventions.
Exception paths and complete VM behavior remain unfinished; this is an implementation checkpoint, not a release tag.

The untouched x86-64 reference reaches its desktop under QEMU. The BIOS
reference reaches the Batagaika first-boot setup. With the current virtio-ramfb
configuration, the ARM32 reference leaves the handoff screen visible while
debugger sampling finds the kernel executing its formatter. ARM64 faults
when the VM provides GICv2: its IRQ entry reads the GICv3 ICC_IAR1_EL1 register.
A GICv3 reference run avoids that exception but still stalls on a blue screen
amid timer interrupts. Debugger inspection finds a zero timer interval while
the virtual timer remains enabled. A diagnostic run that sets that interval
to 62,500 ticks (one millisecond at the reported frequency) reaches the desktop.
That run changes guest RAM and is not an untouched-reference boot result.
The recovered IRQ already disables the virtual timer when its interval is
zero; its full startup and scheduling behavior still needs VM comparison.
The architectural debugger registers and framebuffer observations remain local
diagnostics; ARM VM compatibility is still unfinished.

Desktop integration diagnostics replace eleven reference DLLs with the recovered
C libraries, including TerrorUI, while retaining the reference kernel,
applications, drivers and standalone runtime. The x86-64 diagnostic reaches the
desktop. ARM64 also reaches the desktop with the GICv3 and guest-RAM timer
adjustment described above. ARM32 still displays the handoff screen, although reading its framebuffer
from guest RAM reveals a rendered desktop; presentation remains unresolved.
BIOS i386
reaches Batagaika first-boot setup. An additional C guest program links against the recovered TerrorUI DLL and
launches beside the reference desktop compositor. On x86-64 its text, rectangle
and button render, and a pointer click changes the rectangle colour through the
C callback. ARM64 also launches and renders this program with the timer
adjustment above. The same fixture compiles and links for all four targets;
ARM32 and BIOS i386 interactive display checks remain unfinished. These mixed
diagnostic disks still retain reference components and are not release images.
The reusable guest fixture is `tests/ui_guest.c`, built with
`tests/ui_guest.py` and source-only DLL export stubs in `tools/darwin.py`.

The 3D demo now has common C application and rendering source under
`applications/cube`. Four-architecture comparisons cover a full 64-frame
rotation cycle with CPU rendering, GPU command submission and failed-GPU
fallback, plus window and keyboard exit/failure paths. Its CPU rasterizer also
matches 12 clipping, winding and degenerate-triangle fixtures on every CPU.
The source demo opens and animates in the x86-64 desktop diagnostic. Remaining
GUI applications, drivers and the third-party boot payload are still unfinished.

The WFE5 source firmware now uses the recovered kernel's command offsets:
wait duration at word seven, video dimensions at words eight and nine, and
video response fields beginning at word twelve. A mock-UEFI fixture checks
wait dispatch, mode selection and the complete framebuffer response. The
firmware compiles for all four CPUs through the diagnostic `--source` option
in `tools/uefi_portable.py`. An ARM32 mixed diagnostic with this C firmware
presents the desktop through GOP.Blt on virtio-ramfb. Its desktop occupies
part of the initial GOP mode, the reference clock text is still corrupt, and
interactive ARM32 pointer delivery remains unresolved. The reference firmware
and source-firmware observations are distinct; the complete source-kernel VM
checks remain unfinished.

A further ARM32 diagnostic combines the recovered kernel, C firmware and twelve
source libraries and reaches the desktop while retaining reference programs
and drivers. Logging now prints the actual driver and program names: ARM32 and
ARM64 variadic console wrappers consume the caller's `va_list`, and ARM32 script
error and scheduler logging do the same. i386 console logging strips carriage
returns like the reference. Four-architecture native comparisons check register
arguments, stack spills, numeric formatting and line splitting. The source
ARM32 desktop image rendering is now restored by the codec integration described
below. Pointer input still needs investigation. This does not establish complete
source-image equivalence.

The four-architecture Activity Monitor is now recovered C under
`applications/activity-monitor`. Its initialized data relocates seven static
column-label pointers from the original fixed-address executable. Comparisons
through the recovered TerrorUI DLL check live system, process and disk samples,
window calls, all seven headings and glyph pixels with partial alpha. The source
application also opens and updates in the mixed x86-64 desktop diagnostic.
Full-height pointer-driven comparisons cover the memory, disk-activity,
disk-usage and network tabs across the four CPUs. ARM32 preserves both size
format branches' packed variadic words, i386 recovers fixed-address data and
its tab switch, and ARM64 expands machine-outlined sequences. Interactive VM
checks on the other CPUs and complete source-image integration remain pending.

The Cancer terminal has four C source builds under `applications/terminal`.
The controlled comparison checks command-worker output, keyboard input,
partial-alpha text and resized frames through the same source TerrorUI library.
Its i386 parser now uses decoded C switches rather than native jump addresses;
ARM64 resolves its indirect memory-clear import to C. File commands, clipboard
interaction and complete VM integration remain unfinished.
The terminal now refreshes inactive cached window information so a newly
activated window can receive keys. All four source builds pass delayed-focus
regressions and preserve native behavior for an already-active window. An x64
VM diagnostic with the C kernel and libraries executes `2+3` and displays `5`.
The x64 public keyboard callback now has the SDK's explicit 32-bit return
contract. Its oracle covers twenty-two make/break and modifier scancodes plus
eight active-window, child-process and modifier-routing cases. Scalar and
statement comparisons still pass. The clean VM input check waits for the
window's active flag before sending keys; fixed-delay input injection was
inconsistent and does not establish interactive performance or full VM parity.
The additional scancodes exercise extended Command prefixes, Command-C,
Control-C, and modifier release through the actual platform decoder.

TextEditor now has C source builds for all four architectures under
`applications/text-editor`. Native comparisons cover typed text, resized frames,
Command-based selection/copy/paste, and exact bytes saved through the File menu.
Its x64 window-spec transport preserves the full title/size prefix, ARM32
preserves the cursor-column store, and ARM64 resolves its indirect clear import
to C. The shared `applications/window_focus.h` helper refreshes inactive window
information in the terminal and every loop in the editor. The editor's active
cache could otherwise hide menu and close notifications until another frame.
All four editor builds pass source-only idle-menu regressions without fixture
cache invalidation. Native algorithm/pixel comparisons explicitly supply fresh
records on both sides. An x64 VM types Hello and reports Saved - TextEditor.txt
after File / Save with the current C firmware. Persistent disk bytes, broader
editor VM checks, and complete source images remain unfinished.

Tundra now has C desktop builds for all four CPUs under `applications/desktop`.
An x64 diagnostic boots the C desktop and launches the C editor. Calendar
comparisons cover 590 cases on each x86 CPU, 510 on ARM32 and 80 on ARM64.
i386 recovers fixed-address switch bodies and private register contracts;
ARM64 expands outlined sequences and resolves indirect imports to C.
Desktop VM parity on ARM, broader desktop behavior and complete source-image
integration remain unfinished. This checkpoint does not advance the release.
Desktop directory and framebuffer comparisons now pass on all four CPUs.
ARM32 preserves the device-specific listing call's fifth stack argument,
restoring the entry-count pointer. ARM64 widens the framebuffer format mask
before shifting by 32. The C ARM32 desktop also renders the weekday correctly;
updated live ARM input and listing checks are still in progress.
ARM32 now shows directory entries in its C desktop VM. ARM64 also reaches the
C desktop after restoring the configuration unquoting helper's string return
and its callers. Configuration string comparisons pass on all four CPUs.
The ARM64 clock's two-word rectangle return is restored and passes 32 native
placement/clipping comparisons; its updated VM rendering is being checked.
The updated ARM64 VM now renders the menu clock at the right edge. ARM pointer
input and wallpaper scaling still differ from the required behavior.

`tests/guest_storage_probe.c` builds against the recovered SDK for all four CPUs
with `tests/build_guest_storage.py`. It is intended only for disposable VM disks:
it writes `/Permafrost-persistence.txt`, reads the bytes back, and reports errors.
An ARM32 run succeeds, and inspection after VM shutdown confirms the exact
payload in the user partition. The x64 diagnostic exits unsuccessfully and
does not create the file. ARM64 reports `FAT metadata flush failed`; its public
write callback is present, so persistence remains a kernel/filesystem recovery
gap. i386 has a compile check only. These results do not establish complete
storage or SDK compatibility and do not produce a release bundle.

Kernel statement comparisons now cover assignment, returned arithmetic,
compound assignment, conditional returns, indexed arrays and numeric loops on
all four CPUs. Three x86-64 return paths previously converted a temporary array
into its address instead of copying its first eight value bytes. The recovered
store now copies those bytes, preserving the returned value's tag and payload.
`tests/kernel_statements.py` checks the result, error flag, statement position,
control-flow state and scalar value bytes against the native kernel. These
isolated checks do not establish startup-script file or complete VM parity.

The kernel builders now select image codec C source with the profile's
`image_source` field and reject a codec with a different architecture or release
version. The 1.0 kernel profiles use `libraries/png/ARCH`.
Previously they silently embedded the canonical predecessor codec. With the
current codec, all four kernels match native decoding of BMP, PNG, TGA and XCF
fixtures plus the real interlaced AppIcon and Navigator images. Six statement
comparisons still pass on each CPU. The ARM32 VM now renders wallpaper, icons
and readable clock text. Input integration remains unfinished.

Private codec headers are embedded with their allocator helpers routed through
the kernel allocator bridge. Relocations accept both address-key styles and
preserve pointer tags. The i386 PNG checkpoint now includes its retained portable
C decoder header, so a clean build does not depend on a stale output directory.

The C firmware now publishes WFE5 pointer protocol counts and both handle
arrays. The legacy arrays use 32-bit slots at offsets `0x1360` and `0x1380`;
the full-width arrays use 64-bit slots at `0x13a0` and `0x13e0`. Reference
ARM64 firmware recovery confirms both representations. The host fixture
checks repeated discovery, unused slots and high pointers without truncation.
All four firmware builds pass. A live ARM32 diagnostic discovers one relative
and one absolute device and exposes their records in the context. Pointer-driven
application launching still fails in the ARM diagnostics and remains unfinished.

Firmware command 7 now writes relative movement to the pointer ABI's `dx/dy`
words rather than its absolute `x/y` words. When a tablet exposes both protocols,
a zero-motion relative packet no longer hides its absolute position. The host
bridge fixture checks relative motion, mixed-protocol tablet movement, button
merging and release, alongside the existing mode and handoff checks. Updated
firmware builds for all four architectures; live ARM input verification is
still in progress.

Pointer polling now checks a protocol's wait event when its first state read
reports no packet, then retries only when the event is ready. ARM32's kernel
fallback also passes the event argument explicitly. This follows the
[UEFI CheckEvent contract](https://uefi.org/specs/UEFI/2.10/07_Services_Boot_Services.html#efi-boot-services-checkevent)
and does not block waiting for input. Host firmware cases cover deferred
relative and absolute packets; the ARM32 oracle checks native ready-packet
parity, deferred packets, absent events and nonblocking not-ready results.
Scalar and statement comparisons continue to pass on ARM32.

GPT filesystem updates now preserve the existing BIOS boot area, firmware
partitions and partition tables. Previously, repacking rebuilt a two-partition
GPT container and discarded the other boot components. A regression fixture
checks the surrounding bytes, and the repaired BIOS diagnostic reaches setup.
A new x86-64 diagnostic with the corrected C kernel and twelve C libraries
reaches the desktop, including wallpaper, icons, windows and the live clock.
The disk's kernel payload and its guest-memory entry stub match the rebuilt
C kernel. Earlier source-kernel startup-script failure is no longer observed
in this integration build. It still retains reference programs and drivers.

The ARM64 C kernel also reaches the desktop with the current C firmware,
twelve C libraries and GICv3. This run does not modify the timer interval in
guest RAM. Wallpaper, icons and window surfaces render. Its epoch-based date
reflects the reference ARM64 platform RTC stub, which clears the time record
and returns unavailable. The current ARM32 C firmware/kernel diagnostic now renders images and readable
clock text with the current codec. The firmware USB I/O tablet transport and
explicit input-ownership extension now let both ARM diagnostics open the C
terminal and accept keyboard input without resetting firmware's USB controller.
ARM32 also preserves the keyboard and idle bridge request pointers and evaluates
`2+3` as `5`. ARM64 now also renders the result as `5`: its integer and pointer
formatting paths preserve argument bits instead of converting through floating
point. Thirteen owned-string comparisons cover signed boundaries, floats,
booleans, pointer values, and the empty value. Wider interpreter compatibility
remains open. The ARM32 firmware now selects its full 1280 by 800 virtio GOP
surface instead of an 800 by 600 console wrapper. Mode changes retain the
selected output and reject unsupported exact requests. The display no longer
leaves a stale firmware area beside the desktop. The source kernel now submits clipped presentation rectangles through an
optional firmware service, retaining automatic presentation for older kernels.
Direct QEMU boot-keyboard reports replace the firmware typematic queue on ARM;
held-key repeat uses elapsed counter time. The firmware keyboard driver is
stopped before its subscription is replaced. ARM32 firmware compilation reserves
`r9`, which Darwin otherwise treats as scratch while UEFI callbacks require it
to survive. A register-preservation regression test catches the former fault.
Both ARM VM diagnostics now enter `2+3`, `7*4`, and `9-6` with results `5`, `28`,
and `3`, without duplicate characters or the prior callback memory fault. These runs use the recovered C graphics module
with other reference drivers and programs still present.
These observations do not establish complete source-image VM equivalence.

Glacier now has C application checkpoints for all four CPUs. Each links the
recovered TerrorUI, WinterJS, and WinterTLS interfaces without using a reference
application as a build input. Nineteen URL parsing and percent-decoding
comparisons pass on each architecture; the i386 comparison preserves the
native private register calling convention. These checks cover URL handling,
while browser rendering, networking, script integration, and VM parity remain
release gates.

The installer now has four source-only C checkpoints. Shared recovered
device-list and installation-command operations pass 95 native comparisons per
CPU, covering all five boot formats and fifteen target choices, device limits,
signed integer bounds, and multiline success/failure messages. These operations
replace decompiler errors in fixed addresses, vectorized device parsing, and
stack-backed status preservation. Full installer GUI and disk-installation VM
checks remain pending.

Tayga startup now has C checkpoints for all four CPUs, with local memory and
compiler support and no guest DLL or hosted-runtime dependency. Thirty-six
variadic formatting comparisons and forty-four configuration comparisons pass
per CPU. Four startup scenarios per CPU compare device selection, configuration
fallback, process registration, logging, and the first scheduler yield. The
formatter preserves integer and pointer bits, handles native length modifiers,
and uses C variadic argument transport. Full VM startup, utility recovery, and
wider runtime compatibility remain pending.

All twenty-four Tayga command launchers now build from one shared C source
and a tool-name manifest, without guest DLL dependencies or reference build
inputs. Fifty-eight native forwarding and output-routing comparisons pass per
CPU, including process command-line selection, failures, stream output, and
line-based log fallback. The kernel still supplies the command implementations;
these checks verify the recovered launcher contract rather than all utility
semantics.

The C Glacier browser now opens and renders its initial page in both ARM VM
diagnostics alongside the C Tayga startup. ARM64 page-element drawing recovers
the native eight-way branch table as C control flow. Its old lazy-import data
now points to linked C interfaces rather than cleared native stub storage.
Thirty-two native framebuffer comparisons cover element types, clipped and
fixed-position elements, and visible control pixels. Network, scripting, and
wider browser interaction checks remain pending.

Storage rescanning now preserves mounted filesystems for drive numbers with
the high bit set. The reconstruction compared an unsigned drive byte with a
signed `char`, so a rescan lost mounted-volume types and the scheduler discarded
applications whose device context could no longer be restored. All four kernel
corrections use the native unsigned-byte comparison. Three ARM64 native rescan
comparisons cover mounted types and remapped current-device IDs. All four C
kernels rebuild, and both ARM installer VM diagnostics now render their forms
without losing the desktop or application context after scanning storage.

Diagnostic snapshots and VM disks remain outside tracked source. The normal
build continues to use the last completed source tree until the next milestone
passes its complete source build and VM comparisons. That transition must move
the reviewed implementation into the normal kernel, library, application and SDK
directories and remove this temporary checkpoint. It must not retain another
historical build target.

Snowflake now has candidate C implementations for all four architectures, including
the ARM32 code-generation switches that initially failed automatic analysis.
The candidates pass 30 option-parser and 220 atomic-runtime comparisons per
architecture, plus seven CRT argument/environment comparisons and 140 token/state
comparisons over 28 lexer inputs, including malformed-literal progress behavior. The CRT uses
the guest process-info entry, and static constructor-table pointers are relocated
with the initialized data. These checks do not establish compiler correctness;
All four architectures additionally pass 23 full compilation comparisons through an
in-memory file interface, generating C and executables for the four target
architectures. The corpus covers arithmetic, loops, calls, enums, formatted
output, and process arguments. Their source-only checkpoint builds also pass
the earlier runtime corpora. Native stack-probe helpers preserve compiler
arguments, and function-body bounds survive lexer advancement. Variadic console
output passes eight printf/fprintf comparisons on all four architectures. ARM32 aggregate arguments retain the complete
compiler value, and fixed lookup tables use their recovered constant values.
Generated-program execution,
guest file I/O, and VM compilation remain gates.

WMFS32 compaction on all four architectures now refreshes the mounted geometry
and invalidates its old FAT after a successful write. Native/source comparisons
cover resident and lazy files, metadata, cluster chains, and every file byte.
Repeated lazy reloads preserve file contents. The x64 rewrite also restores
the pointer scale of a merged stack slot used for cluster-count arrays.
A diagnostic installation to a 512 MiB disk preserves both kernel copies and
boots into the desktop with browser graphics. Firmware caches at most 128 MiB
of the boot disk and uses indexed EFI I/O for uncached sectors. These diagnostic
images still contain unrecovered components and are not release artifacts.

Tayga root detection now retries a complete directory listing when the initial
16-entry buffer omits required directories. Seven native comparisons and three
extended-list/allocation-bound cases pass on every architecture. The i386 private
root and environment helpers also receive their original device argument.
ARM64 firmware reserves the legacy ARM API page, and the kernel publishes a
compatibility copy of its service table there. This lets older ARM64 tooling use
its original table address without the allocator overwriting it. In an ARM64 VM,
the source Snowflake compiler reads a C program, writes its executable to the
user-data volume, and runs it with the expected formatted output. The diagnostic
still contains other reference components and is not a release image.

The mounted-directory corpus now compares 32 path, capacity, synthesized-parent,
name, and metadata cases per CPU. ARM32 preserves the 32-bit width of variadic
precision and string arguments when constructing child paths; merged register
pairs previously shifted a pointer into the value 1. A separate fill corpus
checks 2,113 alignment, length, value, boundary, and null-zero cases per CPU for
the C memory-fill routine's aligned word stores.

Process-info serialization now preserves unsigned whitespace comparisons in the
ARM32, i386, and x64 argument counters. The previous C promotions scanned beyond
the command terminator and reported thousands of arguments. Six native process,
command, quoting, argument-count, and complete-record comparisons pass on every
architecture, including the unaffected ARM64 path.


The ARM Tayga output helper and directory-command callers now preserve native
variadic arguments. Each ARM target passes 112 formatted-buffer comparisons and
30 directory-option/path comparisons, including poisoned bytes after a string
terminator. ARM64 also retains 64-bit integer payloads through the kernel's
numeric formatter. Unsigned whitespace predicates are restored in the recovered
32-bit and x64 Tayga command parsers.

The source compiler and SDK runtime now rebase the standard-stream objects,
descriptor slots, and environment vector in fixed-address executable data.
ARM32 and x64 also forward the output buffer for device file reads and the data
pointer/length for writes. All four targets pass native initialized-state checks
and ten read plus ten write boundary comparisons. ARM32 and ARM64 diagnostic VMs
compile and execute the source probe, run the C and C++ SDK samples, and complete
a 26-byte stdio write/read/seek round trip. These remain mixed diagnostic images;
unrecovered components and broader VM parity still block the release.

The i386 scheduler's private space-burst function now receives its native budget
argument, including seven callers that previously discarded it. An idle or busy
scheduler matches eight native budget/lock cases. The missing argument had left
an uninitialized C local and allowed an invalid fall-through in generated code.
The x86 VM command probes are still under verification.


The public x64 Tayga command entry now exposes its native three arguments;
spurious vector-register parameters had shifted SDK calls into unrelated stack
slots. Twenty-four native inactive-subsystem/buffer-boundary comparisons pass.
The x64 VM now accepts directory and compiler commands, but executable lookup
and compiler output remain unresolved. Reversed unsigned whitespace tests are
also preserved, preventing option parsing from advancing past a terminator.

The i386 FAT loader now receives the device record and requested format, and
long-filename fragment handling receives both its destination and directory
entry. A synthetic FAT32 device matches native mounting, nested names, geometry,
sector reads, and lazy file bytes on all four architectures. Damaged signatures
and mismatched filesystem types are rejected. The BIOS diagnostic now mounts the
user-data volume and reaches its application startup attempts; application and
Tayga compatibility remain incomplete.


The i386 Tayga application now preserves unsigned whitespace bounds when parsing
empty configuration values. All four application parsers pass 52 native cases,
including the reference configuration with empty password and username values.
Recovered i386 shell and kernel boundaries also preserve the public launch ABI,
private task-release pointer, and requested program-allocation size. Nineteen
native regression suites cover the resulting path, loader, allocator, bundle,
queue, process, and scheduler behavior.

The i386 FAT mutation helpers now preserve cluster, buffer, length, count, and
output-index arguments. Forty-two native FAT12/16/32 chain comparisons cover
allocation, release, sector payloads, read-only media, and write failures. Full
FAT32 create, overwrite, nested growth, and empty-file operations produce matching
disk contents on all four architectures. The BIOS diagnostic now compiles and
runs the source compiler probe, executes the C and C++ SDK samples with constructor
initialization, and completes the 26-byte file round trip. These diagnostic
results do not yet establish parity for complete source-built release images.

VirtIO RNG drivers now have independent C source checkpoints for all four
architectures. Each checkpoint rebuild passes 16 native descriptor, API,
initialization, PCI-device, multifunction, and registration comparisons.

Embedded Mach distributions are outside the requested reverse engineering scope.
Any retained distribution must keep its applicable third-party license materials.
This exception does not waive source recovery or VM compatibility for Permafrost
components outside that distribution.


The VirtIO network driver now rebuilds from C for all four architectures. Each
independent checkpoint build passes 16 native discovery cases, eight queue
negotiation/DMA cases, and 24 packet-path cases. The packet comparisons include
payload bytes, complete mutable driver state, receive requeueing, hardware
notifications, transmit completion, and timeout behavior. ARM network and RNG
helpers additionally pass 60 DMA service-contract cases per driver and CPU.
The recovery restores ARM32 PC-relative state references, MMIO return values,
x64 queue-register operands, and complete callback arguments. VM integration
with the complete source-built driver set remains a release gate.


The remaining CPU, firmware serial, VirtIO serial, USB storage, HDA/SB16 audio,
generic/Apple platform, and I2C-HID drivers now have C source checkpoints.
All 36 reference-supported architecture slices rebuild independently and match
native basic initialization, registration, API bounds, and failure behavior.
Serial, audio, and platform discovery also compares valid, absent-vendor, and
multifunction PCI cases. The driver manifest records the reference-supported
architectures and shared filenames; Cirrus and VirtIO VGA use the same x86
implementation, while ramfb supplies the ARM implementations. Whole-image VM
integration remains under validation.

The complete current C kernel implementations, initialized data, ABI headers,
and build profiles are now saved beside the reviewed repair units for all four
architectures. Independent builds from these saved sources exactly reproduce
the corresponding current diagnostic kernels. No reference kernel executable
is a build input.

A whole-image candidate now replaces every in-scope kernel, library, application,
driver, command launcher, and SDK runtime with source builds. The embedded Mach
distribution is retained as the explicit recovery exception, with its license
materials. Initial VM runs reach the desktop on ARM32, ARM64, and x86-64. BIOS
application discovery and graphics-mode entry still need correction; this is
not a completed or tagged release.

The i386 desktop now retains its successful graphics startup branch. A second
BIOS fault exposed missing ECX/EDX arguments in the kernel RGBA-copy helper;
the recovered helper and PNG downsampling caller now preserve the pixel pointer
and width. Sixty-six native comparisons cover dimensions, overflow, null
arguments, copied pixels, output guards and allocation failures. Eight desktop
startup comparisons exercise mode failures and valid 16-, 24-, and 32-bit modes.
The subsequent complete BIOS desktop run remains a release gate.

BIOS framebuffer metadata now reports VBE channel bit counts, as required by
the display API, instead of channel masks. The complete source diagnostic shows
the desktop and wallpaper in color. Its storage detector now copies every
native header field and passes the arguments to the private four-byte memory
comparison helper. Previously a valid WMFS32 volume was misclassified as WMFS64,
which prevented fallback access to the firmware application bundle. Sixty-six
native volume-detection cases cover real WMFS32/WMFS64 headers, damaged geometry,
media bounds and read failures; 944 memory-comparison cases cover alignment,
length, equality and unsigned-byte differences.

The i386 startup command path now preserves the private file-lookup argument
and index result. Losing that result incorrectly selected the current-volume
read path and bypassed firmware fallback. Twelve native lookup cases and seven
native fallback/bundle cases pass, including restoration of the selected
filesystem context. The complete BIOS source VM now loads Tayga from its
firmware bundle and then presents the desktop, without copying that bundle to
the user volume. Input and remaining visual compatibility are still under test.

The BIOS pointer-controller PCI helper now retains its private bus/device
arguments and uses 32-bit configuration-port reads and writes. Thirty-six native
configuration cases compare complete records, guard bytes, register selection,
absent vendors and invalid inputs. Its controller discovery caller also matches
all 512 native bus/device/function probes. Real xHCI transfer and input behavior
remain under verification.

The x64 firmware transport now passes its request pointer for pointer polling,
keyboard polling, waits and text output. Firmware-owned USB input bypasses raw
controller probing and inactive raw pointer providers. Sixteen native pointer
transport cases, seven public pointer-cache transitions and thirteen native
keyboard/wait cases pass. The complete source VM moves the pointer, opens the
File menu and closes it with Escape. Desktop application launch is still being
traced; these results do not establish completed release compatibility.

The BIOS USB controller helpers now retain their private register arguments.
HID report decoding, OHCI/UHCI descriptor writes and DMA conversion match 440
native cases. MMIO access retains control-register reads and translation/cache
refreshes: 128 paged mapping cases match the reference, with 80 separate tests
for the C BIOS loader's flat physical address adapter. Present-controller PCI
configuration writes and mapped records also match the reference.

Platform pointer providers now forward the output pointer on every supported
slice: generic hardware on all four architectures, and both MacBook providers
on i386 and x64. Each of the eight slices passes 16 native forwarding and guard
cases. A BIOS VM hardware watchpoint identified the omitted argument as the
cause of a pointer packet overwriting desktop instructions. With the repaired
providers, the full source BIOS VM accepts pointer movement and file selection
and remains running after keyboard input. Application scheduling and the file
window status rendering still require work before the release is complete.

Source x86 process bursts now stop after an elapsed platform clock tick, so
rendering in recovered C does not hold a process burst for thousands of GUI
frames. Native constant-clock dispatch, task cleanup and budget results match
on i386 and x64; deadline tests verify that short bursts release dispatcher
locks. The BIOS staging checksum helper also retains its private process
pointer, with 16 native checksum and corruption cases passing. The x64 source
VM now starts terminal windows promptly. This scheduling adaptation bounds wall
time while preserving the service ABI and maximum requested work count.

Firmware-owned x64 keyboard polling now bypasses raw providers and direct PS/2
reads. Twenty-three native keyboard transport and wait cases pass, including
owned-provider routing. The VM still does not reach the keyboard service from
the terminal polling loop; that application/UI integration remains unresolved.

The x64 mounted-device reuse check now compares the drive identifier as a byte.
Signed promotion previously made drives 0x80 and 0xff appear different from
their existing mounted state, so task switches repeatedly loaded the FAT.
Sixty native cache/reuse and remount cases reproduce the prior mismatch and
pass with the corrected comparison. A longer full source VM run also reached
terminal keyboard polling, entered 2+3 and displayed 5; the normal source build with the mount correction now launches the terminal and
accepts 2+3 with output 5 within the shorter VM check as well.

The BIOS scheduler now preserves the native private CL argument for cooperative
yields and split waits. Seven native public-service cases pass. The flat C BIOS
loader uses a TSC-derived platform clock while interrupts are masked; native
EFI clock deltas remain unchanged. The source BIOS VM passes guest Snowflake
compilation, C and C++ SDK execution, constructor initialization, and a file
write/read round trip. Desktop task dispatch still requires verification.


## Canonical 1.0 source and keyboard recovery

The recovered four-architecture kernels, libraries, drivers, applications and
SDK runtime now occupy the normal source directories. The build replaces the
0.9 target and assembles BIOS and UEFI images without opening a reference disk.
Assets have a checked manifest, and installed source products have provenance
hashes. The embedded Mach distribution remains unchanged with its own notices
and is excluded from source recovery.

The ARM64 editor now returns insertion and selection-deletion results to its
caller. A delayed-input comparison keeps the clock and viewport unchanged,
reproduces the missing redraw with the earlier source, and passes native/source
pixel and event comparisons after the repair. Delayed editing passes on all
four CPUs, and all four VMs display entered text.

Keyboard results retain the full 32-bit scan/modifier wire value. Thirty-two
native public-service cases and twenty-four source firmware-bridge cases pass.
The C firmware retains USB modifier reports, modifier-only transitions and
function-key scan codes, and uses EFI extended text input when available.
Firmware keyboard, extended-input, pointer, disk-cache, GOP and disk-inventory
fixtures pass; emulated firmware file reads pass 21 contiguous, fragmented,
partial, boundary and failure cases.

The complete C/C++ build produces both images and the portable macOS 15 SDK.
The SDK builds C and C++ examples for all four CPUs outside the checkout and
rebuilds its ARM64 runtime from bundled sources. Final VM shortcut, file-menu
and animated graphics checks remain in progress before tagging.


Public kernel services now return their declared 32-bit status values rather
than decompiler-inferred byte results. The old x64 missing-file status returned
zero in AL with stale nonzero upper bits in EAX; native code explicitly clears
those bits. A regression reproduces that mismatch with the earlier source and
compares the complete result register and cleared file record on all four CPUs.
The repaired source passes. Eighty-two narrow public result declarations were
corrected across the four slices; private byte-return interfaces remain local.

ARM32, ARM64 and BIOS editor Save As checks persist the entered text on the
writable user volume. Diagnostic disks disable QEMU snapshots for persistence
verification. BIOS user-volume IDs differ from EFI volume IDs. The x64 launcher
and GUI checks are being repeated with the public result correction.


## 1.0 validation complete

The final public-status correction restores x64 application launch. The source
editor displays entered text and the source 3D demo presents changing animation
frames. Final editor Save As runs on BIOS, x64, ARM32 and ARM64 each persist
exactly `hello` in the user-volume disk image. The diagnostic launch helpers,
capture kernels and modified test disks are excluded from release products.

The normal BIOS and EFI payloads match, all installed executable/object paths
have source or retained-Mach provenance, artifact hashes verify, and the portable
SDK check passes. The final source scan includes decoded state arrays and finds
no host paths or account name. `docs/release.md` documents validation scope and
`recovery/release-1.0.json` records artifact hashes. Permafrost 1.0 is ready for
its milestone tag; 1.1 is next. No embedded Mach source recovery was attempted.


## 1.1 recovery started

The 1.1r344 Beta reference uses an MBR with an LPSM bootstrap partition and a
FAT32 EFI partition. Its system files live in PolynyaFS 0.3 instead of the
previous WBPT volumes. The recovered Python reader validates CRC32C volume
headers and directory records, follows allocation extents, and preserves mount
links as distinct metadata. Both volume headers and all 285 live directory
records match the native Stage3 validators. The filesystem contains 185 files.

PFZ1 wraps individual architecture slices with a CRC32 header and an LZ-style
4096-byte dictionary. The new codec verifies reference slice checksums; packets
produced by the source encoder pass the native streaming decoder for literals,
overlapping matches, window-boundary distances and incompressible data. The
native inspection tools now decode these wrappers before reading Mach-O data.

The new image contains Zastruga, Sleet, Amur and PicoFrost. Their recovery must
live in the corresponding sibling repositories and become linked build inputs.
The new Garamond font retains its supplied OFL notice. Embedded Mach remains
excluded from source recovery. The 1.0 tag is complete; 1.1 has not been built,
VM-validated or tagged, and the existing builder has not yet been relabeled as
1.1. Kernel decompilation and the remaining component inventory are in progress.

The PolynyaFS writer now creates deterministic single-member volumes, including
allocation tables, contiguous extents, empty files, directories, mount links,
free space and a backup header. A newly generated fixture passes the original
Stage3 validators for both headers and 309 directory records. Original reader
routines also agree on every allocation entry and sampled nested, Unicode,
mount-link and directory-boundary lookups and multi-block extents.

The freestanding C PFZ1 decoder runs on i386, x64, ARM32 and ARM64 in CPU
emulation. All four decode payloads independently checked by the native Stage3
decoder and reject insufficient output capacity, bad CRCs, truncated streams,
invalid back references and nonzero unused control bits. Its input callback
supports reading boot files without loading the complete compressed input.
Bootloader integration is still outstanding.

Kernel recovery now expands ARM64 machine-outliner sequences before
decompilation. Additional exclusive-memory and x86 locked-operation patterns
are lowered to compiler atomics. A concurrent host fixture performs 80,000
protected updates and 80,000 exclusive increments without losing updates;
publication and failed compare-exchange cases retain the observed values.
Instruction-reviewed annotations cover folded comparisons across labels and
reject stale target/store descriptions. These checks do not establish kernel
or release-wide VM parity. Candidate kernel sources remain in progress.

The read-only C PolynyaFS boot reader now passes its CPU fixtures on all four
architectures. It handles primary and backup headers, allocation chains,
fragmented files, directory records spanning blocks, Unicode paths, empty
entries, mount-link records and parent traversal. Bounds, damaged metadata and
input failures are checked. On every CPU it also reads five complete files
from the supplied image byte for byte: both startup scripts, Garamond, the
compressed kernel and Stage4 module. This is a firmware component, not a
replacement for the kernel's writable filesystem implementation.

A test-only image replaces the reference's complete filesystem with a volume
created by the new writer while retaining original executable payloads. BIOS,
x64 EFI, ARM32 and ARM64 each reach the Tundra desktop from that volume. This
establishes the new image format's boot compatibility; it does not constitute
a source-built release. The original BIOS desktop requires more than ninety
seconds in the current emulation configuration. These test images, original
payloads, VM disks and screenshots remain outside the tracked source tree.

The candidate C EFI loader now links for all four CPUs and uses the new C
filesystem and compression modules to load the supplied kernel. Its x64,
ARM32 and ARM64 differential VMs reach the desktop at 1280 by 800. The x64
legacy WFE bridge requests the native kernel's firmware-retention policy;
that mode uses firmware drivers and cooperative scheduling. Pointer input
opens the desktop menu, and leaving Tundra and typing `1+1` in WinterShell
prints `2`. Retiring EFI services without the native processor/bootstrap
handoff instead halts the kernel, so that is not a completed native handoff.

The in-progress kernel checkpoint preserves 1,844 i386, 1,854 x64 and 2,338
ARM64 translated functions, initialized data, ABI metadata and translation
settings. ARM32 remains partial. These candidates still fail full compilation
and require architectural operations, register/aggregate ABI corrections and
atomic retry-path recovery. The normal build and SDK remain at the completed
1.0 implementation until the 1.1 source migration is actually ready. No 1.1
release artifacts or milestone tag have been produced.

The retained-service policy is also required by the ARM legacy bridge. With
that flag, ARM32 responds to pointer-driven desktop exit and evaluates `1+1`
to `2` in the shell. ARM64 opens the desktop menu, but the subsequent automated
selection/input check remains unresolved; reaching the desktop is not treated
as proof of complete input compatibility. This remains a differential test
with original OS payloads, not validation of a complete source-built image.

### 1.1 architectural and kernel compilation work

The recovery tools now preserve volatile shared-memory reads, ARM exclusive
instructions and encoded CP15 selectors. ARM32 tests execute byte, halfword,
word and doubleword exclusive operations, cleared reservations and retries.
The recovered heap-lock path matches the original under free and contended
locks. Paired control-register transfers and SMC/HVC argument/result registers
also pass isolated CPU checks.

Register-view tests cover conditional reads, scratch-register reuse, interrupt
flag writes and complete descriptor-table bases. Aggregate metadata records the
width of each access, preserving neighboring bytes when a stack field has more
than one view. SIMD tests cover narrow packed values, byte shuffles and pointer
arithmetic for sixteen- and thirty-two-byte arrays.

Complete x64 and ARM32 kernel translations compile to objects. The x64 kernel
links with the recovered 1.1 codec. A retained-firmware VM run exposed a UEFI
text-output ABI error; the repaired boundary matches native UTF-16 output for
all 256 byte values, including CR/LF handling. Startup now reaches framebuffer
initialization and halts during storage initialization. This is not VM parity.
The x64 interrupt-boundary comparison preserves general registers, all sixteen
XMM registers, MXCSR, stack position and CR0.TS on the FXSAVE path. ARM64 keyboard
character-to-key mapping matches the original for all 256 byte values.

The x64 codec builds from 234 recovered C functions and passes fourteen
native/source PNG decoding cases. Broader encoder checks remain incomplete.
The 1.1 reference exposes BMP, PNG, TGA and XCF writers, with no REI or JPEG
writer exports. Reference allocator callbacks use the 1.1 x64 service table at
guest address `0x280800`; the test harness can now select this explicitly.
The completed 1.0 tag remains unchanged; no 1.1 tag has been created.

The next 1.1 checkpoint compiles all four C kernels and links x64 and both ARM
candidates against matching 1.1 codecs. The x64 firmware flush correction passes
success/failure command comparisons and removes the PFS admission failure.
Recovered variadic scheduler tracing and private call signatures remove
spurious SIMD arguments. Two reviewed path-copy calls now supply their string
arguments. Module metadata probing matches the original using captured VM
state; dynamic loading exposes a missing allocator return type that remains
under recovery. Diagnostic images still carry reference applications.

ARM64 IRQ comparisons cover timer, peripheral and spurious interrupts, all 31
integer and 32 SIMD registers, system state, stack and GIC acknowledgement.
The two-double geometry return matches 260 finite and exceptional pairs.
ARM64 codec analysis expands 464 calls to 118 machine-outliner sequences;
fourteen PNG decoder comparisons pass. ARM32 passes ten small decoder fixtures
but still differs on the large dynamic-Huffman fixture; i386 has a compressed
scanline failure. Encoder checks remain incomplete.

The shared PFZ decoder passes bounds, CRC and malformed-token tests on all four
architectures. Fourteen kernel PFZ1 Mach-O comparisons additionally verify
supported image magic, returned bytes, error strings and allocation/free
behavior. These are component checks; no 1.1 VM equivalence or tag is claimed.

The 1.1 codec checkpoint now passes the fourteen PNG decode fixtures on all
four architectures. The 32-bit scalar DEFLATE state machine also matches 87
native/source cases per architecture: fixed and dynamic Huffman trees, varied
payloads, output limits, bad checksums, trailing data and truncated streams.
Physical stack-array views retain their full available storage, and CONCAT
reads the bytes of a stack array instead of converting its address to a value.
The x64 BMP, PNG, TGA and XCF writer corpus passes detection, cross-decoding
and invalid dimensions. The small XCF writer fixture is byte-identical. Its
folded constant-string indices now relocate with the module. These are codec
component checks; the complete 1.1 source image and SDK are not yet released.

The remaining 1.1 codec writer comparisons now pass on i386, ARM32 and ARM64
as well. Native C variadic entry points retain formatter arguments; ARM64
file-name copies receive the path operand from the native stack convention.
i386 TGA/XCF position-relative string references relocate with module data.
ARM32 copies three packed colour bytes rather than converting their source
array address into a pixel. BMP, PNG, TGA and XCF all pass cross-decoding and
invalid-dimension checks on each architecture.

The next 1.1 kernel checkpoint restores native pointer/word returns consumed
by callers and constant-format arguments at 626 x64 and 344 ARM64 call sites.
ARM64 analysis uses explicit models for optional stack operands; emitted C
retains its native variadic declarations. x64 stack-frame origins preserve
the entry stack's eight-byte bias, including descriptor-name address-bit
selection. The module initializer receives both the host API and descriptor.
The diagnostic x64 kernel reaches WinterShell. Isolated startup-file reads,
line splitting, tokenization and two assignment statements match the original
through both kernels. The provider file runner also preserves its path operand.
Full VM startup remains under investigation.

The x64 kernel's nonlocal context entry points now save/restore callee-saved
registers, stack/return addresses, MXCSR and the x87 control word with their
native field widths. Direct comparisons cover zero, positive and negative
restore values, untouched buffer canaries and scope transfers. All native
direct longjmp call sites pass the resume value one. Native instructions at
these architecture boundaries remain in C translation units. ARM task contexts,
complete VM behavior, source recovery of remaining modules and SDK promotion
remain release gates; no 1.1 tag has been created.

The next 1.1 ARM checkpoint preserves optional arguments for conditional format
strings, including storage addresses that choose between partition numbers and
filesystem names. ARM32 recovers 631 integer/pointer format calls; wider optional
operands remain explicitly flagged for ABI review. ARM64 recovers 406 calls.
The scalar ARM64 formatter matches 587 native cases covering integer widths,
pointers, fractions, string precision, truncation and destination canaries.
Unsigned byte-range lowering now preserves all 256 PFS kind values. The complete
ARM64 catalogue matches all 414 native records before module admission. Its VM
now passes the earlier mounting/formatting failure and stops at shell admission.
The x64 provider receives global-lookup and value-release operands. A separate
1,500-operation allocator comparison preserves payloads and complete heap state;
the live startup script failure still needs investigation. These component
results do not establish complete VM equivalence or authorize a release tag.

ARM32's initial PFS allocation guard now uses the native four-pointer load and
eight pointer null checks as scalar C. The decompiler had reduced the wide
global load to one word and retained undefined halves of an incoming SIMD
register, reporting successful allocations as exhaustion. All 1,024 combinations
of ten allocation results match the original allocation sizes and admission
branch. The VM progresses to a later null callback exception, still under
investigation. The x64 allocator comparison is now reproducible with synthetic
guest state and covers 1,500 operations without requiring a VM capture.

The ARM32 PFS allocation-entry validator now implements the native sentinel
jump table in C. A misidentified indirect call had jumped to zero for reserved
link entries. The replacement matches 3,864 native cases, including reserved
values, bounds and 64-bit carries. Regeneration retains this implementation
and the allocation guard; both comparison suites pass again after regeneration.

Reviewed return-register corrections now apply to 47 ARM64, 17 ARM32 and 11
x64 functions. Custom VOID storage previously prevented the ARM64 analysis
script from applying its entire manifest; explicit return-register replacement
preserves custom parameter locations. ARM64 native-storage enumeration matches
160 count, bounded-record and canary cases. ARM32 free-heap reporting matches
253 linked-list cases, including totals exceeding four GiB. x64 now reports
its available heap in the VM. Conditional format recovery covers 657 x64 call
sites. Array-expression lowering retains the scalar memory operand of an XOR
instead of taking the address of the resulting value. Complete VM startup,
installed component recovery and SDK promotion remain unfinished.

ARM64 boot selection now compares the mounted drive identifier as an unsigned
byte, matching the native LDRB comparison for drive 0x80. This retains the boot
partition across temporary filesystem switches. The Mach-O selection tail
wrapper preserves its status, and module-role validation counts only the two
role bits rather than retaining stale upper SIMD lanes. Stage4 metadata and
success status now match the native probe in captured guest state. The VM
advances into loaded module code; module execution remains under recovery.

Both ARM PFS flush callbacks now return the storage status after releasing
their locks. Each architecture passes 512 native/source drive and status
comparisons plus null-context checks. Complete ARM32 volume admission matches
status, allocation events, firmware requests and resulting disk bytes; the
current VM fixture exercises 949 commands and 402 allocation events. The
ARM32 allocation-entry writer shares the reader's native sentinel validation,
removing another misidentified jump table. Its 1,152 native/source cases cover
reserved links, bounds, encoded block bytes and callback status. Its direct
writer adapter also preserves the returned status. VM admission and rendering
checks continue; these changes do not constitute a completed 1.1 release.

The x64 kernel now reaches the Tundra desktop using reference application
modules. Recovered font-backend virtual calls preserve receivers and floating
returns; glyph outlines, quadratic subdivision, supersampling, multiline
layout and public text metrics use reviewed C. Comparison against two generated
fonts and the reference distribution's font covers 126 complete RGBA rasters
and 63 metric records at three sizes, including cache reuse, colors, opacity,
multiline text and allocation canaries. Full regeneration preserves these
results. Floor and ceiling also match 3,620 native representations, including
negative fractions and the reference's 32-bit conversion boundary behavior.
Startup provider calls now forward program buffers, lengths and release
arguments. Remaining application recovery and full VM compatibility still gate
the 1.1 images, SDK and tag.

The ARM64 recovered kernel now boots Tundra with reference application modules
and responds to pointer-driven menu opening and desktop exit. Its startup
provider preserves the AArch64 hidden result pointer for WinterScript values
and forwards the script-buffer length. Command classification matches 52
native cases. Both ARM context implementations now preserve native callee-saved
register buffers, floating controls, thread pointers and scope-transfer frames;
zero, positive and negative nonlocal returns match the reference.

ARM32 module admission now uses the shared C PFZ decoder. Both ARM PFZ wrappers
match 28 native output/error/allocation cases each; complete Stage4 and
WinterShell metadata admission matches the ARM32 reference with allocation and
output canaries. The ARM32 build preserves 2,876 referenced literal-pool bytes
in 136 ranges, including the module API header formerly overwritten with zeros.
Multiline constant-vector slices no longer become low-memory reads, and the
ARM32 startup provider receives both script data and length. ARM32 VM boot and
ARM shell/scheduler compatibility remain under investigation.

ARM32 retained-firmware keyboard and pointer calls now pass their request
packet explicitly. Fourteen native/source cases match callback arguments,
operation packets, key masks, pointer output and adjacent canaries. The VM
accepts `1+1` and records `2` in its console log. Rendering and command-dispatch
status remain incomplete: the framebuffer still shows firmware output, and
successful shell evaluation can be followed by a rejected-command message.

The ARM32 capability dispatcher now returns the native provider status instead
of discarding it. Its delayed consumer in shell routing retains that value
across optional output handling. The recovered selector and route wrapper
match 805 native cases covering capability masks, provider ordering, callback
arguments, lock release and zero/nonzero status values.

The recovered ARM builds retain the optional WFE11 source-firmware extension
separately from the native boot-context copy. Explicit rectangle presentation
now reaches GOP.Blt on PixelBltOnly displays. The ARM32 VM displays the Tundra
desktop and its shell evaluates `1+1` as `2` without a false rejected-command
message. Desktop pointer updates, background/icon rendering and ARM64 shell
input remain under investigation. The presentation handshake regression covers
native-size context copies as well as extension validation and request fields.

IA32 entry now preserves the preload firmware callback passed on the caller's
stack, in addition to the optional loader-context pointer. Native/source
comparisons cover five entry handoffs, 24 unavailable-firmware discovery
requests, 48 available-memory cell/record/bounds cases and 587 formatter cases.
Reviewed callback signatures preserve request pointers at 108 OpenBIOS call
sites. Recovered return-register uses retain available-memory discovery and
heap accounting results. The candidate compiles and boots to the graphical
kernel banner with a plausible heap; boot-disk signature capture still fails
at LBA 257, so IA32 storage and full startup remain incomplete.

The IA32 OpenBIOS transfer routine now preserves the native interrupt guard
around firmware calls and handles seek results, short reads/writes and errors.
It matches 120 native/source cases with interrupt state, callback packets and
buffer canaries checked. These isolated results do not establish VM storage
parity; full boot-disk admission is still being tested.
