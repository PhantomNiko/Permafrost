/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_209cca0(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  uint extraout_EAX = 0;
  ulong uVar1;

  if (param_1 != (ulong *)0x0) {
    if (*param_1 != 0) {
      uVar1 = 0;
      do {
        recovered_2000bb0(*(void **)(param_1[2] + uVar1 * 8));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *param_1);
    }
    recovered_2000bb0((void *)param_1[2]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}
