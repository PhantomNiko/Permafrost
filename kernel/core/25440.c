#include "functions.h"
#define local_20 (*(uint *)(frame + 16))
#define local_1c (*(int *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(undefined4 * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25440
 */

undefined4 recovered_25440(int param_1,uint param_2)

{
  unsigned char frame[80];

  undefined4 uVar1;
  undefined4 extraout_EAX = 0;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  local_14 = (undefined4 *)0x0;
  local_20 = 0;
  uVar3 = 0;
  local_1c = param_1;
  if (param_2 == 0 || param_1 == 0) {
LAB_000254f8:
    recovered_25638(local_14,uVar3,local_20);
    uVar1 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      if (param_2 <= uVar4) goto LAB_000254f8;
      for (uVar5 = uVar4; param_2 != uVar5; uVar5 = uVar5 + 1) {
        if (*(char *)(local_1c + uVar5) == '\n') goto LAB_00025494;
      }
      uVar5 = param_2;
LAB_00025494:
      iVar2 = 0;
      if (uVar5 - uVar4 != 0) {
        iVar2 = (uVar5 - uVar4) - (uint)(*(char *)(local_1c + -1 + uVar5) == '\r');
      }
      local_18 = uVar3;
      uVar1 = recovered_25673((int *)&local_14,&local_20,uVar3 + 1);
      if ((char)uVar1 == '\0') break;
      iVar2 = recovered_24f9e(uVar4 + local_1c,iVar2);
      local_14[local_18] = iVar2;
      uVar4 = uVar5 + 1;
      uVar3 = uVar3 + 1;
    } while (local_14[local_18] != 0);
    recovered_256e9(local_14,local_18);
    uVar1 = 0;
  }
  return uVar1;
}

