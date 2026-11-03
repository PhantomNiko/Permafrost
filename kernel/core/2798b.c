#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
#undef PTR_DAT_0004405c
#define PTR_DAT_0004405c (*(void * *)(0x4405cU))
#undef PTR_DAT_00044060
#define PTR_DAT_00044060 (*(uint8_t * *)(0x44060U))
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
 * Address: 0x2798b
 */

undefined4 recovered_2798b(undefined1 *param_1,uint param_2,undefined4 *param_3,uint *param_4)

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
    puVar8 = &DAT_0003f254;
    if (param_1 != (undefined1 *)0x0) {
      puVar8 = param_1;
    }
    local_14 = recovered_27c30((int)puVar8,param_2);
    local_20 = 0;
    if (local_14 != (undefined1 *)0x0) {
      while( true ) {
        if (local_20 == 0xa3) {
          *param_3 = local_14;
          *param_4 = param_2;
          return CONCAT31((int3)((uint)param_3 >> 8),1);
        }
        local_2c = (&PTR_DAT_0004405c)[local_20 * 2];
        local_44 = param_2;
        if ((local_2c == (undefined *)0x0) || (uVar5 = recovered_20ff4((int)local_2c), uVar5 == 0))
        break;
        puVar12 = (&PTR_DAT_00044060)[local_20 * 2];
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
                bVar1 = recovered_27d71(puVar12[iVar11 + 2]);
                if (!bVar1) goto LAB_00027abf;
                local_3c = (int)(char)puVar12[iVar11 + 3];
                bVar1 = recovered_27d71(puVar12[iVar11 + 3]);
                if (!bVar1) goto LAB_00027abf;
                local_1c = iVar11 + 3;
                bVar2 = recovered_27d99((char)local_40);
                bVar3 = recovered_27d99((char)local_3c);
                bVar3 = bVar3 | bVar2 << 4;
                iVar6 = local_18;
                uVar5 = local_24;
              }
              else {
LAB_00027abf:
                bVar1 = recovered_27d71(bVar3);
                if (bVar1) {
                  cVar4 = local_28[local_1c + 2];
                  bVar1 = recovered_27d71(cVar4);
                  if (bVar1) {
                    local_1c = local_1c + 2;
                    bVar2 = recovered_27d99(bVar3);
                    bVar3 = recovered_27d99(cVar4);
                    bVar3 = bVar3 | bVar2 << 4;
                    iVar6 = local_18;
                    uVar5 = local_24;
                    puVar12 = local_28;
                    goto LAB_00027b27;
                  }
                }
                iVar6 = local_18;
                uVar5 = local_24;
                puVar12 = local_28;
                bVar2 = (byte)local_48;
                if (bVar3 == 0) goto LAB_00027a5c;
                local_1c = local_1c + 1;
              }
            }
            else {
              bVar2 = puVar12[iVar11];
              if (uVar9 == 0) break;
LAB_00027a5c:
              bVar3 = bVar2;
            }
LAB_00027b27:
            if (iVar6 == 0x20) goto LAB_00027be2;
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
             (iVar6 = recovered_20fc5((int)(local_14 + uVar9),(int)local_2c,uVar5), iVar6 != 0)) {
            uVar7 = recovered_27c7c((int *)local_38,(int)(local_14 + uVar9),1);
            cVar4 = (char)uVar7;
            uVar10 = 1;
          }
          else {
            uVar7 = recovered_27c7c((int *)local_38,(int)local_68,local_18);
            cVar4 = (char)uVar7;
            uVar10 = uVar5;
          }
          if (cVar4 == '\0') goto LAB_00027bd7;
        }
        puVar8 = recovered_27d35(local_38);
        if (puVar8 == (undefined1 *)0x0) {
LAB_00027bd7:
          recovered_20dfd(local_38[2]);
          break;
        }
        recovered_20dfd((int)local_14);
        local_20 = local_20 + 1;
        local_14 = puVar8;
      }
LAB_00027be2:
      recovered_20dfd((int)local_14);
      recovered_20dfd(0);
    }
  }
  return 0;
}

