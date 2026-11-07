/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
volatile uint32_t pf_format_snapshot[8];
int recovered_40404a88(char *out,size_t capacity,const char *format,...){
 __builtin_va_list args;__builtin_va_start(args,format);
 pf_format_snapshot[0]=(uintptr_t)out;pf_format_snapshot[1]=capacity;pf_format_snapshot[2]=(uintptr_t)format;pf_format_snapshot[3]=(uintptr_t)args;pf_format_snapshot[4]=*(uint32_t *)(void *)args;pf_format_snapshot[5]=(uintptr_t)__builtin_return_address(0);
 int count=recovered_40403dc0(out,capacity,(char *)format,(void *)args);
 __builtin_va_end(args);return count;
}
