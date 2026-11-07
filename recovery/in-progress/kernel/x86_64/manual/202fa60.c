/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1570 (*(float *)(0x20eaf50U))
void recovered_202fa60(float param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    if (param_1 <= DAT_020a1570) {
      param_1 = DAT_020a1570;
    }
    *(float *)(param_2 + 1) = param_1;
    lVar2 = param_2[3];
    if (lVar2 != 0) {
      lVar3 = lVar2 * 0x38 + -0x10;
      do {
        lVar1 = param_2[2];
        *(undefined8 *)(lVar1 + lVar3) = 0;
        recovered_201cb60(*(void **)(lVar1 + -8 + lVar3));
        lVar3 = lVar3 + -0x38;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    param_2[3] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
  }
  return;
}
