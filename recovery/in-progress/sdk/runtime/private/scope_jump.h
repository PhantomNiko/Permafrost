/* Native scope-unwind register ABI. Pooka's Free Software License. */
#pragma once

/* These entry points must have no C prologue: the record replaces the current
 * frame and stack before transferring to its saved program counter. */
#if defined(__x86_64__)
#define PF_SCOPE_JUMP_ASM \
    "movq 80(%rdi),%rsp\n" \
    "movq 64(%rdi),%rbp\n" \
    "movq 72(%rdi),%rdx\n" \
    "jmpq *%rdx"
#elif defined(__i386__)
#define PF_SCOPE_JUMP_ASM \
    "movl 4(%esp),%eax\n" \
    "movl 40(%eax),%esp\n" \
    "movl 32(%eax),%ebp\n" \
    "movl 36(%eax),%edx\n" \
    "jmpl *%edx"
#elif defined(__aarch64__)
#define PF_SCOPE_JUMP_ASM \
    "ldr x16,[x0,#80]\n" \
    "mov sp,x16\n" \
    "ldr x29,[x0,#64]\n" \
    "ldr x16,[x0,#72]\n" \
    "br x16"
#elif defined(__arm__)
#define PF_SCOPE_JUMP_ASM \
    "ldr sp,[r0,#40]\n" \
    "ldr r7,[r0,#32]\n" \
    "ldr ip,[r0,#36]\n" \
    "bx ip"
#else
#error Unsupported scope-unwind architecture
#endif
