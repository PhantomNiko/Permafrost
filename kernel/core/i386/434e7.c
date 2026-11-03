#include "functions.h"
#define local_20 (*(void * *)(frame + 44))
#define local_1c (*(int * *)(frame + 48))
#define local_18 (*(int *)(frame + 52))
#define local_14 (*(void * *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x434e7
 */

int recovered_434e7(int *param_1,uint param_2,undefined4 *param_3)

{
  unsigned char frame[108];

  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  void *pvVar6;

  iVar3 = 0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    local_1c = param_1;
    for (uVar4 = 1; -param_2 + uVar4 != 1; uVar4 = uVar4 + 1) {
      local_20 = (void *)0x0;
      bVar1 = recovered_35e4a(param_1,(int *)&local_20);
      if (!bVar1) {
        pvVar6 = local_20;
        goto LAB_000435fb;
      }
      iVar2 = recovered_213fa((int)local_20);
      iVar3 = iVar3 + iVar2 + (uint)(uVar4 < param_2);
      recovered_21203((int)local_20);
      param_1 = param_1 + 9;
    }
    local_14 = recovered_211fa(iVar3 + 1);
    iVar3 = 0;
    if (local_14 != (void *)0x0) {
      piVar5 = local_1c;
      for (uVar4 = 1; -param_2 + uVar4 != 1; uVar4 = uVar4 + 1) {
        local_18 = 0;
        bVar1 = recovered_35e4a(piVar5,&local_18);
        if (!bVar1) {
          recovered_21203(local_18);
          pvVar6 = local_14;
LAB_000435fb:
          recovered_21203((int)pvVar6);
          return 0;
        }
        local_1c = piVar5;
        iVar2 = recovered_213fa(local_18);
        if (iVar2 != 0) {
          recovered_21348((int)local_14 + iVar3,local_18,iVar2);
          iVar3 = iVar3 + iVar2;
        }
        recovered_21203(local_18);
        if (uVar4 < param_2) {
          *(undefined1 *)((int)local_14 + iVar3) = 0x20;
          iVar3 = iVar3 + 1;
        }
        piVar5 = local_1c + 9;
      }
      *(undefined1 *)((int)local_14 + iVar3) = 0;
      *param_3 = local_14;
      iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),1);
    }
  }
  return iVar3;
}
