/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20a01c0(long environment,ulong *tokens,ulong first,ulong end,ulong *result){
 if(!tokens || !result || first>=end || end>tokens[0]) {
  recovered_209c3e0((void *)environment,0,(char *)(uintptr_t)0x20fcc8fU);return 0;
 }
 ulong count=end-first;char **copy=recovered_2000ad0(count*sizeof(*copy));
 ulong vector[3]={0,count,(ulong)copy};
 if(!copy)goto allocation_failed;
 for(ulong i=0;i<count;++i){
  const char *text=((char **)(uintptr_t)tokens[2])[first+i];
  ulong length=recovered_2002e80((char *)text);copy[i]=recovered_2000ad0(length+1);
  if(!copy[i])goto allocation_failed;
  recovered_2001410(copy[i],(void *)text,length);copy[i][length]=0;vector[0]++;
 }
 uchar okay=recovered_20a1890((int *)environment,(long *)vector,result);
 for(ulong i=0;i<vector[0];++i)recovered_2000bb0(copy[i]);
 recovered_2000bb0(copy);return okay;
allocation_failed:
 for(ulong i=0;i<vector[0];++i)recovered_2000bb0(copy[i]);
 recovered_2000bb0(copy);recovered_209c3e0((void *)environment,0,(char *)(uintptr_t)0x20fcca3U);return 0;
}
