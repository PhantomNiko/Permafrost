# Permafrost 0.9 reconstruction

The current target is Permafrost 0.9, recovered from the supplied
1.0r147-Prerelease image. Its eight-slice reference inventory is recorded in
`recovery/reference.json`; the selected build scope is i386, x86-64, ARM32
and ARM64. Previous milestones remain in Git history.

The BIOS and shared EFI loaders, four kernels, nine universal guest DLLs and
utilities build from C/C++ source. The normal build also packages the macOS 15
SDK with the recovered WMAP v13 interface. Kernel image decoding shares the
recovered C codecs with the PNG DLL instead of retaining duplicate decoders.

The current DLL matrix passes 46 numeric cases in each of 36 slices, twelve
TrueType raster fixtures per CPU, thirteen window ABI fixtures per CPU and
92 VM execution fixtures across the in-house Lua, Rwby and WinterScript
runtimes. Six image formats cross-decode between native and source DLLs on
all CPUs. PNG writer checks include a stream spanning multiple stored blocks.
All four kernel decoders match native pixels with allocation ownership checks.

All three runtime DLLs pass 230 booted C++ entry-ABI cases across BIOS and
four EFI paths. These run the same arithmetic, negative values, precedence,
loops, arrays, functions, float arithmetic and string conditionals through
both string and real file APIs. VM construction, lookup and available
destructors run against reused heap storage. The library comparison harness
also protects the null page, poisons memory and checks allocation ownership.

The complete bundled kernel self-test passes all five boot paths. Public SDK
checks cover allocation, files, PNG decoding and native callbacks; EFI checks
also exercise window graphics, menus, real keyboard input, strings and
persistent console variables. BIOS runs relocated-SDK C, C++ and runtime
Mach-O programs. ARM firmware checks use virtio-ramfb, with ARM64 also tested
at 4 GiB RAM. Both ARM displays were inspected after the graphics checks.

Recovery corrections include full-width relocation integers, ARM image-span
allocation and loader results, shared-pointer receiver arguments, recovered
stack temporaries and 32-bit file metadata. i386 calls respect the C++ stack
boundary, and guest libraries use the legacy x87 instruction baseline.
Compiler probes initialize the FPU as firmware does and execute C/C++ output
on all four CPUs.

The images and macOS 15 SDK are built from the current C/C++ source. The
release gates above pass; the conformance boundaries in `release.md` remain
explicit. Historical versions are retained through Git tags rather than
additional active build targets.

## Next milestone: Permafrost 1.0

Recovery of the supplied `WinterBoot-1.0r232-Beta.img` is in progress. This
milestone is not tagged or released. The normal build still targets the
completed 0.9 milestone while the next implementation is validated.

Candidate kernels compile and link from C for all four architectures. ARM32,
ARM64 and i386 pass the scalar interpreter corpus; ARM32 and i386 also match
the typed builtin comparisons. i386 passes the control-flow corpus. ARM64's
earlier builtin and control-flow comparisons also pass.

Diagnostic EFI images using the candidate C kernels and reference applications
reach the desktop on x86-64, ARM64 and ARM32. BIOS mounts the filesystem and
reaches the interactive shell, but its desktop startup still needs comparison.
The shared C decoder matches native pixels for BMP, PNG, TGA and XCF on all
four architectures. This reference removed REI and
JPEG support, so the next milestone must retain its narrower format set.
These diagnostic images still contain reference application and library code;
they are not source-built release artifacts.

The candidate PNG DLL builds entirely from C on all four architectures. All
four match the 14-case native PNG decoding corpus and pass the public BMP,
PNG, TGA and XCF reader/writer corpus. ARM32 also cross-decodes native and
source output for all four formats. Rebuilt exports include C++ type information and
stream data symbols. ARM64 recovery expands machine-outliner sequences before
decompilation. The retained window DLLs match native window creation arguments, titles,
dimensions and query records on all four architectures; their numeric and
math export comparisons also pass. The other DLL behavior remains under
recovery. The retained C font core, with updated exports, passes all 12 native
raster fixtures on each architecture. Its new exponential and time exports
pass 63 ABI comparisons per architecture, and its numeric exports pass 46.
The ARM candidates also pass the font corpus with only their current shared
service base mapped; the ARM64 port moves those accesses to the new base.
Broader font and application behavior still requires VM validation. The current
x86-64 audio DLL compiles from C and matches 20 native track-generation cases,
including waveform/channel combinations, frame rounding, zero-length tracks
and invalid arguments. Its duration-rounding import is replaced by C; native
import-stub instructions are cleared from the candidate initialized data.
Audio editing, file I/O and the remaining architectures still need validation.

Corrections identified during this recovery include ARM32 soft-float and
Darwin variadic argument packing, literal pools embedded in ARM32 text, scalar
register values held in decompiler arrays, callback stack alignment, complete
ARM64 exception vectors, and preserved aliases for native thunk entries.
An unsigned ARM64 scheduler range check must remain unsigned for kernel
contexts. The x86-64 scheduler also needs explicit bootstrap PC and stack
stores omitted by the decompiler at a split control-flow block.
ARM32 needs the equivalent task-context stores. Its API publisher must retain
a thunk as a function pointer: interpreting that alias as a byte global
published an instruction byte and caused the desktop's invalid branch.

Remaining gates include BIOS desktop startup, broader ARM32 VM validation, interactive and
persistent VM behavior, recovery of the new application/library/driver code,
third-party payload handling, and the macOS 15 SDK. Only after the complete
source-built image passes VM comparisons will this milestone receive its tag;
1.1 and 1.2 follow in that order.
