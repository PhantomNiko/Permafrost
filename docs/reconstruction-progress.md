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
