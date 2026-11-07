/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_824395ac(int param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;

  bVar1 = 0xfff7 < param_2;
  if (param_1 != 4) {
    bVar1 = param_1 != 3 || 0xff7 < param_2;
  }
  bVar2 = 0xffffff7 < param_2;
  if (param_1 != 5) {
    bVar2 = bVar1;
  }
  return bVar2;
}
