/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_202ce90(const char *format,...){
 char buffer[512],line[1024];__builtin_va_list args;__builtin_va_start(args,format);
 recovered_2003af0(buffer,sizeof(buffer),(char *)format,(void *)args);__builtin_va_end(args);
 unsigned count=0;
 for(char *p=buffer;*p;++p){
  if(*p=='\r')continue;
  if(*p=='\n'){recovered_20a11d0((undefined1 *)line,count,1,1);count=0;}
  else if(count+1<sizeof(line))line[count++]=*p;
 }
 recovered_20a11d0((undefined1 *)line,count,1,1);
}
