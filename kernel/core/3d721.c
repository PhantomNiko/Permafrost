#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3d721
 */

undefined4 recovered_3d721(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7
               ,uint param_8,undefined4 *param_9,int *param_10)

{
  unsigned char frame[64];

  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint size;
  uint uVar6;
  
  uVar4 = 0;
  if (((1 < param_8) && (param_9 != (undefined4 *)0x0)) && (param_10 != (int *)0x0)) {
    uVar3 = 0xffffff7;
    if (param_2 == 3) {
      uVar3 = 0xfff7;
    }
    uVar1 = 0xff7;
    if (param_2 != 2) {
      uVar1 = uVar3;
    }
    size = 0;
    uVar6 = 0;
    uVar3 = param_8;
    do {
      if (uVar3 < 2) {
        return 0;
      }
      if (param_4 + 2 <= uVar3) {
        return 0;
      }
      if (param_4 <= uVar6) {
        return 0;
      }
      uVar6 = uVar6 + 1;
      uVar3 = recovered_3dba3(param_3,param_2,uVar3);
      size = size + param_7;
    } while (uVar3 - 1 < uVar1);
    pvVar2 = recovered_20df4(size);
    if (pvVar2 == (void *)0x0) {
LAB_0003d830:
      uVar4 = 0;
    }
    else {
      iVar5 = 0;
      do {
        uVar4 = recovered_29b1d((uint)*(byte *)(param_1 + 4),(param_8 - 2) * param_6 + param_5,
                                (int)pvVar2 + iVar5,param_7);
        if ((char)uVar4 == '\0') {
          recovered_20dfd((int)pvVar2);
          goto LAB_0003d830;
        }
        iVar5 = iVar5 + param_7;
        param_8 = recovered_3dba3(param_3,param_2,param_8);
      } while (param_8 - 1 < uVar1);
      *param_9 = pvVar2;
      *param_10 = iVar5;
      uVar4 = CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
  }
  return uVar4;
}

