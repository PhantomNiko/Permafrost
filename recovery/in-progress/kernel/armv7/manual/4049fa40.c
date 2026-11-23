/* Native gated scheduler trace; Pooka's Free Software License. */
#include "functions.h"
void recovered_4049fa40(char *format,...){
 if(!format || !(*(volatile unsigned char *)(uintptr_t)0x4068cb04U&1))return;
 char text[192];__builtin_va_list arguments;__builtin_va_start(arguments,format);
 recovered_404047b8(text,sizeof(text),format,(void *)arguments);__builtin_va_end(arguments);
 recovered_4048ea84("%s",text);
}
