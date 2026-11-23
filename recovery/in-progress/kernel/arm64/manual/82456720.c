/* Native gated scheduler trace; Pooka's Free Software License. */
#include "functions.h"
void recovered_82456720(const char *format,...){
 if(!format || !(*(volatile unsigned char *)(uintptr_t)0x82738114U&1))return;
 char text[192];__builtin_va_list arguments;__builtin_va_start(arguments,format);
 recovered_8240201c(text,sizeof(text),format,(void *)arguments);
 __builtin_va_end(arguments);recovered_8244bcc4("%s",text);
}
