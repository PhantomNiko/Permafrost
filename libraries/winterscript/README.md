# Permafrost standalone WinterScript runtime

Recovered C source for the standalone runtime in the 0.9 reference, targeting
Permafrost 0.8. Pooka's Free Software License applies; see `LICENSE.TXT`.

The ARM64 and x86-64 implementations preserve the public C++ names, object layout and native
result-pointer conventions. Seven native/source API comparisons cover integer
arithmetic, precedence, signed values, loops, functions, arrays and floating
arithmetic. The standalone numeric payload uses signed 32-bit integers and
32-bit floats.

```sh
python3 tools/library_native.py libraries/winterscript/arm64 build/libraries/winterscript/arm64
```

The two 64-bit targets share `lp64`; i386 and ARM32 share `ilp32`. All four
architectures pass the seven native/source comparisons. Complete 0.8 image
integration remains in progress.
