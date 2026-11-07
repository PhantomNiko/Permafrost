/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_824039e0(uint *param_1,int param_2,uint *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (param_3 == (uint *)0x0) {
    return 0;
  }
  *param_3 = 0;
  if (param_2 == 4) {
    if (((ulong)param_1 & 3) != 0) {
      return 0;
    }
    uVar1 = *param_1;
  }
  else if (param_2 == 2) {
    if (((ulong)param_1 & 1) != 0) {
      return 0;
    }
    uVar1 = (uint)(ushort)*param_1;
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    uVar1 = (uint)(byte)*param_1;
  }
  *param_3 = uVar1;
  return 1;
}
