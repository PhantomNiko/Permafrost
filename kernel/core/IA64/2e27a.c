#include "functions.h"
#define local_20 (*(uint * *)(frame + 16))
#define local_1c (*(int *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(undefined4 * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e27a
 */

undefined4 recovered_2e27a(int param_1,uint param_2,int *param_3,uint *param_4,uint *param_5)

{
  unsigned char frame[80];

  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  local_14 = (undefined4 *)0x0;
  local_20 = (uint *)0x0;
  if (param_5 != (uint *)0x0 && (param_4 != (uint *)0x0 && param_3 != (int *)0x0)) {
    if (param_2 == 0 || param_1 == 0) {
      *param_3 = 0;
      *param_4 = 0;
      *param_5 = 0;
LAB_0002e35e:
      return CONCAT31((int3)((uint)param_5 >> 8),1);
    }
    uVar6 = 0;
    uVar1 = 0;
    local_1c = param_1;
    do {
      if (param_2 <= uVar6) {
        *param_3 = (int)local_14;
        *param_4 = uVar1;
        *param_5 = (uint)local_20;
        param_5 = local_20;
        goto LAB_0002e35e;
      }
      for (uVar5 = uVar6; param_2 != uVar5; uVar5 = uVar5 + 1) {
        if (*(char *)(local_1c + uVar5) == '\n') goto LAB_0002e2f3;
      }
      uVar5 = param_2;
LAB_0002e2f3:
      iVar4 = 0;
      if (uVar5 - uVar6 != 0) {
        iVar4 = (uVar5 - uVar6) - (uint)(*(char *)(local_1c + -1 + uVar5) == '\r');
      }
      local_18 = uVar1;
      uVar2 = recovered_2e3b2((int *)&local_14,(uint *)&local_20,uVar1 + 1);
      if ((char)uVar2 == '\0') break;
      pvVar3 = recovered_29c3c(uVar6 + local_1c,iVar4);
      local_14[local_18] = pvVar3;
      uVar6 = uVar5 + 1;
      uVar1 = uVar1 + 1;
    } while (local_14[local_18] != 0);
    recovered_2c249(local_14,local_18);
  }
  return 0;
}
