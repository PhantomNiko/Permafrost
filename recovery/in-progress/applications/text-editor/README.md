# Text editor recovery checkpoint

Pooka's Free Software License applies to this recovered application source.

TextEditor builds from C for i386, x86-64, ARM32 and ARM64 with the source
TerrorUI library. Reference executables are not build inputs:

```sh
python3 tools/application_native.py recovery/in-progress/applications/text-editor/x86_64 build/text-editor --library /lib/TerrorUI.dylib=build/lib-100/TerrorUI/x86_64/TerrorUI
```

The x64 window specification copies the full sixteen-byte title/size prefix.
Its stack storage is reused for other records later in the entry function;
a pointer-sized copy lost the width and height during recovery. i386's fixed
switch-table destinations are recovered as C control flow. ARM64 resolves its
indirect memory-clear import to C after expanding machine-outlined sequences.
ARM32 preserves the cursor-column stack store and implements its widening
vector newline counts in scalar C. The shared window-focus helper refreshes
records at each iteration so an idle editor observes activation, menu actions
and close requests without presenting another frame first. This intentionally
corrects the native application's cache stall.

`tests/text_editor_application.py` compares native and source applications
through the same source TerrorUI library. It checks whole-frame pixels and
service calls while typing, resizing, selecting all, copying, pasting, and
saving through the file menu. The fixture requires copied and saved bytes to
match the entered document, rather than accepting an untouched empty document.
Partial-alpha glyphs exercise clipping and cursor placement.
All four builds pass plain-editing, clipboard/save, and multiline clipboard/save
comparisons. Both sides of these algorithm and pixel comparisons query fresh
records; the fixture explicitly clears the UI cache at query entry. Four further
`--idle-menu` source regressions use the production cache behavior and require
a delayed Save notification to write the entered bytes, followed by a delayed
close request, without another key or forced cache invalidation.

The x64 VM types Hello and reports Saved - TextEditor.txt after choosing File /
Save with the C kernel, current C firmware, C libraries and C editor. Other
reference components remain on that diagnostic disk. Command-S is not bound
by the reference editor. Persistent on-disk bytes still need verification.

Complete VM validation, opening existing files, pointer selection and storage
persistence still need further checks. This checkpoint does not advance the
canonical target or establish full Permafrost 1.0 equivalence.
