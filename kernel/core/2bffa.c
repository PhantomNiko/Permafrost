#include "functions.h"
#define local_20 (*(void * *)(frame + 44))
#define local_1c (*(int * *)(frame + 48))
#define local_18 (*(int *)(frame + 52))
#define local_14 (*(void * *)(frame + 56))
#define pvVar6 (*(void * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2bffa
 */

int recovered_2bffa(int *param_1,uint param_2,int *param_3)

{
  unsigned char frame[108];

  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  iVar3 = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
    local_1c = param_1;
    for (uVar4 = 1; -param_2 + uVar4 != 1; uVar4 = uVar4 + 1) {
      local_20 = (void *)0x0;
      bVar1 = recovered_2b32b(param_1,&local_20);
      if (!bVar1) {
        pvVar6 = local_20;
        goto LAB_0002c10e;
      }
      iVar2 = recovered_20ccf((int)local_20);
      iVar3 = iVar3 + iVar2 + (uint)(uVar4 < param_2);
      recovered_20aee((int)local_20);
      param_1 = param_1 + 8;
    }
    local_14 = recovered_20ae5(iVar3 + 1);
    iVar3 = 0;
    if (local_14 != (void *)0x0) {
      piVar5 = local_1c;
      for (uVar4 = 1; -param_2 + uVar4 != 1; uVar4 = uVar4 + 1) {
        local_18 = 0;
        bVar1 = recovered_2b32b(piVar5,&local_18);
        if (!bVar1) {
          recovered_20aee(local_18);
          pvVar6 = local_14;
LAB_0002c10e:
          recovered_20aee((int)pvVar6);
          return 0;
        }
        local_1c = piVar5;
        iVar2 = recovered_20ccf(local_18);
        if (iVar2 != 0) {
          recovered_20c1d((int)local_14 + iVar3,local_18,iVar2);
          iVar3 = iVar3 + iVar2;
        }
        recovered_20aee(local_18);
        if (uVar4 < param_2) {
          *(undefined1 *)((int)local_14 + iVar3) = 0x20;
          iVar3 = iVar3 + 1;
        }
        piVar5 = local_1c + 8;
      }
      *(undefined1 *)((int)local_14 + iVar3) = 0;
      *param_3 = (int)local_14;
      iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
  }
  return iVar3;
}

