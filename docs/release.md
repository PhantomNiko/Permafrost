# Permafrost 0.2 recovery

The current target reconstructs the supplied 0.3 Alpha release as Permafrost 0.2.
Earlier reconstruction milestones remain available through Git history, not as
parallel build targets.

`recovery/inventory.json` records reference hashes and filesystem geometry.
`recovery/layout.json` records the recovered boundaries. The reference kernel is
430080 bytes, with executable C/C++ code at 0x208a2–0x3ef9a, followed by constant
data and shared state extending to 0x89000. Its initialized bytes end at 0x445e4.
The BIOS prefix includes new disk and time bridges; the loader additionally
supplies usable RAM ranges to the allocator.

The boot sector, second stage and complete kernel have been recovered into
assembly and reassembled exactly. Intermediate recovery and decompiler output
belongs in the ignored build directory. A normal source build must not depend
on the reference image or a local analysis installation.

The reference passes its bundled WinterScript self-test, covering functions,
closures, loops, multiple returns, standard libraries, patterns, file handles,
loaded chunks, and the bundled desk model. This self-test is the primary oracle
for the current C reconstruction. Native disk expansion and night mode now use
0x2227f and 0x23b8c; the SDK must use this release's addresses.

The source implementation comprises 300 recovered C functions plus reviewed
runtime support and a C++ display entry. Native utility wrappers and Wozmon are
built from C/C++. Assembly remains for BIOS boot/mode transitions, relocation,
and ABI bridges. Explicit x87 initialization fixes dependence on firmware's
floating-point state.

The complete bundled self-test passes under Bochs with a full BIOS. The native
compatibility suite also verifies a relocated SDK, original native calls,
memory/string behavior, monitor operations, Binary Writer output, and legacy
and current WSBC containers. See README.md for reproduction and test limits.
