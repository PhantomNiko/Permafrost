/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208bc30 (*(uint8_t *)(0x20c16a0U))
#define _DAT_0208c4d0 (*(float *)(0x20c2230U))
#define local_14 (*(uint *)(frame + 60))
#define local_18 (*(int *)(frame + 56))
#define local_1c (*(int *)(frame + 52))
#define local_20 (*(uint *)(frame + 48))
#define local_24 (*(ushort *)(frame + 44))
#define local_28 (*(int *)(frame + 40))
#define local_2c (*(uint *)(frame + 36))
#define local_34 (*(float (*)[2])(frame + 28))
bool recovered_20218b0(int incoming_ecx,uint incoming_edx,int param_3,uint param_4,int param_5,
                      uint *param_6)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  ushort in_FPUControlWord = pf_fpu_control();

  if (param_5 != 0 || (uint)-param_5 < (uint)(incoming_edx < param_4)) {
    return false;
  }
  if (3 < incoming_edx - param_4) {
    uVar1 = param_4 + 4;
    iVar5 = param_5 + (uint)(0xfffffffb < param_4);
    uVar2 = *(uint *)(incoming_ecx + param_4);
    *param_6 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    if ((iVar5 == 0 && (uint)(incoming_edx < uVar1) <= (uint)-iVar5) && (3 < incoming_edx - uVar1))
    {
      uVar4 = param_4 + 8;
      iVar5 = param_5 + (uint)(0xfffffff7 < param_4);
      uVar2 = *(uint *)(incoming_ecx + uVar1);
      param_6[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      if ((iVar5 == 0 && (uint)(incoming_edx < uVar4) <= (uint)-iVar5) && (3 < incoming_edx - uVar4)
         ) {
        uVar1 = param_4 + 0xc;
        iVar5 = param_5 + (uint)(0xfffffff3 < param_4);
        uVar2 = *(uint *)(incoming_ecx + uVar4);
        param_6[2] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
        ;
        if ((iVar5 == 0 && (uint)(incoming_edx < uVar1) <= (uint)-iVar5) &&
           (3 < incoming_edx - uVar1)) {
          uVar2 = *(uint *)(incoming_ecx + uVar1);
          uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
          local_20 = param_4 + 0x10;
          local_1c = param_5 + (uint)(0xffffffef < param_4);
          if (uVar2 != 0) {
            if (local_1c != 0 || (uint)-local_1c < (uint)(incoming_edx < local_20)) {
              return false;
            }
            if (-(uint)(incoming_edx < local_20) - local_1c <
                (uint)(incoming_edx - local_20 < uVar2)) {
              return false;
            }
            bVar6 = CARRY4(local_20,uVar2);
            local_20 = local_20 + uVar2;
            local_1c = local_1c + (uint)bVar6;
          }
          if (local_1c != 0 || (uint)-local_1c < (uint)(incoming_edx < local_20)) {
            return false;
          }
          local_18 = incoming_ecx;
          if (3 < incoming_edx - local_20) {
            while( true ) {
              uVar2 = local_20 + 4;
              iVar5 = local_1c + (uint)(0xfffffffb < local_20);
              if (iVar5 != 0 || (uint)-iVar5 < (uint)(incoming_edx < uVar2)) {
                return false;
              }
              if (incoming_edx - uVar2 < 4) {
                return false;
              }
              uVar1 = *(uint *)(local_18 + local_20);
              uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18;
              uVar2 = *(uint *)(local_18 + uVar2);
              local_14 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                         uVar2 << 0x18;
              uVar2 = local_20 + 8;
              local_1c = local_1c + (uint)(0xfffffff7 < local_20);
              if (uVar1 == 0) break;
              if (local_1c != 0 || (uint)-local_1c < (uint)(incoming_edx < uVar2)) {
                return false;
              }
              if (-(uint)(incoming_edx < uVar2) - local_1c < (uint)(incoming_edx - uVar2 < local_14)
                 ) {
                return false;
              }
              if ((uVar1 == 6) && (3 < local_14)) {
                uVar1 = *(uint *)(local_18 + uVar2);
                uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                        uVar1 << 0x18;
                if (0xfe < uVar1) {
                  uVar1 = 0xff;
                }
                param_6[4] = uVar1;
              }
              else if ((uVar1 == 8) && (3 < local_14)) {
                uVar1 = *(uint *)(local_18 + uVar2);
                *(bool *)(param_6 + 3) =
                     ((uVar1 >> 0x18 != 0 || (uVar1 & 0xff0000) != 0) || (uVar1 & 0xff00) != 0) ||
                     (uVar1 & 0xff) != 0;
              }
              else if ((uVar1 == 0xf) && (7 < local_14)) {
                uVar1 = *(uint *)(local_18 + uVar2);
                param_6[5] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                             uVar1 << 0x18;
                uVar1 = *(uint *)(local_18 + 4 + uVar2);
                param_6[6] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                             uVar1 << 0x18;
              }
              else if ((uVar1 == 0x21) && (3 < local_14)) {
                uVar1 = *(uint *)(local_18 + uVar2);
                local_2c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                           uVar1 << 0x18;
                local_34[0] = 0.0;
                recovered_2001b70(local_34,&local_2c,4);
                if (local_34[0] <= 0.0) {
                  param_6[4] = 0;
                }
                else if (1.0 <= local_34[0]) {
                  param_6[4] = 0xff;
                }
                else {
                  local_24 = in_FPUControlWord | 0xc00;
                  param_6[4] = (int)ROUND(local_34[0] * _DAT_0208c4d0 +
                                          (float)*(double *)
                                                  (&DAT_0208bc30 +
                                                  (uint)(0.0 <= local_34[0] * _DAT_0208c4d0) * 8));
                }
              }
              local_20 = uVar2 + local_14;
              local_1c = local_1c + (uint)CARRY4(uVar2,local_14);
              if (local_1c != 0 || (uint)-local_1c < (uint)(incoming_edx < local_20)) {
                return false;
              }
              if (incoming_edx - local_20 < 4) {
                return false;
              }
            }
            if (local_14 == 0) {
              local_20 = *(uint *)(param_3 + 0x10);
              if (local_20 == 4) {
                if (local_1c != 0 || (uint)-local_1c < (uint)(incoming_edx < uVar2)) {
                  return false;
                }
                if (incoming_edx - uVar2 < 4) {
                  return false;
                }
                uVar4 = 0;
                uVar1 = *(uint *)(local_18 + uVar2);
              }
              else {
                if (local_1c != 0 || (uint)-local_1c < (uint)(incoming_edx < uVar2)) {
                  return false;
                }
                if (incoming_edx - uVar2 < 8) {
                  return false;
                }
                uVar4 = *(uint *)(local_18 + uVar2);
                uVar1 = *(uint *)(local_18 + 4 + uVar2);
                uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                        uVar4 << 0x18;
              }
              local_14 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                         uVar1 << 0x18;
              param_6[7] = local_14;
              param_6[8] = uVar4;
              local_2c = uVar2 + local_20;
              local_28 = local_1c + (uint)CARRY4(uVar2,local_20);
              uVar3 = recovered_2021710(local_18,incoming_edx,&local_2c,local_20,(uint *)local_34);
              if ((char)uVar3 != '\0') {
                return (local_14 != 0 || uVar4 != 0) && (param_6[1] != 0 && *param_6 != 0);
              }
            }
          }
        }
      }
    }
  }
  return false;
}
