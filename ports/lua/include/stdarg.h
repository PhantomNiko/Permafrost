/* Permafrost Lua host interface; Pooka's Free Software License. */
#pragma once
typedef __builtin_va_list va_list;
#define va_start(ap,last) __builtin_va_start(ap,last)
#define va_end(ap) __builtin_va_end(ap)
#define va_arg(ap,type) __builtin_va_arg(ap,type)
#define va_copy(out,in) __builtin_va_copy(out,in)
