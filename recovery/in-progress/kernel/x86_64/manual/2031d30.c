/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_2031d30(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  lVar2 = param_1[1];
  if (lVar2 != 0) {
    lVar3 = lVar2 * 0x18 + -0x10;
    do {
      lVar1 = *param_1;
      *(undefined8 *)(lVar1 + lVar3) = 0;
      recovered_201cb60(*(void **)(lVar1 + -8 + lVar3));
      lVar3 = lVar3 + -0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  param_1[1] = 0;
  recovered_201cb60((void *)*param_1);
  return;
}
