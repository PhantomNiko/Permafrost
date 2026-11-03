#include "functions.h"
#undef DAT_0005872b
#define DAT_0005872b (*(uint8_t *)(0x5872bU))
#undef str_0005853b
#define str_0005853b (*(char (*)[1])(0x5853bU))
#undef str_000589e6
#define str_000589e6 (*(char (*)[1])(0x589e6U))
#undef str_0005c697
#define str_0005c697 (*(char (*)[1])(0x5c697U))
#undef str_0005c6ce
#define str_0005c6ce (*(char (*)[1])(0x5c6ceU))
#undef str_0005c701
#define str_0005c701 (*(char (*)[1])(0x5c701U))
#undef str_0005c726
#define str_0005c726 (*(char (*)[1])(0x5c726U))
#define local_7c (*(uint *)(frame + 40))
#define local_78 (*(uint * *)(frame + 44))
#define local_74 (*(uint * *)(frame + 48))
#define local_70 (*(uint (*)[10])(frame + 52))
#define local_48 (*(int *)(frame + 92))
#define local_44 (*(int *)(frame + 96))
#define local_40 (*(uint * *)(frame + 100))
#define local_3c (*(uint * *)(frame + 104))
#define local_38 (*(uint * *)(frame + 108))
#define local_34 (*(uint * *)(frame + 112))
#define local_30 (*(int * *)(frame + 116))
#define local_2c (*(uint * *)(frame + 120))
#define local_28 (*(int *)(frame + 124))
#define local_24 (*(uint *)(frame + 128))
#define local_20 (*(uint * *)(frame + 132))
#define local_1c (*(uint * *)(frame + 136))
#define local_18 (*(uint * *)(frame + 140))
#define local_14 (*(uint * *)(frame + 144))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41c5c
 */

uint * recovered_41c5c(uint param_1,uint *param_2,undefined1 *param_3)

{
  unsigned char frame[196] = {0};

  byte bVar1;
  int iVar2;
  int iVar3;
  undefined3 uVar8;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  undefined4 extraout_EDX_01 = 0;
  undefined4 extraout_EDX_02 = 0;
  undefined4 extraout_EDX_03 = 0;
  undefined4 extraout_EDX_04 = 0;
  undefined4 extraout_EDX_05 = 0;
  uint *puVar9;
  undefined4 extraout_EDX_06 = 0;
  int extraout_EDX_07 = 0;
  undefined4 unaff_EBX = 0;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  byte *near_token;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int *piVar16;
  bool bVar17;
  char *pcVar18;

  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  local_1c = (uint *)CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if (param_2 == (uint *)0x0 || param_1 == 0) {
    return local_1c;
  }
  puVar9 = (uint *)*param_2;
  if (puVar9 == (uint *)0x0) {
    return local_1c;
  }
  local_2c = (uint *)param_2[2];
  iVar6 = *local_2c;
  local_24 = param_1;
  local_18 = param_2;
  iVar3 = recovered_3b7e1(iVar6,0x58379);
  puVar10 = (uint *)0x1;
  uVar8 = (undefined3)((uint)iVar3 >> 8);
  if ((char)iVar3 == '\0') {
    local_1c = (uint *)CONCAT31(uVar8,1);
    iVar6 = recovered_3b7e1(iVar6,0x58373);
    local_28 = 0;
    local_70[9] = 0;
    puVar10 = (uint *)0x0;
    if ((char)iVar6 != '\0') {
      local_70[9] = 2;
      local_28 = 1;
      puVar10 = (uint *)0x1;
    }
  }
  else {
    local_1c = (uint *)CONCAT31(uVar8,1);
    local_28 = CONCAT31((int3)((uint)extraout_EDX >> 8),1);
    local_70[9] = 1;
  }
  puVar11 = local_18;
  if (puVar9 <= puVar10) {
    return local_1c;
  }
  uVar4 = recovered_3f81c((byte *)local_2c[(int)puVar10]);
  if ((char)uVar4 == '\0') {
    return local_1c;
  }
  local_7c = local_24;
  local_78 = puVar11;
  local_14 = (uint *)0x0;
  local_2c = (uint *)0x0;
  local_30 = (int *)0x0;
  uVar7 = extraout_EDX_00;
  while (local_74 = puVar10, puVar10 < puVar9) {
    near_token = *(byte **)(puVar11[2] + (int)puVar10 * 4);
    uVar4 = recovered_3f81c(near_token);
    uVar7 = extraout_EDX_01;
    if ((char)uVar4 == '\0') break;
    if (local_2c == local_14) {
      puVar9 = (uint *)((int)local_14 * 2);
      if (local_14 == (uint *)0x0) {
        puVar9 = (uint *)0x4;
      }
      piVar5 = (int *)recovered_21289((int)local_30,(int)puVar9 << 4);
      near_token = *(byte **)(local_18[2] + (int)local_74 * 4);
      if (piVar5 == (int *)0x0) {
        recovered_3f39b(local_24,(char *)near_token,str_0005c6ce);
        bVar17 = false;
        puVar9 = (uint *)0x0;
        local_2c = local_14;
        goto LAB_00041ec2;
      }
      local_30 = piVar5;
      uVar7 = extraout_EDX_02;
      puVar10 = local_74;
      local_14 = puVar9;
    }
    local_74 = (uint *)((int)puVar10 + 1);
    piVar5 = local_30 + (int)local_2c * 4;
    *piVar5 = (int)near_token;
    piVar5[1] = 0;
    piVar5[2] = 0;
    local_20 = (uint *)(local_30 + (int)local_2c * 4);
    piVar5[3] = 0;
    while( true ) {
      puVar11 = local_18;
      puVar9 = (uint *)*local_18;
      if (puVar9 <= local_74) break;
      iVar6 = recovered_214f9(*(int *)(local_18[2] + (int)local_74 * 4),0x58399);
      if (iVar6 != 0) {
        puVar9 = (uint *)*puVar11;
        uVar7 = extraout_EDX_03;
        break;
      }
      local_70[0] = 0;
      local_70[1] = 0;
      local_70[2] = 0;
      local_70[3] = 0;
      local_70[4] = 0;
      local_70[5] = 0;
      local_70[6] = 0;
      local_70[7] = 0;
      local_70[8] = 0;
      local_74 = (uint *)((int)local_74 + 1);
      uVar7 = recovered_428c6(&local_7c,local_70);
      if ((char)uVar7 == '\0') {
        recovered_3352a(local_70);
LAB_00041eb5:
        bVar17 = false;
        goto LAB_00041eb7;
      }
      uVar7 = recovered_3f8b8((int)&local_7c,0x5839b);
      if ((char)uVar7 == '\0') {
        recovered_3352a(local_70);
        pcVar18 = str_000589e6;
LAB_00041ea5:
        recovered_3f39b(local_24,(char *)*local_20,pcVar18);
        goto LAB_00041eb5;
      }
      uVar7 = recovered_3f8fc(piVar5 + 1,(int)local_70);
      recovered_3352a(local_70);
      if ((char)uVar7 == '\0') {
        pcVar18 = str_0005c6ce;
        goto LAB_00041ea5;
      }
      uVar7 = extraout_EDX_04;
    }
    local_2c = (uint *)((int)local_2c + 1);
    if (puVar9 <= local_74) break;
    iVar6 = recovered_214f9(*(int *)(puVar11[2] + (int)local_74 * 4),0x58471);
    uVar7 = extraout_EDX_05;
    if (iVar6 != 0) break;
    puVar9 = (uint *)*puVar11;
    puVar10 = (uint *)((int)local_74 + 1);
  }
  puVar10 = local_2c;
  if (local_2c == (uint *)0x0) {
    return local_1c;
  }
  if (((byte)local_28 & local_74 == (uint *)*local_18) == 1) {
    local_70[0] = 0;
    local_70[1] = 0;
    local_70[2] = 0;
    local_70[3] = 0;
    local_70[4] = 0;
    local_70[5] = 0;
    local_70[6] = 0;
    local_70[7] = 0;
    local_70[8] = 0;
    piVar5 = local_30 + 1;
    iVar6 = 1;
    do {
      iVar3 = (int)local_2c + iVar6;
      if (iVar3 == 1) {
        iVar6 = (int)local_2c + 1;
        piVar5 = local_30;
        goto LAB_00042080;
      }
      iVar6 = iVar6 + -1;
      iVar2 = *piVar5;
      piVar5 = piVar5 + 4;
    } while (iVar2 == 0);
    bVar17 = local_2c <= (uint *)-iVar6;
LAB_00042323:
    puVar9 = (uint *)CONCAT31((int3)((uint)iVar3 >> 8),1);
    goto LAB_00041ec2;
  }
  puVar9 = (uint *)CONCAT31((int3)((uint)uVar7 >> 8),1);
  if ((uint *)*local_18 <= local_74) {
    bVar17 = false;
    goto LAB_00041ec2;
  }
  puVar9 = *(uint **)(local_18[2] + (int)local_74 * 4);
  iVar6 = recovered_214f9((int)puVar9,0x5872b);
  if ((((iVar6 != 0) && (iVar6 = recovered_214f9((int)puVar9,0x5c6f5), iVar6 != 0)) &&
      (iVar6 = recovered_214f9((int)puVar9,0x5c6f8), iVar6 != 0)) &&
     ((iVar6 = recovered_214f9((int)puVar9,0x5c6fb), iVar6 != 0 &&
      (iVar6 = recovered_214f9((int)puVar9,0x5c6fe), iVar6 != 0)))) {
    bVar17 = false;
    local_28 = 0;
    local_14 = (uint *)0x0;
    puVar11 = (uint *)0x0;
    puVar9 = (uint *)CONCAT31((int3)((uint)extraout_EDX_06 >> 8),1);
    puVar10 = (uint *)0x0;
    goto LAB_00041ecb;
  }
  if ((puVar10 != (uint *)0x1) && (iVar6 = recovered_214f9((int)puVar9,0x5872b), iVar6 != 0)) {
    pcVar18 = str_0005c701;
LAB_00042332:
    recovered_3f39b(local_24,(char *)puVar9,pcVar18);
    puVar9 = (uint *)0x0;
    bVar17 = true;
    goto LAB_00041ec2;
  }
  puVar13 = (uint *)((int)local_74 + 1);
  puVar11 = (uint *)*local_18;
  local_74 = puVar13;
  if (puVar11 <= puVar13) {
    pcVar18 = str_0005c697;
    goto LAB_00042332;
  }
  local_40 = (uint *)0x0;
  local_38 = (uint *)0x0;
  local_48 = 0;
  local_44 = 0;
  puVar10 = (uint *)0x0;
  local_28 = 0;
  puVar12 = (uint *)0x0;
  puVar15 = local_18;
  puVar14 = puVar13;
  local_3c = puVar9;
  while (puVar13 <= puVar11) {
    local_1c = puVar13;
    if (puVar13 == puVar11) {
LAB_0004213a:
      if (local_1c == puVar14) {
        pcVar18 = str_0005c697;
        local_14 = puVar12;
        goto LAB_000423e3;
      }
      if (puVar10 == local_40) {
        puVar9 = (uint *)((int)local_40 * 2);
        if (local_40 == (uint *)0x0) {
          puVar9 = (uint *)0x4;
        }
        local_34 = puVar10;
        local_20 = puVar14;
        puVar11 = (uint *)recovered_21289((int)puVar12,(int)puVar9 * 4);
        if (puVar11 == (uint *)0x0) {
          local_14 = puVar12;
          recovered_3f39b(local_24,(char *)local_3c,str_0005c6ce);
          puVar9 = (uint *)0x0;
          bVar17 = true;
          puVar10 = local_40;
          goto LAB_00041ec9;
        }
        iVar6 = recovered_21289(local_28,(int)puVar9 * 4);
        if (iVar6 == 0) {
          recovered_3f39b(local_24,(char *)local_3c,str_0005c6ce);
          puVar9 = (uint *)0x0;
          bVar17 = true;
          puVar10 = local_40;
          local_14 = puVar11;
          goto LAB_00041ec9;
        }
        local_28 = iVar6;
        puVar12 = puVar11;
        puVar15 = local_18;
        puVar14 = local_20;
        puVar10 = local_34;
        local_40 = puVar9;
      }
      puVar12[(int)puVar10] = (uint)puVar14;
      *(uint **)(local_28 + (int)puVar10 * 4) = local_1c;
      puVar10 = (uint *)((int)puVar10 + 1);
      puVar14 = (uint *)((int)local_1c + 1);
LAB_000422c1:
    }
    else {
      iVar6 = *(int *)(puVar15[2] + (int)puVar13 * 4);
      local_20 = puVar14;
      local_14 = puVar12;
      iVar3 = recovered_214f9(iVar6,0x583f5);
      if (iVar3 == 0) {
        local_38 = (uint *)((int)local_38 + 1);
      }
      else {
        iVar3 = recovered_214f9(iVar6,0x5841a);
        if (iVar3 == 0) {
          bVar17 = local_38 == (uint *)0x0;
          local_38 = (uint *)((int)local_38 + -1);
          if (bVar17) {
            local_38 = (uint *)0x0;
          }
        }
        else {
          iVar3 = recovered_214f9(iVar6,0x58399);
          if (iVar3 == 0) {
            local_48 = local_48 + 1;
          }
          else {
            iVar3 = recovered_214f9(iVar6,0x5839b);
            if (iVar3 == 0) {
              bVar17 = local_48 == 0;
              local_48 = local_48 + -1;
              if (bVar17) {
                local_48 = 0;
              }
            }
            else {
              iVar3 = recovered_214f9(iVar6,0x58881);
              if (iVar3 == 0) {
                local_44 = local_44 + 1;
              }
              else {
                iVar3 = recovered_214f9(iVar6,0x58883);
                if (iVar3 == 0) {
                  bVar17 = local_44 == 0;
                  local_44 = local_44 + -1;
                  if (bVar17) {
                    local_44 = 0;
                  }
                }
                else if (((local_38 == (uint *)0x0) && (local_48 == 0)) && (local_44 == 0)) {
                  iVar6 = recovered_214f9(iVar6,0x58471);
                  puVar12 = local_14;
                  puVar15 = local_18;
                  puVar14 = local_20;
                  if (iVar6 == 0) goto LAB_0004213a;
                  local_38 = (uint *)0x0;
                  local_48 = 0;
                  local_44 = 0;
                  goto LAB_000422c1;
                }
              }
            }
          }
        }
      }
      puVar15 = local_18;
      puVar12 = local_14;
      puVar14 = local_20;
    }
    puVar11 = (uint *)*puVar15;
    puVar13 = (uint *)((int)local_1c + 1);
  }
  puVar11 = recovered_211fa((int)puVar10 * 0x24);
  if (puVar11 != (uint *)0x0) {
    puVar13 = puVar11 + 8;
    puVar9 = puVar10;
    while (bVar17 = puVar9 != (uint *)0x0, puVar9 = (uint *)((int)puVar9 + -1), bVar17) {
      puVar13[-8] = 0;
      puVar13[-7] = 0;
      puVar13[-6] = 0;
      puVar13[-5] = 0;
      puVar13[-4] = 0;
      puVar13[-3] = 0;
      puVar13[-2] = 0;
      puVar13[-1] = 0;
      *puVar13 = 0;
      puVar13 = puVar13 + 9;
    }
    puVar15 = (uint *)0x0;
    puVar13 = puVar11;
    local_34 = puVar10;
    local_14 = puVar12;
    do {
      if (local_34 == puVar15) {
        local_70[0] = 0;
        local_70[1] = 0;
        local_70[2] = 0;
        local_70[3] = 0;
        local_70[4] = 0;
        local_70[5] = 0;
        local_70[6] = 0;
        local_70[7] = 0;
        local_70[8] = 0;
        local_20 = (uint *)&DAT_0005872b;
        if (local_2c == (uint *)0x1) {
          local_20 = local_3c;
        }
        local_40 = local_2c;
        if (local_34 < local_2c) {
          local_40 = local_34;
        }
        local_38 = (uint *)((int)local_34 + -1);
        iVar6 = 0;
        puVar10 = (uint *)0x0;
        puVar9 = puVar11;
        goto LAB_00042447;
      }
      uVar7 = recovered_41b85(local_24,local_18,local_14[(int)puVar15],
                              *(uint *)(local_28 + (int)puVar15 * 4),puVar13);
      puVar15 = (uint *)((int)puVar15 + 1);
      puVar13 = puVar13 + 9;
      puVar9 = (uint *)0x0;
    } while ((char)uVar7 != '\0');
    goto LAB_000425d6;
  }
  pcVar18 = str_0005c726;
  local_14 = puVar12;
LAB_000423e3:
  recovered_3f39b(local_24,(char *)local_3c,pcVar18);
  puVar9 = (uint *)0x0;
  bVar17 = true;
  goto LAB_00041ec9;
LAB_00042447:
  if (local_40 == puVar10) goto LAB_00042524;
  local_1c = puVar9;
  local_18 = puVar10;
  if ((*puVar9 == 7) && (uVar4 = puVar9[6], uVar4 != 0)) {
    bVar1 = *(byte *)(uVar4 + 4);
    if ((local_2c == (uint *)0x1) && (bVar1 != 0)) {
      if (*(int *)(uVar4 + 8) == 0) {
        puVar9 = local_70;
      }
      else {
        puVar9 = *(uint **)(uVar4 + 0x10);
      }
      puVar9 = (uint *)recovered_55af8(local_24,local_70[9],(char *)*local_30,(uint *)(local_30 + 1)
                                       ,(byte *)local_3c,(int)puVar9);
      goto LAB_00042600;
    }
    if ((local_38 == puVar10 & bVar1) == 1) {
      puVar13 = (uint *)((int)local_30 + iVar6 + 4);
      local_20 = (uint *)((int)local_2c - (int)puVar10);
      iVar6 = 0;
      puVar9 = (uint *)0x0;
      goto LAB_00042589;
    }
    if ((bVar1 != 0) && (puVar9 = local_70, *(int *)(uVar4 + 8) != 0)) {
      puVar9 = *(uint **)(uVar4 + 0x10);
    }
  }
  uVar7 = recovered_55af8(local_24,local_70[9],*(char **)((int)local_30 + iVar6),
                          (undefined4 *)((int)local_30 + iVar6) + 1,(byte *)local_20,(int)puVar9);
  if ((char)uVar7 == '\0') goto LAB_000425d2;
  puVar10 = (uint *)((int)local_18 + 1);
  iVar6 = iVar6 + 0x10;
  puVar9 = local_1c + 9;
  goto LAB_00042447;
LAB_00042524:
  puVar10 = (uint *)(local_30 + (int)local_40 * 4 + 1);
  puVar9 = local_40;
  do {
    puVar13 = puVar9;
    puVar9 = puVar13;
    if (local_2c == puVar13) break;
    uVar7 = recovered_55af8(local_24,local_70[9],(char *)puVar10[-1],puVar10,&DAT_0005872b,
                            (int)local_70);
    puVar9 = (uint *)((int)puVar13 + 1);
    puVar10 = puVar10 + 4;
  } while ((char)uVar7 != '\0');
  puVar9 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),local_2c <= puVar13);
LAB_000425d6:
  bVar17 = true;
  puVar10 = local_34;
  goto LAB_00041ecb;
LAB_00042589:
  if (local_20 == puVar9) goto LAB_000425de;
  puVar10 = local_70;
  if (puVar9 < *(uint **)(local_1c[6] + 8)) {
    puVar10 = (uint *)(*(int *)(local_1c[6] + 0x10) + iVar6);
  }
  local_18 = puVar9;
  uVar7 = recovered_55af8(local_24,local_70[9],(char *)puVar13[-1],puVar13,&DAT_0005872b,
                          (int)puVar10);
  if ((char)uVar7 == '\0') goto LAB_000425d2;
  puVar9 = (uint *)((int)local_18 + 1);
  puVar13 = puVar13 + 4;
  iVar6 = iVar6 + 0x24;
  goto LAB_00042589;
LAB_000425de:
  puVar9 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),1);
LAB_00042600:
  bVar17 = true;
  puVar10 = local_34;
  goto LAB_00041ecb;
LAB_000425d2:
  puVar9 = (uint *)0x0;
  goto LAB_000425d6;
  while( true ) {
    uVar4 = recovered_3fc11(local_70[9],*piVar16,(int)local_70);
    iVar3 = extraout_EDX_07;
    piVar5 = piVar16 + 4;
    if ((char)uVar4 == '\0') break;
LAB_00042080:
    piVar16 = piVar5;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      bVar17 = true;
      goto LAB_00042323;
    }
  }
  recovered_3f39b(local_24,(char *)*piVar16,str_0005853b,(char *)*piVar16);
  bVar17 = true;
LAB_00041eb7:
  puVar9 = (uint *)0x0;
LAB_00041ec2:
  local_28 = 0;
  local_14 = (uint *)0x0;
  puVar10 = (uint *)0x0;
LAB_00041ec9:
  puVar11 = (uint *)0x0;
LAB_00041ecb:
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = bVar17;
  }
  local_1c = puVar9;
  if (puVar11 != (uint *)0x0) {
    recovered_46579((int)puVar11,(int)puVar10);
  }
  recovered_21203((int)puVar11);
  recovered_21203((int)local_14);
  recovered_21203(local_28);
  piVar5 = local_30;
  if (local_30 != (int *)0x0) {
    puVar9 = (uint *)(local_30 + 1);
    puVar10 = local_2c;
    while (bVar17 = puVar10 != (uint *)0x0, puVar10 = (uint *)((int)puVar10 + -1), bVar17) {
      recovered_3f876(puVar9);
      puVar9 = puVar9 + 4;
    }
    recovered_21203((int)piVar5);
  }
  return local_1c;
}
