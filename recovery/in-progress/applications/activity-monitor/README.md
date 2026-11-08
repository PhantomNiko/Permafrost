# Activity Monitor recovery checkpoint

Pooka's Free Software License applies to this recovered application source.

The x86-64 application builds entirely from C with the recovered TerrorUI DLL:

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

The source application opens and updates in an x86-64 mixed desktop diagnostic.
That disk retains other reference components and is not a release image. The
other three application architectures and complete source-image VM comparison
remain unfinished. The canonical build target has not advanced.
