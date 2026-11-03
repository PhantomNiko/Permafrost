#include "functions.h"
#define local_38 (*(uint (*)[10])(frame + 92))
#define local_84 (*(uint (*)[18])(frame + 16))
#define local_3c (*(char * *)(frame + 88))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x33263
 */

uint FUN_00033263(char *param_1,int param_2)

{
  unsigned char frame[180] = {0};

  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;

  local_84[9] = 0;
  local_84[10] = 0;
  local_84[0xb] = 0;
  local_84[0xc] = 0;
  local_84[0xd] = 0;
  local_84[0xe] = 0;
  local_84[0xf] = 0;
  local_84[0x10] = 0;
  local_84[0x11] = 0;
  if (param_2 == 0 || param_1 == (char *)0x0) {
    return 0;
  }
  puVar3 = recovered_3a458(2,(int)param_1);
  uVar10 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[0x13] = param_2;
    bVar2 = recovered_3a4fc(local_84 + 9,puVar3);
    if (bVar2) {
      local_38[0] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      local_38[3] = 0;
      local_38[4] = 0;
      local_38[5] = 0;
      local_38[6] = 0;
      local_38[7] = 0;
      local_38[8] = 0;
      if (*param_1 != '\0') {
        local_38[9] = 0;
        do {
          pcVar4 = recovered_2158e(param_1,'.');
          if (pcVar4 == (char *)0x0) {
            iVar9 = recovered_214de((int)param_1);
          }
          else {
            iVar9 = (int)pcVar4 - (int)param_1;
          }
          local_84[0] = 0;
          local_84[1] = 0;
          local_84[2] = 0;
          local_84[3] = 0;
          local_84[4] = 0;
          local_84[5] = 0;
          local_84[6] = 0;
          local_84[7] = 0;
          local_84[8] = 0;
          pbVar5 = recovered_3773b((int)param_1,iVar9);
          if (pbVar5 == (byte *)0x0) goto LAB_00033495;
          bVar1 = *pbVar5;
          if ((bVar1 == 0) || ((bVar1 != 0x5f && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf)))))
          goto LAB_0003348d;
          pbVar6 = pbVar5 + 1;
          while (bVar1 = *pbVar6, bVar1 != 0) {
            pbVar6 = pbVar6 + 1;
            if (((bVar1 != 0x5f) && (9 < (byte)(bVar1 - 0x30))) &&
               (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) goto LAB_0003348d;
          }
          local_3c = pcVar4;
          if ((local_38[9] & 1) == 0) {
            if (pcVar4 == (char *)0x0) {
              uVar10 = recovered_3a5e6((int)pbVar5,local_84 + 9);
              recovered_21203((int)pbVar5);
              goto LAB_0003349f;
            }
            uVar8 = recovered_3a6fa((int)pbVar5,local_38);
            if (((((char)uVar8 == '\0') &&
                 ((bVar2 = recovered_3a72d(local_38), !bVar2 ||
                  (uVar8 = recovered_3a5e6((int)pbVar5,local_38), (char)uVar8 == '\0')))) ||
                (local_38[0] != 8)) || (local_38[7] == 0)) goto LAB_0003348d;
          }
          else {
            if (((local_38[0] != 8) || (local_38[7] == 0)) ||
               (puVar7 = (uint *)recovered_3a77f(local_38[7],(int)pbVar5,'\x01'),
               puVar7 == (uint *)0x0)) goto LAB_0003348d;
            if (pcVar4 == (char *)0x0) {
              uVar10 = recovered_3a8b0(puVar7,local_84 + 9);
              recovered_21203((int)pbVar5);
              recovered_3352a(local_38);
              goto LAB_0003349f;
            }
            uVar10 = *puVar7;
            if (uVar10 == 0) {
              bVar2 = recovered_3a72d(puVar7);
              if (!bVar2) goto LAB_0003348d;
              uVar10 = *puVar7;
            }
            if (((uVar10 != 8) || (puVar7[7] == 0)) ||
               (uVar8 = recovered_3a8b0(local_84,puVar7), (char)uVar8 == '\0')) {
              recovered_21203((int)pbVar5);
              recovered_3352a(local_84);
              goto LAB_00033495;
            }
            recovered_3352a(local_38);
            puVar7 = local_84;
            puVar11 = local_38;
            for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar11 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar11 = puVar11 + 1;
            }
          }
          uVar10 = recovered_21203((int)pbVar5);
          param_1 = local_3c + 1;
          local_38[9] = CONCAT31((int3)(uVar10 >> 8),1);
        } while( true );
      }
      uVar10 = 0;
    }
  }
LAB_000334a6:
  recovered_3352a(local_84 + 9);
  return uVar10;
LAB_0003348d:
  recovered_21203((int)pbVar5);
LAB_00033495:
  recovered_3352a(local_38);
  uVar10 = 0;
LAB_0003349f:
  uVar10 = uVar10 & 0xff;
  goto LAB_000334a6;
}
