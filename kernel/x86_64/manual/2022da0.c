/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2022da0(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    lVar3 = lVar2 * 0x38 + -0x10;
    do {
      lVar1 = *(long *)(param_1 + 0x78);
      *(undefined8 *)(lVar1 + lVar3) = 0;
      recovered_201cb60(*(void **)(lVar1 + -8 + lVar3));
      lVar3 = lVar3 + -0x38;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  recovered_201cb60(*(void **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x68) = 0;
  recovered_201cb60(*(void **)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x50) = 0;
  recovered_201cb60(*(void **)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x38) = 0;
  recovered_201cb60(*(void **)(param_1 + 0x30));
  return;
}
