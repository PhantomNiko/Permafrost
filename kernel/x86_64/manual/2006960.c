/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_00006128 (*(uint8_t *)(0x6128U))
#define DAT_020ae0a0 (*(uint64_t volatile *)(0x210cc20U))
#define DAT_020ae0a8 (*(uint32_t volatile *)(0x210cc28U))
#define DAT_020ae0ac (*(uint32_t volatile *)(0x210cc2cU))
#define DAT_020ae0b0 (*(uint32_t volatile *)(0x210cc30U))
#define Ram00000000020ae0b4 (*(uint128 volatile *)(0x210cc34U))
#define Ram00000000020ae0c4 (*(uint64_t volatile *)(0x210cc44U))
#define Ram00000000020ae0cc (*(uint32_t volatile *)(0x210cc4cU))
#define _DAT_00006124 (*(uint *)(0x6124U))
#define _DAT_00006128 (*(uint *)(0x6128U))
#define _DAT_0000612c (*(uint *)(0x612cU))
#define _DAT_020a1580 (*(uint128 *)(0x20eaf70U))
#define auStack_b0 (*(undefined1 (*)[4])(frame + 16))
#define local_34 (*(uint *)(frame + 140))
#define local_3d (*(undefined1 *)(frame + 131))
#define local_3e (*(undefined1 *)(frame + 130))
#define local_3f (*(undefined1 *)(frame + 129))
#define local_40 (*(undefined1 *)(frame + 128))
#define local_41 (*(undefined1 *)(frame + 127))
#define local_42 (*(undefined1 *)(frame + 126))
#define local_43 (*(undefined1 *)(frame + 125))
#define local_44 (*(undefined1 *)(frame + 124))
#define local_45 (*(undefined1 *)(frame + 123))
#define local_46 (*(undefined1 *)(frame + 122))
#define local_47 (*(undefined1 *)(frame + 121))
#define local_48 (*(undefined1 *)(frame + 120))
#define local_50 (*(undefined8 *)(frame + 112))
#define local_51 (*(undefined1 *)(frame + 111))
#define local_52 (*(undefined1 *)(frame + 110))
#define local_53 (*(undefined1 *)(frame + 109))
#define local_54 (*(undefined1 *)(frame + 108))
#define local_55 (*(undefined1 *)(frame + 107))
#define local_56 (*(undefined1 *)(frame + 106))
#define local_57 (*(undefined1 *)(frame + 105))
#define local_58 (*(undefined1 *)(frame + 104))
#define local_5c (*(uint *)(frame + 100))
#define local_68 (*(undefined8 *)(frame + 88))
#define local_70 (*(ulong *)(frame + 80))
#define local_a8 (*(char (*)[56])(frame + 24))
#define local_ac (*(ushort *)(frame + 20))
#define str_020a25c6 (*(char (*)[1])(0x20ec470U))
uchar recovered_2006960(ulong param_1,undefined8 param_2,uint param_3,uint param_4)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  uchar uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong extraout_RDX;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  bool bVar22;

  uVar8 = (uint)param_2;
  if (((param_3 != 0 && (uVar8 != 0 && param_1 != 0)) &&
      (uVar8 * 4 <= param_4 && uVar8 < 0x40000000)) &&
     (uVar10 = (ulong)param_3 * (ulong)param_4, 0xffffffff00000000 < uVar10 - 0x100000000)) {
    local_70 = param_1;
    if (_DAT_00006124 != 0) {
      uVar13 = 0x10;
      if (_DAT_00006124 < 0x10) {
        uVar13 = (ulong)_DAT_00006124;
      }
      local_70 = 0;
      bVar1 = false;
      uVar19 = 0;
      uVar12 = param_1;
      while (uVar10 != 0) {
        uVar14 = (ulong)_DAT_0000612c;
        if (((uVar14 == 0) || (uVar12 < _DAT_00006128)) ||
           (uVar20 = uVar12 - _DAT_00006128, uVar14 <= uVar20)) {
          uVar18 = 0;
          puVar16 = &DAT_00006128;
          do {
            puVar17 = puVar16;
            if (uVar13 - 1 == uVar18) {
              return '\0';
            }
            puVar16 = puVar17 + 0x10;
            uVar14 = (ulong)*(uint *)(puVar17 + 0x14);
            uVar18 = uVar18 + 1;
          } while (((uVar14 == 0) || (uVar12 < *(uint *)(puVar17 + 0x10))) ||
                  (uVar20 = uVar12 - *(uint *)(puVar17 + 0x10), uVar14 <= uVar20));
          bVar22 = uVar18 < uVar13;
        }
        else {
          puVar16 = &DAT_00006128;
          bVar22 = true;
        }
        uVar18 = *(long *)(puVar16 + 8) + uVar20;
        if ((bool)(bVar1 & uVar19 != uVar18)) {
          return '\0';
        }
        if (!bVar1) {
          local_70 = uVar18;
        }
        uVar15 = uVar14 - uVar20;
        if (uVar10 <= uVar14 - uVar20) {
          uVar15 = uVar10;
        }
        uVar19 = uVar18 + uVar15;
        uVar12 = uVar12 + uVar15;
        uVar10 = uVar10 - uVar15;
        bVar1 = true;
        if (!bVar22) {
          return '\0';
        }
      }
      if (local_70 == 0) {
        return '\0';
      }
    }
    out(0x510,1);
    bVar2 = in(0x511);
    in(0x511);
    in(0x511);
    in(0x511);
    if ((bVar2 & 2) != 0) {
      out(0x510,0x19);
      bVar2 = in(0x511);
      bVar3 = in(0x511);
      bVar4 = in(0x511);
      bVar5 = in(0x511);
      uVar8 = (uint)bVar5 | (uint)bVar4 << 8 | (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18;
      if (uVar8 != 0) {
        lVar21 = 4;
        uVar10 = 0;
        local_68 = param_2;
        local_5c = param_3;
        local_34 = param_4;
        do {
          out(0x510,0x19);
          lVar11 = lVar21;
          do {
            in(0x511);
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          lVar11 = 0;
          do {
            uVar6 = in(0x511);
            auStack_b0[lVar11] = uVar6;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x40);
          lVar11 = 0;
          do {
            if (local_a8[lVar11] == '\0') {
LAB_020040a9:
              if (lVar11 == 9) {
LAB_020040b3:
                iVar9 = recovered_2002a00(local_a8,str_020a25c6,9);
                if (iVar9 == 0) {
                  recovered_2002110(&local_58,0,0x1c);
                  local_58 = (undefined1)(local_70 >> 0x38);
                  local_57 = (undefined1)(local_70 >> 0x30);
                  local_56 = (undefined1)(local_70 >> 0x28);
                  local_55 = (undefined1)(local_70 >> 0x20);
                  local_54 = (undefined1)(local_70 >> 0x18);
                  local_53 = (undefined1)(local_70 >> 0x10);
                  local_52 = (undefined1)(local_70 >> 8);
                  local_51 = (undefined1)local_70;
                  local_50 = 0x58523234;
                  local_48 = (undefined1)((ulong)local_68 >> 0x18);
                  local_47 = (undefined1)((ulong)local_68 >> 0x10);
                  local_46 = (undefined1)((ulong)local_68 >> 8);
                  local_45 = (undefined1)local_68;
                  local_44 = (undefined1)(local_5c >> 0x18);
                  local_43 = (undefined1)(local_5c >> 0x10);
                  local_42 = (undefined1)(local_5c >> 8);
                  local_41 = (undefined1)local_5c;
                  local_40 = (undefined1)(local_34 >> 0x18);
                  local_3f = (undefined1)(local_34 >> 0x10);
                  local_3e = (undefined1)(local_34 >> 8);
                  local_3d = (undefined1)local_34;
                  uVar7 = recovered_2006d70((uint)(ushort)(local_ac << 8 | local_ac >> 8),
                                            (ulong)&local_58,extraout_RDX);
                  if (uVar7 == '\0') {
                    return '\0';
                  }
                  DAT_020ae0a0 = param_1;
                  DAT_020ae0a8 = local_34;
                  DAT_020ae0ac = (int)local_68;
                  DAT_020ae0b0 = local_5c;
                  Ram00000000020ae0b4 = _DAT_020a1580;
                  Ram00000000020ae0c4 = 0x800000008;
                  Ram00000000020ae0cc = 0;
                  return '\x01';
                }
              }
              break;
            }
            if (local_a8[lVar11 + 1] == '\0') {
              if (lVar11 == 8) goto LAB_020040b3;
              break;
            }
            if (local_a8[lVar11 + 2] == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_020040a9;
            }
            if (local_a8[lVar11 + 3] == '\0') {
              if (lVar11 == 6) goto LAB_020040b3;
              break;
            }
            lVar11 = lVar11 + 4;
          } while (lVar11 != 0x38);
          uVar10 = uVar10 + 1;
          lVar21 = lVar21 + 0x40;
          if (uVar10 == uVar8) {
            return '\0';
          }
        } while( true );
      }
    }
  }
  return '\0';
}
