/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define auStack_90 (*(ulong (*)[8])(frame + 80))
#define auStack_d0 (*(uint (*)[16])(frame + 16))
#define pvStack_50 (*(void * *)(frame + 144))
#define uStack_3b (*(undefined8 *)(frame + 165))
#define uStack_40 (*(undefined5 *)(frame + 160))
#define uStack_43 (*(undefined3 *)(frame + 157))
#define uStack_48 (*(undefined5 *)(frame + 152))
undefined8 recovered_8241579c(long *param_1,uint *param_2,undefined8 param_3)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;

  uStack_3b = 0;
  uStack_40 = 0;
  auStack_90[7] = 0;
  auStack_90[6] = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  pvStack_50 = (void *)0x0;
  auStack_90[3] = 0;
  auStack_90[2] = 0;
  auStack_90[5] = 0;
  auStack_90[4] = 0;
  auStack_90[1] = 0;
  auStack_90[0] = 0;
  recovered_82415a94((undefined8 *)param_2,auStack_90);
  uStack_48 = 0;
  uStack_43 = 0;
  recovered_8240facc(pvStack_50);
  puVar2 = (uint *)*param_1;
  uVar3 = param_1[1];
  for (lVar7 = uVar3 << 2; lVar7 != 0; lVar7 = lVar7 + -4) {
    uVar5 = *puVar2;
    if (0xf < uVar5) goto LAB_4040f41c;
    param_2[uVar5] = param_2[uVar5] + 1;
    uVar4 = param_2[0x16];
    if (param_2[0x16] <= uVar5) {
      uVar4 = uVar5;
    }
    param_2[0x16] = uVar4;
    puVar2 = puVar2 + 1;
  }
  if (uVar3 == *param_2) {
LAB_4040f4ac:
    *(char *)(param_2 + 0x17) = (char)param_3;
  }
  else {
    iVar6 = 1;
    lVar7 = 4;
    do {
      if (lVar7 == 0x40) {
        uVar5 = 0;
        auStack_d0[10] = 0;
        auStack_d0[0xb] = 0;
        auStack_d0[8] = 0;
        auStack_d0[9] = 0;
        auStack_d0[0xe] = 0;
        auStack_d0[0xf] = 0;
        auStack_d0[0xc] = 0;
        auStack_d0[0xd] = 0;
        auStack_d0[2] = 0;
        auStack_d0[3] = 0;
        auStack_d0[0] = 0;
        auStack_d0[1] = 0;
        auStack_d0[6] = 0;
        auStack_d0[7] = 0;
        auStack_d0[4] = 0;
        auStack_d0[5] = 0;
        for (lVar7 = 4; lVar7 != 0x40; lVar7 = lVar7 + 4) {
          *(uint *)((long)auStack_d0 + lVar7) = uVar5;
          uVar5 = *(int *)((long)param_2 + lVar7) + uVar5;
        }
        auStack_90[0] = auStack_90[0] & 0xffffffffffff0000;
        recovered_82415ad8((long *)(param_2 + 0x10),(ulong)uVar5,(undefined2 *)auStack_90);
        lVar7 = *param_1;
        uVar3 = param_1[1];
        lVar8 = *(long *)(param_2 + 0x10);
        for (uVar9 = 0; uVar9 < uVar3; uVar9 = (ulong)((int)uVar9 + 1)) {
          uVar5 = *(uint *)(lVar7 + uVar9 * 4);
          if (uVar5 != 0) {
            uVar4 = auStack_d0[uVar5];
            auStack_d0[uVar5] = uVar4 + 1;
            *(short *)(lVar8 + (ulong)uVar4 * 2) = (short)uVar9;
          }
        }
        param_3 = 1;
        goto LAB_4040f4ac;
      }
      piVar1 = (int *)((long)param_2 + lVar7);
      lVar7 = lVar7 + 4;
      iVar6 = iVar6 * 2 - *piVar1;
    } while (-1 < iVar6);
LAB_4040f41c:
    param_3 = 0;
  }
  return param_3;
}
