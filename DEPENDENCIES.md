# Source dependencies

Permafrost 1.0 reconstructs the supplied 1.0r232 Beta. The firmware, four
kernels, in-house Lua, Rwby, WinterScript, twelve native libraries, hardware
drivers, applications, Snowflake compiler and SDK runtime build from C/C++
source in this repository. Builds require Python 3 and Apple Clang/Clang++ on
macOS 15. No reference disk, decompiler, NASM or external firmware checkout is
required.

The embedded Mach distribution is retained as supplied and excluded from source
recovery at the user's request. Its notices are in the recovery volume's
`license` directory and remain subject to their own terms.

The current release uses in-house firmware and Lua. When a historical milestone
uses OpenBIOS, its source checkout is `../openbios`, from
https://github.com/PhantomNiko/openbios. Historical external Lua uses `../lua`,
from https://github.com/PhantomNiko/lua/tree/Permafrost. Preserve those components'
licenses and per-file notices. They are not current build dependencies.

Future source recovery for Zastruga Engine, PicoFrost (including `bobsfrost.bin`),
Sleet and Amur belongs in their sibling repositories and must link those sources
when encountered. They are not dependencies of this release.
