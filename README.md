# Permafrost 0.9

Permafrost 0.9 reconstructs the supplied 1.0r147 prerelease (the historical 0.10 reference) for i386, x86-64,
ARM32 and ARM64. Earlier releases remain milestones in Git history; only 0.9
is a build target. Kernels, BIOS/UEFI firmware, all nine native libraries and
bundled utilities build from C/C++ source. Normal builds do not read reference
images or include reference executable code.

Build with Python 3 and Clang/Clang++ on macOS 15:

```sh
python3 tools/build.py
```

The build produces:

- `build/Permafrost-0.9.img`: BIOS disk with universal four-architecture payloads.
- `build/Permafrost-0.9-UEFI.img`: GPT disk with IA32, x86-64, ARM32 and ARM64 EFI loaders.
- `build/Permafrost0.9.sdk` and its ZIP archive: relocatable macOS 15 SDK.
- `build/release.json`: artifact sizes, architectures and SHA-256 hashes.

Disk sizes are selected from the built firmware and recovery contents, with a
FAT32 user volume. `--sectors` overrides the BIOS payload's total sector count.
The EFI disk carries that WBPT payload in the original nested partition format.
The current reference distributes Lua, Rwby and the standalone WinterScript
runtime as DLLs; these source builds replace the earlier interpreter executables.

The [SDK guide](docs/sdk.md) covers C/C++ programs and fixed-width public records.
[Recovery notes](docs/recovery.md) describe the source layout; [release findings](docs/release.md)
record validation and limitations. See [license scope](LICENSES.md) and
[dependencies](DEPENDENCIES.md) for component licensing.
