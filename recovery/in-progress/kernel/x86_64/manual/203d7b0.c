/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_203d7b0(long *param_1,ulong param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *data;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 in_XMM0_Da;
  undefined4 extraout_XMM0_Da = 0;
  undefined4 in_XMM0_Db;
  undefined4 extraout_XMM0_Db = 0;

  uVar9 = param_1[1];
  if (uVar9 <= param_2) {
    if (param_2 <= uVar9) goto LAB_02032d11;
    if ((ulong)param_1[2] < param_2) {
      pvVar8 = recovered_201cb00(param_2 * 2);
      data = (void *)*param_1;
      uVar9 = param_1[1];
      if (uVar9 != 0) {
        if ((ulong)((long)pvVar8 - (long)data) < 0x20 || uVar9 < 4) {
          uVar11 = 0;
        }
        else {
          if (uVar9 < 0x10) {
            uVar10 = 0;
          }
          else {
            uVar11 = uVar9 & 0xfffffffffffffff0;
            uVar10 = 0;
            do {
              puVar3 = (undefined8 *)((long)data + uVar10 * 2);
              uVar5 = puVar3[1];
              puVar2 = (undefined8 *)((long)data + uVar10 * 2 + 0x10);
              uVar6 = *puVar2;
              uVar7 = puVar2[1];
              puVar2 = (undefined8 *)((long)pvVar8 + uVar10 * 2);
              *puVar2 = *puVar3;
              puVar2[1] = uVar5;
              puVar3 = (undefined8 *)((long)pvVar8 + uVar10 * 2 + 0x10);
              *puVar3 = uVar6;
              puVar3[1] = uVar7;
              uVar10 = uVar10 + 0x10;
            } while (uVar11 != uVar10);
            if (uVar9 == uVar11) goto LAB_02032cdf;
            uVar10 = uVar11;
            if ((uVar9 & 0xc) == 0) goto LAB_02032c76;
          }
          uVar11 = uVar9 & 0xfffffffffffffffc;
          do {
            *(undefined8 *)((long)pvVar8 + uVar10 * 2) = *(undefined8 *)((long)data + uVar10 * 2);
            uVar10 = uVar10 + 4;
          } while (uVar11 != uVar10);
          if (uVar9 == uVar11) goto LAB_02032cdf;
        }
LAB_02032c76:
        uVar12 = uVar9 & 3;
        uVar10 = uVar11;
        if (uVar12 != 0) {
          do {
            *(undefined2 *)((long)pvVar8 + uVar10 * 2) = *(undefined2 *)((long)data + uVar10 * 2);
            uVar10 = uVar10 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if (uVar11 - uVar9 < 0xfffffffffffffffd) {
          do {
            *(undefined2 *)((long)pvVar8 + uVar10 * 2) = *(undefined2 *)((long)data + uVar10 * 2);
            *(undefined2 *)((long)pvVar8 + uVar10 * 2 + 2) =
                 *(undefined2 *)((long)data + uVar10 * 2 + 2);
            *(undefined2 *)((long)pvVar8 + uVar10 * 2 + 4) =
                 *(undefined2 *)((long)data + uVar10 * 2 + 4);
            *(undefined2 *)((long)pvVar8 + uVar10 * 2 + 6) =
                 *(undefined2 *)((long)data + uVar10 * 2 + 6);
            uVar10 = uVar10 + 4;
          } while (uVar9 != uVar10);
        }
      }
LAB_02032cdf:
      recovered_201cb60(data);
      *param_1 = (long)pvVar8;
      param_1[2] = param_2;
      uVar9 = param_1[1];
      in_XMM0_Da = extraout_XMM0_Da;
      in_XMM0_Db = extraout_XMM0_Db;
    }
    uVar11 = param_2 - uVar9;
    if (param_2 < uVar9 || uVar11 == 0) goto LAB_02032d11;
    lVar4 = *param_1;
    if (3 < uVar11) {
      if (uVar11 < 0x10) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar11 & 0xfffffffffffffff0;
        lVar1 = lVar4 + uVar9 * 2;
        uVar12 = 0;
        in_XMM0_Da = 0;
        in_XMM0_Db = 0;
        do {
          puVar3 = (undefined8 *)(lVar1 + uVar12 * 2);
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3 = (undefined8 *)(lVar1 + 0x10 + uVar12 * 2);
          *puVar3 = 0;
          puVar3[1] = 0;
          uVar12 = uVar12 + 0x10;
        } while (uVar10 != uVar12);
        if (uVar11 == uVar10) goto LAB_02032ba4;
        if ((uVar11 & 0xc) == 0) {
          uVar9 = uVar9 + uVar10;
          goto LAB_02032d80;
        }
      }
      uVar12 = uVar11 & 0xfffffffffffffffc;
      lVar1 = uVar9 * 2;
      uVar9 = uVar9 + uVar12;
      do {
        *(undefined8 *)(lVar4 + lVar1 + uVar10 * 2) = 0;
        uVar10 = uVar10 + 4;
      } while (uVar12 != uVar10);
      if (uVar11 == uVar12) goto LAB_02032ba4;
    }
LAB_02032d80:
    do {
      *(undefined2 *)(lVar4 + uVar9 * 2) = 0;
      uVar9 = uVar9 + 1;
    } while (param_2 != uVar9);
  }
LAB_02032ba4:
  param_1[1] = param_2;
LAB_02032d11:
  return pf_bits_double(CONCAT44(in_XMM0_Db,in_XMM0_Da));
}
