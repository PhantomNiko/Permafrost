#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
#undef PTR_DAT_0004c05c
#define PTR_DAT_0004c05c (*(void * *)(0x4c05cU))
#undef PTR_DAT_0004c060
#define PTR_DAT_0004c060 (*(uint8_t * *)(0x4c060U))
#define local_68 (*(byte (*)[32])(frame + 16))
#define local_48 (*(uint *)(frame + 48))
#define local_44 (*(uint *)(frame + 52))
#define local_40 (*(int *)(frame + 56))
#define local_3c (*(int *)(frame + 60))
#define local_38 (*(uint (*)[3])(frame + 64))
#define local_2c (*(undefined * *)(frame + 76))
#define local_28 (*(undefined * *)(frame + 80))
#define local_24 (*(uint *)(frame + 84))
#define local_20 (*(int *)(frame + 88))
#define local_1c (*(int *)(frame + 92))
#define local_18 (*(int *)(frame + 96))
#define local_14 (*(undefined1 * *)(frame + 100))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29983
 */

undefined4 recovered_29983(undefined1 *param_1,uint param_2,undefined4 *param_3,uint *param_4)

{
  unsigned char frame[152];

  bool bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined *puVar12;

  if ((param_4 != (uint *)0x0 && param_3 != (undefined4 *)0x0) &&
     (param_1 != (undefined1 *)0x0 || param_2 == 0)) {
    *param_3 = 0;
    *param_4 = 0;
    puVar8 = &DAT_00046264;
    if (param_1 != (undefined1 *)0x0) {
      puVar8 = param_1;
    }
    local_14 = recovered_29c28((int)puVar8,param_2);
    local_20 = 0;
    if (local_14 != (undefined1 *)0x0) {
      while( true ) {
        if (local_20 == 0xa3) {
          *param_3 = local_14;
          *param_4 = param_2;
          return CONCAT31((int3)((uint)param_3 >> 8),1);
        }
        local_2c = (&PTR_DAT_0004c05c)[local_20 * 2];
        local_44 = param_2;
        if ((local_2c == (undefined *)0x0) || (uVar5 = recovered_213fa((int)local_2c), uVar5 == 0))
        break;
        puVar12 = (&PTR_DAT_0004c060)[local_20 * 2];
        iVar6 = 0;
        if (puVar12 != (undefined *)0x0) {
          iVar6 = 0;
          iVar11 = 0;
          local_28 = puVar12;
          local_24 = uVar5;
          do {
            uVar9 = (uint)(byte)puVar12[iVar11];
            local_1c = iVar11;
            if (uVar9 == 0x5c) {
              bVar3 = puVar12[iVar11 + 1];
              local_48 = uVar9;
              local_18 = iVar6;
              if (bVar3 == 0x78) {
                local_40 = (int)(char)puVar12[iVar11 + 2];
                bVar1 = recovered_29d69(puVar12[iVar11 + 2]);
                if (!bVar1) goto LAB_00029ab7;
                local_3c = (int)(char)puVar12[iVar11 + 3];
                bVar1 = recovered_29d69(puVar12[iVar11 + 3]);
                if (!bVar1) goto LAB_00029ab7;
                local_1c = iVar11 + 3;
                bVar2 = recovered_29d91((char)local_40);
                bVar3 = recovered_29d91((char)local_3c);
                bVar3 = bVar3 | bVar2 << 4;
                iVar6 = local_18;
                uVar5 = local_24;
              }
              else {
LAB_00029ab7:
                bVar1 = recovered_29d69(bVar3);
                if (bVar1) {
                  cVar4 = local_28[local_1c + 2];
                  bVar1 = recovered_29d69(cVar4);
                  if (bVar1) {
                    local_1c = local_1c + 2;
                    bVar2 = recovered_29d91(bVar3);
                    bVar3 = recovered_29d91(cVar4);
                    bVar3 = bVar3 | bVar2 << 4;
                    iVar6 = local_18;
                    uVar5 = local_24;
                    puVar12 = local_28;
                    goto LAB_00029b1f;
                  }
                }
                iVar6 = local_18;
                uVar5 = local_24;
                puVar12 = local_28;
                bVar2 = (byte)local_48;
                if (bVar3 == 0) goto LAB_00029a54;
                local_1c = local_1c + 1;
              }
            }
            else {
              bVar2 = puVar12[iVar11];
              if (uVar9 == 0) break;
LAB_00029a54:
              bVar3 = bVar2;
            }
LAB_00029b1f:
            if (iVar6 == 0x20) goto LAB_00029bda;
            local_68[iVar6] = bVar3;
            iVar6 = iVar6 + 1;
            iVar11 = local_1c + 1;
          } while( true );
        }
        local_38[0] = 0;
        local_38[1] = 0;
        local_38[2] = 0;
        local_18 = iVar6;
        for (uVar9 = 0; param_2 = local_38[0], uVar9 < local_44; uVar9 = uVar9 + uVar10) {
          if ((local_44 - uVar9 < uVar5) ||
             (iVar6 = recovered_213cb((int)(local_14 + uVar9),(int)local_2c,uVar5), iVar6 != 0)) {
            uVar7 = recovered_29c74((int *)local_38,(int)(local_14 + uVar9),1);
            cVar4 = (char)uVar7;
            uVar10 = 1;
          }
          else {
            uVar7 = recovered_29c74((int *)local_38,(int)local_68,local_18);
            cVar4 = (char)uVar7;
            uVar10 = uVar5;
          }
          if (cVar4 == '\0') goto LAB_00029bcf;
        }
        puVar8 = recovered_29d2d(local_38);
        if (puVar8 == (undefined1 *)0x0) {
LAB_00029bcf:
          recovered_21203(local_38[2]);
          break;
        }
        recovered_21203((int)local_14);
        local_20 = local_20 + 1;
        local_14 = puVar8;
      }
LAB_00029bda:
      recovered_21203((int)local_14);
      recovered_21203(0);
    }
  }
  return 0;
}
