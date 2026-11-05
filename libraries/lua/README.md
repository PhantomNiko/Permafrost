# Permafrost Lua runtime

Recovered C source for the in-house Lua runtime in the 0.9 reference, targeting
Permafrost 0.8. This is the replacement for the earlier third-party Lua runtime;
it is covered by Pooka's Free Software License in `LICENSE.TXT`.

The ARM64 and x86-64 sources preserve the exported C++ names, object layout and native result-pointer conventions. Six native/source API comparisons cover arithmetic,
precedence, signed values, loops, arrays and floating-point arithmetic:

```sh
python3 tools/library_native.py libraries/lua/arm64 build/libraries/lua/arm64
```

The two 64-bit targets share their C implementation in `lp64`.
The 32-bit targets and complete image integration remain in progress. Function
execution is not covered: the reference runtime terminates on the current
function-declaration fixture. This directory is a source checkpoint.
