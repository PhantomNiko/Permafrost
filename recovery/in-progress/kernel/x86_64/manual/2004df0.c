/* Native floating constants and sign bits; Pooka's Free Software License. */
#include "functions.h"
#define DAT_02124e58 (*(uint64_t volatile *)(0x02124e58U))
#define DAT_02124de8 (*(uint64_t volatile *)(0x02124de8U))
#define DAT_02124de0 (*(uint64_t volatile *)(0x02124de0U))
#define Ram0000000002124e60 (*(uint128 volatile *)(0x2124e60U))
double recovered_2004df0(byte *param_1,undefined8 *param_2)

{
  unsigned char pf_stack_frame[72] __attribute__((aligned(16))) = {0};

  byte bVar1;
  double dVar2;
  uint128 auVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;

  for (pbVar4 = param_1; (bVar1 = *pbVar4, (byte)(bVar1 - 9) < 5 || (bVar1 == 0x20)); pbVar4 = pbVar4 + 1) {
  }
  pbVar4 = pbVar4 + ((bVar1 - 0x2b & 0xfd) == 0);
  uVar5 = (uint)*pbVar4;
  bVar7 = *pbVar4 - 0x30U;
  dVar12 = 0.0;
  if (bVar7 < 10) {
    dVar13 = pf_bits_double(DAT_02124e58);
    do {
      dVar12 = dVar12 * dVar13 + (double)(int)(uVar5 - 0x30);
      pbVar6 = pbVar4 + 1;
      uVar5 = (uint)*pbVar6;
      pbVar4 = pbVar4 + 1;
    } while ((byte)(*pbVar6 - 0x30U) < 10);
  }
  if ((char)uVar5 == '.') {
    pbVar6 = pbVar4 + 1;
    uVar5 = (uint)*pbVar6;
    pbVar4 = pbVar4 + 1;
    if ((byte)(*pbVar6 - 0x30U) < 10) {
      dVar13 = 0.0;
      dVar14 = pf_bits_double(DAT_02124de8);
      dVar2 = pf_bits_double(DAT_02124e58);
      do {
        dVar13 = dVar13 * dVar2 + (double)(int)(uVar5 - 0x30);
        dVar14 = dVar14 * dVar2;
        pbVar6 = pbVar4 + 1;
        uVar5 = (uint)*pbVar6;
        pbVar4 = pbVar4 + 1;
      } while ((byte)(*pbVar6 - 0x30U) < 10);
      dVar13 = dVar13 / dVar14;
      goto LAB_02004ec9;
    }
  }
  dVar13 = 0.0;
  if (9 < bVar7) {
    if (param_2 == (undefined8 *)0x0) {
      return 0.0;
    }
    *param_2 = param_1;
    return 0.0;
  }
LAB_02004ec9:
  dVar12 = dVar12 + dVar13;
  if ((uVar5 | 0x20) == 0x65) {
    iVar11 = 1;
    if (pbVar4[1] == 0x2b) {
      pbVar6 = pbVar4 + 2;
    }
    else if (pbVar4[1] == 0x2d) {
      pbVar6 = pbVar4 + 2;
      iVar11 = -1;
    }
    else {
      pbVar6 = pbVar4 + 1;
    }
    bVar7 = *pbVar6;
    bVar10 = bVar7 - 0x30U;
    if (bVar10 < 10) {
      iVar8 = 0;
      do {
        iVar8 = (uint)bVar7 + iVar8 * 10 + -0x30;
        bVar7 = pbVar6[1];
        pbVar6 = pbVar6 + 1;
      } while ((byte)(bVar7 - 0x30U) < 10);
      if (bVar10 < 10) {
        uVar5 = iVar8 * iVar11;
        if ((int)uVar5 < 1) {
          if ((int)uVar5 < 0) {
            uVar9 = -(iVar8 * iVar11) & 7;
            if (uVar9 == 0) {
              uVar9 = uVar5;
            }
            else {
              iVar11 = 0;
              dVar13 = pf_bits_double(DAT_02124de0);
              do {
                dVar12 = dVar12 * dVar13;
                iVar11 = iVar11 + -1;
              } while (-uVar9 != iVar11);
              uVar9 = uVar5 - iVar11;
            }
            if (uVar5 < 0xfffffff9) {
              dVar13 = pf_bits_double(DAT_02124de0);
              do {
                dVar12 = dVar12 * dVar13 * dVar13 * dVar13 * dVar13 * dVar13 * dVar13 * dVar13 *
                         dVar13;
                uVar9 = uVar9 + 8;
              } while (uVar9 != 0);
            }
          }
        }
        else {
          uVar9 = uVar5;
          if ((uVar5 & 7) != 0) {
            uVar9 = 0;
            do {
              dVar12 = dVar12 + dVar12;
              uVar9 = uVar9 + 1;
            } while ((uVar5 & 7) != uVar9);
            uVar9 = uVar5 - uVar9;
          }
          if (7 < uVar5) {
            uVar9 = uVar9 - 1;
            do {
              dVar12 = dVar12 + dVar12 + dVar12 + dVar12;
              dVar12 = dVar12 + dVar12;
              dVar12 = dVar12 + dVar12;
              dVar12 = dVar12 + dVar12;
              dVar12 = dVar12 + dVar12;
              dVar12 = dVar12 + dVar12;
              dVar12 = dVar12 + dVar12;
              uVar9 = uVar9 - 8;
            } while (uVar9 < 0xfffffffe);
          }
        }
        pbVar4 = pbVar6;
      }
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = pbVar4;
  }
  if (bVar1 == 0x2d) {
    auVar3 = Ram0000000002124e60;
    dVar12 = pf_bits_double(pf_double_bits(dVar12) ^ PF_PART8(auVar3, 0));
  }
  return dVar12;
}
