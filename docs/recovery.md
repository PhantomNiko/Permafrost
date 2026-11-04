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

BIOS startup and the directory-size regression pass under a full Bochs BIOS.
The differential CPU fixture passes 523 memory/string ABI cases, including the
actual compressed bootstrap. The directory regression checks 29 file lengths
against disk records on both the reference and reconstruction; the old listing
bug omitted a variadic size argument. The bundled WinterScript self-test passes
on both images, covering file mutation, pipes, imports and nested tables. SDK C
and C++ Mach-O programs also pass on both through the OS loader. Graphics,
recovered applications and OpenBIOS validation remain in progress; these results
are not a release claim. The address-named C exports are an intermediate form
and still need naming and structural cleanup.
