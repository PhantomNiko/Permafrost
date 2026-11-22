# NVMe driver recovery checkpoint

Each architecture directory builds from C source and initialized data with
`tools/library_native.py`, without a reference executable. The recovered code
includes PCI discovery, controller initialization, DMA queues, namespace
identification and the storage provider callbacks.

`tests/nvme_driver.py` compares ten native initialization, registration, API and
single- and multi-function PCI discovery cases on each architecture.
`tests/nvme_transport.py` compares 219 native register reads/writes, API fallback,
address and offset boundaries, DMA allocation, queue initialization, failures
and buffer guards on each architecture.

ARM transports explicitly preserve MMIO write values and DMA arguments. Queue
allocation returns its native status on ARM64. The i386 initializer explicitly
constructs the provider callback record and preserves PCI visitor arguments.

`tests/nvme_submission.py` compares 30 native command-ID, completion-status,
phase, ring-wrap, doorbell, DMA synchronization and guard cases per CPU. ARM
synchronization preserves the buffer address and byte count.

Storage I/O in a VM still needs comparison. These source checkpoints do not
establish release-wide equivalence.
