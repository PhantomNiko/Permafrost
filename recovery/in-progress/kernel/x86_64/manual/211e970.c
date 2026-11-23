/* Reused after matching normalized native instructions and named data references. */
/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_211e970(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong size;

  if (param_1 != 0) {
    recovered_2002570((void *)param_1,0,0xc);
    if (param_2 != 0) {
      uVar1 = recovered_2003310((char *)param_2);
      size = 0xc;
      if (uVar1 < 0xc) {
        size = uVar1;
      }
      recovered_2001870((void *)param_1,(void *)param_2,size);
      return;
    }
  }
  return;
}
