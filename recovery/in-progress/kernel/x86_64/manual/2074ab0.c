/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf3a8 (*(uint64_t volatile *)(0x215a7b8U))
#define local_1a8 (*(char (*)[256])(frame + 280))
#define local_2a8 (*(undefined1 (*)[256])(frame + 24))
#define local_34 (*(uint *)(frame + 652))
#define local_38 (*(int *)(frame + 648))
#define local_3c (*(uint *)(frame + 644))
#define local_40 (*(int *)(frame + 640))
#define local_44 (*(uint *)(frame + 636))
#define local_48 (*(uint *)(frame + 632))
#define local_50 (*(long *)(frame + 624))
#define local_58 (*(long *)(frame + 616))
#define local_60 (*(ulong *)(frame + 608))
#define local_68 (*(void * *)(frame + 600))
#define local_6c (*(uint *)(frame + 596))
#define local_78 (*(ulong *)(frame + 584))
#define local_80 (*(ulong *)(frame + 576))
#define local_88 (*(ulong *)(frame + 568))
#define local_90 (*(long *)(frame + 560))
#define local_98 (*(long *)(frame + 552))
#define local_a0 (*(ulong *)(frame + 544))
#define local_a8 (*(ulong *)(frame + 536))
#define str_020a3052 (*(char (*)[1])(0x20ec673U))
uint recovered_2074ab0(long param_1,long param_2,uint param_3,int param_4,int param_5,uint param_6,
                      long param_7,ulong param_8,char *param_9,uint param_10)

{
  unsigned char frame[736] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined8 uVar2;
  uchar uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 in_RAX;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  short sVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;

  if (param_10 < 0x21 && (param_7 != 0 && param_1 != 0)) {
    uVar5 = (uint)CONCAT71((int7)((ulong)in_RAX >> 8),1);
    if (0x1f < param_8) {
      local_60 = (ulong)(param_10 + 1);
      local_78 = (ulong)param_6;
      local_90 = local_78 - 1;
      local_98 = param_7 + 0x42;
      local_a8 = 0x20;
      uVar7 = 0;
      local_48 = param_3;
      local_40 = param_4;
      local_38 = param_5;
      do {
        if (*(char *)(param_7 + uVar7) == -0x7b) {
          lVar10 = param_7 + uVar7;
          bVar1 = *(byte *)(lVar10 + 1);
          if (bVar1 < 2) goto LAB_0204e9ad;
          local_a8 = uVar7 + (ulong)bVar1 * 0x20 + 0x20;
          if (param_8 < local_a8) goto LAB_0204e9ad;
          if (*(char *)(lVar10 + 0x20) == -0x40) {
            local_44 = (uint)*(ushort *)(lVar10 + 4);
            local_a0 = (ulong)*(uint *)(lVar10 + 0x34);
            local_80 = *(ulong *)(lVar10 + 0x38);
            local_2a8[0] = 0;
            if ((bVar1 - 1 != 0) && (*(byte *)(lVar10 + 0x23) != 0)) {
              local_6c = *(byte *)(lVar10 + 0x21) & 2;
              local_3c = local_6c >> 1;
              uVar13 = (ulong)*(byte *)(lVar10 + 0x23);
              lVar6 = uVar7 + local_98;
              uVar7 = 0;
              uVar8 = 0;
              uVar11 = 0;
              do {
                if (uVar11 < uVar13 && *(char *)(lVar10 + 0x40 + uVar8 * 0x20) == -0x3f) {
                  uVar12 = 0;
                  uVar14 = uVar7;
                  do {
                    uVar7 = uVar14 + 1;
                    if (0xf0 < uVar7) goto LAB_0204ea10;
                    sVar9 = *(short *)(lVar6 + uVar12);
                    if (0x5e < (ushort)(sVar9 - 0x20U)) {
                      sVar9 = 0x3f;
                    }
                    uVar12 = uVar12 + 2;
                    local_2a8[uVar14] = (char)sVar9;
                    uVar11 = uVar11 + 1;
                  } while ((uVar12 < 0x1e) && (uVar14 = uVar7, uVar11 < uVar13));
                }
                uVar8 = uVar8 + 1;
              } while ((uVar8 < bVar1 - 1) && (lVar6 = lVar6 + 0x20, uVar11 < uVar13));
              if ((uVar11 == uVar13) && (local_2a8[uVar7] = 0, uVar7 != 0)) {
                local_58 = param_1;
                local_50 = param_2;
                local_34 = param_6;
                if ((param_9 == (char *)0x0) || (*param_9 == '\0')) {
                  pf_varargs_20039e0__8_(local_1a8,0xf1,&DAT_020a25e3,(ulonglong)local_2a8);
                }
                else {
                  pf_varargs_20039e0__8__8_
                            (local_1a8,0xf1,str_020a3052,(ulonglong)param_9,(ulonglong)local_2a8);
                }
                uVar5 = (uint)local_a0;
                if ((local_44 & 0x10) == 0) {
                  if (local_80 >> 0x20 != 0) goto LAB_0204e9ad;
                  if (local_80 == 0) {
                    uVar4 = 0;
                  }
                  else {
                    uVar7 = local_90 + local_80;
                    if (uVar7 >> 0x20 == 0) {
                      uVar4 = (undefined4)((uVar7 & 0xffffffff) / (local_78 & 0xffffffff));
                    }
                    else {
                      uVar4 = (undefined4)(uVar7 / local_78);
                    }
                  }
                  uVar3 = recovered_2074ee0((long)local_1a8,0,(int)local_80,0,uVar5,uVar4);
                  if (uVar3 == '\0') goto LAB_0204e9ad;
                  lVar10 = DAT_020cf3a0;
                  uVar2 = DAT_020cf3a8;
                  lVar6 = DAT_020cf3a8;
                  *(uint *)(lVar10 + -0x10 + lVar6 * 0x118) = local_3c;
                  param_2 = local_50;
                  param_1 = local_58;
                  param_6 = local_34;
                }
                else {
                  local_68 = (void *)0x0;
                  local_88 = 0;
                  uVar3 = recovered_2074ee0((long)local_1a8,0,0,2,uVar5,0);
                  if (uVar3 == '\0') goto LAB_0204e9ad;
                  uVar2 = DAT_020cf3a8;
                  lVar6 = DAT_020cf3a8;
                  lVar10 = DAT_020cf3a0;
                  *(uint *)(lVar10 + -0x10 + lVar6 * 0x118) = local_3c;
                  if (local_80 != 0 && 1 < uVar5) {
                    uVar5 = recovered_2074890(local_58,local_50,local_48,local_40,local_38,local_34,
                                              uVar5,(char)local_6c != '\0',local_80,
                                              (long *)&local_68,(long *)&local_88);
                    if ((char)uVar5 == '\0') goto LAB_0204e9ad;
                    uVar5 = recovered_2074ab0(local_58,local_50,local_48,local_40,local_38,local_34,
                                              (long)local_68,local_88,local_1a8,(uint)local_60);
                    recovered_2000bb0(local_68);
                    if ((char)uVar5 == '\0') goto LAB_0204e9ad;
                  }
                  param_2 = local_50;
                  param_1 = local_58;
                  param_6 = local_34;
                }
              }
            }
          }
LAB_0204ea10:
        }
        else if (*(char *)(param_7 + uVar7) == '\0') break;
        uVar7 = local_a8;
        local_a8 = uVar7 + 0x20;
      } while (local_a8 <= param_8);
      uVar5 = (uint)CONCAT71((int7)(uVar7 >> 8),1);
    }
  }
  else {
LAB_0204e9ad:
    uVar5 = 0;
  }
  return uVar5;
}
