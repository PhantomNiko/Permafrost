/* Permafrost C++ allocation and static-initialization ABI.
 * Pooka's Free Software License.
 */
#include <new>
#include <stdint.h>
#include <stdlib.h>

namespace std {
const nothrow_t nothrow{};
[[noreturn]] void terminate() noexcept { abort(); __builtin_trap(); }
}

static void *allocate_aligned(size_t size, size_t alignment) {
    if (alignment < sizeof(void *)) alignment = sizeof(void *);
    void *raw = malloc((size ? size : 1) + alignment + sizeof(void *) - 1);
    if (!raw) return nullptr;
    uintptr_t address = ((uintptr_t)raw + alignment + sizeof(void *) - 1) & -(uintptr_t)alignment;
    ((void **)address)[-1] = raw;
    return (void *)address;
}

void *operator new(size_t size) {
    void *pointer = malloc(size ? size : 1);
    if (!pointer) std::terminate();
    return pointer;
}
void *operator new[](size_t size) { return ::operator new(size); }
void *operator new(size_t size, std::align_val_t alignment) {
    void *pointer = allocate_aligned(size, (size_t)alignment);
    if (!pointer) std::terminate();
    return pointer;
}
void *operator new[](size_t size, std::align_val_t alignment) { return ::operator new(size, alignment); }
void *operator new(size_t size, std::align_val_t alignment, const std::nothrow_t &) noexcept {
    return allocate_aligned(size, (size_t)alignment);
}
void *operator new[](size_t size, std::align_val_t alignment, const std::nothrow_t &tag) noexcept {
    return ::operator new(size, alignment, tag);
}
void operator delete(void *pointer) noexcept { free(pointer); }
void operator delete[](void *pointer) noexcept { free(pointer); }
void operator delete(void *pointer, size_t) noexcept { free(pointer); }
void operator delete[](void *pointer, size_t) noexcept { free(pointer); }
void operator delete(void *pointer, std::align_val_t) noexcept { if (pointer) free(((void **)pointer)[-1]); }
void operator delete[](void *pointer, std::align_val_t alignment) noexcept { ::operator delete(pointer, alignment); }
void operator delete(void *pointer, size_t, std::align_val_t alignment) noexcept { ::operator delete(pointer, alignment); }
void operator delete[](void *pointer, size_t, std::align_val_t alignment) noexcept { ::operator delete(pointer, alignment); }
void operator delete(void *pointer, std::align_val_t alignment, const std::nothrow_t &) noexcept { ::operator delete(pointer, alignment); }
void operator delete[](void *pointer, std::align_val_t alignment, const std::nothrow_t &) noexcept { ::operator delete(pointer, alignment); }

extern "C" {
void *__dso_handle = nullptr;
int __cxa_atexit(void (*destructor)(void *), void *object, void *handle) {
    (void)destructor; (void)object; (void)handle; return 0;
}
int __cxa_guard_acquire(uint64_t *guard) { return !(*(uint32_t *)guard & 1U); }
void __cxa_guard_release(uint64_t *guard) { *guard |= 1U; }
void __cxa_guard_abort(uint64_t *guard) { (void)guard; }
[[noreturn]] void __cxa_pure_virtual(void) { std::terminate(); }
}
