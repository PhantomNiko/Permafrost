/* Native gated boot progress formatting. Pooka's Free Software License. */
#include "functions.h"
void recovered_20b24a0(const char *format,...){
 if(*(volatile unsigned char *)(uintptr_t)0x24a0f88U)return;
 char text[256];__builtin_va_list args;__builtin_va_start(args,format);
 recovered_2003460(text,sizeof(text),(char *)format,(void *)args);
 __builtin_va_end(args);recovered_20868c0("%s",text);recovered_2086400();
}
