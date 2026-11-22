/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_c (*(uint *)(frame + 20))
undefined4 recovered_2005ca0(uint param_1,int param_2,uint param_3,undefined4 *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  local_c = 0;
  if ((param_2 == 0 && param_4 != (undefined4 *)0x0) &&
     (uVar1 = recovered_2005b60(param_1,param_3,0,&local_c), (char)uVar1 != '\0')) {
    *param_4 = local_c;
    return CONCAT31((int3)(local_c >> 8),1);
  }
  return 0;
}
