/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20962c0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      recovered_2000bb0(*(void **)(param_1 + lVar1 * 8));
      *(undefined8 *)(param_1 + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (param_2 != lVar1);
  }
  recovered_2000bb0((void *)param_1);
  return;
}
