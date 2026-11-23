/* Native variadic formatter entry. Pooka's Free Software License. */
#include "functions.h"
int recovered_2003fc0(char *out,ulong capacity,const char *format,...){
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_2003460(out,capacity,(char *)format,(void *)args);
 __builtin_va_end(args);return result;
}
