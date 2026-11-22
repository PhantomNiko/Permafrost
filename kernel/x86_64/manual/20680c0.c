/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf358 (*(uint32_t volatile *)(0x215a768U))
#define DAT_020cf360 (*(uint32_t volatile *)(0x215a770U))
#define DAT_020cf368 (*(uint32_t volatile *)(0x215a778U))
#define DAT_020cf370 (*(uint32_t volatile *)(0x215a780U))
#define DAT_020cf398 (*(uint64_t volatile *)(0x215a7a8U))
ulonglong recovered_20680c0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong size;
  void *pvVar4;
  ulong uVar5;
  void *pvVar6;
  bool bVar7;

  DAT_020cf370 = 0;
  iVar2 = DAT_020cf368;
  uVar3 = iVar2 + 1;
  uVar1 = DAT_020cf358;
  if (uVar3 < uVar1) {
    DAT_020cf368 = uVar3;
    return (ulong)uVar3;
  }
  uVar3 = DAT_020cf360;
  size = (ulonglong)uVar3;
  pvVar6 = (void *)DAT_020cf398;
  if (uVar3 != 0 && (uVar1 != 0 && pvVar6 != (void *)0x0)) {
    if (uVar1 < 2) {
      uVar5 = 0;
      bVar7 = false;
    }
    else {
      pvVar4 = recovered_2001850(pvVar6,(void *)((long)pvVar6 + (ulong)uVar3 + 1),
                                 (ulong)(uVar1 - 1) * ((ulong)uVar3 + 1));
      pvVar6 = (void *)DAT_020cf398;
      if (pvVar6 == (void *)0x0) {
        return (ulonglong)pvVar4;
      }
      iVar2 = DAT_020cf358;
      bVar7 = iVar2 == 0;
      uVar5 = (ulong)(iVar2 - 1);
      uVar1 = DAT_020cf360;
      size = (ulonglong)uVar1;
    }
    if ((int)size != 0 && !bVar7) {
      pvVar6 = (void *)((long)pvVar6 + uVar5 * ((int)size + 1));
      recovered_2002110(pvVar6,0x20,size);
      uVar1 = DAT_020cf360;
      size = (ulonglong)uVar1;
      *(undefined1 *)(size + (long)pvVar6) = 0;
    }
  }
  return size;
}
