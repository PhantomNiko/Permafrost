# Graphics driver recovery checkpoint

The i386, x64, ARM32, and ARM64 driver descriptors, initialization records, software GPU
provider registration, and C implementations are recovered from the 1.0
reference. Build each directory with `tools/library_native.py`; the build reads
C, headers, and relocation metadata, without reference executable inputs.

`tests/graphics_driver.py` compares descriptors and initialization against a
reference thin library and verifies that the submitted software provider
callback points into the source-built image. These checks cover an existing
framebuffer with no enumerated PCI display device. `tests/graphics_pci.py` additionally compares eight PCI record cases on each architecture,
including bus/slot/function fields, failed reads, absent vendor IDs, and bytes the native helper leaves
untouched. `tests/graphics_draw.py` compares native command results and complete
framebuffer bytes for clear, clipped and empty rectangles, interpolated and
degenerate triangles, and mixed command batches on all four architectures.
Hardware transport comparisons remain to be completed.

The compatibility changes preserve an existing firmware framebuffer rather
than requesting another mode or resetting its virtio GPU queues. ARM32 code
literal references used by the descriptor, labels, and provider callback are
replaced with C data/function symbols. The ARM32 diagnostic VM reaches a visible
desktop with these graphics modules installed; input and mode negotiation still
need further validation. Other drivers and programs in that diagnostic image
remain reference binaries, so it is not a source-only release image.

The direct hardware paths contain additional unresolved register and literal
references. None of the architecture checkpoints is a completed release driver yet. The 1.0
release remains gated on all four architectures, complete source recovery,
VM compatibility, images, and SDK packaging.


ARM DMA helpers and their PCI-driver callers now preserve pointer, byte-count,
and output arguments. Each ARM checkpoint passes 60 native DMA boundary cases;
ARM64 also passes 234 hardware-service transport comparisons. Registration,
PCI records, and all eight software rendering comparisons still match native
behavior. Disposable ARM32 and ARM64 desktop VMs render the repaired drivers,
open the terminal through pointer input, and accept three typed expressions
with results 5, 28, and 3. These remain mixed diagnostic images until the full
source-only image assembly is validated.
