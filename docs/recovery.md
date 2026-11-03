# Permafrost 0.2 recovery record

The supplied 0.3 Alpha release is reconstructed as Permafrost 0.2. This is the
only build target. Earlier releases remain Git milestones. Reference hashes,
file sizes, and filesystem fields are recorded in `recovery/inventory.json`;
`recovery/layout.json` defines the current kernel's memory boundaries.

The reference disk is 545792 bytes (1066 sectors). The BIOS boot sector is
sector 0, the real-mode loader occupies sectors 1–64, and WMFS32 begins at 65.
The reference has one FAT sector, seven root sectors, and 4096-byte clusters.
There are fourteen files, including the kernel, scripts, bitmap font, native
utilities, monitor, desk model, and bundled language self-test.

WMFS32 superblock u32 fields begin at +8: version, bytes per sector, sectors per
cluster, FAT relative sector, FAT sectors, root relative sector, root sectors,
data relative sector, cluster count, live file count, total filesystem sectors.
Directory names occupy bytes 0–239 (NUL terminated); first cluster is at +240;
byte length is at +244. FAT value 0 is free; 0xffffffff ends a chain. Names form
a flat table, including slash-separated names.

The loader reads the kernel at physical 0x20000, validates the WMLP header,
enables A20/protected mode, sets the stack at 0x17f000, and enters 0x20010.
Boot information at 0x6000 includes usable RAM ranges. The reference's header
extent is 0x8a2. BIOS bridges occupy 0x20010–0x207ff; the following data holds
the GDT, disk parameters, and firmware results. Compiled reference code spans
0x208a2–0x3ef9a. Shared state occupies 0x3ef9b–0x88fff; initialized data ends at
0x445e4. BIOS bridges include keyboard, font, disk read/write/query, video, and
VBE mode operations.

The boot sector, loader, and complete reference kernel reassemble byte-for-byte
from `tools/recover.py` output. Normal builds use checked-in source and require
neither a reference image nor Ghidra. The current C implementation is linked at
0x100000. A small entry bridge copies it out of the low-memory loading area,
clears the original BSS, and calls the recovered kernel main. Original native
entry addresses contain adapters to the compiled implementation.

| Native interface | Original address |
| --- | --- |
| disk expansion | 0x2227f |
| night mode | 0x23b8c |
| formatted console output | 0x236f9 |
| console theme | 0x21a56 |
| put character / string | 0x21cab / 0x21d41 |
| keyboard poll / restore console | 0x21d6c / 0x21d7f |

Wozmon loads at 0x220000 and uses the console interfaces above. Its C++
reconstruction implements hexadecimal examine/range/store/run commands,
continued reads, line editing, and Escape-to-shell behavior. Other native
programs default to 0x200000. The original fixed-address register conventions
are recorded in `kernel/abi.json`; all new C internal calls use cdecl.

Product branding and the displayed/script version become Permafrost 0.2.
WinterScript, WINTER_VERSION/WINTER_RELEASE, WMFS32, WMLP, WSBC and file extensions
remain compatibility names. Fixed data slots retain their original addresses.
The original self-test's version assertion is adjusted to the derivative's 0.2.
