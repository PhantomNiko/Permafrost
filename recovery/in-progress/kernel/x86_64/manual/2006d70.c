/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_00006128 (*(uint8_t *)(0x6128U))
#define _DAT_00006124 (*(uint *)(0x6124U))
#define _DAT_00006128 (*(uint *)(0x6128U))
#define _DAT_0000612c (*(uint *)(0x612cU))
#define local_40 (*(undefined1 (*)[16])(frame + 16))
uchar recovered_2006d70(uint param_1,ulong param_2,ulong param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte bVar1;
  bool bVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  bool bVar16;
  bool bVar17;

  if (param_2 == 0) {
    return '\0';
  }
  if (_DAT_00006124 != 0) {
    uVar5 = 0x10;
    if (_DAT_00006124 < 0x10) {
      uVar5 = (ulong)_DAT_00006124;
    }
    uVar7 = 0x1c;
    bVar1 = 0;
    lVar15 = 0;
    while (uVar7 != 0) {
      uVar9 = (ulong)_DAT_0000612c;
      if (((uVar9 == 0) || (param_2 < _DAT_00006128)) ||
         (uVar8 = param_2 - _DAT_00006128, uVar9 <= uVar8)) {
        uVar13 = 0;
        puVar14 = &DAT_00006128;
        do {
          do {
            do {
              puVar3 = puVar14;
              if (uVar5 - 1 == uVar13) goto code_r0x02004344;
              puVar14 = puVar3 + 0x10;
              uVar9 = (ulong)*(uint *)(puVar3 + 0x14);
              uVar13 = uVar13 + 1;
            } while (uVar9 == 0);
          } while (param_2 < *(uint *)(puVar3 + 0x10));
          uVar8 = param_2 - *(uint *)(puVar3 + 0x10);
        } while (uVar9 <= uVar8);
        bVar17 = uVar13 < uVar5;
      }
      else {
        puVar14 = &DAT_00006128;
        bVar17 = true;
      }
      if ((bool)(bVar1 & lVar15 != *(long *)(puVar14 + 8) + uVar8)) break;
      uVar13 = uVar9 - uVar8;
      if (uVar7 <= uVar9 - uVar8) {
        uVar13 = uVar7;
      }
      lVar15 = *(long *)(puVar14 + 8) + uVar8 + uVar13;
      param_2 = param_2 + uVar13;
      uVar7 = uVar7 - uVar13;
      bVar1 = 1;
      if (!bVar17) break;
    }
  }
code_r0x02004344:
  uVar5 = 0x10;
  recovered_2002110(local_40,0,0x10);
  uVar6 = (param_1 & 0xffff | (param_1 & 0xff) << 0x10) >> 8 | 0x18000000;
  bVar17 = true;
  puVar14 = local_40;
  if (_DAT_00006124 != 0) {
    puVar3 = local_40;
    uVar7 = 0x10;
    if (_DAT_00006124 < 0x10) {
      uVar7 = (ulong)_DAT_00006124;
    }
    puVar14 = (undefined1 *)0x0;
    bVar2 = false;
    puVar12 = (undefined1 *)0x0;
    do {
      bVar17 = uVar5 == 0;
      if (bVar17) goto LAB_02004479;
      uVar9 = (ulong)_DAT_0000612c;
      if (((uVar9 == 0) || (puVar3 < (undefined1 *)(ulong)_DAT_00006128)) ||
         (uVar8 = (long)puVar3 - (long)(ulong)_DAT_00006128, uVar9 <= uVar8)) {
        uVar13 = 0;
        puVar10 = &DAT_00006128;
        do {
          do {
            do {
              puVar11 = puVar10;
              if (uVar7 - 1 == uVar13) {
                puVar14 = (undefined1 *)0x0;
                bVar17 = false;
                goto LAB_02004479;
              }
              puVar10 = puVar11 + 0x10;
              uVar9 = (ulong)*(uint *)(puVar11 + 0x14);
              uVar13 = uVar13 + 1;
            } while (uVar9 == 0);
          } while (puVar3 < (undefined1 *)(ulong)*(uint *)(puVar11 + 0x10));
          uVar8 = (long)puVar3 - (long)(ulong)*(uint *)(puVar11 + 0x10);
        } while (uVar9 <= uVar8);
        bVar16 = uVar13 < uVar7;
      }
      else {
        puVar10 = &DAT_00006128;
        bVar16 = true;
      }
      puVar10 = (undefined1 *)(*(long *)(puVar10 + 8) + uVar8);
      if ((bool)(bVar2 & puVar12 != puVar10)) break;
      if (!bVar2) {
        puVar14 = puVar10;
      }
      uVar13 = uVar9 - uVar8;
      if (uVar5 <= uVar9 - uVar8) {
        uVar13 = uVar5;
      }
      puVar12 = puVar10 + uVar13;
      puVar3 = puVar3 + uVar13;
      uVar5 = uVar5 - uVar13;
      bVar2 = true;
    } while (bVar16);
    puVar14 = (undefined1 *)0x0;
  }
LAB_02004479:
  if (puVar14 == (undefined1 *)0x0) {
    puVar14 = local_40;
  }
  if (!bVar17) {
    puVar14 = local_40;
  }
  out(0x514,(int)((ulong)puVar14 >> 0x20));
  out(0x514,(int)puVar14);
  bVar17 = true;
  if (uVar6 != 0) {
    uVar4 = 1;
    while (uVar6 != 0) {
      bVar17 = uVar4 < 999999;
      if ((uVar4 == 999999) || (uVar4 = uVar4 + 2, uVar6 == 0)) goto LAB_020044ef;
    }
    bVar17 = true;
  }
LAB_020044ef:
  return bVar17;
}
