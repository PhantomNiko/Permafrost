/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020de620 (*(uint64_t volatile *)(0x226c270U))
#define DAT_020de628 (*(uint64_t volatile *)(0x226c278U))
#define DAT_020de630 (*(uint64_t volatile *)(0x226c280U))
uchar recovered_20e72a0(ulong param_1,undefined1 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uchar uVar2;
  ulong uVar3;
  void *out;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *text;

  uVar3 = DAT_020de628;
  if (uVar3 < param_1) {
    return '\0';
  }
  text = &DAT_020a259c;
  if (param_2 != (undefined1 *)0x0) {
    text = param_2;
  }
  uVar3 = recovered_2002e80(text);
  out = recovered_2000ad0(uVar3 + 1);
  if (out == (void *)0x0) {
LAB_0209c9da:
    uVar2 = '\0';
  }
  else {
    if (uVar3 != 0) {
      recovered_2001410(out,text,uVar3);
    }
    *(undefined1 *)((long)out + uVar3) = 0;
    uVar6 = DAT_020de628;
    uVar3 = uVar6 + 1;
    uVar7 = DAT_020de630;
    if (uVar7 < uVar3) {
      uVar6 = 0x10;
      if (uVar7 != 0) {
        uVar6 = uVar7;
      }
      for (; uVar6 < uVar3; uVar6 = uVar6 * 2) {
        if ((long)uVar6 < 0) {
          uVar6 = uVar3;
          break;
        }
      }
      pvVar4 = (void *)DAT_020de620;
      pvVar4 = recovered_2000d40(pvVar4,uVar6 * 8);
      if (pvVar4 == (void *)0x0) {
        recovered_2000bb0(out);
        goto LAB_0209c9da;
      }
      uVar3 = DAT_020de630;
      uVar7 = uVar6 - uVar3;
      if (uVar3 <= uVar6 && uVar7 != 0) {
        uVar5 = uVar3;
        if (3 < uVar7) {
          uVar8 = uVar7 & 0xfffffffffffffffc;
          uVar5 = uVar3 + uVar8;
          uVar9 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar4 + uVar9 * 8 + uVar3 * 8);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)((long)pvVar4 + uVar9 * 8 + uVar3 * 8 + 0x10);
            *puVar1 = 0;
            puVar1[1] = 0;
            uVar9 = uVar9 + 4;
          } while (uVar8 != uVar9);
          if (uVar7 == uVar8) goto LAB_0209c980;
        }
        do {
          *(undefined8 *)((long)pvVar4 + uVar5 * 8) = 0;
          uVar5 = uVar5 + 1;
        } while (uVar6 != uVar5);
      }
LAB_0209c980:
      DAT_020de620 = pvVar4;
      DAT_020de630 = uVar6;
      uVar6 = DAT_020de628;
    }
    else {
      pvVar4 = (void *)DAT_020de620;
    }
    if (param_1 <= uVar6 && uVar6 - param_1 != 0) {
      recovered_2001850((void *)((long)pvVar4 + param_1 * 8 + 8),
                        (void *)((long)pvVar4 + param_1 * 8),(uVar6 - param_1) * 8);
      pvVar4 = (void *)DAT_020de620;
      uVar6 = DAT_020de628;
    }
    *(void **)((long)pvVar4 + param_1 * 8) = out;
    DAT_020de628 = uVar6 + 1;
    uVar2 = '\x01';
  }
  return uVar2;
}
