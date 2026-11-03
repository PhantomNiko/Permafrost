# Permafrost 0.4 recovery

The supplied 0.5 Beta i386 and IA64 images become Permafrost 0.4. Earlier
releases remain Git milestones and will not remain build targets.

Both images retain WBPT/WMFS32/WMFS64. Recovery grows to 812 sectors; the
IA64 firmware volume is 4097 sectors. Repacking now preserves each volume's
geometry. The IA64 release uses an x86-64 entry wrapper and a 32-bit kernel,
with its native service table at 0x6400 instead of the i386 table at 0x6200.
WMAP version 2 has 76 bytes. The release adds graphics entry/exit, drawing,
canvas sizing and color-depth APIs, demos and diagnostics.

Reference hashes and all three volume inventories are recorded in
recovery/inventory.json. The source build now replaces the prior release as the sole active target,
with separate current i386 and IA64 layouts and a shared SDK.

Both recovered 32-bit kernels and loaders reassemble exactly. The source build
compiles 365 i386 and 364 IA64 functions, shared runtime/compiler support,
a C++ theme entry, native utilities and source-linked Lua. The IA64 image also
builds its x86-64 entry wrapper from assembly.

Under Bochs with a complete BIOS, both variants pass the bundled self-test,
original/native C/C++ tooling, relocated SDK, Wozmon, Binary Writer, WSBC,
200-file WMFS64 stress, original/source-linked Lua, and successful/failing
native callbacks. The IA64 long entry is exercised. Five framebuffer digests
match the originals after color-depth selection, fill, pixel and line drawing:
`bc5ffdc5`, `9802cdc5`, `e3c37dc5`, `57676dc5`, `57676dc5`.

Final CPU-emulator checks pass interactive WSBC 1/6 save-and-run round trips,
first-boot setup, persisted WMFS64 directory growth, reboot and recovery for
both variants. The i386 runtime also passes 523 original-vs-C ABI cases.
The i386 status renderer restores a fourth variadic string argument lost in
raw decompilation; this prevents a redraw fault after interactive SAVEBC.
QEMU and physical hardware remain unverified.
