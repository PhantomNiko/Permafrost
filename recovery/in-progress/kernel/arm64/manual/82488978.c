/* Native fast/slow memory label. Pooka's Free Software License. */
#include "functions.h"
ulong recovered_82488978(ulong fast,ulong slow,char *out){
 if(!out)return fast;
 if(!slow)return recovered_8246d5e0(fast,out,32);
 char first[32],second[32];recovered_8246d5e0(fast,first,sizeof(first));recovered_8246d5e0(slow,second,sizeof(second));
 return (unsigned)recovered_824026e8(out,32,(char *)(uintptr_t)0x824a3c1dU,first,second);
}
