#include "functions.h"
#undef DAT_00056964
#define DAT_00056964 (*(uint8_t *)(0x56964U))
#define local_14 (*(byte * *)(frame + 32))
#define local_24 (*(byte * *)(frame + 16))
#define local_20 (*(uint *)(frame + 20))
#define local_1c (*(uint *)(frame + 24))
#define local_18 (*(byte * *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2385f
 */

undefined4 recovered_2385f(void *this,undefined2 *param_1)

{
  unsigned char frame[84] = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined4 *in_EDX;
  byte *pbVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;

  pbVar5 = *(byte **)((int)this + 0x1c);
  if (pbVar5 != (byte *)0x0) {
    local_14 = pbVar5 + 1;
    if (*pbVar5 != 0xff) {
      recovered_239fe((uint)*pbVar5,(int *)&local_14);
    }
    pbVar5 = local_14 + 1;
    bVar4 = *local_14;
    if (bVar4 == 0xff) {
      local_18 = (byte *)0x0;
    }
    else {
      local_14 = pbVar5;
      uVar1 = recovered_23ab2(&local_14);
      local_18 = local_14 + uVar1;
      pbVar5 = local_14;
    }
    local_14 = pbVar5 + 1;
    uVar1 = recovered_23ab2(&local_14);
    iVar7 = *(int *)((int)this + 4);
    if (0 < iVar7) {
      local_1c = (uint)(ushort)bVar4;
      pbVar5 = local_14 + uVar1;
      while (local_14 < pbVar5) {
        uVar1 = recovered_23ab2(&local_14);
        uVar2 = recovered_23ab2(&local_14);
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) {
          *param_1 = 1;
          *(undefined1 *)(param_1 + 1) = 0;
          *(uint *)(param_1 + 2) = uVar1;
          *(undefined4 *)(param_1 + 4) = 0;
          if (uVar2 == 0) {
            *(undefined1 *)((int)param_1 + 1) = 1;
            return 0;
          }
          bVar9 = local_18 != (byte *)0x0;
          uVar1 = local_1c & 0xf;
          bVar4 = (byte)uVar1;
          local_24 = pbVar5 + (uVar2 - 1);
          iVar7 = 0x40;
          do {
            bVar8 = iVar7 == 0;
            iVar7 = iVar7 + -1;
            if (bVar8) {
              return 0;
            }
            uVar2 = recovered_23b02(&local_24);
            pbVar5 = local_24;
            uVar3 = recovered_23b02(&local_24);
            local_20 = uVar2;
            if (uVar2 == 0) {
              *(undefined1 *)((int)param_1 + 1) = 1;
            }
            else if (0 < (int)uVar2) {
              puVar6 = (undefined4 *)0x0;
              if (((~(byte)(0x1c1d >> bVar4) | ~(bVar4 < 0xd && bVar9)) & 1) == 0) {
                local_14 = local_18 + *(int *)(&DAT_00056964 + uVar1 * 4) * uVar2;
                puVar6 = recovered_239fe(local_1c,(int *)&local_14);
              }
              bVar8 = recovered_2360d(in_EDX,puVar6);
              if (bVar8) {
                *(undefined1 *)(param_1 + 1) = 1;
                *(uint *)(param_1 + 4) = local_20;
                return CONCAT31((int3)((uint)param_1 >> 8),1);
              }
            }
            if (uVar3 == 0) {
              return 0;
            }
            local_24 = pbVar5 + uVar3;
          } while( true );
        }
      }
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}
