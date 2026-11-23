/* Native variadic scheduler diagnostics; Pooka's Free Software License. */
#include "functions.h"
void recovered_20a6f90(const char *format,...){
 if(!format || !*(volatile unsigned char *)(uintptr_t)0x261f080U)return;
 char text[192];__builtin_va_list arguments;__builtin_va_start(arguments,format);
 recovered_2005060(text,sizeof(text),(char *)format,(void *)arguments);__builtin_va_end(arguments);
 recovered_2097b00("%s",text);
}
