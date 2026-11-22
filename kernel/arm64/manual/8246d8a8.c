/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8246d8a8(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((param_1 != 0) && (param_2 != 0)) {
    recovered_82400b14((void *)param_1,0,0x100);
    recovered_82400928((void *)param_1,(void *)param_2,0xf0);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  }
  return;
}
