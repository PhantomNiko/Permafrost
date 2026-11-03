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
The source build compiles 386 recovered C functions and replaces prior releases
as the sole target. The reconstructed image and relocated SDK pass the bundled
self-test, original/native programs, Lua, callbacks and FAT32 mutation checks
under a complete Bochs BIOS. Five graphics-depth framebuffer digests match.

Final CPU-emulator checks pass 523 original-vs-C ABI cases, interactive WSBC
1/6 save-and-run round trips, and Binary Writer. Startup, FAT32 root growth,
persisted files after reboot and recovery fallback pass. The default font/clear
startup also passes under Bochs. FAT32 scans need a larger instruction budget
than the prior filesystem fixture.

A relocated SDK inserts files and replaces existing names case-insensitively.
The reader handles FAT short-name case flags; verification matches short names
case-insensitively. The mutation suite creates, reads, overwrites and deletes
24 long-name files. Graphics tests also exercise the BIOS wait bridge. QEMU
and physical hardware remain unverified.
