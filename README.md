# Permafrost 0.6 — recovery in progress

This milestone reconstructs the supplied 0.7 Beta references as Permafrost 0.6.
It replaces 0.5 as the current build target. Historical source and SDK milestones
remain in Git history.

Kernel, Mach-O application, OpenBIOS and SDK recovery is ongoing. A validated
0.6 image and SDK have not yet been published. The recovered source remains
low level; successful compilation alone does not establish compatibility.

See [release findings](docs/release.md), [recovery method](docs/decompilation.md),
[license scope](LICENSES.md), and [source dependencies](DEPENDENCIES.md).

Build tools target macOS 15 with Python 3, NASM and Apple Command Line Tools.
The OpenBIOS variant uses the separate sibling `../openbios` source checkout.
Reference images are local analysis inputs and are not committed. Normal release
builds must use recovered source rather than embedding reference executables.

Upstream Lua retains its MIT license and is obtained from `../lua` in historical
milestones that need it. The current reference uses in-house WinterLua 0.2;
the obsolete local host integration for upstream Lua has been removed.
Third-party licenses are never replaced by the reconstruction license.
