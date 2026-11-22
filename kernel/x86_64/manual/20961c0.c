/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20961c0(long *param_1,ulong *param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;

  if (param_2 != (ulong *)0x0 && param_1 != (long *)0x0) {
    uVar2 = *param_2;
    if (param_3 <= uVar2) {
      return '\x01';
    }
    uVar8 = 0x10;
    if (uVar2 != 0) {
      uVar8 = uVar2;
    }
    for (; uVar8 < param_3; uVar8 = uVar8 * 2) {
      if ((long)uVar8 < 0) {
        uVar8 = param_3;
        break;
      }
    }
    pvVar3 = recovered_2000d40((void *)*param_1,uVar8 * 8);
    if (pvVar3 != (void *)0x0) {
      uVar2 = *param_2;
      uVar5 = uVar8 - uVar2;
      if (uVar2 <= uVar8 && uVar5 != 0) {
        uVar4 = uVar2;
        if (3 < uVar5) {
          uVar6 = uVar5 & 0xfffffffffffffffc;
          uVar4 = uVar2 + uVar6;
          uVar7 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar3 + uVar7 * 8 + uVar2 * 8);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)((long)pvVar3 + uVar7 * 8 + uVar2 * 8 + 0x10);
            *puVar1 = 0;
            puVar1[1] = 0;
            uVar7 = uVar7 + 4;
          } while (uVar6 != uVar7);
          if (uVar5 == uVar6) goto LAB_02058a10;
        }
        do {
          *(undefined8 *)((long)pvVar3 + uVar4 * 8) = 0;
          uVar4 = uVar4 + 1;
        } while (uVar8 != uVar4);
      }
LAB_02058a10:
      *param_1 = (long)pvVar3;
      *param_2 = uVar8;
      return '\x01';
    }
  }
  return '\0';
}
