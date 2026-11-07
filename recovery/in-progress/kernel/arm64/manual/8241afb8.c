/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_8241afb8(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;

  puVar1 = (undefined8 *)(param_1 + 0x17e8);
  lVar2 = -0x1800;
  do {
    puVar1 = recovered_8241af10(puVar1);
    puVar1 = puVar1 + -3;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0);
  return param_1;
}
