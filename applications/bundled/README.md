# Bundled native interpreters

`rwby` (WinterRwby 0.1) and `winterscript` (standalone WinterScript 0.4) are
the covered native applications from the supplied 0.7 BIOS distribution.
They retain Pooka's Free Software License in the repository's `LICENSE.TXT`;
redistributed images include that license. `manifest.json` records their
original hashes and integer-helper entry points.

These two VM implementations remain upstream binaries. The kernel's built-in
WinterScript implementation and the WinterLua application are recovered source.
Experimental native VM translations are not used in release builds.

`tools/native_application.py` preserves each VM's loaded code and data, replaces
six recursive/broken integer helper entries with jumps to `kernel/compiler.c`,
and writes the supported Mach-O format. It also replaces old OS branding with
Permafrost using equal-length strings. The VM itself is not claimed to build
from source.
