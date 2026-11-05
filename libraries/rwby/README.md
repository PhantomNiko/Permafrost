# Permafrost Rwby runtime

Recovered C source for the Rwby runtime in the 0.9 reference, targeting Permafrost
0.8. Pooka's Free Software License applies; see `LICENSE.TXT`.

The ARM64 source preserves the exported C++ names, object layout and native X8
result-pointer convention. Seven native/source API comparisons cover arithmetic,
precedence, signed values, loops, functions, arrays and floating-point arithmetic:

```sh
python3 tools/library_native.py libraries/rwby/arm64 build/libraries/rwby/arm64
```

Other architectures and complete image integration remain in progress. This
directory is a source checkpoint.
