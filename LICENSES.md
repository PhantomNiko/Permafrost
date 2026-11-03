# License scope

`LICENSE.TXT` reproduces Pooka's Free Software License for reconstructed
Permafrost code. Its upstream distribution wildcard does not replace the
licenses of third-party software. Preserve each component's notices and
license when building or redistributing it.

| Component | Source | License |
| --- | --- | --- |
| Reconstructed Permafrost kernel and covered applications | This repository | Pooka's Free Software License, `LICENSE.TXT` |
| Upstream Lua, when used by a historical milestone | `../lua`, https://github.com/PhantomNiko/lua/tree/Permafrost | Lua MIT license, `licenses/LUA-MIT.TXT` |
| OpenBIOS firmware | `../openbios`, https://github.com/PhantomNiko/openbios | Upstream GPL and per-file notices; `licenses/OPENBIOS-GPL-2.0.TXT` |

The old `ports/lua` directory contained local host integration, not the external
Lua VM. That obsolete integration has been removed for the 0.7 reference's
in-house WinterLua replacement. Upstream Lua sources belong in the separate
sibling checkout and are not imported or relicensed here. Existing Lua
copyright and license notices remain applicable to any historical Lua binaries.

In-house WinterLua and upstream Lua are distinct implementations. The shared
language name does not transfer ownership or change upstream Lua's license.
