/* Permafrost Lua host interface; Pooka's Free Software License. */
#pragma once
typedef unsigned int jmp_buf[6];
int setjmp(jmp_buf) __attribute__((returns_twice));
void longjmp(jmp_buf,int) __attribute__((noreturn));
