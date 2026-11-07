/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20d88e0(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;

  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0xf8);
    do {
      recovered_2000bb0((void *)*puVar1);
      *puVar1 = 0;
      puVar1 = puVar1 + 0x21;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  recovered_2000bb0((void *)param_1);
  return;
}
