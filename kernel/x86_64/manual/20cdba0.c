/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20cdba0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong size;

  if ((param_1 != 0) && (recovered_2002110((void *)param_1,0,0xd), param_2 != 0)) {
    uVar1 = recovered_2002e80((char *)param_2);
    size = 0xc;
    if (uVar1 < 0xc) {
      size = uVar1;
    }
    recovered_2001410((void *)param_1,(void *)param_2,size);
    *(undefined1 *)(param_1 + size) = 0;
  }
  return;
}
