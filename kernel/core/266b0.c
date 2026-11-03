#include "functions.h"
#undef str_0002d02f
#define str_0002d02f (*(char (*)[1])(0x2d02fU))
#undef str_0002df19
#define str_0002df19 (*(char (*)[1])(0x2df19U))
#undef str_0002df4c
#define str_0002df4c (*(char (*)[1])(0x2df4cU))
#undef str_0002df66
#define str_0002df66 (*(char (*)[1])(0x2df66U))
#undef str_0002df89
#define str_0002df89 (*(char (*)[1])(0x2df89U))
#define local_80 (*(int *)(frame + 104))
#define local_7c (*(uint *)(frame + 108))
#define local_78 (*(int *)(frame + 112))
#define local_74 (*(uint * *)(frame + 116))
#define local_70 (*(uint *)(frame + 120))
#define local_6c (*(uint (*)[16])(frame + 124))
#define local_2a (*(byte (*)[2])(frame + 190))
#define local_28 (*(int * *)(frame + 192))
#define local_24 (*(uint (*)[2])(frame + 196))
#define local_1c (*(int * *)(frame + 204))
#define local_18 (*(uint * *)(frame + 208))
#define local_14 (*(uint * *)(frame + 212))
#define near_token (*(char * *)(frame + 16))
#define format (*(char * *)(frame + 20))
#define local_c0 (*(uint (*)[8])(frame + 40))
#define local_a0 (*(ushort (*)[16])(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x266b0
 */

undefined4 recovered_266b0(int param_1,uint *param_2,undefined1 *param_3)

{
  unsigned char frame[264];

  byte *pbVar1;
  bool bVar2;
  undefined3 uVar9;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 extraout_EAX = 0;
  undefined4 extraout_EAX_00 = 0;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  uVar9 = (undefined3)((uint)param_3 >> 8);
  if ((param_2 == (uint *)0x0 || param_1 == 0) || (uVar6 = *param_2, uVar6 < 3)) goto LAB_000266dd;
  uVar3 = recovered_28877(*(byte **)param_2[2]);
  if ((char)uVar3 == '\0') {
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
  local_6c[0] = 0;
  local_6c[1] = 0;
  local_6c[2] = 0;
  local_6c[3] = 0;
  local_6c[4] = 0;
  local_6c[5] = 0;
  local_6c[6] = 0;
  local_6c[7] = 0;
  local_24[0] = 0;
  local_24[1] = 0;
  local_1c = (int *)0x0;
  local_70 = 1;
  local_18 = local_6c + 8;
  local_78 = param_1;
  local_74 = param_2;
  local_28 = (int *)param_1;
  local_14 = param_2;
  while (local_70 < uVar6) {
    iVar4 = recovered_20cea(*(int *)(local_14[2] + local_70 * 4),0x2cee1);
    if (iVar4 != 0) {
      uVar6 = *local_14;
      break;
    }
    local_6c[8] = 0;
    local_6c[9] = 0;
    local_6c[10] = 0;
    local_6c[0xb] = 0;
    local_6c[0xc] = 0;
    local_6c[0xd] = 0;
    local_6c[0xe] = 0;
    local_6c[0xf] = 0;
    local_70 = local_70 + 1;
    uVar5 = recovered_26473(&local_78,local_6c + 8);
    if ((char)uVar5 == '\0') {
      puVar10 = local_6c + 8;
      goto LAB_00026879;
    }
    uVar5 = recovered_284c4((int)&local_78,0x2cf06);
    if ((char)uVar5 == '\0') {
      recovered_24daf(local_6c + 8);
      recovered_28ab1(local_24);
      puVar8 = (undefined4 *)local_14[2];
      format = str_0002d02f;
      goto LAB_000269eb;
    }
    uVar5 = recovered_28af3((int *)local_24,(int)(local_6c + 8));
    recovered_24daf(local_6c + 8);
    if ((char)uVar5 == '\0') {
      recovered_28ab1(local_24);
      puVar8 = (undefined4 *)local_14[2];
      format = str_0002df19;
      goto LAB_000269eb;
    }
    uVar6 = *local_14;
  }
  piVar12 = local_28;
  if (local_70 < uVar6) {
    pbVar1 = *(byte **)(local_14[2] + local_70 * 4);
    iVar4 = recovered_20cea((int)pbVar1,0x2cf97);
    if ((((iVar4 == 0) || (iVar4 = recovered_20cea((int)pbVar1,0x2df40), iVar4 == 0)) ||
        (iVar4 = recovered_20cea((int)pbVar1,0x2df43), iVar4 == 0)) ||
       ((iVar4 = recovered_20cea((int)pbVar1,0x2df46), iVar4 == 0 ||
        (iVar4 = recovered_20cea((int)pbVar1,0x2df49), iVar4 == 0)))) {
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
      local_70 = local_70 + 1;
      uVar5 = recovered_26473(&local_78,local_6c);
      puVar10 = local_14;
      if ((char)uVar5 == '\0') goto LAB_000269cb;
      if (local_70 == *local_14) {
        if (local_24[0] != 0) {
          local_6c[8] = 0;
          local_6c[9] = 0;
          local_6c[10] = 0;
          local_6c[0xb] = 0;
          local_6c[0xc] = 0;
          local_6c[0xd] = 0;
          local_6c[0xe] = 0;
          local_6c[0xf] = 0;
          local_2a[0] = *pbVar1;
          local_2a[1] = 0;
          uVar6 = recovered_2af4b(piVar12,*(char **)local_14[2],local_6c + 8);
          if ((char)uVar6 == '\0') {
            iVar4 = recovered_20cea((int)pbVar1,0x2cf97);
            if (iVar4 != 0) {
LAB_00026b2f:
              puVar10 = local_6c;
LAB_00026879:
              recovered_24daf(puVar10);
LAB_000269cb:
              recovered_28ab1(local_24);
              return 0;
            }
            if (*local_1c == 1) {
              bVar2 = recovered_28534(local_6c + 8);
            }
            else {
              bVar2 = recovered_285ca(local_6c + 8);
            }
            if (bVar2 == false) {
LAB_00026d6e:
              recovered_24daf(local_6c);
              recovered_28ab1(local_24);
              puVar8 = (undefined4 *)local_14[2];
              goto LAB_00026d84;
            }
          }
          iVar4 = 0;
          uVar6 = 1;
          while (uVar6 < local_24[0]) {
            piVar12 = (int *)((int)local_1c + iVar4);
            local_80 = iVar4;
            local_7c = uVar6;
            iVar4 = recovered_20cea((int)pbVar1,0x2cf97);
            local_18 = (uint *)recovered_2c11f((int *)local_18,piVar12,iVar4 == 0);
            if (local_18 == (uint *)0x0) goto LAB_00026d0e;
            iVar7 = recovered_20cea((int)pbVar1,0x2cf97);
            piVar12 = local_28;
            iVar4 = local_80;
            if ((iVar7 == 0) && (*local_18 == 0)) {
              if (*(int *)((int)local_1c + local_80 + 0x20) == 1) {
                bVar2 = recovered_28534(local_18);
              }
              else {
                bVar2 = recovered_285ca(local_18);
              }
              if (bVar2 == false) {
                recovered_24daf(local_6c + 8);
                goto LAB_00026d6e;
              }
            }
            iVar4 = iVar4 + 0x20;
            uVar6 = local_7c + 1;
          }
          iVar4 = recovered_20cea((int)pbVar1,0x2cf97);
          if (iVar4 == 0) {
            uVar5 = recovered_2ba0b((int *)local_18,local_1c + local_24[0] * 8 + -8,(int *)local_6c,
                                    '\x01');
            if ((char)uVar5 != '\0') {
LAB_00026cc4:
              puVar10 = local_14;
              uVar5 = recovered_24c97(*(int *)local_14[2],local_6c + 8);
              recovered_24daf(local_6c + 8);
              recovered_24daf(local_6c);
              recovered_28ab1(local_24);
              if ((char)uVar5 != '\0') {
                return CONCAT31((int3)((uint)extraout_EAX_00 >> 8),1);
              }
              near_token = *(char **)puVar10[2];
              format = str_0002df66;
              piVar12 = local_28;
              goto LAB_000269f0;
            }
          }
          else {
            local_c0[0] = 0;
            local_c0[1] = 0;
            local_c0[2] = 0;
            local_c0[3] = 0;
            local_c0[4] = 0;
            local_c0[5] = 0;
            local_c0[6] = 0;
            local_c0[7] = 0;
            local_a0[0] = 0;
            local_a0[1] = 0;
            local_a0[2] = 0;
            local_a0[3] = 0;
            local_a0[4] = 0;
            local_a0[5] = 0;
            local_a0[6] = 0;
            local_a0[7] = 0;
            local_a0[8] = 0;
            local_a0[9] = 0;
            local_a0[10] = 0;
            local_a0[0xb] = 0;
            local_a0[0xc] = 0;
            local_a0[0xd] = 0;
            local_a0[0xe] = 0;
            local_a0[0xf] = 0;
            uVar5 = recovered_2af9d((int *)local_18,local_1c + local_24[0] * 8 + -8,(int)local_c0);
            if ((char)uVar5 != '\0') {
              uVar5 = recovered_2729c(local_28,(char *)local_2a,local_c0,local_6c,
                                      (undefined4 *)local_a0);
              if (((char)uVar5 != '\0') &&
                 (uVar5 = recovered_2ba0b((int *)local_18,local_1c + local_24[0] * 8 + -8,
                                          (int *)local_a0,'\0'), (char)uVar5 != '\0')) {
                recovered_24daf(local_c0);
                recovered_24daf((undefined4 *)local_a0);
                goto LAB_00026cc4;
              }
            }
            recovered_24daf(local_c0);
            recovered_24daf((undefined4 *)local_a0);
          }
LAB_00026d0e:
          recovered_24daf(local_6c + 8);
          recovered_24daf(local_6c);
          recovered_28ab1(local_24);
          puVar8 = (undefined4 *)local_14[2];
          format = str_0002df89;
LAB_000269eb:
          near_token = (char *)*puVar8;
          piVar12 = local_28;
          goto LAB_000269f0;
        }
        iVar4 = recovered_20cea((int)pbVar1,0x2cf97);
        puVar10 = local_14;
        if (iVar4 == 0) {
          puVar11 = local_6c;
          uVar5 = recovered_24c97(*(int *)local_14[2],puVar11);
          local_18 = (uint *)CONCAT31(PF_PART3(local_18, 1),(char)uVar5);
        }
        else {
          local_6c[8] = 0;
          local_6c[9] = 0;
          local_6c[10] = 0;
          local_6c[0xb] = 0;
          local_6c[0xc] = 0;
          local_6c[0xd] = 0;
          local_6c[0xe] = 0;
          local_6c[0xf] = 0;
          local_c0[0] = 0;
          local_c0[1] = 0;
          local_c0[2] = 0;
          local_c0[3] = 0;
          local_c0[4] = 0;
          local_c0[5] = 0;
          local_c0[6] = 0;
          local_c0[7] = 0;
          local_a0[0] = (ushort)*pbVar1;
          uVar6 = recovered_2af4b(piVar12,*(char **)local_14[2],local_6c + 8);
          if ((char)uVar6 == '\0') goto LAB_00026b2f;
          uVar5 = recovered_2729c(piVar12,(char *)local_a0,local_6c + 8,local_6c,local_c0);
          puVar10 = local_14;
          if ((char)uVar5 == '\0') {
            recovered_24daf(local_6c + 8);
            recovered_24daf(local_6c);
            puVar10 = local_c0;
            goto LAB_00026879;
          }
          puVar11 = local_c0;
          uVar5 = recovered_24c97(*(int *)local_14[2],puVar11);
          local_18 = (uint *)CONCAT31(PF_PART3(local_18, 1),(char)uVar5);
          recovered_24daf(local_6c + 8);
          recovered_24daf(local_6c);
        }
        recovered_24daf(puVar11);
        recovered_28ab1(local_24);
        if ((char)local_18 != '\0') {
          return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
        }
        puVar8 = (undefined4 *)puVar10[2];
LAB_00026d84:
        near_token = (char *)*puVar8;
        format = str_0002df66;
      }
      else {
        recovered_24daf(local_6c);
        recovered_28ab1(local_24);
        format = str_0002df4c;
        near_token = *(char **)(puVar10[2] + local_70 * 4);
      }
LAB_000269f0:
      recovered_2609c((uint)piVar12,near_token,format);
      return 0;
    }
  }
  recovered_28ab1(local_24);
  uVar9 = extraout_var;
LAB_000266dd:
  return CONCAT31(uVar9,1);
}

