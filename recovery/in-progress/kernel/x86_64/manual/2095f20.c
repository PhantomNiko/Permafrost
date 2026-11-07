/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_2095f20(long param_1,ulong param_2,long *param_3,ulong *param_4,ulong *param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  void *buffer;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;

  if (param_5 == (ulong *)0x0 || (param_4 == (ulong *)0x0 || param_3 == (long *)0x0)) {
    return '\0';
  }
  if (param_2 == 0 || param_1 == 0) {
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    return '\x01';
  }
  uVar12 = 0;
  uVar3 = 0;
  uVar8 = 0;
  pvVar2 = (void *)0x0;
  do {
    uVar13 = uVar12;
    uVar11 = uVar12 + 1;
    if (uVar12 + 1 < param_2) {
      uVar11 = param_2;
    }
    do {
      if (*(char *)(param_1 + uVar13) == '\n') goto LAB_02058762;
      uVar13 = uVar13 + 1;
    } while (uVar11 != uVar13);
    uVar13 = uVar11;
LAB_02058762:
    if (uVar13 - uVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uVar13 - uVar12) - (ulong)(*(char *)(param_1 + -1 + uVar13) == '\r');
    }
    uVar4 = uVar3 + 1;
    uVar10 = uVar8;
    buffer = pvVar2;
    if (uVar8 < uVar4) {
      if (uVar8 == 0) {
        uVar10 = 0x10;
      }
      for (; uVar10 < uVar4; uVar10 = uVar10 * 2) {
        if ((long)uVar10 < 0) {
          uVar10 = uVar4;
          break;
        }
      }
      buffer = recovered_2000d40(pvVar2,uVar10 * 8);
      if (buffer == (void *)0x0) {
        if (pvVar2 != (void *)0x0) {
          buffer = pvVar2;
          if (uVar3 != 0) {
            uVar8 = 0;
            do {
              recovered_2000bb0(*(void **)((long)pvVar2 + uVar8 * 8));
              *(undefined8 *)((long)pvVar2 + uVar8 * 8) = 0;
              uVar8 = uVar8 + 1;
            } while (uVar3 != uVar8);
          }
LAB_02058909:
          recovered_2000bb0(buffer);
        }
        return '\0';
      }
      uVar5 = uVar10 - uVar8;
      if (!(uVar10 < uVar8 || uVar5 == 0)) {
        uVar7 = uVar8;
        if (3 < uVar5) {
          uVar6 = uVar5 & 0xfffffffffffffffc;
          uVar7 = uVar8 + uVar6;
          uVar9 = 0;
          do {
            puVar1 = (undefined8 *)((long)buffer + uVar9 * 8 + uVar8 * 8);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)((long)buffer + uVar9 * 8 + uVar8 * 8 + 0x10);
            *puVar1 = 0;
            puVar1[1] = 0;
            uVar9 = uVar9 + 4;
          } while (uVar6 != uVar9);
          if (uVar5 == uVar6) goto LAB_0205885a;
        }
        do {
          *(undefined8 *)((long)buffer + uVar7 * 8) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar10 != uVar7);
      }
    }
LAB_0205885a:
    pvVar2 = recovered_2000ad0(uVar11 + 1);
    if (pvVar2 == (void *)0x0) {
      *(undefined8 *)((long)buffer + uVar3 * 8) = 0;
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          recovered_2000bb0(*(void **)((long)buffer + uVar8 * 8));
          *(undefined8 *)((long)buffer + uVar8 * 8) = 0;
          uVar8 = uVar8 + 1;
        } while (uVar3 != uVar8);
      }
      goto LAB_02058909;
    }
    if (uVar11 != 0) {
      recovered_2001410(pvVar2,(void *)(uVar12 + param_1),uVar11);
    }
    *(undefined1 *)((long)pvVar2 + uVar11) = 0;
    *(void **)((long)buffer + uVar3 * 8) = pvVar2;
    uVar12 = uVar13 + 1;
    uVar3 = uVar4;
    uVar8 = uVar10;
    pvVar2 = buffer;
    if (param_2 <= uVar12) {
      *param_3 = (long)buffer;
      *param_4 = uVar4;
      *param_5 = uVar10;
      return '\x01';
    }
  } while( true );
}
