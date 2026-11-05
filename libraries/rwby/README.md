# Permafrost Rwby runtime

Recovered C source for the Rwby runtime in the 0.9 reference, targeting Permafrost
0.8. Pooka's Free Software License applies; see `LICENSE.TXT`.

The ARM64 and x86-64 sources preserve the exported C++ names, object layout and native result-pointer conventions. Seven native/source API comparisons cover arithmetic,
precedence, signed values, loops, functions, arrays and floating-point arithmetic:

```sh
python3 tools/library_native.py libraries/rwby/arm64 build/libraries/rwby/arm64
```

The two 64-bit targets share their C implementation in `lp64`.
The 32-bit targets and complete image integration remain in progress. This
directory is a source checkpoint.
