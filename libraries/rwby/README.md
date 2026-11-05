# Permafrost Rwby runtime

Recovered C source for the Rwby runtime in the 0.9 reference, targeting Permafrost
0.8. Pooka's Free Software License applies; see `LICENSE.TXT`.

All four architecture sources preserve the exported C++ names, object layout and native result-pointer conventions. Seven native/source API comparisons cover arithmetic,
precedence, signed values, loops, functions, arrays and floating-point arithmetic:

```sh
python3 tools/library_native.py libraries/rwby/arm64 build/libraries/rwby/arm64
```

The two 64-bit targets share their C implementation in `lp64`; i386 and ARM32
share `ilp32`. The 32-bit source also produces byte-identical arithmetic and loop
bytecode. Complete image integration remains in progress. This directory is a
source checkpoint.
