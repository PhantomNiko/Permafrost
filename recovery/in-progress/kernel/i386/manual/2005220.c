/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_00006128 (*(uint8_t *)(0x6128U))
#define DAT_02098a58 (*(uint32_t volatile *)(0x20e3c10U))
#define DAT_02098a5c (*(uint32_t volatile *)(0x20e3c14U))
#define DAT_02098a60 (*(uint32_t volatile *)(0x20e3c18U))
#define DAT_02098a64 (*(uint32_t volatile *)(0x20e3c1cU))
#define DAT_02098a68 (*(uint32_t volatile *)(0x20e3c20U))
#define DAT_02098a6c (*(uint32_t volatile *)(0x20e3c24U))
#define Ram02098a70 (*(uint32_t volatile *)(0x20e3c28U))
#define Ram02098a74 (*(uint32_t volatile *)(0x20e3c2cU))
#define Ram02098a78 (*(uint32_t volatile *)(0x20e3c30U))
#define Ram02098a7c (*(uint32_t volatile *)(0x20e3c34U))
#define Ram02098a80 (*(uint32_t volatile *)(0x20e3c38U))
#define Ram02098a84 (*(uint32_t volatile *)(0x20e3c3cU))
#define _DAT_00006124 (*(uint *)(0x6124U))
#define _DAT_00006128 (*(uint *)(0x6128U))
#define _DAT_0000612c (*(uint *)(0x612cU))
#define local_11 (*(bool *)(frame + 175))
#define local_18 (*(uint *)(frame + 168))
#define local_1c (*(uint *)(frame + 164))
#define local_20 (*(uint *)(frame + 160))
#define local_24 (*(uint *)(frame + 156))
#define local_28 (*(uint *)(frame + 152))
#define local_2c (*(uint *)(frame + 148))
#define local_30 (*(uint *)(frame + 144))
#define local_31 (*(undefined1 *)(frame + 143))
#define local_32 (*(undefined1 *)(frame + 142))
#define local_33 (*(undefined1 *)(frame + 141))
#define local_34 (*(undefined1 *)(frame + 140))
#define local_35 (*(undefined1 *)(frame + 139))
#define local_36 (*(undefined1 *)(frame + 138))
#define local_37 (*(undefined1 *)(frame + 137))
#define local_38 (*(undefined1 *)(frame + 136))
#define local_39 (*(undefined1 *)(frame + 135))
#define local_3a (*(undefined1 *)(frame + 134))
#define local_3b (*(undefined1 *)(frame + 133))
#define local_3c (*(undefined1 *)(frame + 132))
#define local_40 (*(undefined4 *)(frame + 128))
#define local_44 (*(undefined4 *)(frame + 124))
#define local_45 (*(undefined1 *)(frame + 123))
#define local_46 (*(undefined1 *)(frame + 122))
#define local_47 (*(undefined1 *)(frame + 121))
#define local_48 (*(undefined1 *)(frame + 120))
#define local_49 (*(undefined1 *)(frame + 119))
#define local_4a (*(undefined1 *)(frame + 118))
#define local_4b (*(undefined1 *)(frame + 117))
#define local_4c (*(undefined1 *)(frame + 116))
#define local_50 (*(uint *)(frame + 112))
#define local_54 (*(uint *)(frame + 108))
#define local_5c (*(undefined8 *)(frame + 100))
#define local_60 (*(uint *)(frame + 96))
#define local_64 (*(uint *)(frame + 92))
#define local_9c (*(char (*)[56])(frame + 36))
#define local_a0 (*(ushort *)(frame + 32))
#define str_0208e306 (*(char (*)[1])(0x20c50aeU))
undefined4 recovered_2005220(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 extraout_ECX = 0;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;

  if (((param_4 != 0 && (param_3 != 0 && (param_1 != 0 || param_2 != 0))) &&
      (param_3 * 4 <= param_5 && param_3 < 0x40000000)) &&
     (lVar2 = (ulonglong)param_5 * (ulonglong)param_4, uVar11 = (uint)((ulonglong)lVar2 >> 0x20),
     uVar11 == 0 && ((int)lVar2 == 0) <= uVar11)) {
    if (_DAT_00006124 == 0) {
      local_28 = param_2;
      local_24 = param_1;
    }
    else {
      local_54 = _DAT_00006124;
      if (0xf < _DAT_00006124) {
        local_54 = 0x10;
      }
      local_24 = 0;
      local_28 = 0;
      local_50 = 0;
      local_1c = param_1;
      local_18 = param_2;
      local_64 = 0;
      uVar11 = 0;
      while( true ) {
        lVar3 = lVar2;
        uVar18 = uVar11;
        if (lVar3 == 0) break;
        uVar15 = local_1c - _DAT_00006128;
        uVar13 = local_18 - (local_1c < _DAT_00006128);
        uVar11 = 0;
        if (((_DAT_0000612c == 0) || (local_18 < (local_1c < _DAT_00006128))) ||
           ((uVar15 < _DAT_0000612c) <= uVar13)) {
          puVar12 = &DAT_00006128;
          do {
            if (local_54 - 1 == uVar11) {
              return 0;
            }
            puVar16 = puVar12 + 0x10;
            uVar17 = *(uint *)(puVar12 + 0x10);
            local_20 = *(uint *)(puVar12 + 0x14);
            uVar15 = local_1c - uVar17;
            uVar13 = local_18 - (local_1c < uVar17);
            uVar11 = uVar11 + 1;
            puVar12 = puVar16;
          } while (((local_20 == 0) || (local_18 < (local_1c < uVar17))) ||
                  ((uVar15 < local_20) <= uVar13));
          local_11 = uVar11 < local_54;
        }
        else {
          local_20 = _DAT_0000612c;
          puVar16 = &DAT_00006128;
          local_11 = true;
        }
        uVar11 = *(uint *)(puVar16 + 8) + uVar15;
        uVar17 = *(int *)(puVar16 + 0xc) + uVar13 + (uint)CARRY4(*(uint *)(puVar16 + 8),uVar15);
        if (((byte)local_50 & (local_64 != uVar17 || uVar18 != uVar11)) != 0) {
          return 0;
        }
        if ((local_50 & 1) == 0) {
          local_28 = uVar17;
          local_24 = uVar11;
        }
        uVar13 = -(uint)(local_20 < uVar15) - uVar13;
        PF_PART4(local_5c, 0) = (uint)lVar3;
        PF_PART4(local_5c, 4) = (uint)((ulonglong)lVar3 >> 0x20);
        uVar1 = (uint)(local_20 - uVar15 < (uint)local_5c);
        uVar9 = uVar13;
        uVar15 = local_20 - uVar15;
        if (PF_PART4(local_5c, 4) <= uVar13 && uVar1 <= uVar13 - PF_PART4(local_5c, 4)) {
          uVar9 = PF_PART4(local_5c, 4);
          uVar15 = (uint)local_5c;
        }
        local_30 = uVar11 + uVar15;
        local_64 = uVar17 + uVar9 + (uint)CARRY4(uVar11,uVar15);
        bVar19 = CARRY4(local_1c,uVar15);
        local_1c = local_1c + uVar15;
        local_18 = local_18 + uVar9 + (uint)bVar19;
        local_50 = CONCAT31((int3)((uVar13 - PF_PART4(local_5c, 4)) - uVar1 >> 8),1);
        uVar11 = local_30;
        lVar2 = CONCAT44((PF_PART4(local_5c, 4) - uVar9) - (uint)((uint)local_5c < uVar15),
                         (uint)local_5c - uVar15);
        local_60 = uVar18;
        local_5c = lVar3;
        if (local_11 == false) {
          return 0;
        }
      }
      if (local_24 == 0 && local_28 == 0) {
        return 0;
      }
    }
    local_18 = local_24 >> 0x10;
    local_1c = local_28 >> 0x10;
    local_20 = local_28 >> 0x18;
    local_2c = local_24 >> 0x18;
    out(0x510,1);
    bVar4 = in(0x511);
    in(0x511);
    in(0x511);
    in(0x511);
    if ((bVar4 & 2) != 0) {
      out(0x510,0x19);
      uVar5 = in(0x511);
      bVar4 = in(0x511);
      bVar6 = in(0x511);
      bVar7 = in(0x511);
      uVar18 = 0;
      uVar11 = (uint)bVar7 |
               (uint)bVar6 << 8 | (uint)bVar4 << 0x10 | (uint)CONCAT11(bVar6,uVar5) << 0x18;
      if (uVar11 != 0) {
        iVar14 = 4;
        do {
          out(0x510,0x19);
          iVar10 = iVar14;
          do {
            in(0x511);
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          iVar10 = -0x40;
          do {
            cVar8 = in(0x511);
            local_9c[iVar10 + 0x38] = cVar8;
            iVar10 = iVar10 + 1;
          } while (iVar10 != 0);
          iVar10 = -9;
          do {
            if (local_9c[iVar10 + 9] == '\0') {
              if ((iVar10 == 0) &&
                 (iVar10 = recovered_2001ff0(local_9c,str_0208e306,9), iVar10 == 0)) {
                recovered_2001e00(&local_4c,0,0x1c);
                local_4c = (undefined1)local_20;
                local_4b = (undefined1)local_1c;
                local_4a = (undefined1)(local_28 >> 8);
                local_49 = (undefined1)local_28;
                local_48 = (undefined1)local_2c;
                local_47 = (undefined1)local_18;
                local_46 = (undefined1)(local_24 >> 8);
                local_45 = (undefined1)local_24;
                local_44 = 0x58523234;
                local_40 = 0;
                local_3c = (undefined1)(param_3 >> 0x18);
                local_3b = (undefined1)(param_3 >> 0x10);
                local_3a = (undefined1)(param_3 >> 8);
                local_39 = (undefined1)param_3;
                local_38 = (undefined1)(param_4 >> 0x18);
                local_37 = (undefined1)(param_4 >> 0x10);
                local_36 = (undefined1)(param_4 >> 8);
                local_35 = (undefined1)param_4;
                local_34 = (undefined1)(param_5 >> 0x18);
                local_33 = (undefined1)(param_5 >> 0x10);
                local_32 = (undefined1)(param_5 >> 8);
                local_31 = (undefined1)param_5;
                uVar11 = recovered_2005670((uint)(ushort)(local_a0 << 8 | local_a0 >> 8),&local_4c);
                if ((char)uVar11 == '\0') {
                  return 0;
                }
                DAT_02098a58 = param_1;
                DAT_02098a5c = param_2;
                DAT_02098a60 = param_5;
                DAT_02098a64 = param_3;
                DAT_02098a68 = param_4;
                DAT_02098a6c = 0x20;
                Ram02098a70 = 8;
                Ram02098a74 = 0x10;
                Ram02098a78 = 8;
                Ram02098a7c = 8;
                Ram02098a80 = 8;
                Ram02098a84 = 0;
                return CONCAT31((int3)((uint)extraout_ECX >> 8),1);
              }
              break;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 != 0x2f);
          uVar18 = uVar18 + 1;
          iVar14 = iVar14 + 0x40;
          if (uVar18 == uVar11) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}
