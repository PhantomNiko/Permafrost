/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020e60e0 (*(uint64_t volatile *)(0x2274170U))
#define DAT_020e60e8 (*(uint64_t volatile *)(0x2274178U))
#define DAT_020e60f0 (*(uint64_t volatile *)(0x2274180U))
uchar recovered_20b10a0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;

  lVar8 = DAT_020e60e0;
  pvVar3 = (void *)DAT_020e60f0;
  lVar2 = DAT_020e60e8;
  if (lVar8 == lVar2) {
    uVar9 = 4;
    if (lVar8 != 0) {
      uVar9 = lVar8 * 2;
    }
    pvVar3 = recovered_2000d40(pvVar3,uVar9 * 0x18);
    if (pvVar3 == (void *)0x0) {
      return '\0';
    }
    DAT_020e60f0 = pvVar3;
    uVar4 = DAT_020e60e8;
    uVar5 = uVar4 - uVar9;
    if (uVar4 < uVar9) {
      uVar6 = (int)uVar9 - (int)uVar4 & 3;
      if (uVar6 != 0) {
        puVar7 = (undefined8 *)((long)pvVar3 + uVar4 * 0x18 + 0x10);
        lVar8 = 0;
        do {
          puVar7[-2] = 0;
          puVar7[-1] = 0;
          *puVar7 = 0;
          lVar8 = lVar8 + -1;
          puVar7 = puVar7 + 3;
        } while (-lVar8 != (ulong)uVar6);
        uVar4 = uVar4 - lVar8;
      }
      if (uVar5 < 0xfffffffffffffffd) {
        puVar7 = (undefined8 *)((long)pvVar3 + uVar4 * 0x18 + 0x58);
        lVar8 = uVar9 - uVar4;
        do {
          puVar7[-0xb] = 0;
          puVar7[-10] = 0;
          puVar7[-9] = 0;
          puVar7[-8] = 0;
          puVar7[-7] = 0;
          puVar7[-6] = 0;
          puVar7[-5] = 0;
          puVar7[-4] = 0;
          puVar7[-3] = 0;
          puVar7[-2] = 0;
          puVar7[-1] = 0;
          *puVar7 = 0;
          puVar7 = puVar7 + 0xc;
          lVar8 = lVar8 + -4;
        } while (lVar8 != 0);
      }
    }
    DAT_020e60e8 = uVar9;
    lVar8 = DAT_020e60e0;
    plVar1 = (long *)((long)pvVar3 + lVar8 * 0x18);
    lVar8 = plVar1[1];
  }
  else {
    if (pvVar3 == (void *)0x0) goto LAB_0207446f;
    plVar1 = (long *)((long)pvVar3 + lVar8 * 0x18);
    lVar8 = plVar1[1];
  }
  if (lVar8 != 0) {
    lVar8 = 8;
    uVar9 = 0;
    do {
      recovered_2000bb0(*(void **)(*plVar1 + -8 + lVar8));
      recovered_205ec00((undefined8 *)(*plVar1 + lVar8));
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x50;
    } while (uVar9 < (ulong)plVar1[1]);
  }
  recovered_2000bb0((void *)*plVar1);
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  lVar2 = DAT_020e60f0;
  lVar8 = DAT_020e60e0;
  if (lVar2 != 0) {
    puVar7 = (undefined8 *)(lVar2 + lVar8 * 0x18);
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined8 *)(lVar2 + 0x10 + lVar8 * 0x18) = 0;
  }
LAB_0207446f:
  DAT_020e60e0 = lVar8 + 1;
  return '\x01';
}
