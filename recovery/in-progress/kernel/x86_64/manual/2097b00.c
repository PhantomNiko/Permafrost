/* Native variadic logging, line splitting and serialization.
 * Pooka's Free Software License. */
#include "functions.h"
void recovered_2097b00(const char *format,...){
 char text[512],line[1024];
 __builtin_va_list arguments;__builtin_va_start(arguments,format);
 recovered_2005060(text,sizeof(text),format,(void *)arguments);
 __builtin_va_end(arguments);
 volatile unsigned *lock=(volatile unsigned *)(uintptr_t)0x26139e8U;
 while(__atomic_exchange_n(lock,1,__ATOMIC_SEQ_CST)){
  while(__atomic_load_n(lock,__ATOMIC_RELAXED)){}
 }
 size_t used=0;
 for(const char *p=text;*p;p++){
  if(*p=='\r')continue;
  if(*p=='\n'){recovered_2101930(line,used,1,1);used=0;}
  else if(used+1<sizeof(line))line[used++]=*p;
 }
 recovered_2101930(line,used,1,1);
 __atomic_store_n(lock,0,__ATOMIC_RELEASE);
}
