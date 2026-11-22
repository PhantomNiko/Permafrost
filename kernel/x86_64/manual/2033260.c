/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_2033260(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  bool bVar20;

  uVar12 = (ulong)*(uint *)(param_1 + 0x80);
  uVar16 = *(ulong *)(param_1 + 0x10);
  uVar19 = (ulong)*(ushort *)(param_1 + 0xb2);
  if (*(short *)(param_1 + 0xb0) == 0) {
    if (uVar16 < uVar12) {
      return '\0';
    }
    if (uVar16 - uVar12 < uVar19 * 2 + 2) {
      return '\0';
    }
    uVar16 = uVar19 + 1;
    uVar12 = *(ulong *)(param_1 + 0xc0);
    if (uVar16 < uVar12) {
LAB_02028c38:
      *(ulong *)(param_1 + 0xc0) = uVar16;
      uVar12 = uVar16;
    }
    else if (uVar12 <= uVar19) {
      if (*(ulong *)(param_1 + 200) <= uVar19) {
        pvVar10 = recovered_201cb00((ulong)(uint)((int)uVar16 * 4));
        pvVar6 = *(void **)(param_1 + 0xb8);
        uVar12 = *(ulong *)(param_1 + 0xc0);
        if (uVar12 != 0) {
          uVar13 = 0;
          if ((7 < uVar12) && (0x1f < (ulong)((long)pvVar10 - (long)pvVar6))) {
            uVar13 = uVar12 & 0xfffffffffffffff8;
            uVar15 = 0;
            do {
              puVar1 = (undefined8 *)((long)pvVar6 + uVar15 * 4);
              uVar7 = puVar1[1];
              puVar3 = (undefined8 *)((long)pvVar6 + uVar15 * 4 + 0x10);
              uVar8 = *puVar3;
              uVar9 = puVar3[1];
              puVar3 = (undefined8 *)((long)pvVar10 + uVar15 * 4);
              *puVar3 = *puVar1;
              puVar3[1] = uVar7;
              puVar1 = (undefined8 *)((long)pvVar10 + uVar15 * 4 + 0x10);
              *puVar1 = uVar8;
              puVar1[1] = uVar9;
              uVar15 = uVar15 + 8;
            } while (uVar13 != uVar15);
            if (uVar12 == uVar13) goto LAB_02028e70;
          }
          uVar17 = uVar12 & 3;
          uVar15 = uVar13;
          if (uVar17 != 0) {
            do {
              *(undefined4 *)((long)pvVar10 + uVar15 * 4) =
                   *(undefined4 *)((long)pvVar6 + uVar15 * 4);
              uVar15 = uVar15 + 1;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          if (uVar13 - uVar12 < 0xfffffffffffffffd) {
            do {
              *(undefined4 *)((long)pvVar10 + uVar15 * 4) =
                   *(undefined4 *)((long)pvVar6 + uVar15 * 4);
              *(undefined4 *)((long)pvVar10 + uVar15 * 4 + 4) =
                   *(undefined4 *)((long)pvVar6 + uVar15 * 4 + 4);
              *(undefined4 *)((long)pvVar10 + uVar15 * 4 + 8) =
                   *(undefined4 *)((long)pvVar6 + uVar15 * 4 + 8);
              *(undefined4 *)((long)pvVar10 + uVar15 * 4 + 0xc) =
                   *(undefined4 *)((long)pvVar6 + uVar15 * 4 + 0xc);
              uVar15 = uVar15 + 4;
            } while (uVar12 != uVar15);
          }
        }
LAB_02028e70:
        recovered_201cb60(pvVar6);
        *(void **)(param_1 + 0xb8) = pvVar10;
        *(ulong *)(param_1 + 200) = uVar16;
        uVar12 = *(ulong *)(param_1 + 0xc0);
      }
      if (uVar12 <= uVar19) {
        lVar11 = *(long *)(param_1 + 0xb8);
        uVar19 = (uVar19 - uVar12) + 1;
        if (7 < uVar19) {
          uVar13 = uVar19 & 0xfffffffffffffff8;
          lVar2 = lVar11 + uVar12 * 4;
          uVar12 = uVar12 + uVar13;
          uVar15 = 0;
          do {
            puVar1 = (undefined8 *)(lVar2 + uVar15 * 4);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar15 * 4);
            *puVar1 = 0;
            puVar1[1] = 0;
            uVar15 = uVar15 + 8;
          } while (uVar13 != uVar15);
          if (uVar19 == uVar13) goto LAB_02028c38;
        }
        do {
          *(undefined4 *)(lVar11 + uVar12 * 4) = 0;
          uVar12 = uVar12 + 1;
        } while (uVar16 != uVar12);
        goto LAB_02028c38;
      }
    }
    lVar11 = *(long *)(param_1 + 8);
    lVar2 = *(long *)(param_1 + 0xb8);
    if (uVar12 == 1) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        lVar18 = (ulong)*(uint *)(param_1 + 0x80) + lVar11;
        *(uint *)(lVar2 + uVar16 * 4) =
             (uint)*(byte *)(lVar18 + uVar16 * 2) * 0x200 +
             (uint)*(byte *)(lVar18 + 1 + uVar16 * 2) * 2;
        lVar18 = (ulong)*(uint *)(param_1 + 0x80) + lVar11;
        *(uint *)(lVar2 + 4 + uVar16 * 4) =
             (uint)*(byte *)(lVar18 + 2 + uVar16 * 2) * 0x200 +
             (uint)*(byte *)(lVar18 + 3 + uVar16 * 2) * 2;
        uVar16 = uVar16 + 2;
      } while ((uVar12 & 0xfffffffffffffffe) != uVar16);
    }
    if ((uVar12 & 1) != 0) {
      lVar11 = lVar11 + uVar16 * 2;
      *(uint *)(lVar2 + uVar16 * 4) =
           (uint)*(byte *)((ulong)*(uint *)(param_1 + 0x80) + lVar11) * 0x200 +
           (uint)*(byte *)((ulong)*(uint *)(param_1 + 0x80) + 1 + lVar11) * 2;
    }
    goto LAB_02028f32;
  }
  if (uVar16 < uVar12) {
    return '\0';
  }
  if (uVar16 - uVar12 < uVar19 * 4 + 4) {
    return '\0';
  }
  uVar16 = uVar19 + 1;
  uVar12 = *(ulong *)(param_1 + 0xc0);
  if (uVar16 < uVar12) {
LAB_02028bfc:
    *(ulong *)(param_1 + 0xc0) = uVar16;
    uVar12 = uVar16;
  }
  else if (uVar12 <= uVar19) {
    if (*(ulong *)(param_1 + 200) <= uVar19) {
      pvVar10 = recovered_201cb00((ulong)(uint)((int)uVar16 * 4));
      pvVar6 = *(void **)(param_1 + 0xb8);
      uVar12 = *(ulong *)(param_1 + 0xc0);
      if (uVar12 != 0) {
        uVar13 = 0;
        if ((7 < uVar12) && (0x1f < (ulong)((long)pvVar10 - (long)pvVar6))) {
          uVar13 = uVar12 & 0xfffffffffffffff8;
          uVar15 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar6 + uVar15 * 4);
            uVar7 = puVar1[1];
            puVar3 = (undefined8 *)((long)pvVar6 + uVar15 * 4 + 0x10);
            uVar8 = *puVar3;
            uVar9 = puVar3[1];
            puVar3 = (undefined8 *)((long)pvVar10 + uVar15 * 4);
            *puVar3 = *puVar1;
            puVar3[1] = uVar7;
            puVar1 = (undefined8 *)((long)pvVar10 + uVar15 * 4 + 0x10);
            *puVar1 = uVar8;
            puVar1[1] = uVar9;
            uVar15 = uVar15 + 8;
          } while (uVar13 != uVar15);
          if (uVar12 == uVar13) goto LAB_02028d27;
        }
        uVar17 = uVar12 & 3;
        uVar15 = uVar13;
        if (uVar17 != 0) {
          do {
            *(undefined4 *)((long)pvVar10 + uVar15 * 4) = *(undefined4 *)((long)pvVar6 + uVar15 * 4)
            ;
            uVar15 = uVar15 + 1;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        if (uVar13 - uVar12 < 0xfffffffffffffffd) {
          do {
            *(undefined4 *)((long)pvVar10 + uVar15 * 4) = *(undefined4 *)((long)pvVar6 + uVar15 * 4)
            ;
            *(undefined4 *)((long)pvVar10 + uVar15 * 4 + 4) =
                 *(undefined4 *)((long)pvVar6 + uVar15 * 4 + 4);
            *(undefined4 *)((long)pvVar10 + uVar15 * 4 + 8) =
                 *(undefined4 *)((long)pvVar6 + uVar15 * 4 + 8);
            *(undefined4 *)((long)pvVar10 + uVar15 * 4 + 0xc) =
                 *(undefined4 *)((long)pvVar6 + uVar15 * 4 + 0xc);
            uVar15 = uVar15 + 4;
          } while (uVar12 != uVar15);
        }
      }
LAB_02028d27:
      recovered_201cb60(pvVar6);
      *(void **)(param_1 + 0xb8) = pvVar10;
      *(ulong *)(param_1 + 200) = uVar16;
      uVar12 = *(ulong *)(param_1 + 0xc0);
    }
    if (uVar12 <= uVar19) {
      lVar11 = *(long *)(param_1 + 0xb8);
      uVar19 = (uVar19 - uVar12) + 1;
      if (7 < uVar19) {
        uVar13 = uVar19 & 0xfffffffffffffff8;
        lVar2 = lVar11 + uVar12 * 4;
        uVar12 = uVar12 + uVar13;
        uVar15 = 0;
        do {
          puVar1 = (undefined8 *)(lVar2 + uVar15 * 4);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar2 + 0x10 + uVar15 * 4);
          *puVar1 = 0;
          puVar1[1] = 0;
          uVar15 = uVar15 + 8;
        } while (uVar13 != uVar15);
        if (uVar19 == uVar13) goto LAB_02028bfc;
      }
      do {
        *(undefined4 *)(lVar11 + uVar12 * 4) = 0;
        uVar12 = uVar12 + 1;
      } while (uVar16 != uVar12);
      goto LAB_02028bfc;
    }
  }
  puVar14 = *(uint **)(param_1 + 0xb8);
  lVar11 = *(long *)(param_1 + 8) + 3;
  uVar16 = uVar12;
  do {
    uVar4 = *(uint *)(lVar11 + -3 + (ulong)*(uint *)(param_1 + 0x80));
    *puVar14 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    lVar11 = lVar11 + 4;
    puVar14 = puVar14 + 1;
    uVar16 = uVar16 - 1;
  } while (uVar16 != 0);
LAB_02028f32:
  uVar4 = *(uint *)(param_1 + 0x7c);
  lVar11 = 0;
  do {
    uVar5 = *(uint *)(*(long *)(param_1 + 0xb8) + lVar11);
    if (uVar4 < uVar5) {
      return uVar5 <= uVar4;
    }
    bVar20 = uVar12 * 4 + -4 != lVar11;
    lVar11 = lVar11 + 4;
  } while (bVar20);
  return uVar5 <= uVar4;
}
