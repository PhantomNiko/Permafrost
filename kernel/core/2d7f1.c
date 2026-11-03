#include "functions.h"
#define local_644 (*(undefined1 (*)[450])(frame + 16))
#define local_482 (*(undefined1 (*)[4])(frame + 466))
#define local_47e (*(uint (*)[14])(frame + 470))
#define local_444 (*(int *)(frame + 528))
#define local_43e (*(ushort *)(frame + 534))
#define local_424 (*(int (*)[4])(frame + 560))
#define local_414 (*(undefined1 (*)[464])(frame + 576))
#define local_244 (*(undefined1 (*)[12])(frame + 1040))
#define local_238 (*(int *)(frame + 1052))
#define local_22c (*(undefined8 *)(frame + 1064))
#define local_224 (*(undefined8 *)(frame + 1072))
#define local_21c (*(undefined8 *)(frame + 1080))
#define local_214 (*(undefined8 *)(frame + 1088))
#define local_20c (*(undefined1 (*)[16])(frame + 1096))
#define local_1fc (*(undefined8 *)(frame + 1112))
#define local_1f4 (*(uint *)(frame + 1120))
#define local_1f0 (*(uint *)(frame + 1124))
#define local_44 (*(uint *)(frame + 1552))
#define local_40 (*(uint *)(frame + 1556))
#define local_3c (*(uint *)(frame + 1560))
#define local_38 (*(int * *)(frame + 1564))
#define local_34 (*(uint *)(frame + 1568))
#define local_30 (*(uint *)(frame + 1572))
#define local_2c (*(uint *)(frame + 1576))
#define local_28 (*(undefined8 *)(frame + 1580))
#define local_20 (*(int * *)(frame + 1588))
#define local_1c (*(undefined8 *)(frame + 1592))
#define local_14 (*(uint *)(frame + 1600))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d7f1
 */

undefined4 recovered_2d7f1(uint param_1,uint param_2,undefined4 *param_3,byte param_4)

{
  unsigned char frame[1652];

  uint uVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  void *pvVar8;
  undefined3 extraout_var = 0;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  longlong lVar17;

  if (param_3 != (undefined4 *)0x0) {
    recovered_213af((int)param_3,0,0x38);
  }
  if (param_2 == 0) {
LAB_0002dcfc:
    uVar5 = 0;
  }
  else {
    local_2c = param_1 & 0xff;
    bVar4 = recovered_2b35c(local_2c,0,(int)local_644,0x200);
    if (!bVar4) {
      return 0;
    }
    if ((param_3 == (undefined4 *)0x0) ||
       ((bVar4 = recovered_2e0ec((int)local_644), !bVar4 &&
        (uVar5 = recovered_2e133((int)local_644), (char)uVar5 == '\0')))) {
      if (param_2 == 1) {
        return 1;
      }
      bVar4 = recovered_2b35c(local_2c,1,(int)local_244,0x200);
      lVar2 = CONCAT44(local_244,local_3c);
      if ((param_3 != (undefined4 *)0x0) && (lVar2 = CONCAT44(local_244,local_3c), bVar4)) {
        iVar10 = recovered_213cb((int)local_244,0x49152,8);
        lVar2 = CONCAT44(local_244,local_3c);
        if (iVar10 == 0) {
          local_28 = recovered_2e174(&local_224);
          uVar16 = recovered_2e174(&local_21c);
          local_38 = (int *)((ulonglong)uVar16 >> 0x20);
          local_30 = (uint)uVar16;
          uVar16 = recovered_2e174(&local_214);
          local_20 = (int *)((ulonglong)uVar16 >> 0x20);
          local_14 = (uint)uVar16;
          local_1c = recovered_2e174(&local_1fc);
          uVar11 = local_238 - 0x5c;
          lVar2 = CONCAT44(uVar11,local_3c);
          if ((((uVar11 < 0x1a5) &&
               (local_40 = local_1f4, lVar2 = CONCAT44(uVar11,local_3c), local_1f4 != 0)) &&
              (lVar2 = CONCAT44(uVar11,local_3c), 0x7f < local_1f0)) &&
             (lVar2 = CONCAT44(uVar11,local_3c), (local_1f0 & 7) == 0)) {
            local_44 = local_1f0;
            lVar17 = recovered_2e174(&local_22c);
            lVar2 = CONCAT44(uVar11,local_3c);
            if (lVar17 == 1) {
              lVar2 = CONCAT44(uVar11,local_3c);
              if ((local_38 <= local_20 &&
                  (uint)(local_14 < local_30) <= (uint)((int)local_20 - (int)local_38)) &&
                  PF_PART4(local_28, 4) < ((uint)local_28 < param_2)) {
                lVar2 = CONCAT44(uVar11,local_3c);
                if (((uint)local_1c < 2) <= PF_PART4(local_1c, 4) &&
                    local_20 < (int *)(uint)(local_14 < param_2)) {
                  lVar2 = (ulonglong)local_44 * (ulonglong)local_40;
                  local_34 = (uint)((ulonglong)lVar2 >> 0x20);
                  if (local_40 < 0x1001 &&
                      (local_34 <= param_2 >> 0x17 &&
                      (uint)(param_2 << 9 < (uint)lVar2) <= (param_2 >> 0x17) - local_34)) {
                    uVar11 = (uint)((ulonglong)(lVar2 + 0x1ff) >> 0x20);
                    local_3c = uVar11 >> 9;
                    local_34 = uVar11 * 0x800000 | (uint)(lVar2 + 0x1ff) >> 9;
                    lVar2 = CONCAT44(local_34,local_3c);
                    piVar7 = (int *)(PF_PART4(local_1c, 4) + local_3c +
                                    (uint)CARRY4(local_34,(uint)local_1c));
                    uVar11 = (uint)(param_2 < local_34 + (uint)local_1c);
                    uVar3 = -(int)piVar7;
                    PF_PART3(local_1c, 5) = (undefined3)(uVar3 - uVar11 >> 8);
                    local_1c = CONCAT35(PF_PART3(local_1c, 5),
                                        CONCAT14(piVar7 != (int *)0x0 || uVar3 < uVar11,
                                                 (uint)local_1c));
                    uVar12 = (uint)(local_30 < local_34 + (uint)local_1c);
                    bVar4 = piVar7 <= local_38;
                    uVar1 = (int)local_38 - (int)piVar7;
                    local_38 = (int *)(uVar1 - uVar12);
                    if ((bVar4 && uVar12 <= uVar1) &&
                        ((local_3c < PF_PART4(local_28, 4) ||
                         local_3c - PF_PART4(local_28, 4) < (uint)(local_34 < (uint)local_28)) &&
                        (piVar7 == (int *)0x0 && uVar3 >= uVar11))) {
                      uVar12 = (uint)local_28 - local_34;
                      lVar2 = CONCAT44(uVar12,local_3c);
                      piVar7 = (int *)((PF_PART4(local_28, 4) - local_3c) -
                                      (uint)((uint)local_28 < local_34));
                      bVar4 = local_20 < piVar7;
                      uVar11 = (int)local_20 - (int)piVar7;
                      local_20 = (int *)(uVar11 - (local_14 < uVar12));
                      if (bVar4 || uVar11 < (local_14 < uVar12)) {
                        recovered_213af((int)param_3,0,0x38);
                        *param_3 = 2;
                        param_3[1] = local_30;
                        param_3[2] = local_14;
                        param_3[3] = local_40;
                        param_3[4] = (uint)local_1c;
                        param_3[5] = local_44;
                        param_3[6] = local_34;
                        param_3[7] = uVar12;
                        param_3[8] = 1;
                        param_3[9] = (uint)local_28;
                        recovered_21348((int)(param_3 + 10),(int)local_20c,0x10);
                        if (param_4 == 0) {
                          return CONCAT31((int3)(uVar12 >> 8),1);
                        }
                        iVar10 = param_3[6];
                        local_14 = param_2;
                        pvVar8 = recovered_211fa(iVar10 << 9);
                        local_1c = CONCAT44(PF_PART4(local_1c, 4),pvVar8);
                        if (pvVar8 != (void *)0x0) {
                          bVar4 = recovered_2b35c(local_2c,param_3[4],(int)pvVar8,iVar10 << 9);
                          PF_PART4(local_1c, 4) = CONCAT31(extraout_var,bVar4);
                          if (bVar4) {
                            for (piVar7 = (int *)0x0; iVar10 = (uint)local_1c,
                                piVar7 < (int *)param_3[3]; piVar7 = (int *)((int)piVar7 + 1)) {
                              iVar13 = param_3[5] * (int)piVar7;
                              local_28 = CONCAT44(PF_PART4(local_28, 4),(uint)local_1c + iVar13);
                              local_20 = piVar7;
                              uVar16 = recovered_2e174((undefined8 *)
                                                       ((uint)local_1c + iVar13 + 0x20));
                              piVar7 = local_20;
                              local_30 = (uint)((ulonglong)uVar16 >> 0x20);
                              local_28 = CONCAT44((int)uVar16,(uint)local_28);
                              uVar16 = recovered_2e174((undefined8 *)(iVar10 + iVar13 + 0x28));
                              local_38 = (int *)((ulonglong)uVar16 >> 0x20);
                              uVar11 = (uint)uVar16;
                              iVar10 = recovered_213cb((uint)local_28,0x48464,0x10);
                              if ((iVar10 != 0) &&
                                 (piVar9 = (int *)((local_30 - 1) + (uint)(PF_PART4(local_28, 4) != 0)),
                                 local_38 < (int *)(uint)(uVar11 < local_14) &&
                                 (piVar9 < local_38 ||
                                 (uint)((int)piVar9 - (int)local_38) <
                                 (uint)(PF_PART4(local_28, 4) - 1 < uVar11)))) {
                                recovered_2d756((byte)local_2c,PF_PART4(local_28, 4),
                                                (uVar11 - PF_PART4(local_28, 4)) + 1,0,(int)piVar7 + 1,0,2)
                                ;
                              }
                            }
                          }
                          recovered_21203((uint)local_1c);
                          return PF_PART4(local_1c, 4);
                        }
                        goto LAB_0002dcfc;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar10 = (int)((ulonglong)lVar2 >> 0x20);
      local_3c = (uint)lVar2;
      if (0x41 < param_2) {
        bVar4 = recovered_2b35c(local_2c,0x41,(int)&local_444,0x200);
        uVar5 = CONCAT31((int3)((ulonglong)lVar2 >> 0x28),1);
        if (param_3 == (undefined4 *)0x0) {
          return uVar5;
        }
        if (!bVar4) {
          return uVar5;
        }
        uVar6 = recovered_2e17e(&local_444,param_2,param_3);
        if (((byte)uVar6 & param_4) != 1) {
          return uVar5;
        }
        local_14 = param_2;
        puVar15 = local_414;
        for (iVar10 = 1; iVar10 - 1U < (uint)local_43e; iVar10 = iVar10 + 1) {
          if (*(int *)(puVar15 + -0x10) != 0) {
            uVar11 = *(uint *)(puVar15 + -0xc);
            if ((uVar11 <= local_14 && local_14 - uVar11 != 0) && 0x41 < uVar11) {
              uVar12 = local_14 - uVar11;
              if (*(uint *)(puVar15 + -8) != 0) {
                uVar12 = *(uint *)(puVar15 + -8);
              }
              uVar5 = CONCAT31((int3)(uVar12 + uVar11 >> 8),1);
              if (((uVar12 + uVar11 <= local_14 && uVar12 != 0) &&
                  (piVar7 = recovered_2d756((byte)local_2c,uVar11,uVar12,
                                            *(undefined4 *)(puVar15 + -4),iVar10,0,3),
                  piVar7 != (int *)0x0)) &&
                 (local_20 = piVar7, recovered_2ddeb((int)piVar7 + 0x19,(int)puVar15),
                 *(char *)((int)local_20 + 0x19) == '\0')) {
                recovered_2dd1e((int)local_20);
              }
            }
          }
          puVar15 = puVar15 + 0x20;
        }
        return uVar5;
      }
    }
    else {
      recovered_213af((int)param_3,0,0x38);
      uVar11 = local_2c;
      iVar10 = 1;
      *param_3 = 1;
      param_3[1] = 1;
      param_3[2] = param_2 - 1;
      param_3[3] = 4;
      if (param_4 != 0) {
        puVar14 = local_47e + 1;
        for (; iVar10 != 5; iVar10 = iVar10 + 1) {
          if ((char)puVar14[-2] != -0x12) {
            if (puVar14[-1] != 0 && (*puVar14 != 0 && (char)puVar14[-2] != '\0')) {
              recovered_2d756((byte)uVar11,puVar14[-1],*puVar14,0,iVar10,0,1);
            }
          }
          puVar14 = puVar14 + 4;
        }
      }
    }
    uVar5 = CONCAT31((int3)((uint)iVar10 >> 8),1);
  }
  return uVar5;
}
