#include "functions.h"
#undef str_0002df4c
#define str_0002df4c (*(char (*)[1])(0x2df4cU))
#define local_14 (*(int * *)(frame + 52))
#define local_10 (*(int *)(frame + 56))
#define local_38 (*(uint (*)[8])(frame + 16))
#define local_18 (*(int * *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26d92
 */

undefined4 recovered_26d92(int *param_1,int *param_2,undefined4 *param_3)

{
  unsigned char frame[104];

  undefined4 uVar1;
  undefined4 extraout_EAX = 0;
  undefined4 extraout_EAX_00 = 0;
  int iVar2;
  uint *puVar3;
  
  local_10 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_18 = param_1;
  local_14 = param_2;
  uVar1 = recovered_26473(&local_18,local_38);
  if ((char)uVar1 != '\0') {
    if (local_10 == *param_2) {
      if (param_3 == (undefined4 *)0x0) {
        recovered_24daf(local_38);
        uVar1 = extraout_EAX_00;
      }
      else {
        recovered_24daf(param_3);
        puVar3 = local_38;
        for (iVar2 = 8; uVar1 = extraout_EAX, iVar2 != 0; iVar2 = iVar2 + -1) {
          *param_3 = *puVar3;
          puVar3 = puVar3 + 1;
          param_3 = param_3 + 1;
        }
      }
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
    recovered_24daf(local_38);
    recovered_2609c((uint)param_1,*(char **)(param_2[2] + local_10 * 4),str_0002df4c);
  }
  return 0;
}

