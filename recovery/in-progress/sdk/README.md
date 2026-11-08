# Permafrost 1.0 SDK checkpoint

The public API, image/audio formats, GPU/network and TerrorUI declarations come
from headers included in the reference distribution. They remain covered by
Pooka's Free Software License. Includes now resolve within this directory, and
the API address defaults to the matching x86, ARM32 or ARM64 service table.
The version macro uses the Permafrost name. Existing public C type and function
names preserve compatibility with software using the original ABI.

The layout checks compile as C and C++ for all four architectures. They verify
the 412-byte service table, 632-byte window query with content serial, 28-byte
window pointer record, 52-byte framebuffer record, and TerrorUI aggregates.
Run `python3 tests/sdk_headers.py` to repeat them.

These headers are an integration checkpoint. The complete relocatable macOS 15
`.sdk` bundle, compiler/linker interfaces, linked source libraries and guest
application checks remain release gates. The normal build still targets the
last completed release until Permafrost 1.0 meets its source and VM checks.
