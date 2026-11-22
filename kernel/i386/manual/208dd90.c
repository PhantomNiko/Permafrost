/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf1fc (*(uint32_t volatile *)(0x2245284U))
#define DAT_020cf200 (*(uint32_t volatile *)(0x2245288U))
#define DAT_020cf204 (*(uint32_t volatile *)(0x224528cU))
undefined4 recovered_208dd90(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  uint incoming_edx;
  uint uVar7;

  iVar5 = DAT_020cf1fc;
  iVar2 = DAT_020cf200;
  pvVar4 = (void *)DAT_020cf204;
  if (iVar5 == iVar2) {
    uVar7 = 4;
    if (iVar5 != 0) {
      uVar7 = iVar5 * 2;
    }
    pvVar4 = recovered_2001860(pvVar4,uVar7 * 0xc);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    DAT_020cf204 = pvVar4;
    uVar3 = DAT_020cf200;
    iVar5 = uVar7 - uVar3;
    if (uVar3 <= uVar7 && iVar5 != 0) {
      puVar6 = (undefined4 *)((int)pvVar4 + uVar3 * 0xc + 8);
      do {
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6 = puVar6 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    DAT_020cf200 = uVar7;
    iVar5 = DAT_020cf1fc;
    piVar1 = (int *)((int)pvVar4 + iVar5 * 0xc);
    iVar5 = piVar1[1];
  }
  else {
    if (pvVar4 == (void *)0x0) goto LAB_020645f7;
    piVar1 = (int *)((int)pvVar4 + iVar5 * 0xc);
    iVar5 = piVar1[1];
  }
  if (iVar5 != 0) {
    uVar7 = 0;
    iVar5 = 4;
    do {
      recovered_2001710(*(void **)(*piVar1 + -4 + iVar5));
      recovered_2043a90((undefined4 *)(*piVar1 + iVar5),incoming_edx);
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 0x2c;
    } while (uVar7 < (uint)piVar1[1]);
  }
  recovered_2001710((void *)*piVar1);
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  iVar2 = DAT_020cf204;
  iVar5 = DAT_020cf1fc;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + iVar5 * 0xc) = 0;
    *(undefined4 *)(iVar2 + 4 + iVar5 * 0xc) = 0;
    *(undefined4 *)(iVar2 + 8 + iVar5 * 0xc) = 0;
  }
LAB_020645f7:
  DAT_020cf1fc = iVar5 + 1;
  return CONCAT31((int3)((uint)(iVar5 + 1) >> 8),1);
}
