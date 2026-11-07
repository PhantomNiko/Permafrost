/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de638 (*(uint64_t volatile *)(0x226c288U))
#define DAT_020de640 (*(uint64_t volatile *)(0x226c290U))
#define DAT_020e60f8 (*(uint64_t volatile *)(0x2274188U))
uchar recovered_20b12f0(long param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  uchar uVar4;
  void *buffer;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;

  lVar7 = DAT_020de638;
  buffer = (void *)DAT_020de640;
  lVar2 = DAT_020e60f8;
  if (lVar7 == lVar2) {
    uVar8 = 4;
    if (lVar7 != 0) {
      uVar8 = lVar7 * 2;
    }
    buffer = recovered_2000d40(buffer,uVar8 << 4);
    if (buffer == (void *)0x0) {
      return '\0';
    }
    DAT_020de640 = buffer;
    uVar3 = DAT_020e60f8;
    if (uVar3 < uVar8) {
      uVar5 = uVar3;
      if ((uVar3 & 1) != 0) {
        puVar6 = (undefined8 *)((long)buffer + uVar3 * 0x10);
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar5 = uVar3 + 1;
      }
      if (uVar8 != uVar3 + 1) {
        lVar7 = uVar8 - uVar5;
        puVar6 = (undefined8 *)((long)buffer + uVar5 * 0x10 + 0x18);
        do {
          puVar6[-3] = 0;
          puVar6[-2] = 0;
          puVar6[-1] = 0;
          *puVar6 = 0;
          puVar6 = puVar6 + 4;
          lVar7 = lVar7 + -2;
        } while (lVar7 != 0);
      }
    }
    DAT_020e60f8 = uVar8;
    lVar7 = DAT_020de638;
  }
  uVar4 = recovered_20df630((long *)(lVar7 * 0x10 + (long)buffer),param_1,param_2);
  if (uVar4 == '\0') {
    return '\0';
  }
  uVar1 = DAT_020de638;
  lVar7 = DAT_020de638;
  DAT_020de638 = lVar7 + 1;
  uVar1 = DAT_020de638;
  uVar1 = DAT_020de638;
  uVar1 = DAT_020de638;
  return '\x01';
}
