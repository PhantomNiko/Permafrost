/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_824696a0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == 0) {
    return;
  }
  lVar1 = 0xf8;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    recovered_82400748(*(void **)(param_1 + lVar1));
    *(undefined8 *)(param_1 + lVar1) = 0;
    lVar1 = lVar1 + 0x108;
  }
  recovered_82400748((void *)param_1);
  return;
}
