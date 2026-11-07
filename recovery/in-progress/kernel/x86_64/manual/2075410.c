/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_38 (*(void * *)(frame + 88))
#define local_70 (*(int *)(frame + 32))
#define local_78 (*(undefined1 (*)[8])(frame + 24))
uchar recovered_2075410(long *param_1,int param_2,long param_3)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  uchar uVar7;
  ulong uVar8;

  uVar4 = *(uint *)((long)param_1 + 0x14);
  if ((uVar4 == 0) || ((int)param_1[3] == 0)) {
    return '\0';
  }
  uVar8 = (ulong)(param_2 - 1) / (ulong)uVar4;
  recovered_2002110(local_78,0,0x40);
  if (*(uint *)((long)param_1 + 0x24) <= (uint)uVar8) {
    return '\0';
  }
  uVar3 = *(uint *)(param_1 + 4);
  if ((ulong)uVar3 < 0x20) {
    return '\0';
  }
  pvVar5 = recovered_2000ad0((ulong)*(uint *)(param_1 + 1));
  if (pvVar5 == (void *)0x0) {
    return '\0';
  }
  uVar8 = uVar3 * uVar8;
  uVar3 = *(uint *)(param_1 + 1);
  uVar6 = (ulong)uVar3;
  if (uVar8 >> 0x20 == 0) {
    iVar2 = (int)((uVar8 & 0xffffffff) / uVar6);
  }
  else {
    iVar2 = (int)(uVar8 / uVar6);
  }
  lVar1 = *param_1;
  if ((lVar1 != 0) && ((uVar3 & 0x1ff) == 0 && 0x1ff < uVar3)) {
    local_38 = pvVar5;
    uVar3 = recovered_206b1b0(*(byte *)(lVar1 + 4),
                              (ulong)((uVar3 >> 9) * (*(int *)((long)param_1 + 0x1c) + iVar2) +
                                     *(int *)(lVar1 + 8)),(long)pvVar5,uVar6);
    pvVar5 = local_38;
    if ((char)uVar3 == '\0') {
      uVar7 = '\0';
      goto LAB_0204f524;
    }
    if (uVar8 >> 0x20 == 0) {
      uVar8 = uVar8 & 0xffffffff;
    }
    recovered_2001410(local_78,(void *)((long)local_38 + uVar8 % (ulong)*(uint *)(param_1 + 1)),
                      (ulong)*(uint *)(param_1 + 4));
    recovered_2000bb0(pvVar5);
    if (local_70 == 0) {
      return '\0';
    }
    uVar3 = *(uint *)(param_1 + 3);
    pvVar5 = recovered_2000ad0((ulong)*(uint *)(param_1 + 1));
    if (pvVar5 == (void *)0x0) {
      return '\0';
    }
    uVar8 = (ulong)uVar3 * ((ulong)(param_2 - 1) % (ulong)uVar4);
    uVar4 = *(uint *)(param_1 + 1);
    uVar6 = (ulong)uVar4;
    if (uVar8 >> 0x20 == 0) {
      iVar2 = (int)((uVar8 & 0xffffffff) / uVar6);
    }
    else {
      iVar2 = (int)(uVar8 / uVar6);
    }
    lVar1 = *param_1;
    if ((lVar1 != 0) && ((uVar4 & 0x1ff) == 0 && 0x1ff < uVar4)) {
      uVar4 = recovered_206b1b0(*(byte *)(lVar1 + 4),
                                (ulong)((uVar4 >> 9) * (local_70 + iVar2) + *(int *)(lVar1 + 8)),
                                (long)pvVar5,uVar6);
      if ((char)uVar4 == '\0') {
        uVar7 = '\0';
        goto LAB_0204f524;
      }
      if (uVar8 >> 0x20 == 0) {
        uVar8 = uVar8 & 0xffffffff;
      }
      uVar8 = uVar8 % (ulong)*(uint *)(param_1 + 1);
      if (uVar8 + *(uint *)(param_1 + 3) <= (ulong)*(uint *)(param_1 + 1)) {
        recovered_2001410((void *)param_3,(void *)((long)pvVar5 + uVar8),
                          (ulong)*(uint *)(param_1 + 3));
        uVar7 = '\x01';
        goto LAB_0204f524;
      }
    }
  }
  uVar7 = '\0';
LAB_0204f524:
  recovered_2000bb0(pvVar5);
  return uVar7;
}
