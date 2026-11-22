# Permafrost 1.0

Permafrost 1.0 recovers the supplied 1.0r232 Beta for i386, x86-64, ARM32 and
ARM64. Earlier releases remain milestones in Git history. Only 1.0 is an
active build target.

The kernels, BIOS/UEFI firmware, twelve native libraries, drivers, applications,
Snowflake compiler and Tayga SDK runtime build from C/C++ source. The embedded
Mach distribution is retained unchanged with its notices and is excluded from
source recovery. Normal builds require no reference disk or decompiler.

Build on macOS 15 with Python 3 and Apple Command Line Tools:

```sh
python3 tools/build.py
```

The build produces:

- `build/Permafrost-1.0.img`: BIOS disk with four-architecture payloads.
- `build/Permafrost-1.0-UEFI.img`: GPT disk with four EFI loaders.
- `build/Permafrost1.0.sdk` and its ZIP archive: relocatable development SDK.
- `build/release.json` and `build/image-provenance.json`: hashes and code origin.

Use `--out` to change the output directory and `--jobs` to set compiler
parallelism. `--sectors` changes the payload's total sector count; the default
preserves the reference firmware, recovery and user-volume capacities with an
empty swap partition. `make sdk` builds the SDK independently.

The [SDK guide](docs/sdk.md) covers C/C++ programs and native interfaces.
[Recovery notes](docs/recovery.md) describe the source layout and
[release findings](docs/release.md) record validation. See
[license scope](LICENSES.md) and [dependencies](DEPENDENCIES.md) before
redistributing the images or SDK.
