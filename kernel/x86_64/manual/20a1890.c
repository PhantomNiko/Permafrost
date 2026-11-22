/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20a1890(int *environment,long *tokens,ulong *result) {
 struct {int *environment;long *tokens;ulong position;} context={environment,tokens,0};
 ulong value[8]={0};
 if(!recovered_20a1dc0((undefined8 *)&context,value))return 0;
 if(context.position!=(ulong)tokens[0]) {
  recovered_205ec00(value);
  ((void (*)(int *,char *,const char *,...))recovered_209c3e0)(environment,((char **)(uintptr_t)tokens[2])[context.position],(char *)(uintptr_t)0x20fcd97U);
  return 0;
 }
 if(result){recovered_205ec00(result);for(unsigned i=0;i<8;++i)result[i]=value[i];}
 else recovered_205ec00(value);
 return 1;
}
