# Permafrost Lua runtime

Recovered C source for the in-house Lua runtime in the 0.9 reference, targeting
Permafrost 0.8. This is the replacement for the earlier third-party Lua runtime;
it is covered by Pooka's Free Software License in `LICENSE.TXT`.

The ARM64 source preserves the exported C++ names, object layout and native X8
result-pointer convention. Six native/source API comparisons cover arithmetic,
precedence, signed values, loops, arrays and floating-point arithmetic:

```sh
python3 tools/library_native.py libraries/lua/arm64 build/libraries/lua/arm64
```

Other architectures and complete image integration remain in progress. Function
execution is not covered: the reference runtime terminates on the current
function-declaration fixture. This directory is a source checkpoint.
