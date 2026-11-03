# External source dependencies

When a release includes Lua, build and link the application against
[PhantomNiko/lua, branch Permafrost](https://github.com/PhantomNiko/lua/tree/Permafrost),
using the sibling checkout `../lua`. Preserve Lua's upstream copyright and
license; the reconstruction license does not replace third-party licenses.
Replace this dependency with the recovered in-house implementation when the
reference release actually replaces Lua.

When OpenBIOS is encountered, use
[PhantomNiko/openbios](https://github.com/PhantomNiko/openbios), in the sibling
checkout `../openbios`, and retain its applicable upstream licenses. Do not
introduce it as a dependency for releases that do not contain it.

The current 0.4 reference contains a standalone Lua application and an in-house
WinterScript kernel interpreter. Its boot sector and loader are custom BIOS
code; OpenBIOS has not been identified in this reference. Lua is compiled and linked against that source checkout. The VM is not copied
into reconstruction-owned source; its upstream license accompanies the binary.
