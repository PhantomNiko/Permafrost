# Permafrost 1.1 console-window recovery

Each architecture builds PermafrostWindow from recovered C and initialized
module data with `tools/library_native.py`. The source build consumes no
reference machine code. Pooka's Free Software License applies.

The release-specific window state, vector operations, scalar conversions,
heap initialization and context-transfer ABI replace older assumptions.
ARM32 literal pools are retained as scalar constants. ARM64 outlined bodies
are expanded before translation; vector bounds retain all 128 bits. The x64
raster conversion preserves the native unsigned-integer to float operation.

Native/source comparisons cover window creation and resizing, title changes,
image capture and scaling, framebuffer presentation with padding and boundary
guards, mouse queries, keyboard state and destruction. Saved contexts and
scope transfers are checked separately. These checks do not establish full
C++ exception or VM compatibility; those remain integration gates.
