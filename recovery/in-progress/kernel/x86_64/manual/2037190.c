/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define PTR_recovered_202cad0_020ad188 (*(void * *)(0x20ff188U))
void recovered_2037190(undefined8 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long lVar2;
  long lVar3;

  *param_1 = &PTR_recovered_202cad0_020ad188;
  param_1[0x30f] = 0;
  recovered_201cb60((void *)param_1[0x30e]);
  param_1[0x30c] = 0;
  recovered_201cb60((void *)param_1[0x30b]);
  lVar2 = param_1[0x309];
  if (lVar2 != 0) {
    lVar3 = lVar2 * 0x30 + -0x10;
    do {
      lVar1 = param_1[0x308];
      *(undefined8 *)(lVar1 + lVar3) = 0;
      recovered_201cb60(*(void **)(lVar1 + -8 + lVar3));
      recovered_201cb60(*(void **)(lVar1 + -0x20 + lVar3));
      lVar3 = lVar3 + -0x30;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  param_1[0x309] = 0;
  recovered_201cb60((void *)param_1[0x308]);
  lVar2 = param_1[0x306];
  if (lVar2 != 0) {
    lVar3 = lVar2 * 0x18 + -0x10;
    do {
      lVar1 = param_1[0x305];
      *(undefined8 *)(lVar1 + lVar3) = 0;
      recovered_201cb60(*(void **)(lVar1 + -8 + lVar3));
      lVar3 = lVar3 + -0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  param_1[0x306] = 0;
  recovered_201cb60((void *)param_1[0x305]);
  lVar2 = 0x1810;
  do {
    recovered_201cb60(*(void **)((long)param_1 + lVar2));
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != 0x10);
  return;
}
