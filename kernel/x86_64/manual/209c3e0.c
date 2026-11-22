/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_209c3e0(void *context,const char *token,const char *format,...) {
 char message[256];__builtin_va_list args;__builtin_va_start(args,format);
 recovered_2004bb0(message,sizeof(message),format,(void *)args);__builtin_va_end(args);
 if(*(volatile uintptr_t *)(uintptr_t)0x226c2a8U) {
  recovered_2005a30((char *)(uintptr_t)0x226c2c0U,256,"%s",message);
  *(volatile uint8_t *)(uintptr_t)0x226c2b0U=1;
  return;
 }
 recovered_2044530((char *)(uintptr_t)0x20fcdb1U,message);
 if(context) {
  int line=*(int *)context+1;
  if(token && *token)recovered_2044530((char *)(uintptr_t)0x20fcdc7U,line,token);
  else recovered_2044530((char *)(uintptr_t)0x20fcddeU,line);
  char *source=*(char **)((uint8_t *)context+8);
  if(source && *source)recovered_2044530((char *)(uintptr_t)0x20fa3c8U,source);
 }
 recovered_203e680();
}
