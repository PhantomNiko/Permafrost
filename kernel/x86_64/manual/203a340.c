/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_203a340(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  void *pvVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 in_XMM0_Da;
  undefined4 extraout_XMM0_Da = 0;
  undefined4 extraout_XMM0_Da_00 = 0;
  undefined4 in_XMM0_Db;
  undefined4 extraout_XMM0_Db = 0;
  undefined4 extraout_XMM0_Db_00 = 0;

  uVar8 = param_1[1];
  if (param_2 < uVar8) {
    lVar7 = uVar8 * 0x18 + -0x10;
    do {
      lVar6 = *param_1;
      *(undefined8 *)(lVar6 + lVar7) = 0;
      recovered_201cb60(*(void **)(lVar6 + -8 + lVar7));
      uVar8 = uVar8 - 1;
      lVar7 = lVar7 + -0x18;
      in_XMM0_Da = extraout_XMM0_Da;
      in_XMM0_Db = extraout_XMM0_Db;
    } while (param_2 < uVar8);
  }
  else {
    if (param_2 <= uVar8) goto LAB_0202fea7;
    if ((ulong)param_1[2] < param_2) {
      pvVar2 = recovered_201cb00(param_2 * 0x18);
      if (param_1[1] != 0) {
        lVar7 = 8;
        uVar8 = 0;
        do {
          lVar6 = *param_1;
          *(undefined8 *)((long)pvVar2 + lVar7 + -8) = *(undefined8 *)(lVar6 + -8 + lVar7);
          uVar1 = ((undefined8 *)(lVar6 + lVar7))[1];
          *(undefined8 *)((long)pvVar2 + lVar7) = *(undefined8 *)(lVar6 + lVar7);
          ((undefined8 *)((long)pvVar2 + lVar7))[1] = uVar1;
          puVar5 = (undefined8 *)(lVar6 + -8 + lVar7);
          *puVar5 = 0;
          puVar5[1] = 0;
          *(undefined8 *)(lVar6 + 8 + lVar7) = 0;
          recovered_201cb60((void *)0x0);
          uVar8 = uVar8 + 1;
          lVar7 = lVar7 + 0x18;
        } while (uVar8 < (ulong)param_1[1]);
      }
      recovered_201cb60((void *)*param_1);
      *param_1 = (long)pvVar2;
      param_1[2] = param_2;
      uVar8 = param_1[1];
      in_XMM0_Da = extraout_XMM0_Da_00;
      in_XMM0_Db = extraout_XMM0_Db_00;
    }
    uVar3 = uVar8 - param_2;
    if (param_2 <= uVar8) goto LAB_0202fea7;
    lVar7 = *param_1;
    uVar4 = (int)param_2 - (int)uVar8 & 3;
    if (uVar4 != 0) {
      puVar5 = (undefined8 *)(lVar7 + uVar8 * 0x18 + 0x10);
      lVar6 = 0;
      in_XMM0_Da = 0;
      in_XMM0_Db = 0;
      do {
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        lVar6 = lVar6 + -1;
        puVar5 = puVar5 + 3;
      } while (-lVar6 != (ulong)uVar4);
      uVar8 = uVar8 - lVar6;
    }
    if (uVar3 < 0xfffffffffffffffd) {
      puVar5 = (undefined8 *)(lVar7 + uVar8 * 0x18 + 0x58);
      lVar7 = param_2 - uVar8;
      in_XMM0_Da = 0;
      in_XMM0_Db = 0;
      do {
        puVar5[-0xb] = 0;
        puVar5[-10] = 0;
        puVar5[-9] = 0;
        puVar5[-8] = 0;
        puVar5[-7] = 0;
        puVar5[-6] = 0;
        puVar5[-5] = 0;
        puVar5[-4] = 0;
        puVar5[-3] = 0;
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 0xc;
        lVar7 = lVar7 + -4;
      } while (lVar7 != 0);
    }
  }
  param_1[1] = param_2;
LAB_0202fea7:
  return pf_bits_double(CONCAT44(in_XMM0_Db,in_XMM0_Da));
}
