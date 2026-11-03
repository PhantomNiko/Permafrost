# Permafrost 0.4 recovery record

The supplied 0.5 Beta reference images are recorded in recovery/inventory.json:

| Variant | Bytes | SHA-256 |
| --- | ---: | --- |
| i386 | 2175488 | da5a8130bad638185448e8c15f07c4be49d1b401683e799ca30eaa18afb9e9c9 |
| IA64 | 3634688 | 12c016525488d7818db6772850d4cdc9e3f2d630eb929b7306e504bc6719e34e |

Both have WBPT version 1 at sector 65. The i386 firmware/recovery/user starts
are 66/2114/2926, with 2048/812/rest sectors. IA64 uses starts 66/4163/4975
and 4097/812/rest sectors. Firmware and recovery use WMFS32; user data uses
WMFS64 with a chained directory and 32-bit FAT indices. Repacking retains
partition geometry and validates every file with the independent reader.

The 32-bit kernels load at 0x20000 and enter at 0x20010. BIOS code ends at
0x20bd0; recovered C code starts at 0x20c84. The i386 main is 0x26141 and its
code ends at 0x45f30. IA64 main is 0x26155 and code ends at 0x45f48. Initialized
state ends at 0x4c608; BSS extends to 0x83000. Both kernels and second-stage
loaders reassemble byte-for-byte in the recovery proof.

IA64 is the reference's label for an x86-64 entry wrapper. It briefly executes
64-bit code, then returns to a 32-bit compatibility-mode kernel. Its wrapper
sets boot flag bit 1 at 0x6238. The source-built wrapper retains this behavior,
page-table location and entry format. The recovery kernel provides a legacy
path. Tests assert that a capable CPU actually takes the long entry.

C/C++ is linked at 0x100000. A bootstrap after the compact payload copies the
compiled code upward, then jumps to its relocated second stage before clearing
BSS. This avoids clearing the bootstrap while it executes. The recovered BIOS
mailboxes and mode transitions remain at their fixed addresses. Per-variant
ABI manifests generate native entry stubs and register/stack adapters.

WMAP version 2 is 76 bytes, at 0x6200 for i386 and 0x6400 for IA64. Its magic is
0x50414d57. The 16 cdecl services cover expansion, theme/video, console/keyboard,
file operations, line input and native WinterScript registration. File reads
return a borrowed pointer, length and attributes. Native callbacks exchange
24-byte values; their output is converted back to WinterScript. Formatted
logging remains outside WMAP, at 0x233a3 or 0x233b7 respectively.

New graphics APIs enter/restore VBE/text mode, probe the framebuffer, resize
canvas coordinates, change color depth, fill, plot pixels and draw lines.
Differential tests hash the actual framebuffer at requested 8/15/16/24/32-bit
color depths. The BIOS may retain a 32-bit framebuffer while the software
color-depth selection changes its quantization.

The supplied references still display 0.4 Beta and bind WINTER_VERSION 0.3 /
WINTER_RELEASE Alpha. The derivative consistently identifies as Permafrost
0.4 Beta and updates those assertions in its copied self-test.

Lua remains Lua 5.4.8W, with source linked from the requested external branch
and separate host integration for each native ABI. Its MIT notice accompanies
the binary. No OpenBIOS component has been identified. DEPENDENCIES.md records
the required sibling repositories and future replacement policy.
