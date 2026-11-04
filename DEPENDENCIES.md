# Source dependencies

Permafrost 0.6 reconstructs the supplied 0.7 reference. That reference replaces
the external Lua VM with in-house WinterLua 0.2. The current target therefore
has no dependency on upstream Lua, and the obsolete local Lua host port has
been removed. WinterLua builds from the recovered C sources in `applications/lua`.

Historical milestones that use upstream Lua obtain it from the sibling
`../lua` checkout of https://github.com/PhantomNiko/lua/tree/Permafrost.
Lua retains its MIT license and copyright. Its source is not vendored here.
Historical images containing upstream Lua already carry its MIT notice.
See `LICENSES.md` for the current distribution scope.

The OpenBIOS variant builds firmware from the sibling `../openbios` checkout
of https://github.com/PhantomNiko/openbios. `dependencies.json` pins the source
revision. Preserve that checkout's upstream GPL and per-file notices; the
reconstruction license does not replace them. Its firmware implementation is
built from source, rather than decompiled into reconstruction-owned code.
`tools/openbios.py` builds out of tree with Clang and GNU i386 ELF binutils
(`i386-elf-` by default, configurable with `--binutils-prefix`). It applies
`patches/openbios/builtin-memory.patch` to a generated copy and changes the boot
message in another generated copy. The sibling checkout is not modified.
These modified OpenBIOS files retain their upstream GPL notices and license.

WinterRwby 0.1 and standalone WinterScript 0.4 build from the recovered C
sources in `applications/rwby` and `applications/winterscript`, with shared
freestanding support in `kernel`. Their original hashes and recovery profiles
are retained in `recovery/applications`. No reference VM binaries or decompiler
installation are needed for normal builds. These in-house implementations
remain covered by Pooka's Free Software License.
