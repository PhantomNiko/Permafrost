#include "functions.h"
#undef DAT_0005ce0c
#define DAT_0005ce0c (*(uint8_t *)(0x5ce0cU))
#undef DAT_0005ddd4
#define DAT_0005ddd4 (*(uint32_t *)(0x5ddd4U))
#undef DAT_0005de24
#define DAT_0005de24 (*(uint8_t *)(0x5de24U))
#undef DAT_0005de28
#define DAT_0005de28 (*(uint8_t *)(0x5de28U))
#undef DAT_0005de30
#define DAT_0005de30 (*(uint32_t *)(0x5de30U))
#undef DAT_0005de80
#define DAT_0005de80 (*(uint8_t *)(0x5de80U))
#undef DAT_0005de84
#define DAT_0005de84 (*(uint8_t *)(0x5de84U))
#undef LAB_000269db
#define LAB_000269db (*(uint8_t *)(0x269dbU))
#undef PTR_LAB_0005d040
#define PTR_LAB_0005d040 (*(uint8_t * *)(0x5d040U))
#define local_58 (*(undefined * *)(frame + 596))
#define local_54 (*(undefined1 * *)(frame + 600))
#define local_50 (*(undefined1 * *)(frame + 604))
#define local_4c (*(undefined1 * *)(frame + 608))
#define local_40 (*(int *)(frame + 620))
#define local_3c (*(int *)(frame + 624))
#define local_34 (*(uint (*)[3])(frame + 632))
#define local_28 (*(uint *)(frame + 644))
#define local_24 (*(uint *)(frame + 648))
#define local_20 (*(undefined4 * *)(frame + 652))
#define local_1c (*(uint *)(frame + 656))
#define local_18 (*(undefined4 *)(frame + 660))
#define local_14 (*(uint *)(frame + 664))
#define auStackY_29c (*(undefined1 (*)[128])(frame + 16))
#define local_20c (*(uint (*)[17])(frame + 160))
#define local_1c8 (*(undefined4 *)(frame + 228))
#define local_1bc (*(undefined1 *)(frame + 240))
#define local_1b8 (*(uint (*)[17])(frame + 244))
#define local_174 (*(undefined4 *)(frame + 312))
#define local_168 (*(undefined1 *)(frame + 324))
#define local_164 (*(uint (*)[17])(frame + 328))
#define local_120 (*(undefined4 *)(frame + 396))
#define local_114 (*(undefined1 *)(frame + 408))
#define local_110 (*(uint (*)[17])(frame + 412))
#define local_cc (*(undefined4 *)(frame + 480))
#define local_c0 (*(undefined1 *)(frame + 492))
#define local_bc (*(uint *)(frame + 496))
#define local_b8 (*(uint *)(frame + 500))
#define local_b4 (*(uint *)(frame + 504))
#define local_b0 (*(uint *)(frame + 508))
#define local_ac (*(uint *)(frame + 512))
#define local_a8 (*(int * *)(frame + 516))
#define local_a4 (*(uint (*)[3])(frame + 520))
#define local_98 (*(byte * *)(frame + 532))
#define local_94 (*(int *)(frame + 536))
#define local_90 (*(int *)(frame + 540))
#define local_8c (*(uint *)(frame + 544))
#define local_88 (*(uint *)(frame + 548))
#define local_84 (*(uint *)(frame + 552))
#define local_80 (*(int * *)(frame + 556))
#define local_7c (*(uint *)(frame + 560))
#define local_78 (*(int *)(frame + 564))
#define local_74 (*(undefined4 *)(frame + 568))
#define local_70 (*(undefined4 *)(frame + 572))
#define local_5c (*(undefined * *)(frame + 592))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25f26
 */

bool recovered_25f26(int *param_1,int *param_2)

{
  unsigned char frame[716] = {0};

  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined4 *puVar12;
  bool bVar13;

  local_54 = (undefined1 *)(local_34 + 0xc);
  local_4c = auStackY_29c + 0x80;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  iVar10 = *param_2;
  iVar9 = param_2[1];
  local_5c = PTR_LAB_0005d040;
  local_58 = &DAT_0005ce0c;
  local_50 = &LAB_000269db;
  local_80 = param_1 + 3;
  local_a8 = param_1;
  recovered_234cb(&local_74);
  piVar2 = local_a8;
  uVar4 = 0;
  for (iVar9 = iVar9 << 3; iVar9 != 0; iVar9 = iVar9 + -8) {
    bVar13 = CARRY4(uVar4,*(uint *)(iVar10 + 4));
    uVar4 = uVar4 + *(uint *)(iVar10 + 4);
    if (bVar13) goto LAB_00026982;
    iVar10 = iVar10 + 8;
  }
  local_70 = 0xffffffff;
  recovered_29a7c(local_a8,uVar4);
  puVar12 = (undefined4 *)*param_2;
  for (iVar10 = param_2[1] << 3; iVar10 != 0; iVar10 = iVar10 + -8) {
    local_70 = 0xffffffff;
    recovered_25dac(piVar2,*piVar2 + piVar2[1],(undefined1 *)*puVar12,
                    (undefined1 *)*puVar12 + puVar12[1]);
    puVar12 = puVar12 + 2;
  }
  piVar2[4] = 0;
  if (5 < (uint)piVar2[1]) {
    pbVar1 = (byte *)*piVar2;
    if ((*pbVar1 & 0xf) == 8) {
      bVar7 = pbVar1[1];
      local_7c = (uint)bVar7;
      bVar13 = false;
      if (((bVar7 & 0x20) == 0) && ((ushort)(CONCAT11(*pbVar1,bVar7) % 0x1f) == 0)) {
        local_94 = piVar2[1] - 6;
        local_98 = pbVar1 + 2;
        local_90 = 0;
        local_88 = 0;
        local_8c = 0;
        local_84 = 0;
        do {
          iVar10 = 1;
          local_b0 = 0;
          local_ac = 0;
          uVar5 = recovered_26d70((int *)&local_98,1,&local_b0);
          if (((char)uVar5 == '\0') ||
             (uVar5 = recovered_26d70((int *)&local_98,2,&local_ac), (char)uVar5 == '\0'))
          goto LAB_00026982;
          local_7c = local_b0;
          if (local_ac == 2) {
            iVar10 = 0x14;
            puVar11 = local_20c;
            for (iVar9 = iVar10; iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
            }
            local_1bc = 0;
            puVar11 = local_1b8;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar11 = 0;
              puVar11 = puVar11 + 1;
            }
            local_bc = 0;
            local_b8 = 0;
            local_168 = 0;
            local_b4 = 0;
            uVar5 = recovered_26d70((int *)&local_98,5,&local_bc);
            if ((((char)uVar5 == '\0') ||
                (uVar5 = recovered_26d70((int *)&local_98,5,&local_b8), (char)uVar5 == '\0')) ||
               (uVar5 = recovered_26d70((int *)&local_98,4,&local_b4), (char)uVar5 == '\0')) {
LAB_000265c4:
              iVar10 = 1;
            }
            else {
              local_78 = local_bc + 0x101;
              local_14 = local_b8;
              local_110[0] = 0;
              local_70 = 5;
              recovered_2718e((int *)local_a4,0x13,local_110);
              uVar3 = local_a4[0];
              uVar6 = local_b4;
              local_14 = local_14 + 1;
              for (uVar4 = 0xfffffffc; uVar6 != uVar4; uVar4 = uVar4 + 1) {
                local_110[0] = 0;
                uVar5 = recovered_26d70((int *)&local_98,3,local_110);
                if ((char)uVar5 == '\0') {
                  local_a4[1] = 0;
                  recovered_23194();
                  goto LAB_000265c4;
                }
                *(uint *)(uVar3 + *(int *)(uVar4 * 4 + 0x56cdc) * 4) = local_110[0];
              }
              puVar11 = local_110;
              for (iVar10 = 0x14; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar11 = 0;
                puVar11 = puVar11 + 1;
              }
              local_c0 = 0;
              local_70 = 6;
              uVar5 = recovered_27072((int *)local_a4,(int *)local_110,0);
              if ((char)uVar5 == '\0') {
                cVar8 = '\0';
              }
              else {
                local_20 = (undefined4 *)0x0;
                local_1c = 0;
                local_18 = 0;
                local_14 = local_14 + local_78;
                local_70 = 7;
                recovered_2722e((int *)&local_20,local_14);
                do {
                  uVar4 = local_1c;
                  iVar10 = 1;
                  if (local_14 <= local_1c) {
                    local_70 = 0xc;
                    recovered_2739c((int *)local_34,local_20,local_20 + local_78);
                    local_70 = 0xd;
                    recovered_2739c(&local_40,local_20 + local_78,local_20 + local_1c);
                    local_70 = 0xe;
                    uVar5 = recovered_27072((int *)local_34,(int *)local_20c,0);
                    iVar10 = 0;
                    if ((char)uVar5 != '\0') {
                      bVar13 = false;
                      for (; local_3c * 4 != iVar10; iVar10 = iVar10 + 4) {
                        bVar13 = (bool)(bVar13 | *(int *)(local_40 + iVar10) != 0);
                      }
                      if (bVar13) {
                        local_70 = 0xf;
                        iVar10 = recovered_27072(&local_40,(int *)local_1b8,1);
                      }
                      else {
                        puVar11 = local_164;
                        for (iVar10 = 0x14; iVar10 != 0; iVar10 = iVar10 + -1) {
                          *puVar11 = 0;
                          puVar11 = puVar11 + 1;
                        }
                        local_114 = 0;
                        recovered_27298(local_1b8,local_164);
                        local_120 = 0;
                        recovered_23194();
                        local_168 = 1;
                        iVar10 = 1;
                      }
                    }
                    cVar8 = (char)iVar10;
                    local_3c = 0;
                    recovered_23194();
                    local_34[1] = 0;
                    recovered_23194();
                    goto LAB_00026740;
                  }
                  local_164[0] = 0;
                  uVar6 = recovered_26fb2((uint)&local_98,(int)local_110,local_164);
                  if ((char)uVar6 == '\0') break;
                  if (local_164[0] < 0x10) {
                    local_70 = 8;
                    recovered_2de68((int *)&local_20,local_164);
                    iVar10 = 5;
                  }
                  else if (local_164[0] == 0x12) {
                    local_34[0] = 0;
                    uVar5 = recovered_26d70((int *)&local_98,7,local_34);
                    if ((char)uVar5 != '\0') {
                      local_24 = local_34[0] + 0xb;
                      uVar6 = 0;
                      while ((uVar6 < local_24 && (uVar4 < local_14))) {
                        local_40 = 0;
                        local_70 = 0xb;
                        local_28 = uVar6;
                        recovered_2dcf4((int *)&local_20,&local_40);
                        uVar6 = local_28 + 1;
                        uVar4 = local_1c;
                      }
                      goto LAB_000265a2;
                    }
                  }
                  else {
                    if (local_164[0] != 0x11) {
                      if ((local_164[0] == 0x10) && (uVar4 != 0)) {
                        local_34[0] = 0;
                        uVar5 = recovered_26d70((int *)&local_98,2,local_34);
                        if ((char)uVar5 != '\0') {
                          local_24 = local_34[0] + 3;
                          local_40 = local_20[uVar4 - 1];
                          uVar6 = 0;
                          while ((uVar6 < local_24 && (uVar4 < local_14))) {
                            local_70 = 9;
                            local_28 = uVar6;
                            recovered_2de68((int *)&local_20,&local_40);
                            uVar6 = local_28 + 1;
                            uVar4 = local_1c;
                          }
LAB_000265a2:
                          iVar10 = 5;
                        }
                        goto LAB_000265a5;
                      }
                      break;
                    }
                    local_34[0] = 0;
                    uVar5 = recovered_26d70((int *)&local_98,3,local_34);
                    if ((char)uVar5 != '\0') {
                      local_24 = local_34[0] + 3;
                      uVar6 = 0;
                      while ((uVar6 < local_24 && (uVar4 < local_14))) {
                        local_40 = 0;
                        local_70 = 10;
                        local_28 = uVar6;
                        recovered_2dcf4((int *)&local_20,&local_40);
                        uVar6 = local_28 + 1;
                        uVar4 = local_1c;
                      }
                      goto LAB_000265a2;
                    }
                  }
LAB_000265a5:
                } while (iVar10 == 5);
                cVar8 = '\0';
LAB_00026740:
                local_1c = 0;
                recovered_23194();
              }
              local_cc = 0;
              recovered_23194();
              local_a4[1] = 0;
              recovered_23194();
              iVar10 = 1;
              if (cVar8 != '\0') {
                local_70 = 0x10;
                uVar4 = recovered_26e12((uint)&local_98,(int)local_20c,(int)local_1b8,local_80);
                iVar10 = (uVar4 & 0xff) * 2 + 1;
              }
            }
            local_174 = 0;
            recovered_23194();
            local_1c8 = 0;
            recovered_23194();
LAB_0002660b:
            if (iVar10 != 3) goto LAB_00026982;
          }
          else {
            if (local_ac != 1) {
              if (local_ac == 0) {
                bVar7 = (byte)local_84 & 7;
                local_8c = local_8c >> bVar7 | local_88 << 0x20 - bVar7;
                local_110[0] = 0;
                local_164[0] = 0;
                local_84 = local_84 & 0xfffffff8;
                local_20c[0] = 0;
                local_1b8[0] = 0;
                local_88 = local_88 >> bVar7;
                uVar5 = recovered_26d70((int *)&local_98,8,local_110);
                if (((((char)uVar5 != '\0') &&
                     (uVar5 = recovered_26d70((int *)&local_98,8,local_164), (char)uVar5 != '\0'))
                    && (uVar5 = recovered_26d70((int *)&local_98,8,local_20c), (char)uVar5 != '\0'))
                   && ((uVar5 = recovered_26d70((int *)&local_98,8,local_1b8), (char)uVar5 != '\0'
                       && (uVar4 = local_164[0] << 8 | local_110[0],
                          ((local_1b8[0] << 8 | local_20c[0]) ^ uVar4) == 0xffff)))) {
                  while (bVar13 = uVar4 != 0, uVar4 = uVar4 - 1, bVar13) {
                    local_a4[0] = 0;
                    uVar5 = recovered_26d70((int *)&local_98,8,local_a4);
                    if ((char)uVar5 == '\0') {
                      iVar10 = 1;
                      goto LAB_0002660b;
                    }
                    local_20 = (undefined4 *)CONCAT31(PF_PART3(local_20, 1),(undefined1)local_a4[0]);
                    local_70 = 0xffffffff;
                    recovered_2ccb8(local_80,(undefined1 *)&local_20);
                  }
                  iVar10 = 3;
                }
                goto LAB_0002660b;
              }
              goto LAB_00026982;
            }
            if ((DAT_0005de28 == '\0') &&
               (uVar4 = recovered_23367((uint *)&DAT_0005de28), uVar4 != 0)) {
              local_164[0] = 8;
              local_70 = 1;
              recovered_2718e((int *)local_110,0x120,local_164);
              for (iVar10 = 0; iVar10 != 0x70; iVar10 = iVar10 + 1) {
                *(undefined4 *)(local_110[0] + 0x240 + iVar10 * 4) = 9;
              }
              for (iVar10 = 0; iVar10 != 0x18; iVar10 = iVar10 + 1) {
                *(undefined4 *)(local_110[0] + 0x400 + iVar10 * 4) = 7;
              }
              for (iVar10 = 0; iVar10 != 8; iVar10 = iVar10 + 1) {
                *(undefined4 *)(local_110[0] + 0x460 + iVar10 * 4) = 8;
              }
              puVar12 = &DAT_0005ddd4;
              for (iVar10 = 0x14; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar12 = 0;
                puVar12 = puVar12 + 1;
              }
              DAT_0005de24 = 0;
              local_70 = 2;
              recovered_27072((int *)local_110,&DAT_0005ddd4,0);
              local_110[1] = 0;
              recovered_23194();
              recovered_23360();
              recovered_23376((byte *)&DAT_0005de28);
            }
            if ((DAT_0005de84 == '\0') &&
               (uVar4 = recovered_23367((uint *)&DAT_0005de84), uVar4 != 0)) {
              local_164[0] = 5;
              local_70 = 3;
              recovered_2718e((int *)local_110,0x20,local_164);
              puVar12 = &DAT_0005de30;
              for (iVar10 = 0x14; iVar10 != 0; iVar10 = iVar10 + -1) {
                *puVar12 = 0;
                puVar12 = puVar12 + 1;
              }
              DAT_0005de80 = 0;
              local_70 = 4;
              recovered_27072((int *)local_110,&DAT_0005de30,0);
              local_110[1] = 0;
              recovered_23194();
              recovered_23360();
              recovered_23376((byte *)&DAT_0005de84);
            }
            local_70 = 0xffffffff;
            uVar5 = recovered_26e12((uint)&local_98,0x5ddd4,0x5de30,local_80);
            if ((char)uVar5 == '\0') goto LAB_00026982;
          }
          piVar2 = local_a8;
        } while (local_7c == 0);
        bVar13 = false;
        if ((local_90 == local_94) && (local_84 < 8)) {
          uVar4 = recovered_25d03((uint *)(local_a8[1] + *local_a8 + -4));
          uVar6 = recovered_26f41(piVar2[3],piVar2[4]);
          bVar13 = uVar6 == uVar4;
        }
      }
      goto LAB_00026984;
    }
  }
LAB_00026982:
  bVar13 = false;
LAB_00026984:
  recovered_234e0(&local_74);
  return bVar13;
}
