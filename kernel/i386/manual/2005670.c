/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_00006128 (*(uint8_t *)(0x6128U))
#define _DAT_00006124 (*(uint *)(0x6124U))
#define _DAT_00006128 (*(uint8_t * *)(0x6128U))
#define _DAT_0000612c (*(uint *)(0x612cU))
#define local_14 (*(undefined1 * *)(frame + 92))
#define local_18 (*(undefined1 * *)(frame + 88))
#define local_1c (*(uint *)(frame + 84))
#define local_20 (*(uint *)(frame + 80))
#define local_24 (*(uint *)(frame + 76))
#define local_28 (*(undefined1 * *)(frame + 72))
#define local_2c (*(undefined4 *)(frame + 68))
#define local_30 (*(undefined1 * *)(frame + 64))
#define local_34 (*(undefined1 * *)(frame + 60))
#define local_38 (*(uint *)(frame + 56))
#define local_3c (*(bool *)(frame + 52))
#define local_40 (*(uint *)(frame + 48))
#define local_44 (*(uint *)(frame + 44))
#define local_48 (*(uint *)(frame + 40))
#define local_4c (*(uint *)(frame + 36))
#define local_5c (*(undefined1 (*)[16])(frame + 20))
#define uStack_3b (*(undefined3 *)(frame + 53))
uint recovered_2005670(uint incoming_ecx,undefined1 *incoming_edx)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined3 uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;

  uVar9 = 0;
  if (incoming_edx != (undefined1 *)0x0) {
    if (_DAT_00006124 == 0) {
      uVar4 = 1;
      puVar12 = incoming_edx;
    }
    else {
      local_30 = (undefined1 *)0x0;
      uVar1 = _DAT_00006124;
      if (0xf < _DAT_00006124) {
        uVar1 = 0x10;
      }
      local_4c = uVar1 - 1;
      local_28 = (undefined1 *)0x0;
      local_14 = (undefined1 *)0x0;
      uVar5 = 0;
      uVar14 = 0;
      uVar6 = 0;
      uVar9 = 0;
      uVar13 = 0x1c;
      local_18 = incoming_edx;
      do {
        local_40 = uVar14;
        local_20 = uVar5;
        bVar19 = uVar13 == 0 && uVar6 == 0;
        uVar4 = CONCAT31((int3)(local_40 >> 8),bVar19);
        if (bVar19) {
          puVar12 = local_30;
          goto LAB_020044bb;
        }
        uVar14 = (int)local_18 - (int)_DAT_00006128;
        uVar7 = (int)local_14 - (uint)(local_18 < _DAT_00006128);
        uVar5 = 0;
        local_24 = uVar9;
        local_48 = uVar13;
        local_44 = uVar6;
        local_2c = uVar4;
        if (((_DAT_0000612c == 0) || (local_14 < (uint)(local_18 < _DAT_00006128))) ||
           ((uVar14 < _DAT_0000612c) <= uVar7)) {
          puVar12 = &DAT_00006128;
          do {
            if (local_4c == uVar5) {
              uVar4 = 0;
              uVar9 = 0;
              puVar12 = (undefined1 *)0x0;
              goto LAB_020044bb;
            }
            puVar10 = puVar12 + 0x10;
            puVar15 = *(undefined1 **)(puVar12 + 0x10);
            local_1c = *(uint *)(puVar12 + 0x14);
            uVar14 = (int)local_18 - (int)puVar15;
            uVar7 = (int)local_14 - (uint)(local_18 < puVar15);
            uVar5 = uVar5 + 1;
            puVar12 = puVar10;
          } while (((local_1c == 0) || (local_14 < (uint)(local_18 < puVar15))) ||
                  ((uVar14 < local_1c) <= uVar7));
          (*(uint64_t *)(void *)&local_3c) = CONCAT31(uStack_3b,uVar5 < uVar1);
        }
        else {
          local_1c = _DAT_0000612c;
          puVar10 = &DAT_00006128;
          (*(uint64_t *)(void *)&local_3c) = CONCAT31(uStack_3b,1);
        }
        puVar12 = (undefined1 *)(*(uint *)(puVar10 + 8) + uVar14);
        uVar9 = *(int *)(puVar10 + 0xc) + uVar7 + (uint)CARRY4(*(uint *)(puVar10 + 8),uVar14);
        puVar10 = (undefined1 *)((uint)local_28 ^ (uint)puVar12);
        if (((byte)local_20 & (local_40 != uVar9 || puVar10 != (undefined1 *)0x0)) != 0) break;
        if ((local_20 & 1) == 0) {
          local_30 = puVar12;
          local_24 = uVar9;
        }
        bVar19 = local_1c < uVar14;
        local_1c = local_1c - uVar14;
        uVar7 = -(uint)bVar19 - uVar7;
        uVar2 = local_1c;
        if (uVar6 <= uVar7 && (uint)(local_1c < uVar13) <= uVar7 - uVar6) {
          uVar2 = uVar13;
          uVar7 = uVar6;
        }
        local_28 = puVar12 + uVar2;
        bVar19 = CARRY4((uint)local_18,uVar2);
        local_18 = local_18 + uVar2;
        local_14 = (undefined1 *)((int)local_14 + uVar7 + (uint)bVar19);
        uVar5 = CONCAT31((int3)(uVar2 >> 8),1);
        uVar14 = uVar9 + uVar7 + (uint)CARRY4((uint)puVar12,uVar2);
        uVar6 = (uVar6 - uVar7) - (uint)(uVar13 < uVar2);
        uVar9 = local_24;
        uVar13 = uVar13 - uVar2;
      } while (local_3c != false);
      uVar9 = 0;
      puVar12 = (undefined1 *)0x0;
      local_28 = puVar10;
    }
LAB_020044bb:
    if (((byte)uVar4 & (puVar12 != (undefined1 *)0x0 || uVar9 != 0)) == 0) {
      uVar9 = 0;
    }
    puVar12 = local_5c;
    local_38 = incoming_ecx;
    local_34 = incoming_edx;
    recovered_2001e00(puVar12,0,0x10);
    uVar1 = (local_38 & 0xffff | (local_38 & 0xff) << 0x10) >> 8 | 0x18000000;
    puVar10 = (undefined1 *)((uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18);
    if (_DAT_00006124 == 0) {
      bVar19 = true;
      local_24 = 0;
    }
    else {
      local_28 = (undefined1 *)0x0;
      uVar5 = 0x10;
      uVar9 = _DAT_00006124;
      if (0xf < _DAT_00006124) {
        uVar9 = 0x10;
      }
      local_18 = local_5c;
      local_24 = 0;
      bVar17 = false;
      puVar15 = (undefined1 *)0x0;
      puVar12 = (undefined1 *)0x0;
      puVar10 = (undefined1 *)0x0;
      local_14 = (undefined1 *)0x0;
      do {
        bVar19 = uVar5 == 0 && puVar10 == (undefined1 *)0x0;
        if (bVar19) {
          puVar12 = local_28;
          goto LAB_020046ad;
        }
        uVar13 = (int)local_18 - (int)_DAT_00006128;
        uVar6 = (int)local_14 - (uint)(local_18 < _DAT_00006128);
        uVar14 = 0;
        if (((_DAT_0000612c == 0) || (local_14 < (undefined1 *)(uint)(local_18 < _DAT_00006128))) ||
           ((uVar13 < _DAT_0000612c) <= uVar6)) {
          puVar3 = puVar10;
          puVar16 = &DAT_00006128;
          do {
            if (uVar9 - 1 == uVar14) {
              local_24 = 0;
              bVar19 = false;
              puVar10 = puVar3;
              puVar12 = (undefined1 *)0x0;
              goto LAB_020046ad;
            }
            puVar8 = puVar16 + 0x10;
            puVar3 = *(undefined1 **)(puVar16 + 0x10);
            local_1c = *(uint *)(puVar16 + 0x14);
            uVar13 = (int)local_18 - (int)puVar3;
            uVar6 = (int)local_14 - (uint)(local_18 < puVar3);
            uVar14 = uVar14 + 1;
            puVar16 = puVar8;
          } while (((local_1c == 0) || (local_14 < (undefined1 *)(uint)(local_18 < puVar3))) ||
                  ((uVar13 < local_1c) <= uVar6));
          bVar18 = uVar14 < uVar9;
        }
        else {
          local_1c = _DAT_0000612c;
          puVar8 = &DAT_00006128;
          bVar18 = true;
        }
        puVar16 = (undefined1 *)(*(uint *)(puVar8 + 8) + uVar13);
        uVar14 = *(int *)(puVar8 + 0xc) + uVar6 + (uint)CARRY4(*(uint *)(puVar8 + 8),uVar13);
        uVar7 = (uint)puVar12 ^ uVar14 | (uint)puVar15 ^ (uint)puVar16;
        puVar3 = (undefined1 *)CONCAT31((int3)(uVar7 >> 8),uVar7 != 0);
        if ((bool)(bVar17 & uVar7 != 0)) break;
        if (!bVar17) {
          local_28 = puVar16;
          local_24 = uVar14;
        }
        puVar3 = (undefined1 *)(-(uint)(local_1c < uVar13) - uVar6);
        uVar6 = local_1c - uVar13;
        if (puVar10 <= puVar3 &&
            (uint)(local_1c - uVar13 < uVar5) <= (uint)((int)puVar3 - (int)puVar10)) {
          puVar3 = puVar10;
          uVar6 = uVar5;
        }
        puVar15 = puVar16 + uVar6;
        puVar12 = puVar3 + CARRY4((uint)puVar16,uVar6) + uVar14;
        bVar17 = CARRY4((uint)local_18,uVar6);
        local_18 = local_18 + uVar6;
        local_14 = puVar3 + (int)(local_14 + bVar17);
        bVar17 = uVar5 < uVar6;
        uVar5 = uVar5 - uVar6;
        puVar10 = puVar10 + (-(uint)bVar17 - (int)puVar3);
        bVar17 = true;
        puVar3 = puVar10;
      } while (bVar18);
      local_24 = 0;
      puVar10 = puVar3;
      puVar12 = (undefined1 *)0x0;
    }
LAB_020046ad:
    if (!(bool)(bVar19 & (puVar12 != (undefined1 *)0x0 || local_24 != 0))) {
      local_24 = 0;
      puVar12 = local_5c;
    }
    out(0x514,local_24);
    out(0x514,puVar12);
    uVar9 = CONCAT31((int3)((uint)puVar10 >> 8),1);
    if (uVar1 != 0) {
      uVar5 = 0;
      do {
        bVar19 = uVar5 < 999999;
        uVar11 = (undefined3)(uVar9 >> 8);
        uVar9 = CONCAT31(uVar11,bVar19);
        if (uVar5 == 999999) goto LAB_020046f2;
        uVar5 = uVar5 + 1;
      } while (uVar1 != 0);
      uVar5 = 1;
LAB_020046f2:
      uVar9 = CONCAT31(uVar11,bVar19 & (byte)uVar5);
    }
  }
  return uVar9;
}
