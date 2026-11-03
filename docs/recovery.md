# Permafrost 0.5 recovery record

The supplied 0.6 Beta reference is 37182464 bytes, SHA-256
0f594da375524c28e5e6e649f223c90973b68db88e3e772dc230b14484caa18b.
All three volume inventories are in recovery/inventory.json.

WBPT version 1 remains at sector 65. Firmware starts at 66 and uses 2048
sectors; recovery starts at 2114 and uses 828 sectors. Both use WMFS32. User
data starts at 2942 and extends to the disk end. Its partition type is 5 and
its filesystem is FAT32, with 512-byte clusters, 32 reserved sectors, two FATs
and a chained root directory. Long-name entries preserve original filenames.

The independent FAT32 writer creates a BPB, primary/backup boot and FSInfo
sectors, mirrored FATs, directory chains and file chains. It validates every
file with the independent reader. Volume updates preserve the other partitions
and their geometry. WMFS32/WMFS64 tools remain available for supported media.

The kernel loads at 0x20000 and enters at 0x20010. Its BIOS prefix is unchanged
from the prior reference. C code starts at 0x20c84, main is 0x260ed, and code
ends at 0x481d0. Initialized state ends at 0x4e608; BSS ends at 0x85000. The
kernel and second-stage loader reassemble byte-for-byte in recovery proofs.

Source-defined initialized data preserves fixed addresses. C/C++ is linked at
0x100000. The bootstrap copies the compact payload upward, then jumps to its
relocated second stage before clearing BSS. ABI adapters preserve original
native entry addresses and register/stack arguments.

WMAP version 2 remains at 0x6200, magic 0x50414d57, size 76. The 16 cdecl services
include console/keyboard, theme/video, file operations, line input and native
WinterScript registration. Callback values occupy 24 bytes. File reads return
a borrowed pointer, size and attributes. Formatted logging is at 0x23390.
The new timing path also uses the existing BIOS microsecond-wait bridge.

The reference displays 0.6 Beta but binds WINTER_VERSION 0.4 / WINTER_RELEASE
Beta. The derivative consistently uses Permafrost 0.5 Beta and updates its
self-test's version assertion. A filename-lookup wrapper needed an explicit
integer return signature: discarding EAX made callers use file index zero.

Lua's reference binary is identical to the prior release. The build continues
to link Lua 5.4.8 from the requested sibling source and distributes its MIT
notice. No OpenBIOS component is identified. See DEPENDENCIES.md for source
locations and the policy for a future in-house Lua replacement.
