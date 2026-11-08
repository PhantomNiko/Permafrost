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

The `tayga/include` checkpoint imports 135 source files supplied with the
reference SDK, including the C/C++ library headers, Tayga interfaces, and
`winter_std.c`. The manifest records the original source hashes. Legacy ABI includes forward
to the canonical headers so ARM programs use the correct service-table address
and mixed includes share one type definition. Public names preserve compatibility
with existing guest programs. These source files
contain no reference object files or libraries; their runtime linking and
integration into the macOS bundle remain pending.

`python3 tests/tayga_headers.py` checks mixed canonical/legacy includes and
service-table addresses as C and C++ on all four CPUs. The C++ check uses the
provided vector, string, map, algorithm, optional, and variant headers.
