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
preserve arguments lost by indirect tail-call decompilation. The i386 query path
retains the original cached record across temporary reuse. ARM32 reconstructs
repeated RGBA vectors instead of reading Ghidra register-space addresses as RAM.
ARM64 restores hash return values and text-image field loads omitted by analysis.
These library-level checks still need integration into the source-built VM image.

The untouched x86-64 reference reaches its desktop under QEMU. The BIOS
reference reaches the Batagaika first-boot setup. With the current virtio-ramfb
configuration, the ARM32 reference stops after kernel handoff and ARM64 displays
a fault screen; those configurations still need investigation before comparison.

Diagnostic snapshots and VM disks remain outside tracked source. The normal
build continues to use the last completed source tree until the next milestone
passes its complete source build and VM comparisons. That transition must move
the reviewed implementation into the normal kernel, library, application and SDK
directories and remove this temporary checkpoint. It must not retain another
historical build target.
