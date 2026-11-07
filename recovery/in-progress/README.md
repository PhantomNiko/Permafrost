# Current recovery checkpoint

These are working C replacements, ABI hints and firmware changes for the next
milestone. They preserve the recovery work before it replaces the active source
tree. They are not an additional build target or a completed release.

`reference.json` identifies the input image and intended version. The kernel
directories contain decompiler signature corrections, source replacements and
explicit C implementations. The firmware directory contains the current shared
EFI loader work. The repository license applies throughout.

The library directories contain candidate C implementations, initialized data
and export/relocation metadata. All four PNG slices pass the decoding corpus;
x86-64, ARM64 and i386 pass reader/writer checks for the reference's four
supported formats. ARM32 file output remains under recovery. The x86-64 window
slice passes creation, title, size and query-record comparisons. These checks
do not establish release-wide VM equivalence. ARM32's `missing-inputs.txt`
records functions reviewed through the incoming-register recovery pass before
export; obsolete manual units for those functions have been removed.

Diagnostic snapshots and VM disks remain outside tracked source. The normal
build continues to use the last completed source tree until the next milestone
passes its complete source build and VM comparisons. That transition must move
the reviewed implementation into the normal kernel, library, application and SDK
directories and remove this temporary checkpoint. It must not retain another
historical build target.
