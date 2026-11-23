The 1.1 diagnostics application has recovered C sources for IA32, x64 and
ARM64, matching the supplied native slices. No ARM32 slice exists in the
reference. Platform state records are fixed at 500 bytes; control requests
retain their native 40-byte narrow and 56-byte wide layouts.

Native comparisons cover fallback UI, populated records, five power controls
and service counts at and above the 72-record limit. The x64 VM renders live
records. ARM64 VM integration remains unfinished. Pooka's Free Software License
applies to these sources.
