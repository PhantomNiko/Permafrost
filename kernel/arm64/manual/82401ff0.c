/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

int recovered_82401ff0(char *buffer,size_t capacity,const char *format,...){
 __builtin_va_list args;__builtin_va_start(args,format);
 int count=recovered_82401998(buffer,capacity,format,(void *)args);
 __builtin_va_end(args);return count;
}
