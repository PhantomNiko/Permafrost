/* Native variadic wrapper; Pooka's Free Software License. */
#include "functions.h"
int recovered_2005f40(char *out,unsigned long capacity,const char *format,...){
 __builtin_va_list arguments;__builtin_va_start(arguments,format);
 int result=recovered_2005060(out,capacity,format,(void *)arguments);
 __builtin_va_end(arguments);return result;
}
