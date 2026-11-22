/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_209ce10(ulong *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint in_EAX = 0;
  uint extraout_EAX = 0;
  long lVar1;
  ulong uVar2;

  if (param_1 != (ulong *)0x0) {
    if (*param_1 != 0) {
      lVar1 = 0;
      uVar2 = 0;
      do {
        recovered_205ec00((undefined8 *)(param_1[2] + lVar1));
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0x40;
      } while (uVar2 < *param_1);
    }
    recovered_2000bb0((void *)param_1[2]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    in_EAX = extraout_EAX;
  }
  return in_EAX;
}
