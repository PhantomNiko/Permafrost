#include "functions.h"
#undef DAT_00006124
#define DAT_00006124 (*(uint8_t *)(0x6124U))
#undef DAT_00006128
#define DAT_00006128 (*(uint8_t *)(0x6128U))
#undef DAT_0000612c
#define DAT_0000612c (*(uint8_t *)(0x612cU))
#undef DAT_021045e0
#define DAT_021045e0 (*(uint32_t volatile *)(0x21045e0U))
#undef DAT_021045e4
#define DAT_021045e4 (*(uint32_t volatile *)(0x21045e4U))
#undef DAT_021045e8
#define DAT_021045e8 (*(uint32_t volatile *)(0x21045e8U))
#undef _DAT_00006124
#define _DAT_00006124 (*(uint *)(0x6124U))
#undef _DAT_00006128
#define _DAT_00006128 (*(uint *)(0x6128U))
#undef _DAT_0000612c
#define _DAT_0000612c (*(uint *)(0x612cU))
#define local_38 (*(uint *)(frame + 24))
#define local_34 (*(uint *)(frame + 28))
#define local_30 (*(uint *)(frame + 32))
#define local_2c (*(uint *)(frame + 36))
#define local_24 (*(uint *)(frame + 44))
#define local_1c (*(uint *)(frame + 52))
#define local_18 (*(uint *)(frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20091e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_20091e0(uint pointer,uint size,uint *out)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined4 unaff_EBX = 0;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;

  bVar7 = out != (uint *)0x0 && (size != 0 && pointer != 0);
  uVar5 = CONCAT31((int3)((uint)unaff_EBX >> 8),bVar7);
  if (out != (uint *)0x0 && (size != 0 && pointer != 0)) {
    uVar1 = DAT_021045e0;
    iVar2 = DAT_021045e0;
    DAT_021045e0 = iVar2 + 1;
    uVar1 = DAT_021045e0;
    uVar1 = DAT_021045e0;
    uVar1 = DAT_021045e0;
    if (_DAT_00006124 == 0) {
      local_24 = 0;
      local_30 = pointer;
LAB_020093b2:
      DAT_021045e4 = pointer;
      DAT_021045e8 = local_30;
      pointer = local_30;
    }
    else {
      local_30 = 0;
      uVar3 = _DAT_00006124;
      if (0xf < _DAT_00006124) {
        uVar3 = 0x10;
      }
      local_24 = 0;
      bVar13 = false;
      local_38 = 0;
      local_34 = 0;
      uVar9 = 0;
      local_18 = 0;
      local_1c = pointer;
      do {
        if (size == 0 && uVar9 == 0) goto LAB_020093b2;
        uVar10 = local_1c - _DAT_00006128;
        uVar5 = local_18 - (local_1c < _DAT_00006128);
        uVar4 = 0;
        if (((_DAT_0000612c == 0) || (local_18 < (local_1c < _DAT_00006128))) ||
           ((uVar10 < _DAT_0000612c) <= uVar5)) {
          puVar6 = &DAT_00006128;
          do {
            if (uVar3 - 1 == uVar4) {
              local_24 = 0;
              uVar5 = (uint)bVar7;
              goto LAB_020093bf;
            }
            puVar11 = puVar6 + 0x10;
            uVar12 = *(uint *)(puVar6 + 0x10);
            local_2c = *(uint *)(puVar6 + 0x14);
            uVar10 = local_1c - uVar12;
            uVar5 = local_18 - (local_1c < uVar12);
            uVar4 = uVar4 + 1;
            puVar6 = puVar11;
          } while (((local_2c == 0) || (local_18 < (local_1c < uVar12))) ||
                  ((uVar10 < local_2c) <= uVar5));
          bVar14 = uVar4 < uVar3;
        }
        else {
          puVar11 = &DAT_00006128;
          bVar14 = true;
          local_2c = _DAT_0000612c;
        }
        uVar4 = *(uint *)(puVar11 + 8) + uVar10;
        uVar12 = *(int *)(puVar11 + 0xc) + uVar5 + (uint)CARRY4(*(uint *)(puVar11 + 8),uVar10);
        if ((bool)(bVar13 & (local_34 != uVar12 || local_38 != uVar4))) break;
        if (!bVar13) {
          local_24 = uVar12;
          local_30 = uVar4;
        }
        uVar5 = -(uint)(local_2c < uVar10) - uVar5;
        uVar8 = local_2c - uVar10;
        if (uVar9 <= uVar5 && (uint)(local_2c - uVar10 < size) <= uVar5 - uVar9) {
          uVar5 = uVar9;
          uVar8 = size;
        }
        local_38 = uVar4 + uVar8;
        local_34 = uVar12 + uVar5 + (uint)CARRY4(uVar4,uVar8);
        bVar13 = CARRY4(local_1c,uVar8);
        local_1c = local_1c + uVar8;
        local_18 = local_18 + uVar5 + (uint)bVar13;
        bVar13 = size < uVar8;
        size = size - uVar8;
        uVar9 = (uVar9 - uVar5) - (uint)bVar13;
        bVar13 = true;
        uVar5 = (uint)bVar7;
      } while (bVar14);
      uVar5 = (uint)bVar7;
      local_24 = 0;
    }
LAB_020093bf:
    *out = pointer;
    out[1] = local_24;
  }
  return uVar5;
}
