#include "functions.h"
#undef DAT_000473e6
#define DAT_000473e6 (*(uint8_t *)(0x473e6U))
#undef str_000471f6
#define str_000471f6 (*(char (*)[1])(0x471f6U))
#undef str_000476a1
#define str_000476a1 (*(char (*)[1])(0x476a1U))
#undef str_0004aeb0
#define str_0004aeb0 (*(char (*)[1])(0x4aeb0U))
#undef str_0004aee7
#define str_0004aee7 (*(char (*)[1])(0x4aee7U))
#undef str_0004af1a
#define str_0004af1a (*(char (*)[1])(0x4af1aU))
#undef str_0004af3f
#define str_0004af3f (*(char (*)[1])(0x4af3fU))
#define local_7c (*(uint *)(frame + 24))
#define local_78 (*(uint ************ *)(frame + 28))
#define local_74 (*(uint *********** *)(frame + 32))
#define local_70 (*(uint *********** *)(frame + 36))
#define local_6c (*(undefined4 *)(frame + 40))
#define local_68 (*(undefined4 *)(frame + 44))
#define local_64 (*(undefined4 *)(frame + 48))
#define local_60 (*(undefined4 *)(frame + 52))
#define local_5c (*(undefined4 *)(frame + 56))
#define local_58 (*(undefined4 *)(frame + 60))
#define local_54 (*(undefined4 *)(frame + 64))
#define local_50 (*(undefined4 *)(frame + 68))
#define local_4c (*(int *)(frame + 72))
#define local_48 (*(int *)(frame + 76))
#define local_44 (*(uint ********** *)(frame + 80))
#define local_40 (*(uint ********** *)(frame + 84))
#define local_3c (*(uint *********** *)(frame + 88))
#define local_38 (*(uint ************ *)(frame + 92))
#define local_34 (*(int * *)(frame + 96))
#define local_30 (*(int * *)(frame + 100))
#define local_2c (*(uint ************ *)(frame + 104))
#define local_28 (*(uint ************ *)(frame + 108))
#define local_24 (*(uint *********** *)(frame + 112))
#define local_20 (*(uint *)(frame + 116))
#define local_1c (*(uint ************ *)(frame + 120))
#define local_18 (*(uint ************ *)(frame + 124))
#define local_14 (*(uint *********** *)(frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31dd8
 */

uint ******* recovered_31dd8(uint param_1,uint *******param_2,undefined1 *param_3)

{
  unsigned char frame[180];

  uint *****pppppuVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 extraout_ECX = 0;
  uint ************ppppppppppppuVar8;
  uint ************ppppppppppppuVar9;
  undefined4 extraout_EDX = 0;
  byte bVar10;
  undefined4 unaff_EBX = 0;
  uint ***********pppppppppppuVar11;
  uint ************ppppppppppppuVar12;
  uint **********ppppppppppuVar13;
  uint *puVar14;
  uint ************ppppppppppppuVar15;
  uint ***********pppppppppppuVar16;
  bool bVar17;
  char *pcVar18;

  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  local_14 = (uint ***********)CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  if (param_2 == (uint *******)0x0 || param_1 == 0) {
    return (uint *******)local_14;
  }
  pppppppppppuVar16 = (uint ***********)*param_2;
  if (pppppppppppuVar16 == (uint ***********)0x0) {
    return (uint *******)local_14;
  }
  local_28 = (uint ************)param_2[2];
  pppppuVar1 = (uint *****)*local_28;
  local_20 = param_1;
  local_1c = (uint ************)param_2;
  iVar3 = recovered_2d39e((int)pppppuVar1,0x47038);
  pppppppppppuVar11 = (uint ***********)0x1;
  local_14 = (uint ***********)CONCAT31((int3)((uint)extraout_ECX >> 8),1);
  if ((char)iVar3 == '\0') {
    iVar3 = recovered_2d39e((int)pppppuVar1,0x47032);
    local_24 = (uint ***********)0x0;
    local_4c = 0;
    pppppppppppuVar11 = (uint ***********)0x0;
    if ((char)iVar3 != '\0') {
      local_4c = 2;
      local_24 = (uint ***********)0x1;
      pppppppppppuVar11 = (uint ***********)0x1;
    }
  }
  else {
    local_24 = (uint ***********)CONCAT31((int3)((uint)extraout_EDX >> 8),1);
    local_4c = 1;
  }
  if (pppppppppppuVar16 <= pppppppppppuVar11) {
    return (uint *******)local_14;
  }
  uVar4 = recovered_31354((byte *)local_28[(int)pppppppppppuVar11]);
  if ((char)uVar4 == '\0') {
    return (uint *******)local_14;
  }
  local_7c = local_20;
  local_78 = local_1c;
  local_18 = (uint ************)0x0;
  local_28 = (uint ************)0x0;
  local_34 = (int *)0x0;
  ppppppppppppuVar8 = local_1c;
  while( true ) {
    local_74 = pppppppppppuVar11;
    if (pppppppppppuVar16 <= pppppppppppuVar11) break;
    ppppppppppuVar13 = ppppppppppppuVar8[2][(int)pppppppppppuVar11];
    uVar4 = recovered_31354((byte *)ppppppppppuVar13);
    if ((char)uVar4 == '\0') {
      ppppppppppppuVar8 = local_1c;
      break;
    }
    if (local_28 == local_18) {
      ppppppppppppuVar8 = (uint ************)((int)local_18 * 2);
      if (local_18 == (uint ************)0x0) {
        ppppppppppppuVar8 = (uint ************)0x4;
      }
      piVar5 = (int *)recovered_21289((int)local_34,(int)ppppppppppppuVar8 << 4);
      ppppppppppuVar13 = local_1c[2][(int)local_74];
      if (piVar5 == (int *)0x0) {
        recovered_30ed3(local_20,(char *)ppppppppppuVar13,str_0004aee7);
        bVar17 = false;
        local_14 = (uint ***********)0x0;
        local_28 = local_18;
        goto LAB_00032045;
      }
      local_34 = piVar5;
      pppppppppppuVar11 = local_74;
      local_18 = ppppppppppppuVar8;
    }
    local_74 = (uint ***********)((int)pppppppppppuVar11 + 1);
    piVar5 = local_34 + (int)local_28 * 4;
    *piVar5 = (int)ppppppppppuVar13;
    piVar5[1] = 0;
    piVar5[2] = 0;
    local_30 = local_34 + (int)local_28 * 4;
    piVar5[3] = 0;
LAB_00031f33:
    pppppppppppuVar16 = *local_1c;
    if (local_74 < pppppppppppuVar16) {
      iVar3 = recovered_21415((int)local_1c[2][(int)local_74],0x47058);
      if (iVar3 == 0) {
        local_70 = (uint ***********)0x0;
        local_6c = 0;
        local_68 = 0;
        local_64 = 0;
        local_60 = 0;
        local_5c = 0;
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        local_74 = (uint ***********)((int)local_74 + 1);
        uVar6 = recovered_32cdd(&local_7c,(uint *)&local_70);
        if ((char)uVar6 != '\0') {
          uVar6 = recovered_313f0((int)&local_7c,0x4705a);
          if ((char)uVar6 != '\0') goto code_r0x00031fa3;
          recovered_2603e(&local_70);
          pcVar18 = str_000476a1;
          goto LAB_00032028;
        }
        recovered_2603e(&local_70);
        goto LAB_00032038;
      }
      pppppppppppuVar16 = *local_1c;
    }
    ppppppppppppuVar8 = local_1c;
    local_28 = (uint ************)((int)local_28 + 1);
    if (pppppppppppuVar16 <= local_74) break;
    iVar3 = recovered_21415((int)local_1c[2][(int)local_74],0x4712c);
    if (iVar3 != 0) {
      break;
    }
    pppppppppppuVar16 = *ppppppppppppuVar8;
    pppppppppppuVar11 = (uint ***********)((int)local_74 + 1);
  }
  if (local_28 == (uint ************)0x0) {
    return (uint *******)local_14;
  }
  if (((byte)local_24 & local_74 == *ppppppppppppuVar8) == 1) {
    local_70 = (uint ***********)0x0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    piVar5 = local_34 + 1;
    iVar3 = 1;
    do {
      if ((int)local_28 + iVar3 == 1) {
        iVar3 = (int)local_28 + 1;
        ppppppppppppuVar8 = local_28;
        piVar5 = local_34;
        goto LAB_0003220c;
      }
      iVar3 = iVar3 + -1;
      iVar2 = *piVar5;
      piVar5 = piVar5 + 4;
    } while (iVar2 == 0);
    bVar17 = local_28 <= (uint ************)-iVar3;
    local_14 = (uint ***********)CONCAT31((int3)((uint)-iVar3 >> 8),1);
  }
  else {
    local_14 = (uint ***********)CONCAT31((int3)((uint)ppppppppppppuVar8 >> 8),1);
    if (local_74 < *ppppppppppppuVar8) {
      ppppppppppuVar13 = local_1c[2][(int)local_74];
      iVar3 = recovered_21415((int)ppppppppppuVar13,0x473e6);
      if ((((iVar3 == 0) || (iVar3 = recovered_21415((int)ppppppppppuVar13,0x4af0e), iVar3 == 0)) ||
          (iVar3 = recovered_21415((int)ppppppppppuVar13,0x4af11), iVar3 == 0)) ||
         ((iVar3 = recovered_21415((int)ppppppppppuVar13,0x4af14), iVar3 == 0 ||
          (iVar3 = recovered_21415((int)ppppppppppuVar13,0x4af17), iVar3 == 0)))) {
        if ((local_28 != (uint ************)0x1) &&
           (iVar3 = recovered_21415((int)ppppppppppuVar13,0x473e6), iVar3 != 0)) {
          pcVar18 = str_0004af1a;
LAB_000324d6:
          recovered_30ed3(local_20,(char *)ppppppppppuVar13,pcVar18);
          local_14 = (uint ***********)0x0;
          bVar17 = true;
          goto LAB_00032045;
        }
        pppppppppppuVar11 = (uint ***********)((int)local_74 + 1);
        pppppppppppuVar16 = *local_1c;
        local_74 = pppppppppppuVar11;
        if (pppppppppppuVar16 <= pppppppppppuVar11) {
          pcVar18 = str_0004aeb0;
          goto LAB_000324d6;
        }
        local_2c = (uint ************)0x0;
        ppppppppppppuVar15 = (uint ************)0x0;
        local_40 = (uint **********)0x0;
        local_3c = (uint ***********)0x0;
        local_48 = 0;
        local_30 = (int *)0x0;
        ppppppppppppuVar12 = (uint ************)0x0;
        ppppppppppppuVar8 = local_1c;
        local_44 = ppppppppppuVar13;
        local_24 = pppppppppppuVar11;
        while (pppppppppppuVar11 <= pppppppppppuVar16) {
          local_14 = pppppppppppuVar11;
          if (pppppppppppuVar11 == pppppppppppuVar16) {
LAB_000322d0:
            if (local_14 == local_24) {
              local_18 = ppppppppppppuVar12;
              recovered_30ed3(local_20,(char *)local_44,str_0004aeb0);
              local_14 = (uint ***********)0x0;
              bVar17 = true;
              local_24 = (void *)0x0;
              ppppppppppppuVar8 = (uint ************)0x0;
              piVar5 = local_30;
              goto LAB_00032055;
            }
            if (ppppppppppppuVar15 == local_2c) {
              ppppppppppppuVar9 = (uint ************)((int)local_2c * 2);
              if (local_2c == (uint ************)0x0) {
                ppppppppppppuVar9 = (uint ************)0x4;
              }
              local_38 = ppppppppppppuVar15;
              local_18 = (uint ************)
                         recovered_21289((int)ppppppppppppuVar12,(int)ppppppppppppuVar9 * 4);
              piVar5 = local_30;
              if (local_18 == (uint ************)0x0) {
                local_18 = ppppppppppppuVar12;
                recovered_30ed3(local_20,(char *)local_44,str_0004aee7);
                local_14 = (uint ***********)0x0;
                bVar17 = true;
                local_24 = (void *)0x0;
                piVar5 = local_30;
                ppppppppppppuVar8 = (uint ************)0x0;
                ppppppppppppuVar15 = local_2c;
                goto LAB_00032058;
              }
              piVar7 = (int *)recovered_21289((int)local_30,(int)ppppppppppppuVar9 * 4);
              if (piVar7 == (int *)0x0) {
                recovered_30ed3(local_20,(char *)local_44,str_0004aee7);
                local_14 = (uint ***********)0x0;
                bVar17 = true;
                ppppppppppppuVar15 = local_2c;
                goto LAB_000324c7;
              }
              local_30 = piVar7;
              ppppppppppppuVar12 = local_18;
              ppppppppppppuVar8 = local_1c;
              ppppppppppppuVar15 = local_38;
              local_2c = ppppppppppppuVar9;
            }
            ppppppppppppuVar12[(int)ppppppppppppuVar15] = local_24;
            local_30[(int)ppppppppppppuVar15] = (int)local_14;
            ppppppppppppuVar15 = (uint ************)((int)ppppppppppppuVar15 + 1);
            local_24 = (uint ***********)((int)local_14 + 1);
          }
          else {
            ppppppppppuVar13 = ppppppppppppuVar8[2][(int)pppppppppppuVar11];
            local_18 = ppppppppppppuVar12;
            iVar3 = recovered_21415((int)ppppppppppuVar13,0x470b4);
            if (iVar3 == 0) {
              local_40 = (uint **********)((int)local_40 + 1);
            }
            else {
              iVar3 = recovered_21415((int)ppppppppppuVar13,0x470d9);
              if (iVar3 == 0) {
                bVar17 = local_40 == (uint **********)0x0;
                local_40 = (uint **********)((int)local_40 + -1);
                if (bVar17) {
                  local_40 = (uint **********)0x0;
                }
              }
              else {
                iVar3 = recovered_21415((int)ppppppppppuVar13,0x47058);
                if (iVar3 == 0) {
                  local_3c = (uint ***********)((int)local_3c + 1);
                }
                else {
                  iVar3 = recovered_21415((int)ppppppppppuVar13,0x4705a);
                  if (iVar3 == 0) {
                    bVar17 = local_3c == (uint ***********)0x0;
                    local_3c = (uint ***********)((int)local_3c + -1);
                    if (bVar17) {
                      local_3c = (uint ***********)0x0;
                    }
                  }
                  else {
                    iVar3 = recovered_21415((int)ppppppppppuVar13,0x4753c);
                    if (iVar3 == 0) {
                      local_48 = local_48 + 1;
                    }
                    else {
                      iVar3 = recovered_21415((int)ppppppppppuVar13,0x4753e);
                      if (iVar3 == 0) {
                        bVar17 = local_48 == 0;
                        local_48 = local_48 + -1;
                        if (bVar17) {
                          local_48 = 0;
                        }
                      }
                      else if (((local_40 == (uint **********)0x0) &&
                               (local_3c == (uint ***********)0x0)) && (local_48 == 0)) {
                        iVar3 = recovered_21415((int)ppppppppppuVar13,0x4712c);
                        ppppppppppppuVar8 = local_1c;
                        ppppppppppppuVar12 = local_18;
                        if (iVar3 == 0) goto LAB_000322d0;
                        local_40 = (uint **********)0x0;
                        local_3c = (uint ***********)0x0;
                        local_48 = 0;
                        goto LAB_000324a4;
                      }
                    }
                  }
                }
              }
            }
            ppppppppppppuVar8 = local_1c;
            ppppppppppppuVar12 = local_18;
          }
LAB_000324a4:
          pppppppppppuVar16 = *ppppppppppppuVar8;
          pppppppppppuVar11 = (uint ***********)((int)local_14 + 1);
        }
        local_18 = ppppppppppppuVar12;
        ppppppppppppuVar8 = recovered_211fa((int)ppppppppppppuVar15 * 0x24);
        local_24 = recovered_211fa((uint)ppppppppppppuVar15);
        if (local_24 != (void *)0x0 && ppppppppppppuVar8 != (uint ************)0x0) {
          ppppppppppppuVar12 = ppppppppppppuVar8 + 8;
          for (ppppppppppppuVar9 = (uint ************)0x0; ppppppppppppuVar15 != ppppppppppppuVar9;
              ppppppppppppuVar9 = (uint ************)((int)ppppppppppppuVar9 + 1)) {
            ppppppppppppuVar12[-8] = (uint ***********)0x0;
            ppppppppppppuVar12[-7] = (uint ***********)0x0;
            ppppppppppppuVar12[-6] = (uint ***********)0x0;
            ppppppppppppuVar12[-5] = (uint ***********)0x0;
            ppppppppppppuVar12[-4] = (uint ***********)0x0;
            ppppppppppppuVar12[-3] = (uint ***********)0x0;
            ppppppppppppuVar12[-2] = (uint ***********)0x0;
            ppppppppppppuVar12[-1] = (uint ***********)0x0;
            *ppppppppppppuVar12 = (uint ***********)0x0;
            *(undefined1 *)((int)local_24 + (int)ppppppppppppuVar9) = 0;
            ppppppppppppuVar12 = ppppppppppppuVar12 + 9;
          }
          ppppppppppppuVar12 = (uint ************)0x0;
          local_38 = ppppppppppppuVar15;
          local_2c = ppppppppppppuVar8;
          do {
            ppppppppppppuVar8 = local_1c;
            if (ppppppppppppuVar12 == local_38) {
              local_70 = (uint ***********)0x0;
              local_6c = 0;
              local_68 = 0;
              local_64 = 0;
              local_60 = 0;
              local_5c = 0;
              local_58 = 0;
              local_54 = 0;
              local_50 = 0;
              local_40 = (uint **********)&DAT_000473e6;
              if (local_28 == (uint ************)0x1) {
                local_40 = local_44;
              }
              local_1c = local_28;
              if (local_38 < local_28) {
                local_1c = local_38;
              }
              puVar14 = (uint *)(local_34 + 1);
              local_3c = (uint ***********)((int)local_38 + -1);
              pppppppppppuVar16 = (uint ***********)0x0;
              ppppppppppppuVar8 = local_2c;
              goto LAB_00032835;
            }
            pppppppppppuVar16 = local_18[(int)ppppppppppppuVar12];
            pppppppppppuVar11 = (uint ***********)local_30[(int)ppppppppppppuVar12];
            local_70 = pppppppppppuVar16;
            if ((pppppppppppuVar16 < pppppppppppuVar11) &&
               (local_14 = pppppppppppuVar11, pppppppppppuVar11 <= *local_1c)) {
              iVar3 = recovered_21415((int)local_1c[2][(int)pppppppppppuVar16],0x470b4);
              if ((iVar3 == 0) ||
                 ((iVar3 = recovered_21415((int)ppppppppppppuVar8[2][(int)pppppppppppuVar16],0x47058
                                          ), iVar3 == 0 ||
                  (iVar3 = recovered_21415((int)ppppppppppppuVar8[2][(int)pppppppppppuVar16],0x4753c
                                          ), iVar3 == 0)))) {
                pppppppppppuVar16 = local_14;
                uVar6 = recovered_45b92((int)ppppppppppppuVar8,(uint *)&local_70,(uint)local_14);
                if ((char)uVar6 == '\0') {
LAB_0003278c:
                  bVar10 = 0;
                  ppppppppppppuVar8 = local_1c;
                  goto LAB_000325bc;
                }
              }
              else {
                ppppppppppuVar13 = ppppppppppppuVar8[2][(int)pppppppppppuVar16];
                uVar4 = recovered_31354((byte *)ppppppppppuVar13);
                if (((char)uVar4 == '\0') &&
                   (bVar17 = recovered_34f94((char *)ppppppppppuVar13), !bVar17)) {
                  ppppppppppuVar13 = local_1c[2][(int)pppppppppppuVar16];
                  iVar3 = recovered_2d39e((int)ppppppppppuVar13,0x476f8);
                  if ((((char)iVar3 == '\0') &&
                      (((iVar3 = recovered_2d39e((int)ppppppppppuVar13,0x476fd), (char)iVar3 == '\0'
                        && (iVar3 = recovered_2d39e((int)ppppppppppuVar13,0x475c3),
                           (char)iVar3 == '\0')) &&
                       (iVar3 = recovered_2d39e((int)ppppppppppuVar13,0x47703), (char)iVar3 == '\0')
                       ))) && ((iVar3 = recovered_2d39e((int)ppppppppppuVar13,0x47708),
                               (char)iVar3 == '\0' &&
                               (iVar3 = recovered_351fe((char *)ppppppppppuVar13),
                               (char)iVar3 == '\0')))) goto LAB_0003278c;
                }
                local_70 = (uint ***********)((int)pppppppppppuVar16 + 1);
                pppppppppppuVar16 = local_14;
              }
              bVar10 = 0;
              do {
                ppppppppppppuVar8 = local_1c;
                if ((pppppppppppuVar16 <= local_70) ||
                   ((iVar3 = recovered_21415((int)local_1c[2][(int)local_70],0x47058), iVar3 != 0 &&
                    (iVar3 = recovered_21415((int)ppppppppppppuVar8[2][(int)local_70],0x470b4),
                    iVar3 != 0)))) {
                  bVar10 = bVar10 & local_70 == local_14;
                  goto LAB_000325bc;
                }
                iVar3 = recovered_21415((int)ppppppppppppuVar8[2][(int)local_70],0x470b4);
                pppppppppppuVar16 = local_14;
                bVar10 = bVar10 | iVar3 == 0;
                uVar6 = recovered_45b92((int)ppppppppppppuVar8,(uint *)&local_70,(uint)local_14);
              } while ((char)uVar6 != '\0');
              bVar10 = 0;
              ppppppppppppuVar8 = local_1c;
            }
            else {
              bVar10 = 0;
            }
LAB_000325bc:
            *(byte *)((int)local_24 + (int)ppppppppppppuVar12) = bVar10;
            uVar6 = recovered_31d01(local_20,(uint *)ppppppppppppuVar8,
                                    (uint)local_18[(int)ppppppppppppuVar12],
                                    local_30[(int)ppppppppppppuVar12],
                                    (uint *)(local_2c + (int)ppppppppppppuVar12 * 9));
            ppppppppppppuVar12 = (uint ************)((int)ppppppppppppuVar12 + 1);
          } while ((char)uVar6 != '\0');
          local_14 = (uint ***********)0x0;
          goto LAB_000329ee;
        }
        recovered_30ed3(local_20,(char *)local_44,str_0004af3f);
        bVar17 = true;
        local_14 = (uint ***********)0x0;
        piVar5 = local_30;
      }
      else {
        bVar17 = false;
LAB_00032045:
        ppppppppppppuVar15 = (uint ************)0x0;
        local_18 = (uint ************)0x0;
        local_24 = (void *)0x0;
        ppppppppppppuVar8 = (uint ************)0x0;
        piVar5 = (int *)0x0;
      }
LAB_00032055:
      goto LAB_00032058;
    }
    bVar17 = false;
  }
  goto LAB_000324b5;
code_r0x00031fa3:
  uVar6 = recovered_31434(piVar5 + 1,(int)&local_70);
  recovered_2603e(&local_70);
  if ((char)uVar6 == '\0') {
    pcVar18 = str_0004aee7;
LAB_00032028:
    recovered_30ed3(local_20,(char *)*local_30,pcVar18);
LAB_00032038:
    bVar17 = false;
    local_14 = (uint ***********)0x0;
    goto LAB_00032045;
  }
  goto LAB_00031f33;
  while( true ) {
    ppppppppppppuVar8 = (uint ************)recovered_31749(local_4c,*piVar7,(int)&local_70);
    piVar5 = piVar7 + 4;
    if ((char)ppppppppppppuVar8 == '\0') break;
LAB_0003220c:
    piVar7 = piVar5;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      local_14 = (uint ***********)CONCAT31((int3)((uint)ppppppppppppuVar8 >> 8),1);
      goto LAB_000324b3;
    }
  }
  recovered_30ed3(local_20,(char *)*piVar7,str_000471f6,(char *)*piVar7);
  local_14 = (uint ***********)0x0;
LAB_000324b3:
  bVar17 = true;
LAB_000324b5:
  piVar5 = (int *)0x0;
  local_18 = (uint ************)0x0;
  ppppppppppppuVar15 = (uint ************)0x0;
LAB_000324c7:
  local_24 = (void *)0x0;
  ppppppppppppuVar8 = (uint ************)0x0;
  goto LAB_00032058;
LAB_00032835:
  if (local_1c == (uint ************)pppppppppppuVar16) goto LAB_0003293f;
  ppppppppppppuVar12 = ppppppppppppuVar8;
  local_14 = pppppppppppuVar16;
  if (((*(char *)((int)local_24 + (int)pppppppppppuVar16) == '\x01') &&
      (*ppppppppppppuVar8 == (uint ***********)0x7)) &&
     (pppppppppppuVar11 = ppppppppppppuVar8[6], pppppppppppuVar11 != (uint ***********)0x0)) {
    bVar10 = *(byte *)(pppppppppppuVar11 + 1);
    if ((local_28 == (uint ************)0x1) && (bVar10 != 0)) {
      if (pppppppppppuVar11[2] == (uint **********)0x0) {
        ppppppppppppuVar8 = &local_70;
      }
      else {
        ppppppppppppuVar8 = (uint ************)pppppppppppuVar11[4];
      }
      local_14 = (uint ***********)
                 recovered_4563e(local_20,local_4c,(char *)*local_34,(uint *)(local_34 + 1),
                                 (byte *)local_44,(int)ppppppppppppuVar8);
      goto LAB_000329ee;
    }
    if ((local_3c == pppppppppppuVar16 & bVar10) == 1) {
      ppppppppppppuVar12 = (uint ************)((int)local_28 - (int)pppppppppppuVar16);
      local_14 = (uint ***********)0x0;
      ppppppppppppuVar15 = (uint ************)0x0;
      local_1c = ppppppppppppuVar12;
      goto LAB_000329a6;
    }
    if ((bVar10 != 0) &&
       (ppppppppppppuVar12 = &local_70, pppppppppppuVar11[2] != (uint **********)0x0)) {
      ppppppppppppuVar12 = (uint ************)pppppppppppuVar11[4];
    }
  }
  uVar6 = recovered_4563e(local_20,local_4c,(char *)puVar14[-1],puVar14,(byte *)local_40,
                          (int)ppppppppppppuVar12);
  if ((char)uVar6 == '\0') goto LAB_000329e2;
  pppppppppppuVar16 = (uint ***********)((int)local_14 + 1);
  puVar14 = puVar14 + 4;
  ppppppppppppuVar8 = ppppppppppppuVar8 + 9;
  goto LAB_00032835;
LAB_000329a6:
  if (local_1c == ppppppppppppuVar15) goto LAB_000329fc;
  ppppppppppppuVar12 = &local_70;
  if (ppppppppppppuVar15 < ppppppppppppuVar8[6][2]) {
    ppppppppppppuVar12 = (uint ************)((int)ppppppppppppuVar8[6][4] + (int)local_14);
  }
  ppppppppppppuVar12 =
       (uint ************)
       recovered_4563e(local_20,local_4c,(char *)puVar14[-1],puVar14,&DAT_000473e6,
                       (int)ppppppppppppuVar12);
  if ((char)ppppppppppppuVar12 == '\0') goto LAB_000329e2;
  ppppppppppppuVar15 = (uint ************)((int)ppppppppppppuVar15 + 1);
  puVar14 = puVar14 + 4;
  local_14 = (uint ***********)((int)local_14 + 0x24);
  goto LAB_000329a6;
LAB_000329fc:
  local_14 = (uint ***********)CONCAT31((int3)((uint)ppppppppppppuVar12 >> 8),1);
  goto LAB_000329ee;
LAB_000329e2:
  local_14 = (uint ***********)0x0;
  goto LAB_000329ee;
LAB_0003293f:
  iVar3 = (int)local_1c * 0x10;
  puVar14 = (uint *)(local_34 + (int)local_1c * 4 + 1);
  ppppppppppppuVar8 = local_1c;
  do {
    ppppppppppppuVar12 = ppppppppppppuVar8;
    if (local_28 == ppppppppppppuVar12) break;
    iVar3 = recovered_4563e(local_20,local_4c,(char *)puVar14[-1],puVar14,&DAT_000473e6,
                            (int)&local_70);
    puVar14 = puVar14 + 4;
    ppppppppppppuVar8 = (uint ************)((int)ppppppppppppuVar12 + 1);
  } while ((char)iVar3 != '\0');
  local_14 = (uint ***********)CONCAT31((int3)((uint)iVar3 >> 8),local_28 <= ppppppppppppuVar12);
LAB_000329ee:
  bVar17 = true;
  piVar5 = local_30;
  ppppppppppppuVar8 = local_2c;
  ppppppppppppuVar15 = local_38;
LAB_00032058:
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = bVar17;
  }
  if (ppppppppppppuVar8 != (uint ************)0x0) {
    recovered_365e8((int)ppppppppppppuVar8,(int)ppppppppppppuVar15);
  }
  recovered_21203((int)ppppppppppppuVar8);
  recovered_21203((int)local_24);
  recovered_21203((int)local_18);
  recovered_21203((int)piVar5);
  piVar5 = local_34;
  if (local_34 != (int *)0x0) {
    puVar14 = (uint *)(local_34 + 1);
    ppppppppppppuVar8 = local_28;
    while (bVar17 = ppppppppppppuVar8 != (uint ************)0x0,
          ppppppppppppuVar8 = (uint ************)((int)ppppppppppppuVar8 + -1), bVar17) {
      recovered_313ae(puVar14);
      puVar14 = puVar14 + 4;
    }
    recovered_21203((int)piVar5);
  }
  return (uint *******)local_14;
}
