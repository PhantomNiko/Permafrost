# License scope

Recovered Permafrost kernels, firmware, applications, libraries and SDK sources
are covered by Pooka's Free Software License in `LICENSE.TXT`.
`licenses/UPSTREAM.TXT` retains the supplied upstream license text. Preserve
its notice and disclaimer in source and binary redistributions.

The embedded Mach distribution is retained unchanged and excluded from source
recovery. Its own notices are preserved in `assets/disk/1/license` and the
recovery volume. It is not relicensed under the recovery license.

The current release uses in-house firmware and Lua. It does not link OpenBIOS
or upstream Lua. Earlier milestones retain their notices and source dependencies
in Git history; the recovery license does not replace their terms. See
`DEPENDENCIES.md` for external source checkouts and component scope.
