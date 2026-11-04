# Permafrost 0.6 recovery

The supplied 0.7 Beta BIOS and OpenBIOS images are the references for Permafrost
0.6. Earlier releases remain milestones in Git history, rather than additional
build targets. Reference hashes, partition layouts and file hashes are recorded
in `recovery/inventory.json` and `recovery/openbios-inventory.json`.

The BIOS reference has 37,243,904 bytes. Its firmware starts at sector 66,
recovery at 2114 and FAT32 user data at 3062. The OpenBIOS reference has
6,413,824 bytes, with partitions starting at 66, 4163 and 8259.

This release introduces 32-bit i386 Mach-O MH_PRELOAD applications at 0x200000,
with LC_SEGMENT and LC_UNIXTHREAD load commands. WMAP version 4 has 124 bytes
at 0x6200, extending the earlier file/console/display API with allocation and
image and font services. The original application symbol tables identify the
in-house WinterLua 0.2 and WinterRwby 0.1 implementations. External Lua is
replaced by the in-house interpreter for this milestone.

OpenBIOS firmware builds from the pinned sibling `../openbios` checkout.
The out-of-tree GPL patch restores Multiboot memory information for firmware
relocation. A source loader transfers the boot disk into RAM, and the C kernel
reserves that disk and resident firmware when constructing its heap.

The kernels use consolidated C translation units: 721 BIOS functions and 749
OpenBIOS functions, with shared freestanding C support and C++ display glue.
WinterLua has 1,004 recovered C functions. Address metadata and demangled native
signatures remain available for further source cleanup.

The standalone Rwby and WinterScript VMs remain covered upstream binaries.
Their packaged copies use source-built integer helpers, correcting recursive
variable-shift helpers and making numeric programs usable. The built-in
WinterScript implementation is part of the recovered kernel source.

Directory listing supplies the size at normalized entry offset 0xf8, restoring
an argument omitted by the decompiler at the shared printf site. CPU-brand
formatting has its corresponding string argument restored. C++ allocation,
array-allocation and delete wrappers have their actual incoming arguments;
without those signatures, PNG buffers could be allocated as a single byte.
Private font-rendering parameters retain their exact stack slots, including
the eight-byte width argument. SDK status functions use their original AL byte
return ABI.

The OpenBIOS reference advances a synthetic 18-Hz clock on time queries. The
hardware self-test warms that clock before its `time()>0` assertion. The
OpenBIOS RAM disk is used in place, with writes lasting for the boot session.

Current hardware tests cover the full bundled WinterScript self-test,
filesystem mutations, CPU descriptions, exact directory sizes, PNG decoding,
allocation and failure statuses, native Mach-O execution, and source Lua
arithmetic and loops. This validation does not establish equivalence for every
possible program or hardware configuration.
