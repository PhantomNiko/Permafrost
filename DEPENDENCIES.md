# Source dependencies

Permafrost 0.7 reconstructs the supplied 0.8 release. Its BIOS firmware, EFI
loaders, kernels, WinterLua 0.2, Rwby, and standalone WinterScript build from
C/C++ sources in this repository. Normal builds require Python 3 and host
Clang/Clang++; no reference disk, decompiler, NASM, or external firmware tree
is required. The SDK targets macOS 15 hosts.

The reference replaced OpenBIOS with its own firmware. OpenBIOS is therefore
no longer a build dependency or target. Historical milestones using OpenBIOS
obtain it from `../openbios`, https://github.com/PhantomNiko/openbios, preserving
its upstream GPL and per-file notices.

WinterLua is the in-house implementation, distinct from upstream Lua.
Historical milestones using upstream Lua obtain its separately licensed
sources from `../lua`, https://github.com/PhantomNiko/lua/tree/Permafrost.
The current target does not link that implementation.
