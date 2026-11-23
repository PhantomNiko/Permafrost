/* Native variadic formatter; Pooka's Free Software License. */
#include "functions.h"
int recovered_824026e8(char *out,ulong capacity,char *format,...){
 __builtin_va_list arguments;__builtin_va_start(arguments,format);
 int result=recovered_8240201c(out,capacity,format,(void *)arguments);
 __builtin_va_end(arguments);return result;
}
