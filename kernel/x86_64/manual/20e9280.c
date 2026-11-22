/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020a3be3 (*(uint8_t *)(0x20f43a4U))
#define DAT_020a3be5 (*(uint8_t *)(0x20f43a6U))
#define DAT_020a3c3f (*(uint8_t *)(0x20f4400U))
#define DAT_020a3c64 (*(uint8_t *)(0x20f4425U))
#define DAT_020a3cbb (*(uint8_t *)(0x20f447cU))
#define DAT_020a409e (*(uint8_t *)(0x20f485fU))
#define DAT_020a40a0 (*(uint8_t *)(0x20f4861U))
#define auStackY_4a8 (*(ulong (*)[128])(frame + 24))
#define in_stack_ffffffffffffff6c (*(undefined4 *)(frame + 1068))
#define local_38 (*(long *)(frame + 1160))
#define local_40 (*(long *)(frame + 1152))
#define local_48 (*(long *)(frame + 1144))
#define local_58 (*(ulong *)(frame + 1128))
#define str_020a5706 (*(char (*)[1])(0x20f5ea6U))
#define str_020ab618 (*(char (*)[1])(0x20fcc8fU))
#define str_020aba1f (*(char (*)[1])(0x20fe56cU))
#define str_020aba2e (*(char (*)[1])(0x20fe57bU))
#define str_020aba3d (*(char (*)[1])(0x20fe58aU))
uchar recovered_20e9280(ulong *param_1,ulong *param_2,byte *param_3,ulong *param_4,long param_5,
                       undefined1 *param_6)

{
  unsigned char frame[1248] __attribute__((aligned(16))) = {0};

  ulong *puVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  char *pcVar7;
  ulong *******in_R9;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint128 auVar11;
  ulong ****ppppuVar12;
  undefined4 uVar13;
  ulong ***pppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;

  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  PF_PART4(auVar11, 0) = -(uint)(param_1 == (ulong *)0x0);
  PF_PART4(auVar11, 4) = -(uint)(param_2 == (ulong *)0x0);
  PF_PART4(auVar11, 8) = -(uint)(param_3 == (byte *)0x0);
  PF_PART4(auVar11, 12) = -(uint)(param_4 == (ulong *)0x0);
  iVar4 = movmskps((int)param_4,auVar11);
  if (iVar4 != 0 || param_5 == 0) {
    return '\0';
  }
  in_R9 = (ulong *******)param_6;
  if (*param_4 != 0) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      recovered_205ec00((undefined8 *)(param_4[2] + lVar9));
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x40;
    } while (uVar10 < *param_4);
  }
  recovered_2000bb0((void *)param_4[2]);
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  if (*param_2 < 3) {
    return '\x01';
  }
  pbVar5 = *(byte **)param_2[2];
  if (pbVar5 == (byte *)0x0) {
    return '\x01';
  }
  bVar6 = *pbVar5;
  if (bVar6 == 0) {
    return '\x01';
  }
  if (((0x19 < (byte)((bVar6 & 0xdf) + 0xbf)) && (bVar6 != 0x5f)) && (bVar6 != 0x24)) {
    return '\x01';
  }
  bVar6 = pbVar5[1];
  if (bVar6 != 0) {
    pbVar5 = pbVar5 + 2;
    do {
      if (((bVar6 != 0x2e) && (bVar6 != 0x24)) &&
         ((bVar6 != 0x5f && ((9 < (byte)(bVar6 - 0x30U) && (0x19 < (byte)((bVar6 & 0xdf) + 0xbf))))))
         ) {
        return '\x01';
      }
      bVar6 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar6 != 0);
  }
  iVar4 = recovered_2002eb0((char *)((undefined8 *)param_2[2])[1],&DAT_020a3c3f);
  if (iVar4 != 0) {
    return '\x01';
  }
  iVar4 = recovered_2002eb0(*(char **)((param_2[2] - 8) + *param_2 * 8),&DAT_020a3c64);
  if (iVar4 != 0) {
    return '\x01';
  }
  if (1 < *param_2) {
    uVar10 = 1;
    lVar9 = 0;
    local_58 = 0;
    local_48 = 0;
    do {
      pcVar7 = *(char **)(param_2[2] + uVar10 * 8);
      iVar4 = recovered_2002eb0(pcVar7,&DAT_020a3c3f);
      if (iVar4 == 0) {
        lVar9 = lVar9 + 1;
      }
      else {
        iVar4 = recovered_2002eb0(pcVar7,&DAT_020a3c64);
        if (iVar4 == 0) {
          if (lVar9 == 0) {
            return '\x01';
          }
          lVar9 = lVar9 + -1;
          if ((lVar9 == 0 && local_48 == 0) && local_58 == 0) {
            if (uVar10 + 1 != *param_2) {
              return '\x01';
            }
            local_48 = 0;
            local_58 = 0;
            lVar9 = 0;
          }
        }
        else {
          iVar4 = recovered_2002eb0(pcVar7,&DAT_020a3be3);
          if (iVar4 == 0) {
            local_48 = local_48 + 1;
          }
          else {
            iVar4 = recovered_2002eb0(pcVar7,&DAT_020a3be5);
            if (iVar4 == 0) {
              uVar8 = local_48;
              local_48 = local_48 + -1;
LAB_0209eced:
              if (uVar8 == 0) {
                return '\x01';
              }
            }
            else {
              iVar4 = recovered_2002eb0(pcVar7,&DAT_020a409e);
              if (iVar4 == 0) {
                local_58 = local_58 + 1;
              }
              else {
                iVar4 = recovered_2002eb0(pcVar7,&DAT_020a40a0);
                if (iVar4 == 0) {
                  uVar8 = local_58;
                  local_58 = local_58 + -1;
                  goto LAB_0209eced;
                }
              }
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *param_2);
    if ((lVar9 != 0 || local_48 != 0) || local_58 != 0) {
      return '\x01';
    }
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 1;
  }
  pf_varargs_20039e0__8_((char *)param_3,0x40,&DAT_020a25e3,*(ulonglong *)param_2[2]);
  if (3 < *param_2) {
    local_48 = 0;
    local_38 = 0;
    local_40 = 0;
    local_58 = 2;
    uVar10 = 2;
    do {
      pbVar5 = *(byte **)(param_2[2] + uVar10 * 8);
      iVar4 = recovered_2002eb0((char *)pbVar5,&DAT_020a3c3f);
      if (iVar4 == 0) {
        local_40 = local_40 + 1;
      }
      else {
        iVar4 = recovered_2002eb0((char *)pbVar5,&DAT_020a3c64);
        if (iVar4 == 0) {
          if (local_40 == 0) {
            recovered_209ce10(param_4);
            pcVar7 = str_020aba1f;
            goto LAB_0209f10f;
          }
          local_40 = local_40 + -1;
        }
        else {
          iVar4 = recovered_2002eb0((char *)pbVar5,&DAT_020a3be3);
          if (iVar4 == 0) {
            local_38 = local_38 + 1;
          }
          else {
            iVar4 = recovered_2002eb0((char *)pbVar5,&DAT_020a3be5);
            if (iVar4 == 0) {
              if (local_38 == 0) {
                recovered_209ce10(param_4);
                pcVar7 = str_020aba2e;
                goto LAB_0209f10f;
              }
              local_38 = local_38 + -1;
            }
            else {
              iVar4 = recovered_2002eb0((char *)pbVar5,&DAT_020a409e);
              if (iVar4 == 0) {
                local_48 = local_48 + 1;
              }
              else {
                iVar4 = recovered_2002eb0((char *)pbVar5,&DAT_020a40a0);
                if (iVar4 == 0) {
                  if (local_48 == 0) {
                    recovered_209ce10(param_4);
                    pcVar7 = str_020aba3d;
                    goto LAB_0209f10f;
                  }
                  local_48 = local_48 + -1;
                }
                else {
                  iVar4 = recovered_2002eb0((char *)pbVar5,&DAT_020a3cbb);
                  if ((local_48 == 0 && (local_38 == 0 && local_40 == 0)) && iVar4 == 0) {
                    puVar1 = auStackY_4a8 + 0x81;
                    uVar2 = recovered_20a01c0((long)param_1,param_2,local_58,uVar10,puVar1);
                    if ((uVar2 == '\0') ||
                       (uVar3 = recovered_209cec0((long *)param_4,puVar1), (char)uVar3 == '\0'))
                    goto LAB_0209f0ab;
                    recovered_205ec00(puVar1);
                    local_40 = 0;
                    local_38 = 0;
                    local_48 = 0;
                    local_58 = uVar10 + 1;
                  }
                }
              }
            }
          }
        }
      }
      uVar8 = uVar10 + 2;
      uVar10 = uVar10 + 1;
    } while (uVar8 < *param_2);
    if (((local_40 != 0 || local_38 != 0) || local_48 != 0) ||
       (uVar10 = *param_2 - 1, uVar10 <= local_58)) {
      recovered_209ce10(param_4);
      pcVar7 = str_020ab618;
      pbVar5 = param_3;
LAB_0209f10f:
      pf_varargs_205eb00___(param_1,(char *)pbVar5,pcVar7);
      return '\0';
    }
    uVar2 = recovered_20a01c0((long)param_1,param_2,local_58,uVar10,auStackY_4a8 + 0x81);
    if ((uVar2 == '\0') ||
       (uVar2 = recovered_20a8120((long *)param_4,(int *)(auStackY_4a8 + 0x81),'\x01'),
       uVar2 == '\0')) {
LAB_0209f0ab:
      recovered_205ec00(auStackY_4a8 + 0x81);
      goto LAB_0209f0b7;
    }
    recovered_205ec00(auStackY_4a8 + 0x81);
  }
  ppppuVar12 = (ulong ****)0x0;
  uVar13 = 0;
  pppuVar14 = (ulong ***)0x0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar2 = recovered_209f0e0((long)param_3,auStackY_4a8 + 0x81);
  if ((uVar2 == '\0') &&
     (uVar2 = recovered_20a7b90((undefined4 *)(auStackY_4a8 + 0x81),(long)param_3), uVar2 == '\0'))
  {
    recovered_205ec00(auStackY_4a8 + 0x81);
    recovered_209ce10(param_4);
    pf_varargs_205eb00__8_(param_1,(char *)param_3,str_020a5706,(ulonglong)param_3);
    return '\0';
  }
  uVar3 = recovered_20a81b0(param_1,(int *)(auStackY_4a8 + 0x81),(ulong *)param_4[2],
                            (ulong *)*param_4,(ulong *)param_5,in_R9,param_5,ppppuVar12,
                            (ulong ***)CONCAT44(in_stack_ffffffffffffff6c,uVar13),pppuVar14,uVar15,
                            uVar16,uVar17,uVar18);
  recovered_205ec00(auStackY_4a8 + 0x81);
  if ((char)uVar3 != '\0') {
    return '\x01';
  }
LAB_0209f0b7:
  recovered_209ce10(param_4);
  return '\0';
}
