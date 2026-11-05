# Permafrost PNG library

Recovered C implementation of the Permafrost 0.8 PNG module, covering i386,
x86-64, ARM32 and ARM64. Original exported C++ names are retained for binary
compatibility. The code is covered by Pooka's Free Software License; see
`LICENSE.TXT` at the repository root.

Build one architecture from these sources, without a reference image:

```sh
python3 tools/library_native.py libraries/png/arm64 build/libraries/png/arm64
```

`runtime.c` contains executable code; `state.c` contains initialized data and,
on ARM32, referenced literal pools. Original instruction bytes are omitted.
The 32-bit data arrays reserve zero-filled space for addresses that native
position-independent code uses as bases for relative data references.
`profile.json` describes exports and data pointer relocations.

The four implementations each pass 14 decoding comparisons with the native
module: all five PNG filters, stored and compressed DEFLATE data, a larger
image, a bad CRC and a truncated stream. The overall Permafrost 0.8 release
build is still being integrated.
