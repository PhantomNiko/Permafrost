#ifndef TAYGA_HEADER_SETJMP_H
#define TAYGA_HEADER_SETJMP_H

#ifdef __cplusplus
extern "C" {
#endif

typedef void* jmp_buf[32];

int setjmp(jmp_buf env) __attribute__((returns_twice));
__attribute__((noreturn)) void longjmp(jmp_buf env, int value);

#ifdef __cplusplus
}
#endif

#endif
