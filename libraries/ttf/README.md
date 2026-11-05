# Permafrost font library

Recovered C source for the Permafrost 0.8 x86-64 font module. It preserves the
original exported C++ names and data layout. This source is covered by
Pooka's Free Software License; see `LICENSE.TXT` at the repository root.

```sh
python3 tools/library_native.py libraries/ttf/x86_64 build/libraries/ttf/x86_64
```

Twelve generated-font cases match the native TrueType rasterizer byte for
byte, including straight and quadratic contours, three sizes, repeated text,
newlines, empty text, missing glyphs, RGB colors and opacity. The fixtures
contain no third-party font data. Type 1 fonts and compound TrueType glyphs
are not covered by these cases. ARM and i386 font-library integration remains
in progress; this is a source checkpoint, not the completed 0.8 release.
