/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_20e4260(byte param_1,int param_2,int param_3,int param_4,uint param_5,long param_6,
                      uint param_7,uint param_8,uint param_9,long *param_10,int *param_11)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 in_RAX;
  void *buffer;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong size;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  bool bVar11;

  if (param_11 != (int *)0x0 && param_10 != (long *)0x0) {
    *param_10 = 0;
    *param_11 = 0;
    if (param_9 == 0) {
      return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),param_8 == 0);
    }
    if (param_5 == 0) {
      return 0;
    }
    if (param_4 == 0) {
      return 0;
    }
    if (param_6 == 0) {
      return 0;
    }
    if (param_7 < 2) {
      return 0;
    }
    size = (ulong)param_9;
    uVar10 = (ulong)param_5;
    if (size <= (param_7 - 2) * uVar10) {
      buffer = recovered_2000ad0(size);
      iVar3 = 0;
      if (buffer == (void *)0x0) {
        return 0;
      }
      uVar8 = 0;
      do {
        if ((param_8 < 2) || (param_7 <= param_8)) break;
        uVar4 = size - uVar8;
        iVar6 = 1;
        uVar9 = (ulong)param_8;
        uVar7 = uVar10;
        if (uVar10 < uVar4) {
          uVar5 = ~uVar10;
          uVar2 = param_8;
          do {
            bVar11 = uVar5 < uVar10;
            uVar5 = uVar5 - uVar10;
            if (bVar11) {
LAB_0204b54d:
              uVar9 = (ulong)uVar2;
              break;
            }
            uVar1 = *(uint *)(param_6 + (ulong)uVar2 * 4);
            uVar9 = (ulong)uVar1;
            if (((param_7 <= uVar1) || (uVar1 != uVar2 + 1)) || (uVar1 < 2)) goto LAB_0204b54d;
            uVar7 = uVar7 + uVar10;
            iVar6 = iVar6 + 1;
            uVar2 = uVar1;
          } while (uVar7 < uVar4);
        }
        if (uVar4 < uVar7) {
          uVar7 = uVar4;
        }
        uVar2 = recovered_206b1b0(param_1,(ulong)((param_8 - 2) * param_4 + param_3 + param_2),
                                  (long)buffer + uVar8,uVar7);
        if ((char)uVar2 == '\0') break;
        uVar8 = uVar8 + uVar7;
        iVar3 = iVar3 + iVar6;
        if (size <= uVar8) {
          *param_10 = (long)buffer;
          *param_11 = iVar3;
          return (uint)CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
        }
        param_8 = *(uint *)(param_6 + uVar9 * 4);
      } while (1 < param_8 + 1);
      recovered_2000bb0(buffer);
      return 0;
    }
  }
  return 0;
}
