/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define local_38 (*(void * *)(frame + 24))
uchar recovered_209d3e0(long param_1,ulong param_2,long *param_3,ulong *param_4,ulong *param_5)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *text;

  if (param_5 == (ulong *)0x0 || (param_4 == (ulong *)0x0 || param_3 == (long *)0x0)) {
    return '\0';
  }
  if (param_2 == 0) {
    local_38 = (void *)0x0;
    uVar8 = 0;
  }
  else {
    local_38 = (void *)0x0;
    uVar3 = 0;
    uVar10 = 0;
    do {
      text = &DAT_020a259c;
      if ((param_1 != 0) && (text = *(char **)(param_1 + uVar10 * 8), text == (char *)0x0)) {
        text = &DAT_020a259c;
      }
      uVar1 = uVar10 + 1;
      uVar8 = uVar3;
      if (uVar10 < uVar3) {
      }
      else {
        if (uVar3 == 0) {
          uVar8 = 0x10;
        }
        for (; uVar8 <= uVar10; uVar8 = uVar8 * 2) {
          if ((long)uVar8 < 0) {
            uVar8 = uVar1;
            break;
          }
        }
        pvVar4 = recovered_2000d40(local_38,uVar8 * 8);
        if (pvVar4 == (void *)0x0) {
          if (local_38 != (void *)0x0) {
            if (uVar10 != 0) {
              uVar8 = 0;
              do {
                recovered_2000bb0(*(void **)((long)local_38 + uVar8 * 8));
                *(undefined8 *)((long)local_38 + uVar8 * 8) = 0;
                uVar8 = uVar8 + 1;
              } while (uVar10 != uVar8);
            }
LAB_0205fd2c:
            recovered_2000bb0(local_38);
          }
          return '\0';
        }
        uVar5 = uVar8 - uVar3;
        if (uVar3 <= uVar8 && uVar5 != 0) {
          uVar7 = uVar3;
          if (3 < uVar5) {
            uVar6 = uVar5 & 0xfffffffffffffffc;
            uVar7 = uVar3 + uVar6;
            uVar9 = 0;
            do {
              puVar2 = (undefined8 *)((long)pvVar4 + uVar9 * 8 + uVar3 * 8);
              *puVar2 = 0;
              puVar2[1] = 0;
              puVar2 = (undefined8 *)((long)pvVar4 + uVar9 * 8 + uVar3 * 8 + 0x10);
              *puVar2 = 0;
              puVar2[1] = 0;
              uVar9 = uVar9 + 4;
            } while (uVar6 != uVar9);
            if (uVar5 == uVar6) goto LAB_0205fc60;
          }
          do {
            *(undefined8 *)((long)pvVar4 + uVar7 * 8) = 0;
            uVar7 = uVar7 + 1;
          } while (uVar8 != uVar7);
        }
LAB_0205fc60:
        local_38 = pvVar4;
      }
      uVar3 = recovered_2002e80(text);
      pvVar4 = recovered_2000ad0(uVar3 + 1);
      if (pvVar4 == (void *)0x0) {
        *(undefined8 *)((long)local_38 + uVar10 * 8) = 0;
        if (uVar10 != 0) {
          uVar8 = 0;
          do {
            recovered_2000bb0(*(void **)((long)local_38 + uVar8 * 8));
            *(undefined8 *)((long)local_38 + uVar8 * 8) = 0;
            uVar8 = uVar8 + 1;
          } while (uVar10 != uVar8);
        }
        goto LAB_0205fd2c;
      }
      if (uVar3 != 0) {
        recovered_2001410(pvVar4,text,uVar3);
      }
      *(undefined1 *)((long)pvVar4 + uVar3) = 0;
      *(void **)((long)local_38 + uVar10 * 8) = pvVar4;
      uVar3 = uVar8;
      uVar10 = uVar1;
    } while (uVar1 != param_2);
  }
  *param_3 = (long)local_38;
  *param_4 = param_2;
  *param_5 = uVar8;
  return '\x01';
}
