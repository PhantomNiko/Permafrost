/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_20048e0(ushort param_1,int param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 4) {
    out(param_1,param_3);
  }
  else if (param_2 == 2) {
    out(param_1,(short)param_3);
  }
  else {
    if (param_2 != 1) {
      return (ulonglong)param_1 << 0x20;
    }
    out(param_1,(char)param_3);
  }
  return (ulonglong)CONCAT24(param_1,CONCAT31((int3)((uint)param_3 >> 8),1));
}
