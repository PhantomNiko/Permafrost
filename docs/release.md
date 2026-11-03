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
interpreter services. The original application symbol tables identify the
in-house WinterLua 0.2 and WinterRwby 0.1 implementations. External Lua is
replaced by the in-house interpreter for this milestone.

OpenBIOS firmware is built from the sibling `../openbios` checkout, pinned in
`dependencies.json`; its third-party implementation is not reconstructed from
the firmware binary. Recovery and validation of the current release are ongoing.
