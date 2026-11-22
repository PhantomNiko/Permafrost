/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2031da0(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  if (param_1 == (long *)0x0) {
    return;
  }
  param_1[9] = 0;
  recovered_201cb60((void *)param_1[8]);
  param_1[6] = 0;
  recovered_201cb60((void *)param_1[5]);
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    lVar3 = lVar2 * 0x38 + -0x10;
    do {
      lVar1 = param_1[2];
      *(undefined8 *)(lVar1 + lVar3) = 0;
      recovered_201cb60(*(void **)(lVar1 + -8 + lVar3));
      lVar3 = lVar3 + -0x38;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  param_1[3] = 0;
  recovered_201cb60((void *)param_1[2]);
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 8))();
  }
  recovered_201cb60(param_1);
  return;
}
