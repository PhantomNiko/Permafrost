# Permafrost 0.6 recovery record

The supplied 0.7 BIOS and OpenBIOS references become Permafrost 0.6.
`recovery/inventory.json` and `recovery/openbios-inventory.json` record exact
byte counts, SHA-256 hashes, partition geometry and file inventories.

Both references use WBPT at sector 65, WMFS32 firmware/recovery and FAT32 user
data. BIOS partitions start at 66, 2114 and 3062. OpenBIOS partitions start at
66, 4163 and 8259. The source image writer preserves the selected geometry and
filesystem type when updating a volume, including FAT32 long names and chains.

The BIOS kernel loads at 0x20000 and enters at 0x20010. Its BIOS bridge prefix
matches the reference through 0x20c83. Main is at 0x3362d; initialized data starts
at 0x56810 and ends at 0x5d774; BSS ends at 0x94000. The recovered C module is
linked at 0x100000. A source-built C decoder expands its LZ4 block before the
relocated initializer clears BSS. Native entry adapters retain fixed addresses.
The main stack starts at 0x200000 and grows below the native application load
address. The build reserves at least 512 KiB between it and the compiled module;
the reference's smaller stack allowance collided with recovered C frames during
filesystem writes.

WMAP version 4 has 124 bytes at 0x6200 and retains the earlier console, display,
file, keyboard and native callback services. It adds allocation, image and font
services. New standalone i386 applications use Mach-O MH_PRELOAD with segment
and thread-state commands. Their preferred address is 0x200000.

The standalone Lua implementation is now in-house WinterLua 0.2. Upstream Lua
is no longer a current dependency; historical images containing it already
include its MIT notice. OpenBIOS integration uses the separate sibling source
checkout identified in `dependencies.json`, with its upstream licenses intact.
See `LICENSES.md` for scope.

The default build produces both current firmware variants and the macOS SDK.
The kernels pass the bundled WinterScript self-test under complete Bochs
hardware emulation, including filesystem mutation, pipes, imports, nested tables
and CPU descriptions. The CPU fixture passes 523 original-vs-C ABI cases,
including the compressed bootstrap and preservation of callee-saved registers.
Directory checks compare on-disk file lengths with the printed sizes, including
0-, 1-, 257- and 4097-byte probes.

SDK C/C++ Mach-O programs run through both OS prompts from a relocated SDK.
Public allocation, file, PNG and failure-status probes pass on both variants.
Source WinterLua has arithmetic, assertion, table and loop tests, with the
reference's closure and dofile limitations preserved. The standalone Rwby and
WinterScript VMs remain licensed native binaries with source-built integer
helpers; their VM implementations are not claimed to be recovered source.

OpenBIOS uses a 40-MiB boot-image RAM disk at 16 MiB. Its C core runs at 5 MiB,
its stack starts at 4 MiB, and its heap excludes the disk and resident firmware.
The firmware is built from the pinned sibling checkout and patched out of tree.
The external Lua VM is absent from this release.

Recovered C remains low level. Known public services and the Lua implementation
have semantic names; private address names and layout metadata retain a trace
back to the reference for further work. Tests cover the listed interfaces and
scenarios, not every possible program or hardware configuration.
