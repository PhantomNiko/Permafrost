# Permafrost 0.8 reconstruction

The current reconstruction uses the upstream 0.9r123 reference. Its scope
includes i386, x86-64, ARM32 and ARM64. Final image integration and replacement
of the previous default build target remain unfinished.

Committed source checkpoints include the four PNG libraries and the x86-64
font library. Each PNG implementation passes 14 native/source decoding cases.
The font implementation passes 12 generated TrueType raster comparisons,
including quadratic contours and text layout. These tests use no third-party
font data. Type 1 fonts and compound TrueType glyphs remain untested.

Candidate C/C++ kernels and shared C firmware have booted on all four CPUs,
and the candidate macOS SDK has built and executed programs on all four.
Those candidates are not the completed image/SDK release. ARM64 hardware
window rendering remains limited by the emulator firmware's framebuffer
handoff; ARM32 window rendering has passed against both source and reference
kernels.

The remaining native-library checks include ARM font geometry and VM execution.
Native Lua and Rwby constructor/script/global-lookup probes execute
`answer = 6 * 7` and retrieve 42. The reconstructed runtimes still diverge.
ARM64 exported methods returning objects use X8 for their result buffer;
recovered C often normalizes that buffer into its first parameter. Their
public entry points need ABI adapters before native callers can use them.
Passing normalized arguments alone does not establish interpreter equivalence.

Analysis recovery must restore machine-outliner bodies before inferring
parameters and scalar returns. Repeating return inference after that restoration
recovered missing allocator results and fixed ARM64 font loading. Parameter
inference should preserve observed register storage without replacing already
reviewed signatures. Source compilation and linking alone do not establish
runtime compatibility.
