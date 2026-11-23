/* Native variadic storage error formatting. Pooka's Free Software License. */
#include "functions.h"
void recovered_21052c0(char *error,ulong capacity,const char *format,...){
 if(!error || !capacity)return;
 __builtin_va_list args;__builtin_va_start(args,format);
 recovered_2003460(error,capacity,(char *)format,(void *)args);__builtin_va_end(args);
}
