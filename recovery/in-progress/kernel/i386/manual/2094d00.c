/* Native gated variadic scheduler trace. Pooka's Free Software License. */
#include "functions.h"
void recovered_2094d00(const char *format,...){
 if(!format || !*(volatile unsigned char *)(uintptr_t)0x249417cU)return;
 char text[192];__builtin_va_list arguments;__builtin_va_start(arguments,format);
 recovered_2003460(text,sizeof(text),(char *)format,(void *)arguments);
 __builtin_va_end(arguments);recovered_20868c0("%s",text);
}
