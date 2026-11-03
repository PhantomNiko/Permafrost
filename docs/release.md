# Permafrost 0.5 recovery

The supplied 0.6 Beta image becomes Permafrost 0.5. This release has one BIOS
kernel build. Earlier i386/IA64 release variants remain in Git history.

The reference is 37182464 bytes, SHA-256
0f594da375524c28e5e6e649f223c90973b68db88e3e772dc230b14484caa18b.
WBPT remains at sector 65. Firmware uses 2048 sectors, recovery 828 sectors,
and the user volume starts at sector 2942. Its type is 5 and its filesystem
is FAT32. The independent volume tool now reads and rebuilds FAT32 long names,
root directory chains, data chains, mirrored FATs and filesystem metadata.

The kernel retains WMAP version 2 at 0x6200. Main moves to 0x260ed, C code ends
at 0x481d0, initialized state ends at 0x4e608, and BSS ends at 0x85000.
The BIOS prefix through 0x20c83 is unchanged. Lua's binary matches the prior
release and remains an external source dependency. OpenBIOS is not identified.
Recovery and C/C++ promotion are in progress.
