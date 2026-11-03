#include "functions.h"
#undef str_00043018
#define str_00043018 (*(char (*)[1])(0x43018U))
#define local_3c (*(uint (*)[10])(frame + 16))
#define local_14 (*(int * *)(frame + 56))
#define local_10 (*(int *)(frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ed9d
 */

undefined4 recovered_2ed9d(uint param_1,int *param_2,uint *param_3)

{
  unsigned char frame[108];

  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;

  local_10 = 0;
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_3c[4] = 0;
  local_3c[5] = 0;
  local_3c[6] = 0;
  local_3c[7] = 0;
  local_3c[8] = 0;
  local_3c[9] = param_1;
  local_14 = param_2;
  uVar1 = recovered_2f057(local_3c + 9,local_3c);
  if ((char)uVar1 != '\0') {
    if (local_10 == *param_2) {
      if (param_3 == (uint *)0x0) {
        uVar2 = recovered_28761(local_3c);
      }
      else {
        uVar2 = recovered_28761(param_3);
        puVar4 = local_3c;
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *param_3 = *puVar4;
          puVar4 = puVar4 + 1;
          param_3 = param_3 + 1;
        }
      }
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
    recovered_28761(local_3c);
    recovered_2d241(param_1,*(char **)(param_2[2] + local_10 * 4),str_00043018);
  }
  return 0;
}
