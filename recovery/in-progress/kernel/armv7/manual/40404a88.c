/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
int recovered_40404a88(char *out,size_t capacity,const char *format,...){
 __builtin_va_list args;__builtin_va_start(args,format);
 int count=recovered_40403dc0(out,capacity,(char *)format,(void *)args);
 __builtin_va_end(args);return count;
}
