#include "functions.h"
#undef DAT_000496c0
#define DAT_000496c0 (*(uint8_t *)(0x496c0U))
#undef str_000494d0
#define str_000494d0 (*(char (*)[1])(0x494d0U))
#undef str_0004997b
#define str_0004997b (*(char (*)[1])(0x4997bU))
#undef str_0004d602
#define str_0004d602 (*(char (*)[1])(0x4d602U))
#undef str_0004d639
#define str_0004d639 (*(char (*)[1])(0x4d639U))
#undef str_0004d66c
#define str_0004d66c (*(char (*)[1])(0x4d66cU))
#undef str_0004d691
#define str_0004d691 (*(char (*)[1])(0x4d691U))
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
 * Address: 0x33977
 */

uint * recovered_33977(uint param_1,uint *param_2,undefined1 *param_3)

{
  unsigned char frame[196];

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
  iVar3 = recovered_2d4e4(iVar6,0x4930e);
  puVar10 = (uint *)0x1;
  uVar8 = (undefined3)((uint)iVar3 >> 8);
  if ((char)iVar3 == '\0') {
    local_1c = (uint *)CONCAT31(uVar8,1);
    iVar6 = recovered_2d4e4(iVar6,0x49308);
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
  uVar4 = recovered_31537((byte *)local_2c[(int)puVar10]);
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
    uVar4 = recovered_31537(near_token);
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
        recovered_310b6(local_24,(char *)near_token,str_0004d639);
        bVar17 = false;
        puVar9 = (uint *)0x0;
        local_2c = local_14;
        goto LAB_00033bdd;
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
      iVar6 = recovered_21415(*(int *)(local_18[2] + (int)local_74 * 4),0x4932e);
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
      uVar7 = recovered_345e1(&local_7c,local_70);
      if ((char)uVar7 == '\0') {
        recovered_25fea(local_70);
LAB_00033bd0:
        bVar17 = false;
        goto LAB_00033bd2;
      }
      uVar7 = recovered_315d3((int)&local_7c,0x49330);
      if ((char)uVar7 == '\0') {
        recovered_25fea(local_70);
        pcVar18 = str_0004997b;
LAB_00033bc0:
        recovered_310b6(local_24,(char *)*local_20,pcVar18);
        goto LAB_00033bd0;
      }
      uVar7 = recovered_31617(piVar5 + 1,(int)local_70);
      recovered_25fea(local_70);
      if ((char)uVar7 == '\0') {
        pcVar18 = str_0004d639;
        goto LAB_00033bc0;
      }
      uVar7 = extraout_EDX_04;
    }
    local_2c = (uint *)((int)local_2c + 1);
    if (puVar9 <= local_74) break;
    iVar6 = recovered_21415(*(int *)(puVar11[2] + (int)local_74 * 4),0x49406);
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
        goto LAB_00033d9b;
      }
      iVar6 = iVar6 + -1;
      iVar2 = *piVar5;
      piVar5 = piVar5 + 4;
    } while (iVar2 == 0);
    bVar17 = local_2c <= (uint *)-iVar6;
LAB_0003403e:
    puVar9 = (uint *)CONCAT31((int3)((uint)iVar3 >> 8),1);
    goto LAB_00033bdd;
  }
  puVar9 = (uint *)CONCAT31((int3)((uint)uVar7 >> 8),1);
  if ((uint *)*local_18 <= local_74) {
    bVar17 = false;
    goto LAB_00033bdd;
  }
  puVar9 = *(uint **)(local_18[2] + (int)local_74 * 4);
  iVar6 = recovered_21415((int)puVar9,0x496c0);
  if ((((iVar6 != 0) && (iVar6 = recovered_21415((int)puVar9,0x4d660), iVar6 != 0)) &&
      (iVar6 = recovered_21415((int)puVar9,0x4d663), iVar6 != 0)) &&
     ((iVar6 = recovered_21415((int)puVar9,0x4d666), iVar6 != 0 &&
      (iVar6 = recovered_21415((int)puVar9,0x4d669), iVar6 != 0)))) {
    bVar17 = false;
    local_28 = 0;
    local_14 = (uint *)0x0;
    puVar11 = (uint *)0x0;
    puVar9 = (uint *)CONCAT31((int3)((uint)extraout_EDX_06 >> 8),1);
    puVar10 = (uint *)0x0;
    goto LAB_00033be6;
  }
  if ((puVar10 != (uint *)0x1) && (iVar6 = recovered_21415((int)puVar9,0x496c0), iVar6 != 0)) {
    pcVar18 = str_0004d66c;
LAB_0003404d:
    recovered_310b6(local_24,(char *)puVar9,pcVar18);
    puVar9 = (uint *)0x0;
    bVar17 = true;
    goto LAB_00033bdd;
  }
  puVar13 = (uint *)((int)local_74 + 1);
  puVar11 = (uint *)*local_18;
  local_74 = puVar13;
  if (puVar11 <= puVar13) {
    pcVar18 = str_0004d602;
    goto LAB_0003404d;
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
LAB_00033e55:
      if (local_1c == puVar14) {
        pcVar18 = str_0004d602;
        local_14 = puVar12;
        goto LAB_000340fe;
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
          recovered_310b6(local_24,(char *)local_3c,str_0004d639);
          puVar9 = (uint *)0x0;
          bVar17 = true;
          puVar10 = local_40;
          goto LAB_00033be4;
        }
        iVar6 = recovered_21289(local_28,(int)puVar9 * 4);
        if (iVar6 == 0) {
          recovered_310b6(local_24,(char *)local_3c,str_0004d639);
          puVar9 = (uint *)0x0;
          bVar17 = true;
          puVar10 = local_40;
          local_14 = puVar11;
          goto LAB_00033be4;
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
LAB_00033fdc:
    }
    else {
      iVar6 = *(int *)(puVar15[2] + (int)puVar13 * 4);
      local_20 = puVar14;
      local_14 = puVar12;
      iVar3 = recovered_21415(iVar6,0x4938a);
      if (iVar3 == 0) {
        local_38 = (uint *)((int)local_38 + 1);
      }
      else {
        iVar3 = recovered_21415(iVar6,0x493af);
        if (iVar3 == 0) {
          bVar17 = local_38 == (uint *)0x0;
          local_38 = (uint *)((int)local_38 + -1);
          if (bVar17) {
            local_38 = (uint *)0x0;
          }
        }
        else {
          iVar3 = recovered_21415(iVar6,0x4932e);
          if (iVar3 == 0) {
            local_48 = local_48 + 1;
          }
          else {
            iVar3 = recovered_21415(iVar6,0x49330);
            if (iVar3 == 0) {
              bVar17 = local_48 == 0;
              local_48 = local_48 + -1;
              if (bVar17) {
                local_48 = 0;
              }
            }
            else {
              iVar3 = recovered_21415(iVar6,0x49816);
              if (iVar3 == 0) {
                local_44 = local_44 + 1;
              }
              else {
                iVar3 = recovered_21415(iVar6,0x49818);
                if (iVar3 == 0) {
                  bVar17 = local_44 == 0;
                  local_44 = local_44 + -1;
                  if (bVar17) {
                    local_44 = 0;
                  }
                }
                else if (((local_38 == (uint *)0x0) && (local_48 == 0)) && (local_44 == 0)) {
                  iVar6 = recovered_21415(iVar6,0x49406);
                  puVar12 = local_14;
                  puVar15 = local_18;
                  puVar14 = local_20;
                  if (iVar6 == 0) goto LAB_00033e55;
                  local_38 = (uint *)0x0;
                  local_48 = 0;
                  local_44 = 0;
                  goto LAB_00033fdc;
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
        local_20 = (uint *)&DAT_000496c0;
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
        goto LAB_00034162;
      }
      uVar7 = recovered_338a0(local_24,local_18,local_14[(int)puVar15],
                              *(uint *)(local_28 + (int)puVar15 * 4),puVar13);
      puVar15 = (uint *)((int)puVar15 + 1);
      puVar13 = puVar13 + 9;
      puVar9 = (uint *)0x0;
    } while ((char)uVar7 != '\0');
    goto LAB_000342f1;
  }
  pcVar18 = str_0004d691;
  local_14 = puVar12;
LAB_000340fe:
  recovered_310b6(local_24,(char *)local_3c,pcVar18);
  puVar9 = (uint *)0x0;
  bVar17 = true;
  goto LAB_00033be4;
LAB_00034162:
  if (local_40 == puVar10) goto LAB_0003423f;
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
      puVar9 = (uint *)recovered_47a07(local_24,local_70[9],(char *)*local_30,(uint *)(local_30 + 1)
                                       ,(byte *)local_3c,(int)puVar9);
      goto LAB_0003431b;
    }
    if ((local_38 == puVar10 & bVar1) == 1) {
      puVar13 = (uint *)((int)local_30 + iVar6 + 4);
      local_20 = (uint *)((int)local_2c - (int)puVar10);
      iVar6 = 0;
      puVar9 = (uint *)0x0;
      goto LAB_000342a4;
    }
    if ((bVar1 != 0) && (puVar9 = local_70, *(int *)(uVar4 + 8) != 0)) {
      puVar9 = *(uint **)(uVar4 + 0x10);
    }
  }
  uVar7 = recovered_47a07(local_24,local_70[9],*(char **)((int)local_30 + iVar6),
                          (undefined4 *)((int)local_30 + iVar6) + 1,(byte *)local_20,(int)puVar9);
  if ((char)uVar7 == '\0') goto LAB_000342ed;
  puVar10 = (uint *)((int)local_18 + 1);
  iVar6 = iVar6 + 0x10;
  puVar9 = local_1c + 9;
  goto LAB_00034162;
LAB_0003423f:
  puVar10 = (uint *)(local_30 + (int)local_40 * 4 + 1);
  puVar9 = local_40;
  do {
    puVar13 = puVar9;
    puVar9 = puVar13;
    if (local_2c == puVar13) break;
    uVar7 = recovered_47a07(local_24,local_70[9],(char *)puVar10[-1],puVar10,&DAT_000496c0,
                            (int)local_70);
    puVar9 = (uint *)((int)puVar13 + 1);
    puVar10 = puVar10 + 4;
  } while ((char)uVar7 != '\0');
  puVar9 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),local_2c <= puVar13);
LAB_000342f1:
  bVar17 = true;
  puVar10 = local_34;
  goto LAB_00033be6;
LAB_000342a4:
  if (local_20 == puVar9) goto LAB_000342f9;
  puVar10 = local_70;
  if (puVar9 < *(uint **)(local_1c[6] + 8)) {
    puVar10 = (uint *)(*(int *)(local_1c[6] + 0x10) + iVar6);
  }
  local_18 = puVar9;
  uVar7 = recovered_47a07(local_24,local_70[9],(char *)puVar13[-1],puVar13,&DAT_000496c0,
                          (int)puVar10);
  if ((char)uVar7 == '\0') goto LAB_000342ed;
  puVar9 = (uint *)((int)local_18 + 1);
  puVar13 = puVar13 + 4;
  iVar6 = iVar6 + 0x24;
  goto LAB_000342a4;
LAB_000342f9:
  puVar9 = (uint *)CONCAT31((int3)((uint)puVar9 >> 8),1);
LAB_0003431b:
  bVar17 = true;
  puVar10 = local_34;
  goto LAB_00033be6;
LAB_000342ed:
  puVar9 = (uint *)0x0;
  goto LAB_000342f1;
  while( true ) {
    uVar4 = recovered_3192c(local_70[9],*piVar16,(int)local_70);
    iVar3 = extraout_EDX_07;
    piVar5 = piVar16 + 4;
    if ((char)uVar4 == '\0') break;
LAB_00033d9b:
    piVar16 = piVar5;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      bVar17 = true;
      goto LAB_0003403e;
    }
  }
  recovered_310b6(local_24,(char *)*piVar16,str_000494d0,(char *)*piVar16);
  bVar17 = true;
LAB_00033bd2:
  puVar9 = (uint *)0x0;
LAB_00033bdd:
  local_28 = 0;
  local_14 = (uint *)0x0;
  puVar10 = (uint *)0x0;
LAB_00033be4:
  puVar11 = (uint *)0x0;
LAB_00033be6:
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = bVar17;
  }
  local_1c = puVar9;
  if (puVar11 != (uint *)0x0) {
    recovered_38294((int)puVar11,(int)puVar10);
  }
  recovered_21203((int)puVar11);
  recovered_21203((int)local_14);
  recovered_21203(local_28);
  piVar5 = local_30;
  if (local_30 != (int *)0x0) {
    puVar9 = (uint *)(local_30 + 1);
    puVar10 = local_2c;
    while (bVar17 = puVar10 != (uint *)0x0, puVar10 = (uint *)((int)puVar10 + -1), bVar17) {
      recovered_31591(puVar9);
      puVar9 = puVar9 + 4;
    }
    recovered_21203((int)piVar5);
  }
  return local_1c;
}
