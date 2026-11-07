/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_82466e08(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong size;

  if ((param_1 != 0) && (recovered_82400b14((void *)param_1,0,0xd), param_2 != 0)) {
    size = recovered_82400de8((char *)param_2);
    if (0xb < size) {
      size = 0xc;
    }
    recovered_82400928((void *)param_1,(void *)param_2,size);
    *(undefined1 *)(param_1 + size) = 0;
  }
  return;
}
