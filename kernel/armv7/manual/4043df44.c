#include "functions.h"
/* Recovered native variadic output ABI. Pooka's Free Software License. */
void recovered_4043df44(char *out,uint capacity,char *format,...){
 char buffer[512];__builtin_va_list args;__builtin_va_start(args,format);
 recovered_40403dc0(buffer,sizeof(buffer),format?format:"",(void *)args);
 __builtin_va_end(args);recovered_4043cc28(out,capacity,buffer);
}
