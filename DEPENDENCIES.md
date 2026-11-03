# Source dependencies

Permafrost 0.6 reconstructs the supplied 0.7 reference. That reference replaces
the external Lua VM with in-house WinterLua 0.2. The current target therefore
has no dependency on upstream Lua, and the obsolete local Lua host port has
been removed. In-house application recovery is in progress.

Historical milestones that use upstream Lua obtain it from the sibling
`../lua` checkout of https://github.com/PhantomNiko/lua/tree/Permafrost.
Lua retains its MIT license and copyright. Its source is not vendored here.
See `licenses/LUA-MIT.TXT` and `LICENSES.md`.

The OpenBIOS variant builds firmware from the sibling `../openbios` checkout
of https://github.com/PhantomNiko/openbios. `dependencies.json` pins the source
revision. Preserve that checkout's upstream GPL and per-file notices; the
reconstruction license does not replace them. Its firmware implementation is
built from source, rather than decompiled into reconstruction-owned code.
