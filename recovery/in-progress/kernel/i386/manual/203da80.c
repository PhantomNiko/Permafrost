/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_0214acf8 (*(uint8_t volatile *)(0x214acf8U))
#define DAT_0214acf9 (*(uint8_t volatile *)(0x214acf9U))
#define DAT_0214acfa (*(uint16_t volatile *)(0x214acfaU))
#define DAT_0214acfc (*(uint8_t volatile *)(0x214acfcU))
#define DAT_0214acfd (*(uint8_t volatile *)(0x214acfdU))
#define DAT_0214acfe (*(uint8_t volatile *)(0x214acfeU))
#define DAT_0214acff (*(uint8_t volatile *)(0x214acffU))
#define DAT_0214adff (*(uint8_t volatile *)(0x214adffU))
#define DAT_0214aff0 (*(uint32_t volatile *)(0x214aff0U))
#define local_48 (*(char * *)(frame + 24))
#define local_44 (*(uint *)(frame + 28))
#define local_40 (*(char * *)(frame + 32))
#define local_3c (*(int *)(frame + 36))
#define local_34 (*(uint *)(frame + 44))
#define local_2c (*(uint *)(frame + 52))
#define local_1c (*(uint *)(frame + 68))
#define local_18 (*(uint *)(frame + 72))
#define local_14 (*(uint *)(frame + 76))


undefined4
recovered_203da80(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  ulong count;
  undefined4 *out;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  bool bVar23;

  recovered_2026f10();
  if (param_5 == (undefined4 *)0x0) {
    return 0;
  }
  recovered_2001e00(param_5,0,0x18);
  if (param_1 != 0) {
    cVar2 = DAT_0214acf8;
    if (cVar2 != '\x01') {
      return 0;
    }
    iVar21 = DAT_0214aff0;
    if (iVar21 == 0) {
      return 0;
    }
    bVar3 = DAT_0214acfc;
    if (bVar3 == 0) {
      return 0;
    }
    bVar5 = DAT_0214acfd;
    if (bVar5 == 0) {
      return 0;
    }
    cVar2 = DAT_0214acfe;
    if (cVar2 == '\0') {
      return 0;
    }
    uVar19 = 0xffffffff;
    do {
      uVar1 = uVar19 + 1;
      if (param_2 <= uVar1) break;
      pcVar16 = (char *)(param_1 + 1 + uVar19);
      uVar19 = uVar1;
    } while (*pcVar16 != '\0');
    iVar21 = (param_3 & 0xffff) + (uint)((param_3 & 0xffff) == 0);
    uVar19 = 0;
    if (uVar1 != 0) {
      uVar9 = bVar3 + 1;
      uVar14 = 3;
      if (4 < bVar3) {
        uVar14 = uVar9 >> 1;
      }
      if (uVar9 < uVar14) {
        uVar14 = uVar9;
      }
      uVar19 = 0;
      uVar17 = 0;
      do {
        uVar10 = uVar9;
        if (-1 < (int)param_3) {
          uVar10 = (uint)(byte)(&DAT_0214adff)[*(byte *)(param_1 + uVar17)];
          if (((byte)(&DAT_0214adff)[*(byte *)(param_1 + uVar17)] == 0) &&
             (uVar10 = uVar14 & 0xff, *(byte *)(param_1 + uVar17) != 0x20)) {
            uVar10 = uVar9;
          }
        }
        bVar23 = CARRY4(uVar19,uVar10 * iVar21);
        uVar19 = uVar19 + uVar10 * iVar21;
        if (bVar23) {
          return 0;
        }
        uVar17 = uVar17 + 1;
      } while (uVar1 != uVar17);
      if (0x3fffffff < uVar19) {
        return 0;
      }
    }
    uVar9 = (uint)bVar5 * iVar21;
    uVar14 = uVar19 * 4;
    count = (ulong)((ulonglong)uVar14 * (ulonglong)uVar9);
    if ((int)((ulonglong)uVar14 * (ulonglong)uVar9 >> 0x20) == 0) {
      param_5[3] = uVar19;
      param_5[4] = uVar9;
      param_5[5] = uVar14;
      if (((char)param_4 != '\0') && (count != 0)) {
        out = recovered_2029940(count);
        if (out == (undefined4 *)0x0) {
          recovered_2001e00(param_5,0,0x18);
          return 0;
        }
        recovered_2001e00(out,0,count);
        if (uVar1 != 0) {
          bVar3 = DAT_0214acfd;
          local_1c = (uint)bVar3;
          uVar17 = 0;
          local_3c = 0;
          local_18 = local_1c;
          local_14 = local_1c;
          do {
            uVar10 = (uint)*(byte *)(param_1 + uVar17);
            if ((int)param_3 < 0) {
              bVar3 = DAT_0214acfc;
              uVar15 = bVar3 + 1;
              local_2c = 0;
            }
            else {
              uVar15 = (uint)(byte)(&DAT_0214adff)[uVar10];
              if (uVar15 == 0) {
                bVar3 = DAT_0214acfc;
                uVar15 = bVar3 + 1;
                if (uVar10 == 0x20) {
                  uVar11 = 3;
                  if (4 < bVar3) {
                    uVar11 = uVar15 >> 1;
                  }
                  if (uVar15 < uVar11) {
                    uVar11 = uVar15;
                  }
                  uVar15 = uVar11 & 0xff;
                }
              }
              local_2c = (uint)(byte)(&DAT_0214acff)[uVar10];
            }
            if (uVar10 == 0x20) {
LAB_0203dc90:
            }
            else {
              bVar3 = DAT_0214acf9;
              if ((*(byte *)(param_1 + uVar17) < bVar3) ||
                 (uVar4 = DAT_0214acfa, (uint)uVar4 + (uint)bVar3 <= uVar10)) goto LAB_0203dc90;
              local_44 = 0;
              if ((char)local_14 == '\0') {
                local_14 = 0;
                local_18 = 0;
              }
              else {
                bVar5 = DAT_0214acfe;
                iVar18 = local_18 * bVar5;
                uVar7 = DAT_0214aff0;
                uVar7 = DAT_0214aff0;
                iVar8 = DAT_0214aff0;
                bVar5 = DAT_0214acfc;
                local_40 = (char *)((int)out + (local_3c * 4 - iVar21 * 4 * local_2c) + 3);
                bVar6 = bVar5;
                do {
                  if (bVar6 == 0) {
                    bVar6 = 0;
                  }
                  else {
                    bVar6 = DAT_0214acfe;
                    uVar11 = 0;
                    local_48 = local_40;
                    local_34 = local_3c - iVar21 * local_2c;
                    do {
                      if (((char)(*(char *)(bVar6 * local_44 + (uVar10 - bVar3) * iVar18 + iVar8 +
                                           (uVar11 >> 3)) << ((byte)uVar11 & 7)) < '\0') &&
                         (local_2c <= uVar11)) {
                        iVar12 = 0;
                        pcVar16 = local_48;
                        do {
                          pcVar13 = pcVar16;
                          uVar20 = local_34;
                          iVar22 = iVar21;
                          do {
                            if ((uVar20 < uVar19) && (local_44 * iVar21 + iVar12 < uVar9)) {
                              pcVar13[-3] = (char)((uint)param_4 >> 0x18);
                              pcVar13[-2] = (char)((uint)param_4 >> 0x10);
                              pcVar13[-1] = (char)((uint)param_4 >> 8);
                              *pcVar13 = (char)param_4;
                            }
                            pcVar13 = pcVar13 + 4;
                            uVar20 = uVar20 + 1;
                            iVar22 = iVar22 + -1;
                          } while (iVar22 != 0);
                          iVar12 = iVar12 + 1;
                          pcVar16 = pcVar16 + uVar14;
                        } while (iVar12 != iVar21);
                        bVar5 = DAT_0214acfc;
                      }
                      uVar11 = uVar11 + 1;
                      local_48 = local_48 + iVar21 * 4;
                      local_34 = local_34 + iVar21;
                    } while (uVar11 < bVar5);
                    PF_PART1(local_1c, 0) = DAT_0214acfd;
                    bVar6 = bVar5;
                  }
                  local_18 = (uint)(byte)local_1c;
                  local_44 = local_44 + 1;
                  local_40 = local_40 + uVar19 * iVar21 * 4;
                  local_1c = (uint)(byte)local_1c;
                  local_14 = local_18;
                } while (local_44 < local_18);
              }
            }
            local_3c = local_3c + uVar15 * iVar21;
            uVar17 = uVar17 + 1;
          } while (uVar1 != uVar17);
        }
        *param_5 = out;
        param_5[1] = 0;
        param_5[2] = count;
      }
      return 1;
    }
  }
  return 0;
}
#undef DAT_0214acf8
#undef DAT_0214acf9
#undef DAT_0214acfa
#undef DAT_0214acfc
#undef DAT_0214acfd
#undef DAT_0214acfe
#undef DAT_0214acff
#undef DAT_0214adff
#undef DAT_0214aff0
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_34
#undef local_2c
#undef local_1c
#undef local_18
#undef local_14
