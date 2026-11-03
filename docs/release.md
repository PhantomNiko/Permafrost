# Permafrost 0.4 recovery

The supplied 0.5 Beta i386 and IA64 images become Permafrost 0.4. Earlier
releases remain Git milestones and will not remain build targets.

Both images retain WBPT/WMFS32/WMFS64. Recovery grows to 812 sectors; the
IA64 firmware volume is 4097 sectors. Repacking now preserves each volume's
geometry. The IA64 release uses an x86-64 entry wrapper and a 32-bit kernel,
with its native service table at 0x6400 instead of the i386 table at 0x6200.
WMAP version 2 has 76 bytes. The release adds graphics entry/exit, drawing,
canvas sizing and color-depth APIs, demos and diagnostics.

Reference hashes and all three volume inventories are recorded in
recovery/inventory.json. Recovery and C/C++ migration are in progress.
