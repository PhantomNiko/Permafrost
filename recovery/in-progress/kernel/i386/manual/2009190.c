#include "functions.h"
#define local_14 (*(uint *)(frame + 28))
#define local_10 (*(int *)(frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2009190
 */

uint recovered_2009190(uint param_1,uint param_2,uint param_3,uint *param_4,int *param_5)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  local_10 = 0;
  local_14 = 0;
  if ((param_4 == (uint *)0x0) ||
     (uVar1 = recovered_20091e0(param_2,param_3,&local_14), (char)uVar1 == '\0')) {
    return 0;
  }
  *param_4 = local_14;
  uVar1 = CONCAT31((int3)(local_14 >> 8),1);
  if (param_5 == (int *)0x0) {
    return uVar1;
  }
  *param_5 = local_10;
  return uVar1;
}
