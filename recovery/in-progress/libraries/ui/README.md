# TerrorUI 1.1 recovery checkpoint

The four architecture folders build the release-matched library from C,
initialized data and relocation metadata. No reference executable is a build
input. The register-context primitives use inline architectural instructions.

The 1.1 view adds a text capacity word and a text-field constructor. Portable
C aggregate exports preserve each target ABI, including hidden result storage.
ARM32 literal-pool scalar data is recorded separately; its vector pixel fills
use the recovered scalar RGBA expressions. Explicit service calls preserve
arguments across native tail transfers.

Each architecture passes 368 aggregate constructor/modifier cases, 273 recursive
layout cases with 136 text-service calls, and 182 window/input operations with
293 service calls. Those checks include native/source pixel equality. The
candidate public view declaration is under the in-progress SDK include tree.
VM integration and the remaining system components still gate release.

Pooka's Free Software License applies.
