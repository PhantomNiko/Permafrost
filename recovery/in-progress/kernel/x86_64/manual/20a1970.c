/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
uchar recovered_20a1970(long *param_1,undefined1 *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *data;
  ulong uVar9;

  if (param_1 == (long *)0x0) {
    return '\0';
  }
  uVar2 = param_1[1];
  uVar4 = *param_1 + 1;
  if (uVar4 <= uVar2) goto LAB_02064168;
  uVar9 = 8;
  if (uVar2 != 0) {
    uVar9 = uVar2;
  }
  for (; uVar9 < uVar4; uVar9 = uVar9 * 2) {
    if ((long)uVar9 < 0) {
      uVar9 = uVar4;
      break;
    }
  }
  pvVar5 = recovered_2000d40((void *)param_1[2],uVar9 * 8);
  if (pvVar5 == (void *)0x0) {
    return '\0';
  }
  uVar2 = param_1[1];
  uVar4 = uVar9 - uVar2;
  if (uVar2 <= uVar9 && uVar4 != 0) {
    uVar6 = uVar2;
    if (3 < uVar4) {
      uVar7 = uVar4 & 0xfffffffffffffffc;
      uVar6 = uVar2 + uVar7;
      uVar8 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar5 + uVar8 * 8 + uVar2 * 8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)((long)pvVar5 + uVar8 * 8 + uVar2 * 8 + 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar8 = uVar8 + 4;
      } while (uVar7 != uVar8);
      if (uVar4 == uVar7) goto LAB_02064160;
    }
    do {
      *(undefined8 *)((long)pvVar5 + uVar6 * 8) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar9 != uVar6);
  }
LAB_02064160:
  param_1[2] = (long)pvVar5;
  param_1[1] = uVar9;
LAB_02064168:
  data = &DAT_020a259c;
  if (param_2 != (undefined1 *)0x0) {
    data = param_2;
  }
  pvVar5 = recovered_2000ad0(param_3 + 1);
  if (pvVar5 == (void *)0x0) {
    return '\0';
  }
  if (param_3 != 0) {
    recovered_2001410(pvVar5,data,param_3);
  }
  *(undefined1 *)((long)pvVar5 + param_3) = 0;
  lVar3 = *param_1;
  *param_1 = lVar3 + 1;
  *(void **)(param_1[2] + lVar3 * 8) = pvVar5;
  return '\x01';
}
