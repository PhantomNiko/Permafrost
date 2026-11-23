# Permafrost 1.1 TundraWindow recovery

The four architecture folders compile from C and initialized data through
`tools/library_native.py`. Original function entries, exports and data
relocations are recorded separately. The build does not consume reference
machine code. Pooka's Free Software License applies.

The 1.1 window layout and heap initialization are recovered from this release.
Older window field offsets and heap-state replacements are excluded. ARM32
scalar literal cells are retained as constants; ARM64 machine-outlined blocks
are expanded for analysis before translation. The system-font API preserves
WinterScript variable conversion, bounded paths and the native float ABI.

Native/source creation, title, size and query-record comparisons pass on all
four architectures. Each architecture also passes 56 system-font service
comparisons. These isolated checks do not establish complete API or VM parity.
Full window interactions, exception paths and system integration remain gates
for promoting the candidate release.
