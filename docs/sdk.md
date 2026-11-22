# Permafrost 1.0 SDK

The relocatable `.sdk` bundle targets Permafrost on i386, x86-64, ARM32
(`armv7`) and ARM64. Its host tools require Python 3 and Apple Clang/Clang++ on
macOS 15. It includes the recovered Tayga C/C++ headers, startup objects,
runtime archives and all twelve native libraries for each architecture.

```sh
python3 tools/sdk.py
build/Permafrost1.0.sdk/bin/pf-cc --arch arm64 \
  build/Permafrost1.0.sdk/Examples/runtime.c -o hello
build/Permafrost1.0.sdk/bin/pf-cc --arch arm64 \
  build/Permafrost1.0.sdk/Examples/runtime.cpp -o hello-cpp
```

Copy the matching architecture's executable into `Tayga/root` on the user
volume and run it through Tayga. `pf-tayga-cc` is an alias for `pf-cc`.
`--clang-arg` passes a compiler option. Multiple source files may be linked
into one executable. `--library INSTALL_NAME=DYLIB` links a native library;
the matching thin DLLs are under `usr/lib/ARCH`.

The runtime supports allocation, stdio, file operations, argument parsing,
constructors/finalizers, and the supplied C++ headers. It is freestanding:
C++ exception unwinding, RTTI and host operating-system services are unavailable.
The runtime sources are included under `usr/src/runtime` and can be rebuilt
with `bin/pf-build-runtime --arch ARCH --output DIRECTORY`.

`usr/include/permafrost/native_api.h` documents the fixed-width WMAP service
records and readiness checks. `terror_ui.h` describes graphical windows,
input, drawing, clipping and presentation. `tayga/tayga_api.h` describes
processes, streams, shell modes and command execution. Historical ABI symbol
names are retained where needed for compatibility.

All guest startup objects and archives are rebuilt from C/C++ source. Archive
metadata and ZIP entries use reproducible identities and timestamps. The bundle
contains no fixed host checkout paths and can be moved without installation.
