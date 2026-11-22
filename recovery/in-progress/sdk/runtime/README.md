# SDK runtime recovery

`cpp.cpp` recovers the reference archive's C++ allocation, deletion,
termination, static-initialization guards, and destructor-registration ABI.
It compiles for i386, x64, ARM32, and ARM64 with the recovered SDK headers.
`tests/sdk_cpp_runtime.py` compares 407 allocation, alignment, failure,
delete, guard, and termination cases per architecture against reference
objects linked into diagnostic libraries. Reference objects are test inputs.

The native runtime terminates on ordinary allocation failure; its aligned
nothrow allocation returns null. Aligned pointers retain their original heap
pointer immediately before the returned address. Guard release preserves
other bits, and the native destructor-registration entry returns success
without retaining callbacks. The recovered implementation preserves these
behaviors.

The remaining C runtime and startup objects still need source integration
before this directory can replace `libtayga.a` in a completed SDK bundle.
This is a recovery checkpoint, not a separate release target.
