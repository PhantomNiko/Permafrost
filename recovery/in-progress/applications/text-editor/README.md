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
inactive records so the editor can observe later activation without presenting
another frame first.

`tests/text_editor_application.py` compares native and source applications
through the same source TerrorUI library. It checks whole-frame pixels and
service calls while typing, resizing, selecting all, copying, pasting, and
saving through the file menu. The fixture requires copied and saved bytes to
match the entered document, rather than accepting an untouched empty document.
Partial-alpha glyphs exercise clipping and cursor placement.
All four builds pass plain-editing, clipboard/save, and multiline clipboard/save
comparisons: twelve native/source cases in total.

Complete VM validation, opening existing files, pointer selection and storage
persistence still need further checks. This checkpoint does not advance the
canonical target or establish full Permafrost 1.0 equivalence.
