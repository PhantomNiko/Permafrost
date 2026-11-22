# Source recovery

The current target is Permafrost 1.0, recovered from the supplied 1.0r232 Beta.
Normal builds consume the following source trees:

| Directory | Contents |
| --- | --- |
| `kernel/ARCH` | Architecture-specific kernel implementation and initialized state |
| `kernel` | Shared freestanding compiler, formatting and memory support |
| `firmware` | C BIOS loader and execution-mode boundaries |
| `firmware/uefi/common` | Shared source EFI loader and service contexts |
| `libraries/NAME/ARCH` | Twelve recovered native libraries |
| `drivers/NAME/ARCH` | Source hardware drivers, selected by `drivers/manifest.json` |
| `applications` | Desktop, terminal, tools, compiler and other guest applications |
| `sdk` | Public headers, C/C++ runtime sources and examples |
| `assets/disk` | Non-executable assets and the retained embedded Mach distribution |

Recovered entry identifiers map to original function names in architecture ABI
and profile metadata. Initialized state is represented as C data; it does not
contain original instruction streams. Builders reconstruct Mach-O containers,
relocations, DLL exports and compatibility entries from source and metadata.
Small inline instruction sequences implement hardware access, context switching
and architectural entry boundaries that C cannot express directly.

Reference executables are optional test inputs for the native/source comparison
fixtures under `tests`. They are excluded from normal builds. The image asset
manifest records hashes and identifies the embedded Mach exception. The release
provenance manifest records every installed source-built binary and retained
Mach file. Previous source milestones remain available through Git history.

Mach is deliberately outside this recovery effort. Its binary distribution and
associated notices are preserved without decompilation or relicensing.
