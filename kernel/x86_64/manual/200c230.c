/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_200c230(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = 0x101018000 >> ((byte)param_1 & 0x3f);
  return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 & param_1 < 0x21);
}
