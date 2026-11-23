/* Native formatted console and line serialization.
 * Pooka's Free Software License. */
#include "functions.h"
void recovered_4048ea84(char *format,...){
 char text[512],line[1024];__builtin_va_list args;__builtin_va_start(args,format);
 recovered_404047b8(text,sizeof(text),format,(void *)args);__builtin_va_end(args);
 volatile unsigned *lock=(volatile unsigned *)(uintptr_t)0x40683bacU;
 while(__atomic_exchange_n(lock,1,__ATOMIC_ACQUIRE)){while(__atomic_load_n(lock,__ATOMIC_RELAXED)){} }
 size_t count=0;for(char *p=text;*p;p++){if(*p=='\r')continue;if(*p=='\n'){recovered_40500f44(line,count,1,1);count=0;}else if(count+1<sizeof(line))line[count++]=*p;}
 recovered_40500f44(line,count,1,1);__atomic_store_n(lock,0,__ATOMIC_RELEASE);
}
