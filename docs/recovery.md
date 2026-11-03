# Permafrost 0.1 recovery record

The reference is the first public Permafrost-kernel release, historically
distributed as version 0.2. This repository names its reconstruction Permafrost
0.1. Historical strings below identify evidence and compatibility formats; they
are not product names for this project.

Reference SHA-256:
`12d90f25773c53ecb5a7c84fae9cb0d86c5561cf9d933c690407877086d80bd3`.
Image size: 516096 bytes, 1008 sectors of 512 bytes. No partition table.

| Disk sectors | Purpose |
| --- | --- |
| 0 | BIOS boot sector; signature 55 AA; INT 13h extended read |
| 1–64 | Real-mode second stage; load address 0000:8000 |
| 65 | WMFS32 superblock |
| 66 | 32-bit little-endian allocation table |
| 67–69 | Six 256-byte directory slots (five occupied) |
| 70 onward | 4096-byte clusters, numbered starting at 2 |

The boot sector loads 64 sectors to 0800:0000. Stage two reads the root directory,
loads the kernel at physical 0x20000, validates WMLP/version 1, obtains the entry
address from header +8, supplies boot information at 0x6000, enables A20 and
protected mode, and jumps to the entry. The kernel header is:

| Offset | u32 little-endian value |
| --- | --- |
| 0 | ASCII WMLP |
| 4 | 1 |
| 8 | 0x20010 entry address |
| 12 | 0x71e minimum validated extent in the reference |

The reference kernel is 331776 bytes, including a large zero-initialized tail.
Executable ranges are 0x10–0x687 and 0x71e–0xc8c0 (inclusive). The first range
contains alternating 32-bit and 16-bit BIOS bridges. 0x688–0x71d holds the GDT,
disk transfer packet and BIOS result storage. 0xc8c1 onward holds constants,
jump tables, strings and zero-initialized storage. The recovery source separates
these ranges. It does not embed the kernel binary or require the reference for
normal builds. Function names absent from the binary remain address labels.

WMFS32 superblock u32 fields begin at +8: version, bytes per sector, sectors per
cluster, FAT relative sector, FAT sectors, root relative sector, root sectors,
data relative sector, cluster count, live file count, total filesystem sectors.
Directory names occupy bytes 0–239 (NUL terminated); first cluster is at +240;
byte length is at +244. FAT value 0 is free; 0xffffffff ends a chain. The image
uses no directories beyond slash-separated names in a flat table.

The five reference files are the kernel, BinaryWriter.ws, startup.ws and two
eight-byte native utilities. `tools/wmfs.py` inventories and extracts them into
an ignored build directory. `tools/recover.py` reproduces the initial assembly
recovery using NASM's disassembler. This is instruction-level recovered source,
not a recovery of the author's original C identifiers or comments.

Both native utilities use `mov eax, address; call eax; ret`:

| Utility | Kernel entry |
| --- | --- |
| disk expansion | 0x216df |
| display night mode | 0x2243d |

The fixed layout is therefore part of the observed ABI. Replacing internal
functions must preserve these entries or supply trampolines. Strings may be
renamed in their allocated slots without shifting downstream addresses. WMLP,
WMFS32, WSBC, .ws and .wsbc remain compatibility identifiers.

Known limitations and validation results are maintained in README.md. Static
reconstruction alone is not evidence of successful hardware boot.
