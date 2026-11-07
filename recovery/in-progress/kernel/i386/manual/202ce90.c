/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_202ce90(const char *format,...){
 char buffer[512];__builtin_va_list args;__builtin_va_start(args,format);
 recovered_2003af0(buffer,sizeof(buffer),format,(void *)args);__builtin_va_end(args);
 unsigned start=0;
 for(unsigned i=0;;++i){if(buffer[i]=='\n' || !buffer[i]){
  recovered_20a11d0(buffer+start,i-start,1,1);if(!buffer[i])break;start=i+1;
 }}
}
