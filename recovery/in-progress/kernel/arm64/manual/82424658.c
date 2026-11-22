#include "functions.h"
/* Recovered native variadic output ABI. Pooka's Free Software License. */
void recovered_82424658(char *out,uint capacity,char *format,...){
 char buffer[512];__builtin_va_list args;__builtin_va_start(args,format);
 recovered_82401998(buffer,sizeof(buffer),format?format:"",(void *)args);
 __builtin_va_end(args);recovered_82423f1c(out,capacity,buffer);
}
