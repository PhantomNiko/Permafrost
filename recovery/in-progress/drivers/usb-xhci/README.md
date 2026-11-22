# XHCI driver recovery checkpoint

The four architecture directories build the reference USB discovery driver from
C source and initialized data with `tools/library_native.py`. The build needs
no reference executable. The kernel and firmware provide controller access and
keyboard event delivery; this module discovers controllers and publishes device
records through the kernel driver API.

`tests/usb_xhci_driver.py` compares the native descriptor, initialization logs,
controller queries, PCI scan order, registration failures, API sizes and missing
callbacks on all four architectures. ARM32 restores descriptor addressing,
PCI records and literal widths; i386 preserves the byte-sized PCI bus argument.
ARM64 compiler outliner sequences are recovered within their callers.

Successful controller discovery and keyboard input in an integrated VM remain
release gates. This is a recovery checkpoint, not a completed release driver.
