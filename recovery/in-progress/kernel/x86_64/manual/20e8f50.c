/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

unsigned long long recovered_20e8f50(char *format,...){
 char text[512],line[1024];
 __builtin_va_list args;__builtin_va_start(args,format);
 recovered_2004bb0(text,sizeof(text),format,args);__builtin_va_end(args);
 size_t used=0;
 for(char *p=text;*p;p++){
  if(*p=='\r')continue;
  if(*p=='\n'){recovered_20c6270(line,used,1,1);used=0;}
  else if(used+1<sizeof(line))line[used++]=*p;
 }
 recovered_20c6270(line,used,1,1);
 for(char *p=text;*p;p++)out(0xe9,*p);out(0xe9,10);return 10;
}
