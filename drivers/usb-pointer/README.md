# USB pointer recovery checkpoint

All four architecture directories build from C source and initialized data with
`tools/library_native.py`; no reference executable is a build input.

`tests/usb_pointer_driver.py` compares ten native descriptor, initialization,
registration and PCI discovery cases, plus 96 state-forwarding, key-polling,
API capability, missing-callback, null-output and guard cases per architecture.

The recovery restores the pointer-state output argument on all four CPUs, ARM32
PC-relative data and PCI records, and ARM64 multifunction PCI discovery.

ARM32 and ARM64 VM checks with the source XHCI and pointer drivers launch the
calculator through mouse input and evaluate three typed expressions (5, 28, 3)
without duplicated key presses. The VM checks use mixed diagnostic images;
other driver families still require source recovery. Four-architecture graphics
equivalence and final images remain release gates.
