/* Exercise the guest DLL loader and the original VM entry ABI.
 * Pooka's Free Software License.
 */
#include <permafrost.h>
#include <stdint.h>

#if defined(PF_VM_NATIVE_I386)
/* Reference private routines use ECX/EDX and caller stack cleanup. */
__attribute__((naked)) static uintptr_t private_call(uintptr_t target, uintptr_t a,
        uintptr_t b, uintptr_t c, uintptr_t d) {
    __asm__ volatile("pushl %ebp\nmovl %esp,%ebp\nandl $-16,%esp\nsubl $16,%esp\n"
        "movl 20(%ebp),%eax\nmovl %eax,(%esp)\n"
        "movl 24(%ebp),%eax\nmovl %eax,4(%esp)\n"
        "movl 12(%ebp),%ecx\nmovl 16(%ebp),%edx\n"
        "call *8(%ebp)\nleave\nretl");
}
#endif

struct wm_string { const char *data; uintptr_t size, capacity; };
struct result_storage { uintptr_t words[64]; };
struct fixture { const char *code; int32_t expected; const char *path; };
static const struct fixture fixtures[] = PF_VM_FIXTURES;
#define CHECK(x) do { if (!(x)) { pf_log("PF-VM-GUEST-FAIL %u", __LINE__); return 0; } } while (0)

static uintptr_t symbol(uintptr_t image, const char *name) {
    uintptr_t result = 0;
#if defined(PF_VM_NATIVE_I386)
    int found = private_call(PF_VM_LOOKUP, image, (uintptr_t)name, (uintptr_t)&result, 0);
#else
    int found = ((int (*)(uintptr_t, const char *, uintptr_t *))PF_VM_LOOKUP)(image, name, &result);
#endif
    return (found & 1) ? result : 0;
}

static int evaluate(uintptr_t image, const struct fixture *test, int from_file) {
    const pf_services *api = pf_api();
    uintptr_t length = 0;
    while (test->code[length]) ++length;
    struct wm_string text = {test->code, length, length};
    uintptr_t path_length = 0;
    while (test->path[path_length]) ++path_length;
    struct wm_string filename = {test->path, path_length, path_length}, name = {"answer", 6, 6};
    /* Reused, uninitialised storage also checks constructor initialisation. */
    void *vm = api->allocate(65536), *value = api->allocate(1024);
    CHECK(vm && value);
    uintptr_t ctor, run, get, dtor;
    if (PF_VM_LANGUAGE == 3) {
        ctor = symbol(image, "__ZN12WinterScriptC1Ev");
        run = symbol(image, from_file ? "__ZN12WinterScript17runScriptFilePathERKN2wm6stringE" : "__ZN12WinterScript9runScriptERKN2wm6stringE");
        get = symbol(image, "__ZNK12WinterScript12pullVariableERKN2wm6stringE");
        CHECK(ctor && run && get);
        pf_log("PF-VM-GUEST-START %x", (uint32_t)ctor);
        ((void (*)(void *))ctor)(vm);
        pf_log("PF-VM-GUEST-RUN");
        if (from_file) {
            struct result_storage status = ((struct result_storage (*)(void *, const struct wm_string *))run)(vm, &filename);
            (void)status;
        } else {
            ((void (*)(void *, const struct wm_string *))run)(vm, &text);
        }
        pf_log("PF-VM-GUEST-GET");
        struct result_storage result = ((struct result_storage (*)(void *, const struct wm_string *))get)(vm, &name);
        uint8_t *bytes = (uint8_t *)&result;
        uint32_t tag = *(uint32_t *)bytes;
        void *number = bytes + (sizeof(void *) == 8 ? 8 : 4);
        CHECK(tag == 1 || tag == 2);
        CHECK((tag == 1 ? *(int32_t *)number : (int32_t)*(float *)number) == test->expected);
    } else {
        int lua = PF_VM_LANGUAGE == 1;
        ctor = symbol(image, lua ? "__ZN6winter3lua5LuaVMC1Ev" : "__ZN6winter4ruby6RubyVMC1Ev");
        run = symbol(image, from_file ?
            (lua ? "__ZN6winter3lua5LuaVM13runScriptFileERKN2wm6stringE" : "__ZN6winter4ruby6RubyVM13runScriptFileERKN2wm6stringE") :
            (lua ? "__ZN6winter3lua5LuaVM15runScriptStringERKN2wm6stringES5_" : "__ZN6winter4ruby6RubyVM15runScriptStringERKN2wm6stringES5_"));
        get = symbol(image, lua ? "__ZNK6winter3lua5LuaVM9getGlobalERKN2wm6stringERNS0_8LuaValueE" : "__ZNK6winter4ruby6RubyVM9getGlobalERKN2wm6stringERNS0_9RubyValueE");
        uintptr_t integer = symbol(image, lua ? "__ZNK6winter3lua8LuaValue9asIntegerEv" : "__ZNK6winter4ruby9RubyValue9asIntegerEv");
        uintptr_t value_ctor = symbol(image, lua ? "__ZN6winter3lua8LuaValueC1Ev" : "__ZN6winter4ruby9RubyValueC1Ev");
        dtor = symbol(image, lua ? "__ZN6winter3lua5LuaVMD1Ev" : "__ZN6winter4ruby6RubyVMD1Ev");
        CHECK(ctor && run && get && integer && value_ctor && dtor);
        pf_log("PF-VM-GUEST-START %x", (uint32_t)ctor);
        ((void (*)(void *))ctor)(vm);
        pf_log("PF-VM-GUEST-RUN");
        struct result_storage result = from_file ?
            ((struct result_storage (*)(void *, const struct wm_string *))run)(vm, &filename) :
            ((struct result_storage (*)(void *, const struct wm_string *, const struct wm_string *))run)(vm, &text, &filename);
        (void)result;
        ((void (*)(void *))value_ctor)(value);
        CHECK(((int (*)(void *, const struct wm_string *, void *))get)(vm, &name, value) & 1);
        CHECK(((int64_t (*)(void *))integer)(value) == test->expected);
        pf_log("PF-VM-GUEST-DESTROY");
        ((void (*)(void *))dtor)(vm);
    }
    api->deallocate(value);
    api->deallocate(vm);
    return 1;
}

int main(void) {
    *(volatile uint8_t *)PF_VM_SERIAL_FLAG = 1;
    const char *module = PF_VM_LANGUAGE == 1 ? "/WinterLua.dylib" : PF_VM_LANGUAGE == 2 ? "/WinterRwby.dylib" : "/WinterScript.dylib";
    char error[1024] = {0};
#if defined(PF_VM_NATIVE_I386)
    int loaded = private_call(PF_VM_LOAD, (uintptr_t)module, PF_VM_CPU, 0, (uintptr_t)error);
#else
    int loaded = ((int (*)(const char *, uint32_t, uint8_t, char *))PF_VM_LOAD)
        (module, PF_VM_CPU, sizeof(void *) == 8, error);
#endif
    if (!(loaded & 1)) {
        pf_log("PF-VM-GUEST-LOAD-FAIL %s", error);
        return 0;
    }
#if defined(PF_VM_NATIVE_I386)
    uintptr_t image = private_call(PF_VM_FIND, (uintptr_t)module, 0, 0, 0);
#else
    uintptr_t image = ((uintptr_t (*)(const char *))PF_VM_FIND)(module);
#endif
    CHECK(image);
    unsigned count = sizeof(fixtures) / sizeof(fixtures[0]);
    for (unsigned mode = 0; mode < 2; ++mode) {
        for (unsigned i = 0; i < count; ++i) {
            CHECK(evaluate(image, fixtures + i, mode));
            pf_log("PF-VM-GUEST-CASE %u", mode * count + i);
        }
    }
    pf_log("PF-VM-GUEST-PASS");
    return 1;
}
