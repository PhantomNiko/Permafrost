#include "functions.h"
#undef DAT_0003f1d4
#define DAT_0003f1d4 (*(uint32_t *)(0x3f1d4U))
#undef DAT_0003f1d8
#define DAT_0003f1d8 (*(uint32_t *)(0x3f1d8U))
#define local_18 (*(byte *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2802a
 */

undefined4 recovered_2802a(int param_1,uint param_2,int *param_3,int param_4,int param_5,char param_6,
               undefined1 param_7,undefined4 param_8,undefined4 param_9)

{
  unsigned char frame[72];

  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  
  if (param_6 == '\0') {
    iVar3 = 0x20;
  }
  else {
    uVar2 = recovered_284ca(param_4);
    iVar3 = uVar2 * 0x20 + 0x20;
  }
  if ((param_5 == 0 || (param_3 == (int *)0x0 || param_1 == 0)) ||
     (iVar7 = *param_3, param_2 < (uint)(iVar3 + iVar7))) {
    uVar4 = 0;
  }
  else {
    if (param_6 != '\0') {
      uVar2 = recovered_284ca(param_4);
      local_18 = 0;
      for (iVar3 = 0; iVar3 != 0xb; iVar3 = iVar3 + 1) {
        local_18 = (local_18 >> 1 | local_18 << 7) + *(char *)(param_5 + iVar3);
      }
      uVar8 = uVar2;
      while( true ) {
        iVar7 = *param_3;
        if (uVar8 == 0) break;
        uVar9 = (uint)(byte)((byte)uVar8 | 0x40);
        if (uVar8 != uVar2) {
          uVar9 = uVar8;
        }
        uVar11 = uVar8 * 0xd - 0xd;
        uVar5 = recovered_20ff4(param_4);
        recovered_20fa9(param_1 + iVar7,0,0x20);
        *(char *)(param_1 + iVar7) = (char)uVar9;
        *(undefined2 *)(param_1 + 0xb + iVar7) = 0xf;
        *(byte *)(param_1 + 0xd + iVar7) = local_18;
        *(undefined2 *)(param_1 + 0x1a + iVar7) = 0;
        sVar6 = 0;
        for (iVar3 = 0; iVar3 != 3; iVar3 = iVar3 + 1) {
          uVar1 = (&DAT_0003f1d8)[iVar3 * 2];
          for (uVar9 = (&DAT_0003f1d4)[iVar3 * 2]; uVar9 < uVar1; uVar9 = uVar9 + 2) {
            if (uVar11 < uVar5) {
              uVar10 = (ushort)*(byte *)(param_4 + uVar11);
              uVar11 = uVar11 + 1;
            }
            else {
              uVar10 = -sVar6;
              sVar6 = 1;
            }
            *(ushort *)(iVar7 + param_1 + uVar9) = uVar10;
          }
        }
        *param_3 = *param_3 + 0x20;
        uVar8 = uVar8 - 1;
      }
    }
    recovered_20fa9(param_1 + iVar7,0,0x20);
    recovered_20f42(param_1 + iVar7,param_5,0xb);
    *(undefined1 *)(param_1 + 0xb + iVar7) = param_7;
    *(char *)(param_1 + 0x14 + iVar7) = (char)((uint)param_8 >> 0x10);
    *(char *)(param_1 + 0x15 + iVar7) = (char)((uint)param_8 >> 0x18);
    *(char *)(param_1 + 0x1a + iVar7) = (char)param_8;
    *(char *)(param_1 + 0x1b + iVar7) = (char)((uint)param_8 >> 8);
    *(char *)(param_1 + 0x1c + iVar7) = (char)param_9;
    *(char *)(param_1 + 0x1d + iVar7) = (char)((uint)param_9 >> 8);
    *(char *)(param_1 + 0x1e + iVar7) = (char)((uint)param_9 >> 0x10);
    *(char *)(param_1 + 0x1f + iVar7) = (char)((uint)param_9 >> 0x18);
    *param_3 = *param_3 + 0x20;
    uVar4 = CONCAT31((int3)((uint)param_3 >> 8),1);
  }
  return uVar4;
}

