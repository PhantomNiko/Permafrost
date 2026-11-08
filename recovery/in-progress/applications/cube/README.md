The 3D demo is recovered as common C source for i386, x86-64, ARM32 and ARM64.
It preserves the fixed-point rotations, projection, stable depth sorting,
triangle colours, CPU rasterizer, GPU command format, outlined edges, window
lifecycle, 720-frame limit and keyboard exit behavior of the reference.

Build with `tests/cube_guest.py`, supplying the architecture, source-built
TerrorUI DLL and output executable. The build links the shared C compiler and
memory support. It consumes no reference executable bytes. The application
uses the public headers staged under `recovery/in-progress/sdk/include`.

`tests/cube_render.py` compares 12 clipping, winding, colour and degenerate
triangle cases with each original architecture's CPU rasterizer.
`tests/cube_application.py` compares a full 64-frame rotation cycle in CPU,
GPU and failed-GPU fallback modes, including pixel output, GPU command bytes
and UI service calls. It also checks failed opening, missing buffers, failed
queries and synchronization, close requests and three keyboard exit cases.
All comparisons pass on all four architectures. The original private i386
renderer uses ECX and EDX arguments; its fixed-address globals are populated
explicitly by the diagnostic harness.

The source application also opens and animates in x86-64 and ARM64 VMs alongside the
reference desktop and eleven recovered C libraries. ARM64 uses the documented
temporary timer adjustment. These diagnostics retain
other reference components and is not a source-only release image. ARM32
presentation, ARM64 timer startup, BIOS desktop integration and the remaining
applications, drivers and third-party payloads remain release work.

All files are covered by Pooka's Free Software License in the repository root.
