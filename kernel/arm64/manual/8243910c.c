/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_8243910c(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  uVar1 = 0x811c9dc5;
  if (param_1 != (byte *)0x0) {
    for (; *param_1 != 0; param_1 = param_1 + 1) {
      uVar1 = (uVar1 ^ *param_1) * 0x1000193;
    }
  }
  return uVar1;
}
