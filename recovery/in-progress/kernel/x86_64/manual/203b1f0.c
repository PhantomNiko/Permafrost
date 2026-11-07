/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_203b1f0(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  undefined4 in_XMM0_Da;
  undefined4 extraout_XMM0_Da = 0;
  undefined4 in_XMM0_Db;
  undefined4 extraout_XMM0_Db = 0;

  if ((ulong)param_1[2] < param_2) {
    pvVar5 = recovered_201cb00(param_2 * 0x30);
    if (param_1[1] != 0) {
      lVar6 = 0x20;
      uVar7 = 0;
      do {
        lVar3 = *param_1;
        *(undefined8 *)((long)pvVar5 + lVar6 + -0x20) = *(undefined8 *)(lVar3 + -0x20 + lVar6);
        puVar1 = (undefined8 *)(lVar3 + -0x18 + lVar6);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)((long)pvVar5 + lVar6 + -0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar3 + -0x20 + lVar6);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar3 + -0x10 + lVar6) = 0;
        *(undefined8 *)((long)pvVar5 + lVar6 + -8) = *(undefined8 *)(lVar3 + -8 + lVar6);
        uVar4 = ((undefined8 *)(lVar3 + lVar6))[1];
        *(undefined8 *)((long)pvVar5 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
        ((undefined8 *)((long)pvVar5 + lVar6))[1] = uVar4;
        puVar1 = (undefined8 *)(lVar3 + -8 + lVar6);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
        recovered_201cb60((void *)0x0);
        recovered_201cb60(*(void **)(lVar3 + -0x20 + lVar6));
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x30;
      } while (uVar7 < (ulong)param_1[1]);
    }
    recovered_201cb60((void *)*param_1);
    *param_1 = (long)pvVar5;
    param_1[2] = param_2;
    in_XMM0_Da = extraout_XMM0_Da;
    in_XMM0_Db = extraout_XMM0_Db;
  }
  return pf_bits_double(CONCAT44(in_XMM0_Db,in_XMM0_Da));
}
