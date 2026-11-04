# Permafrost 0.7

Permafrost 0.7 reconstructs the supplied 0.8 release. Earlier versions remain
milestones in Git history; only 0.7 is a build target. Kernels, BIOS/UEFI
firmware, WinterLua, Rwby, standalone WinterScript, and bundled native programs
build from C/C++ source. No reference executables are bundled in the build.

Build with Python 3 and Clang/Clang++ on macOS 15:

```sh
python3 tools/build.py
```

The build produces:

- `build/Permafrost-0.7.img`: 64 MiB BIOS disk.
- `build/Permafrost-0.7-UEFI.img`: 100 MiB GPT disk with IA32 and x86-64 EFI loaders.
- `build/Permafrost0.7.sdk` and its ZIP archive: relocatable macOS 15 SDK.
- `build/release.json`: artifact sizes and SHA-256 hashes.

The disks contain firmware and recovery WMFS32 volumes and a FAT32 user
volume. The EFI disk carries the WBPT disk in the original nested partition
format. Kernels and native applications use universal i386/x86-64 containers.

The [SDK guide](docs/sdk.md) covers native C/C++ programs, fixed-width public
records, and image tools. [Recovery notes](docs/recovery.md) describe the
source layout. [Release findings](docs/release.md) record validation and
limitations. See [license scope](LICENSES.md) and [dependencies](DEPENDENCIES.md)
for component licensing.
