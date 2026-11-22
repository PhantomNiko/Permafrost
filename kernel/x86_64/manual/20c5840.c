/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_38 (*(void * *)(frame + 56))
#define local_40 (*(long *)(frame + 48))
#define local_48 (*(ulong *)(frame + 40))
#define local_50 (*(char * *)(frame + 32))
#define local_60 (*(long (*)[2])(frame + 16))
uint recovered_20c5840(long param_1,ulong param_2,long *param_3)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;

  if (param_3 == (long *)0x0) {
LAB_02087023:
    uVar5 = 0;
  }
  else {
    *param_3 = 0;
    if (param_2 == 0) {
      local_38 = recovered_2000ad0(1);
      lVar6 = 0;
      if (local_38 == (void *)0x0) {
        return 0;
      }
    }
    else {
      local_40 = -param_2;
      uVar7 = 1;
      lVar6 = 0;
      piVar8 = (int *)param_1;
      local_48 = param_2;
      do {
        local_60[0] = 0;
        local_60[1] = 0;
        local_50 = (char *)0x0;
        uVar1 = recovered_20a8f50(piVar8,local_60,0);
        if (uVar1 == '\0') {
          recovered_2000bb0(local_50);
LAB_02086f49:
          recovered_2000bb0((void *)0x0);
          return 0;
        }
        pcVar4 = local_50;
        if (local_50 == (char *)0x0) {
          pcVar4 = recovered_2000ad0(1);
          if (pcVar4 == (char *)0x0) goto LAB_02086f49;
          *pcVar4 = '\0';
        }
        uVar2 = recovered_2002e80(pcVar4);
        lVar6 = lVar6 + uVar2 + (ulong)(uVar7 < local_48);
        recovered_2000bb0(pcVar4);
        lVar3 = local_40 + uVar7;
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 0x10;
      } while (lVar3 != 0);
      local_38 = recovered_2000ad0(lVar6 + 1);
      if (local_38 == (void *)0x0) goto LAB_02087023;
      uVar7 = 1;
      lVar6 = 0;
      do {
        local_60[0] = 0;
        local_60[1] = 0;
        local_50 = (char *)0x0;
        uVar1 = recovered_20a8f50((int *)param_1,local_60,0);
        if (uVar1 == '\0') {
          recovered_2000bb0(local_50);
LAB_02087030:
          recovered_2000bb0((void *)0x0);
          recovered_2000bb0(local_38);
          return 0;
        }
        pcVar4 = local_50;
        if (local_50 == (char *)0x0) {
          pcVar4 = recovered_2000ad0(1);
          if (pcVar4 == (char *)0x0) goto LAB_02087030;
          *pcVar4 = '\0';
        }
        uVar2 = recovered_2002e80(pcVar4);
        if (uVar2 != 0) {
          recovered_2001410((void *)((long)local_38 + lVar6),pcVar4,uVar2);
          lVar6 = lVar6 + uVar2;
        }
        recovered_2000bb0(pcVar4);
        if (uVar7 < local_48) {
          *(undefined1 *)((long)local_38 + lVar6) = 0x20;
          lVar6 = lVar6 + 1;
        }
        lVar3 = local_40 + uVar7;
        uVar7 = uVar7 + 1;
        param_1 = param_1 + 0x40;
      } while (lVar3 != 0);
    }
    *(undefined1 *)((long)local_38 + lVar6) = 0;
    *param_3 = (long)local_38;
    uVar5 = (uint)CONCAT71((int7)((ulong)lVar6 >> 8),1);
  }
  return uVar5;
}
