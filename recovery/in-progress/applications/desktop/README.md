# Desktop recovery checkpoint

Pooka's Free Software License applies to this recovered source.

Tundra builds from C for i386, x86-64, ARM32 and ARM64. Reference executables
are not build inputs:

```sh
python3 tools/application_native.py recovery/in-progress/applications/desktop/x86_64 build/desktop --library /lib/TerrorUI.dylib=build/lib-100/TerrorUI/x86_64/TerrorUI
```

The i386 analysis resolves fixed-address code pointers into C switch bodies and
recovers register-based private function contracts. ARM64 expands machine-outlined
sequences and resolves indirect memory-clear and content-size imports to C calls.
The x64 and ARM32 timestamp encoders use scalar Gregorian calendar arithmetic.
Initialized state uses C designated initializers with omitted zero-filled blocks;
its full allocation size and pointer initialization remain explicit.

`tests/desktop_calendar.py` compares exported calendar routines against native
code and UTC dates. It covers leap years, invalid dates, the 1970 lower bound,
month boundaries and timestamps beyond the 32-bit epoch range. The fixture
preserves original fixed-address data, handles i386's register argument convention,
and links compiler-runtime imports to the C TerrorUI library. There are 590
comparisons on each x86 CPU, 510 on ARM32 and 80 on ARM64, where calendar-to-epoch
conversion is inlined and has no standalone export.

`tests/desktop_directory.py` compares root filtering, sorted directory records,
and the directory service arguments on all four CPUs. ARM32's merged legacy
and device-specific call path now preserves the fifth argument, the entry-count
pointer. Dropping that stack argument left the VM listing empty.
`tests/desktop_framebuffer.py` compares 32-bit video discovery and backing-buffer
allocation on all four CPUs. ARM64 keeps its pixel-format mask in a 64-bit
expression before shifting by the bits-per-pixel value; a 32-bit C shift by 32
rejected a supported framebuffer.

An x64 diagnostic with the C desktop, kernel, firmware, libraries and editor
boots to the desktop, launches the editor and types text. An ARM32 diagnostic
also reaches the C desktop and displays the weekday correctly. Other reference
applications and drivers remain on that disk. This is a source recovery
checkpoint, not a release or full desktop equivalence claim. ARM VM interaction,
whole-frame comparisons, menus, file operations, application switching, exceptional
paths and the remaining image components still need broader validation.
