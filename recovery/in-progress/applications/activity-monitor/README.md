# Activity Monitor recovery checkpoint

Pooka's Free Software License applies to this recovered application source.

All four architectures build entirely from C with the recovered TerrorUI DLL:

```sh
python3 tools/application_native.py recovery/in-progress/applications/activity-monitor/x86_64 build/activity-monitor --library /lib/TerrorUI.dylib=build/lib-100/TerrorUI/x86_64/TerrorUI
```

The builder uses source DLL exports to declare imports. No reference executable
is a build input. Initialized data includes seven string-pointer fixups that
were implicit in the fixed-address reference executable, without dyld rebases.

`tests/activity_monitor.py` compares reference and recovered applications through
the same recovered TerrorUI DLL. Controlled kernel services exercise populated
process, device and system statistics, sample history, window queries, clipping,
text rendering and partial-alpha glyphs. The fixture requires all seven process
column labels, so missing text pointers cannot produce a vacuous match.

All four builds match populated statistics and glyph frames through the real
source TerrorUI DLL. Additional full-height comparisons exercise pointer-selected
memory (ARM64), disk-activity (ARM32), disk-usage (i386) and network (x86-64) tabs.
The fixture asserts that the requested tab's content was actually exercised.
ARM32 formatted-size branches preserve their packed variadic argument words;
i386 also recovers its fixed-address data and tab jump table. ARM64 expands
machine-outlined sequences before recovery to preserve caller stack addresses.

The source application opens and updates in an x86-64 mixed desktop diagnostic.
That disk retains other reference components and is not a release image. Native
VM checks for the other three applications and complete source-image comparison
remain unfinished. The canonical build target has not advanced.
