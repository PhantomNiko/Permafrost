/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_2006fe0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 == 4) {
    if (((uint)param_1 & 3) != 0) {
      return 0;
    }
    *param_1 = param_3;
  }
  else if (param_2 == 2) {
    if (((uint)param_1 & 1) != 0) {
      return 0;
    }
    *(short *)param_1 = (short)param_3;
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    *(char *)param_1 = (char)param_3;
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}
