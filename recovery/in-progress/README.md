# Current recovery checkpoint

These are working C replacements, ABI hints and firmware changes for the next
milestone. They preserve the recovery work before it replaces the active source
tree. They are not an additional build target or a completed release.

`reference.json` identifies the input image and intended version. The kernel
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
ARM32 desktop still lacks images and has clock/input issues; isolated PNG, BMP
and TGA kernel decodes match the reference, so file/allocator integration still
needs investigation. This does not establish complete source-image equivalence.

The x86-64 Activity Monitor is now recovered C under
`applications/activity-monitor`. Its initialized data relocates seven static
column-label pointers from the original fixed-address executable. Comparisons
through the recovered TerrorUI DLL check live system, process and disk samples,
window calls, all seven headings and glyph pixels with partial alpha. The source
application also opens and updates in the mixed x86-64 desktop diagnostic. Its
other three architectures and complete source-image integration remain pending.

Kernel statement comparisons now cover assignment, returned arithmetic,
compound assignment, conditional returns, indexed arrays and numeric loops on
all four CPUs. Three x86-64 return paths previously converted a temporary array
into its address instead of copying its first eight value bytes. The recovered
store now copies those bytes, preserving the returned value's tag and payload.
`tests/kernel_statements.py` checks the result, error flag, statement position,
control-flow state and scalar value bytes against the native kernel. These
isolated checks do not establish startup-script file or complete VM parity.

GPT filesystem updates now preserve the existing BIOS boot area, firmware
partitions and partition tables. Previously, repacking rebuilt a two-partition
GPT container and discarded the other boot components. A regression fixture
checks the surrounding bytes, and the repaired BIOS diagnostic reaches setup.
The source-kernel x86-64 diagnostic separately stops on a startup-script parse
error before the desktop loads; that kernel integration issue remains open.

Diagnostic snapshots and VM disks remain outside tracked source. The normal
build continues to use the last completed source tree until the next milestone
passes its complete source build and VM comparisons. That transition must move
the reviewed implementation into the normal kernel, library, application and SDK
directories and remove this temporary checkpoint. It must not retain another
historical build target.
