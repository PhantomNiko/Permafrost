# Permafrost 0.3 recovery record

The supplied 0.4 Beta image is 2105856 bytes. Its SHA-256 and per-file hashes
are recorded in `recovery/inventory.json`. The current reconstruction is
Permafrost 0.3 Beta, with earlier releases retained only in Git history.

The boot sector loads 64 sectors at 0x8000. WBPT version 1 occupies sector 65.
It has a 24-byte OS label at +8 and 32-byte entries starting at +32. Each entry
contains u32 type, start LBA, sector count and flags, followed by a 16-byte name.
The original firmware volume starts at 66 (2048 sectors), recovery at 2114
(772 sectors, fallback flag 1), and user data at 2886 (zero size means the
remaining disk). Types 1 and 2 select WMFS32 and WMFS64.

WMFS32 retains its fixed root-sector table. WMFS64's eleven u32 fields at +8
are version, bytes/sector, sectors/cluster, FAT sector, FAT sectors, data sector,
cluster count, root cluster, root byte length, file count, and total sectors.
It retains 32-bit FAT links and 256-byte directory entries but stores the root
as a normal growable cluster chain. Names occupy 240 bytes, followed by first
cluster and byte length. FAT values 0 and 0xffffffff mean free and end-of-chain.
`tools/wmfs.py` independently reads back every volume created by the builder.

The reference kernel loads at 0x20000, enters 0x20010 and calls main at 0x25333.
BIOS bridges and their shared data occupy the prefix through 0x208a1. Executable
C/C++ code spans 0x208a2–0x4233f. Constants and fixed state extend from 0x42340
to 0x7e000, with initialized bytes ending at 0x475f4. The kernel, loader and
boot sector have been recovered as assembly; kernel and loader reassemble
exactly. Product branding changes preserve fixed data addresses.

The source-built kernel links C at 0x100000. Entry code copies the compact
payload above conventional memory, clears the original BSS, initializes x87,
and calls the recovered main. `kernel/abi.json` records original entry-point
arguments; generated adapters preserve them for existing native programs.
Decompiler stack objects retain explicit aliases, while distinct temporaries
that recycle a spill slot remain separate C values.

WMAP version 1 is at 0x6200, with magic 0x50414d57 and size 72. Its fifteen cdecl
services cover expansion, theme/video control, keyboard/console operations,
file read/write/delete, text logging, and line input. `permafrost.h` declares the layout.
File reads return a borrowed data pointer, length, and attributes. Formatted
logging at 0x22fa2 remains a recovered release-specific interface outside WMAP.

The user volume contains Lua 5.4.8W, scripts, a sample module, font, monitor and
self-tests. The build links Lua 5.4.8 from the requested external branch, with a
C host for WMAP I/O, interactive execution, and module loading. Lua's upstream
license accompanies the binary. OpenBIOS has not been identified in this image.
See DEPENDENCIES.md for how future third-party components are handled.
