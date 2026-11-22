/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_2074890(long param_1,long param_2,uint param_3,int param_4,int param_5,uint param_6,
                      uint param_7,char param_8,long param_9,long *param_10,long *param_11)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint128 auVar1;
  uint128 auVar2;
  uint uVar3;
  ulong uVar4;
  void *buffer;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;

  uVar3 = 0;
  if (((((1 < param_7) && (param_1 != 0)) && (param_10 != (long *)0x0)) &&
      ((param_11 != (long *)0x0 && (uVar3 = 0, param_5 != 0)))) && (param_6 != 0)) {
    if (param_7 < param_3 + 2) {
      *param_10 = 0;
      *param_11 = 0;
      if (param_8 == '\0') {
        uVar4 = 0;
        uVar3 = param_7;
        do {
          if (uVar3 < 2) {
            return 0;
          }
          if (param_3 + 2 <= uVar3) {
            return 0;
          }
          if (param_3 <= uVar4) {
            return 0;
          }
          uVar4 = uVar4 + 1;
          uVar3 = *(uint *)(param_2 + (ulong)uVar3 * 4) & 0xfffffff;
        } while (0xf0000008 < uVar3 + 0xf0000008);
      }
      else {
        if (param_9 == 0) {
          uVar4 = 1;
        }
        else {
          uVar6 = (ulong)param_6;
          uVar4 = (param_9 + uVar6) - 1;
          if (uVar4 >> 0x20 == 0) {
            uVar4 = (uVar4 & 0xffffffff) / uVar6;
          }
          else {
            uVar4 = uVar4 / uVar6;
          }
        }
        if (uVar4 == 0) {
          return 0;
        }
        if ((ulong)param_3 < (param_7 - 2) + uVar4) {
          return 0;
        }
      }
      uVar6 = CONCAT44(0,param_6);
      PF_PART8(auVar1, 8) = 0;
      PF_PART8(auVar1, 0) = uVar6;
      PF_PART8(auVar2, 8) = 0;
      PF_PART8(auVar2, 0) = uVar4;
      if ((SUB168(auVar1 * auVar2,8) == 0) &&
         (buffer = recovered_2000ad0(uVar4 * uVar6), buffer != (void *)0x0)) {
        lVar5 = 0;
        uVar7 = 1;
        do {
          uVar3 = recovered_206b1b0(*(byte *)(param_1 + 4),
                                    (ulong)((param_7 - 2) * param_5 + param_4 +
                                           *(int *)(param_1 + 8)),(long)buffer + lVar5,uVar6);
          if ((char)uVar3 == '\0') {
            recovered_2000bb0(buffer);
            return 0;
          }
          if ((param_8 == '\0') && (uVar7 < uVar4)) {
            param_7 = *(uint *)(param_2 + (ulong)param_7 * 4) & 0xfffffff;
          }
          else {
            param_7 = param_7 + 1;
          }
          lVar5 = lVar5 + uVar6;
          bVar8 = uVar7 != uVar4;
          uVar7 = uVar7 + 1;
        } while (bVar8);
        *param_10 = (long)buffer;
        *param_11 = lVar5;
        uVar3 = (uint)CONCAT71((int7)((ulong)param_11 >> 8),1);
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
