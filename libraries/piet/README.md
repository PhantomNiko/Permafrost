# Permafrost native library

Recovered C source for `WinterPiet` from the 0.9 reference, targeting Permafrost 0.8.
Pooka's Free Software License applies; see `LICENSE.TXT`.

Each architecture has an export and relocation profile. Build from source with:

```sh
python3 tools/library_native.py libraries/piet/arm64 build/libraries/piet/arm64
```

These builds are included in the current 0.8 images.
