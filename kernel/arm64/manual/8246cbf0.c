/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8246cbf0(uint param_1,int param_2,int param_3,int param_4,uint param_5,long param_6,
                       uint param_7,uint param_8,uint param_9,long *param_10,int *param_11)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  void *buffer;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong size;
  uint uVar8;
  ulong uVar9;

  bVar3 = false;
  if ((param_10 != (long *)0x0) && (param_11 != (int *)0x0)) {
    size = (ulong)param_9;
    *param_10 = 0;
    *param_11 = 0;
    if (param_9 == 0) {
      bVar3 = param_8 == 0;
    }
    else {
      bVar3 = false;
      if ((((param_5 != 0) && (param_4 != 0)) && (param_6 != 0)) && (1 < param_7)) {
        if ((ulong)param_9 <= (ulong)(param_7 - 2) * (ulong)param_5) {
          buffer = recovered_82400744(size);
          if (buffer == (void *)0x0) {
            return false;
          }
          iVar7 = 0;
          uVar6 = 0;
          uVar9 = (ulong)param_5;
          do {
            do {
              uVar2 = size - uVar6;
              if (size < uVar6 || uVar2 == 0) {
                *param_10 = (long)buffer;
                *param_11 = iVar7;
                return true;
              }
              if (param_8 < 2 || param_7 <= param_8) goto LAB_40424d08;
              uVar5 = ~uVar9;
              uVar8 = param_8;
              for (uVar4 = uVar9; iVar7 = iVar7 + 1, uVar4 < uVar2; uVar4 = uVar4 + uVar9) {
                uVar1 = *(uint *)(param_6 + (ulong)uVar8 * 4);
                bVar3 = uVar5 < uVar9;
                uVar5 = uVar5 - uVar9;
                if (((bVar3 || param_7 <= uVar1) || uVar1 != uVar8 + 1) || uVar1 < 2) break;
                uVar8 = uVar1;
              }
              if (uVar4 <= uVar2) {
                uVar2 = uVar4;
              }
              uVar4 = recovered_8243843c((ulong)param_1,
                                         (ulong)(param_3 + param_2 + (param_8 - 2) * param_4),
                                         (long)buffer + uVar6,uVar2);
              if ((uVar4 & 1) == 0) goto LAB_40424d08;
              uVar6 = uVar2 + uVar6;
            } while (size <= uVar6);
            param_8 = *(uint *)(param_6 + (ulong)uVar8 * 4);
          } while (1 < param_8 + 1);
LAB_40424d08:
          recovered_82400748(buffer);
        }
        bVar3 = false;
      }
    }
  }
  return bVar3;
}
