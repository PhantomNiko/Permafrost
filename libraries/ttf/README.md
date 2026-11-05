# Permafrost font library

Recovered C source for the Permafrost 0.8 i386, ARM32, x86-64 and ARM64 font modules. It preserves the
original exported C++ names and data layout. This source is covered by
Pooka's Free Software License; see `LICENSE.TXT` at the repository root.

```sh
python3 tools/library_native.py libraries/ttf/x86_64 build/libraries/ttf/x86_64
```

Twelve generated-font cases on each architecture match the native TrueType rasterizer byte for
byte, including straight and quadratic contours, three sizes, repeated text,
newlines, empty text, missing glyphs, RGB colors and opacity. The fixtures
contain no third-party font data. Type 1 fonts and compound TrueType glyphs
are not covered by these cases. The two 32-bit targets share their C implementation
in `ilp32`, with architecture-specific export profiles and WMAP addresses.
Complete 0.8 image integration remains in progress.
