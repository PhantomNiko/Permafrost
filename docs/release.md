# Permafrost 0.3 recovery

The supplied 0.4 Beta release becomes Permafrost 0.3. Only the current release
will remain a build target; prior releases are Git milestones.

The image introduces WBPT version 1 at sector 65. Its firmware and recovery
partitions use WMFS32. The growable user partition uses WMFS64, with a chained
root directory and the same 32-bit cluster indices and 256-byte entries.
The filesystem tools can extract all three volumes and rebuild the partitioned
disk while checking every file through the independent reader.

The reference kernel loads at 0x20000, enters at 0x20010, and calls main at
0x25333. Its BIOS bridges remain unchanged through 0x208a1. C/C++ code occupies
0x208a2–0x4233f; fixed data/state extends to 0x7e000, with initialized bytes ending
at 0x475f4. Both the recovered kernel and second-stage loader reassemble exactly.
The reference boots under Bochs with a complete BIOS and mounts WMFS64.

A WMAP table at 0x6200 now exposes native services. The user volume includes
Lua, a sample module, an index script, the WinterScript self-test, a WMFS64
random-write test, Binary Writer, and Wozmon. Lua is an external source dependency;
see DEPENDENCIES.md. The source-built C kernel passes the complete WinterScript self-test. Lua is
compiled from the sibling source checkout and its host integration passes
module, coroutine, formatting, error-handling and file-I/O checks.

Final checks pass on the source-built image: the bundled self-test and original
native utilities under Bochs, a relocated C/C++ SDK, original and source-linked
Lua applications, 200-file WMFS64 mutation stress, and 523 differential runtime
cases. Interactive SAVEBC/RUNBC round trips match the reference for both WSBC 1
and 6; the recovered 16-bit version writer must retain its EDX argument.
An independent disk reader recovers an expanded WMFS64 root, and its files
remain readable after reboot. First-boot setup and primary-kernel recovery
fallback also pass. Physical hardware and QEMU remain unverified.
