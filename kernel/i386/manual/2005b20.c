/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_2005b20(uint param_1,int param_2,uint param_3,uint *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_2 == 0 && param_4 != (uint *)0x0) {
    uVar1 = recovered_2005b60(param_1,param_3,0,param_4);
    return uVar1;
  }
  return 0;
}
