/* Native variadic forwarding. Pooka's Free Software License. */
#include "functions.h"
int recovered_2005a30(char *out,size_t capacity,const char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int count=recovered_2004bb0(out,capacity,(char *)format,(void *)args);
 __builtin_va_end(args);return count;
}
