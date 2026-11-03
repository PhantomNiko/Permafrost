#include "functions.h"
#undef DAT_0002f0a6
#define DAT_0002f0a6 (*(byte *)(0x2f0a6U))
#undef DAT_0004f1ce
#define DAT_0004f1ce (*(uint8_t *)(0x4f1ceU))
#undef DAT_0004f1cf
#define DAT_0004f1cf (*(uint8_t *)(0x4f1cfU))
#undef DAT_0004f1d0
#define DAT_0004f1d0 (*(uint8_t *)(0x4f1d0U))
#undef DAT_0004f1d4
#define DAT_0004f1d4 (*(uint *)(0x4f1d4U))
#undef DAT_0004f1d8
#define DAT_0004f1d8 (*(uint *)(0x4f1d8U))
#undef DAT_0004f1dc
#define DAT_0004f1dc (*(int *)(0x4f1dcU))
#undef DAT_0004f1e0
#define DAT_0004f1e0 (*(char *)(0x4f1e0U))
#undef DAT_0004f1e4
#define DAT_0004f1e4 (*(uint32_t *)(0x4f1e4U))
#undef DAT_0004f1e8
#define DAT_0004f1e8 (*(uint *)(0x4f1e8U))
#undef DAT_0004f1ec
#define DAT_0004f1ec (*(int *)(0x4f1ecU))
#undef DAT_0004f1f0
#define DAT_0004f1f0 (*(char *)(0x4f1f0U))
#undef DAT_0004f1f4
#define DAT_0004f1f4 (*(byte *)(0x4f1f4U))
#undef DAT_0004f1f8
#define DAT_0004f1f8 (*(uint8_t *)(0x4f1f8U))
#undef DAT_0004f2f8
#define DAT_0004f2f8 (*(uint8_t *)(0x4f2f8U))
#undef DAT_0006f3f8
#define DAT_0006f3f8 (*(uint *)(0x6f3f8U))
#undef DAT_0006f3fc
#define DAT_0006f3fc (*(uint *)(0x6f3fcU))
#undef DAT_0006f400
#define DAT_0006f400 (*(int *)(0x6f400U))
#undef DAT_0006f404
#define DAT_0006f404 (*(char *)(0x6f404U))
#undef DAT_0006f408
#define DAT_0006f408 (*(byte *)(0x6f408U))
#undef DAT_0006f409
#define DAT_0006f409 (*(char *)(0x6f409U))
#undef DAT_0006f40a
#define DAT_0006f40a (*(uint8_t *)(0x6f40aU))
#undef DAT_0007040a
#define DAT_0007040a (*(ushort *)(0x7040aU))
#undef DAT_000b8000
#define DAT_000b8000 (*(uint8_t *)(0xb8000U))
#undef PTR_DAT_0002f010
#define PTR_DAT_0002f010 (*(uint8_t * *)(0x2f010U))
#undef PTR_DAT_0002f014
#define PTR_DAT_0002f014 (*(uint8_t * *)(0x2f014U))
#undef PTR_DAT_0002f018
#define PTR_DAT_0002f018 (*(uint8_t * *)(0x2f018U))
#undef PTR_DAT_0002f028
#define PTR_DAT_0002f028 (*(uint8_t * *)(0x2f028U))
#undef PTR_DAT_0002f02c
#define PTR_DAT_0002f02c (*(uint8_t * *)(0x2f02cU))
#undef PTR_DAT_0002f030
#define PTR_DAT_0002f030 (*(uint8_t * *)(0x2f030U))
#undef PTR_DAT_0002f034
#define PTR_DAT_0002f034 (*(uint8_t * *)(0x2f034U))
#undef PTR_DAT_0002f038
#define PTR_DAT_0002f038 (*(uint8_t * *)(0x2f038U))
#undef PTR_DAT_0002f03c
#define PTR_DAT_0002f03c (*(uint8_t * *)(0x2f03cU))
#undef PTR_DAT_0002f040
#define PTR_DAT_0002f040 (*(uint8_t * *)(0x2f040U))
#undef PTR_DAT_0002f044
#define PTR_DAT_0002f044 (*(uint8_t * *)(0x2f044U))
#undef PTR_DAT_0002f048
#define PTR_DAT_0002f048 (*(uint8_t * *)(0x2f048U))
#undef PTR_DAT_0002f04c
#define PTR_DAT_0002f04c (*(uint8_t * *)(0x2f04cU))
#undef PTR_DAT_0002f050
#define PTR_DAT_0002f050 (*(uint8_t * *)(0x2f050U))
#undef _LAB_0000046c
#define _LAB_0000046c (*(uint8_t *)(0x46cU))
#define local_40 (*(uint *)(frame + 16))
#define local_2c (*(int *)(frame + 36))
#define local_24 (*(int *)(frame + 44))
#define local_1c (*(int *)(frame + 52))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21cca
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * recovered_21cca(void)

{
  unsigned char frame[112];

  char cVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined *extraout_EAX = 0;
  undefined *extraout_EAX_00 = 0;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  byte bVar20;
  int iVar21;
  uint uVar22;
  char *pcVar23;
  int iVar24;
  uint uVar25;
  undefined *puVar26;
  byte *pbVar27;
  int iVar28;
  uint uVar29;
  bool bVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  
  uVar22 = DAT_0004f1e8;
  iVar24 = 0;
  uVar8 = _LAB_0000046c / 9;
  if (((DAT_0004f1f4 != 1) || (DAT_0004f1e0 != '\x01')) || (DAT_0004f1f0 != '\x01')) {
    recovered_2457a(0x4c);
    uVar3 = (ushort)DAT_0002f0a6;
    puVar18 = &DAT_000b8000;
    for (; iVar24 != 0x19; iVar24 = iVar24 + 1) {
      for (iVar21 = 0; iVar21 != 0x50; iVar21 = iVar21 + 1) {
        *(ushort *)(puVar18 + iVar21 * 2) = uVar3 << 8 | 0x20;
      }
      puVar18 = puVar18 + 0xa0;
    }
    uVar9 = 0;
    uVar22 = 0x19 - DAT_0006f3f8;
    if (0x19 < DAT_0006f3f8) {
      uVar22 = 0;
    }
    uVar22 = uVar22 >> 1;
    uVar16 = DAT_0006f3f8 - 0x19;
    if (DAT_0006f3f8 < 0x19) {
      uVar16 = 0;
    }
    else {
      uVar22 = 0;
    }
    uVar25 = DAT_0006f3f8 - uVar16;
    if (DAT_0006f3f8 < uVar16) {
      uVar25 = 0;
    }
    if (0x18 < uVar25) {
      uVar25 = 0x19;
    }
    uVar10 = uVar22 * 0xa0 | 0xb8000;
    for (; uVar9 != uVar25; uVar9 = uVar9 + 1) {
      iVar24 = (uVar9 + uVar16) * 0x101;
      pcVar23 = &DAT_0004f1f8 + iVar24;
      uVar17 = 2;
      if ((&DAT_0004f2f8)[iVar24] == '\x01') {
        uVar15 = recovered_20ccf((int)pcVar23);
        uVar17 = (-(uVar15 - 0x4c) >> 1) + 2;
        if (0x4b < uVar15) {
          uVar17 = 2;
        }
      }
      bVar20 = DAT_0002f0a6;
      if (uVar22 + uVar9 < 0x19) {
        for (; (cVar1 = *pcVar23, cVar1 != '\0' && (uVar17 < 0x50)); uVar17 = uVar17 + 1) {
          pcVar23 = pcVar23 + 1;
          *(ushort *)(uVar10 + uVar17 * 2) = CONCAT11(bVar20,cVar1);
        }
      }
      uVar10 = uVar10 + 0xa0;
    }
    if ((((uVar8 & 1) == 0) && (DAT_0006f404 == '\x01')) &&
       (DAT_0006f3fc < uVar25 + uVar16 && uVar16 <= DAT_0006f3fc)) {
      uVar8 = (uVar22 - uVar16) + DAT_0006f3fc;
      uVar22 = 0x18;
      if (uVar8 < 0x18) {
        uVar22 = uVar8;
      }
      uVar8 = 0x4f;
      if (DAT_0006f400 + 2U < 0x4f) {
        uVar8 = DAT_0006f400 + 2U;
      }
      iVar24 = uVar22 * 0x50 + uVar8;
      out(0x3d4,0xe);
      out(0x3d5,(char)((uint)iVar24 >> 8));
      out(0x3d4,0xf);
      out(0x3d5,(char)iVar24);
      iVar24 = 1;
    }
    else {
      iVar24 = 0;
    }
    recovered_24a9b(iVar24);
    return extraout_EAX;
  }
  uVar9 = DAT_0004f1e4 - 0x30;
  if (DAT_0004f1e4 < 0x31) {
    uVar9 = DAT_0004f1e4;
  }
  uVar25 = DAT_0004f1e8 >> 4;
  uVar16 = 1;
  if (7 < uVar9) {
    uVar16 = uVar9 >> 3;
  }
  recovered_2457a(uVar16);
  lVar4 = (ulonglong)DAT_0004f1d8 * (ulonglong)DAT_0004f1d4 + -0x40000000;
  iVar21 = (int)((ulonglong)lVar4 >> 0x20);
  iVar24 = (int)((ulonglong)DAT_0004f1d8 * (ulonglong)DAT_0004f1d4) << 2;
  if (iVar21 != -1 || iVar21 + 1U < (uint)((uint)lVar4 < 0xc0000001)) {
    iVar24 = 0;
  }
  recovered_20c1d(DAT_0004f1ec,DAT_0004f1dc,iVar24);
  uVar9 = DAT_0006f3f8 - uVar25;
  if (DAT_0006f3f8 < uVar25) {
    uVar9 = 0;
  }
  local_40 = 0;
  if (uVar22 < 0x10) {
    uVar9 = 0;
  }
  else {
    local_40 = uVar25 - DAT_0006f3f8;
    if (uVar25 < DAT_0006f3f8) {
      local_40 = 0;
    }
    local_40 = local_40 >> 1;
    if (uVar25 <= DAT_0006f3f8) {
      local_40 = 0;
    }
  }
  uVar22 = DAT_0006f3f8 - uVar9;
  if (DAT_0006f3f8 < uVar9) {
    uVar22 = 0;
  }
  if (uVar25 <= uVar22) {
    uVar22 = uVar25;
  }
  uVar16 = 0;
  do {
    if (uVar16 == uVar22) {
      if ((((uVar8 & 1) == 0) && (DAT_0006f404 == '\x01')) &&
         (DAT_0006f3fc < uVar22 + uVar9 && uVar9 <= DAT_0006f3fc)) {
        recovered_249e9(&DAT_0004f1e4,DAT_0006f400 * 8 + 0x18,
                        ((local_40 - uVar9) + DAT_0006f3fc) * 0x10 | 0xd,8,2,DAT_0004f1ce,
                        DAT_0004f1cf,DAT_0004f1d0);
      }
      recovered_24a9b(0);
      uVar8 = DAT_0004f1e8;
      uVar22 = DAT_0004f1e4;
      puVar26 = extraout_EAX_00;
      if ((DAT_0004f1f0 == '\x01') && (DAT_0004f1ec != 0)) {
        iVar24 = *(int *)PTR_DAT_0002f038;
        bVar20 = iVar24 != 0 & DAT_0004f1f4;
        puVar26 = (undefined *)CONCAT31((int3)((uint)iVar24 >> 8),bVar20);
        iVar21 = *(int *)PTR_DAT_0002f03c;
        uVar9 = *(uint *)PTR_DAT_0002f040;
        uVar16 = *(uint *)PTR_DAT_0002f034;
        if ((((uVar16 != 0 && (uVar9 != 0 && iVar21 != 0)) & bVar20) == 1) &&
           ((puVar26 = *(undefined **)PTR_DAT_0002f030, puVar26 == (undefined *)0x20 ||
            (puVar26 == (undefined *)0x18)))) {
          uVar31 = recovered_208ad((ulonglong)DAT_0004f1e8 * (ulonglong)uVar9,
                                   (ulonglong)DAT_0004f1e4);
          uVar25 = (uint)uVar31;
          if (uVar16 < uVar25) {
            uVar31 = recovered_208ad((ulonglong)uVar22 * (ulonglong)uVar16,(ulonglong)uVar8);
            uVar22 = (uint)uVar31;
            uVar25 = uVar16;
          }
          else {
            uVar22 = uVar9;
          }
          uVar8 = (uint)puVar26 >> 3;
          uVar10 = uVar16;
          iVar28 = iVar24;
          while (bVar30 = uVar10 != 0, uVar10 = uVar10 - 1, bVar30) {
            recovered_20c84(iVar28,0,iVar21);
            iVar28 = iVar28 + iVar21;
          }
          puVar13 = (undefined *)((uVar9 - uVar22 >> 1) * uVar8);
          puVar26 = puVar13;
          for (uVar9 = 0; uVar9 < uVar25; uVar9 = uVar9 + 1) {
            uVar31 = recovered_208ad((ulonglong)uVar9 * (ulonglong)DAT_0004f1e8,(ulonglong)uVar25);
            puVar14 = puVar13 + (uVar9 + (uVar16 - uVar25 >> 1)) * iVar21 + iVar24;
            puVar26 = puVar14;
            for (uVar10 = 0; uVar17 = DAT_0004f1e4, uVar10 != uVar22; uVar10 = uVar10 + 1) {
              uVar32 = recovered_208ad((ulonglong)DAT_0004f1e4 * (ulonglong)uVar10,(ulonglong)uVar22
                                      );
              iVar28 = uVar17 * (int)uVar31 + (int)uVar32;
              uVar19 = (uint)*(byte *)(DAT_0004f1ec + iVar28 * 4);
              uVar29 = (uint)*(byte *)(DAT_0004f1ec + 1 + iVar28 * 4);
              uVar12 = (uint)*(byte *)(DAT_0004f1ec + 2 + iVar28 * 4);
              uVar17 = *(uint *)PTR_DAT_0002f04c;
              uVar15 = *(uint *)PTR_DAT_0002f044;
              bVar30 = uVar15 == 0 || uVar17 == 0;
              uVar11 = *(uint *)PTR_DAT_0002f028;
              if (uVar11 == 0 || (uVar15 == 0 || uVar17 == 0)) {
                uVar12 = (uVar29 << 8 | uVar19 << 0x10) + uVar12;
                puVar26 = (undefined *)
                          CONCAT31(CONCAT21((short)((uint)PTR_DAT_0002f04c >> 0x10),bVar30),
                                   uVar11 == 0 || bVar30);
              }
              else {
                uVar17 = recovered_24ba4(uVar19,uVar17);
                bVar20 = *PTR_DAT_0002f050;
                uVar15 = recovered_24ba4(uVar29,uVar15);
                bVar2 = *PTR_DAT_0002f048;
                uVar11 = recovered_24ba4(uVar12,uVar11);
                uVar12 = uVar11 << (*PTR_DAT_0002f02c & 0x1f) |
                         uVar15 << (bVar2 & 0x1f) | uVar17 << (bVar20 & 0x1f);
                puVar26 = PTR_DAT_0002f02c;
              }
              bVar20 = 0;
              iVar28 = 0;
              uVar17 = uVar8;
              while (bVar30 = uVar17 != 0, uVar17 = uVar17 - 1, bVar30) {
                puVar26 = (undefined *)(uVar12 >> (bVar20 & 0x1f));
                puVar14[iVar28 + uVar10 * uVar8] = (char)puVar26;
                iVar28 = iVar28 + 1;
                bVar20 = bVar20 + 8;
              }
            }
          }
        }
      }
      return puVar26;
    }
    iVar24 = (uVar9 + uVar16) * 0x101;
    pbVar27 = &DAT_0004f1f8 + iVar24;
    local_1c = 0x18;
    if ((&DAT_0004f2f8)[iVar24] == '\x01') {
      iVar24 = recovered_20ccf((int)pbVar27);
      local_1c = (int)(DAT_0004f1e4 + iVar24 * -8) / 2;
      if (local_1c < 1) {
        local_1c = 0;
      }
    }
    uVar7 = DAT_0004f1d0;
    uVar6 = DAT_0004f1cf;
    uVar5 = DAT_0004f1ce;
    if ((DAT_0004f1f0 == '\x01') && (DAT_0004f1ec != 0)) {
      if (DAT_0006f408 != 0) {
LAB_00021e5a:
        local_24 = (local_40 + uVar16) * 0x10;
        local_2c = local_1c;
        do {
          uVar25 = (uint)*pbVar27;
          if (uVar25 == 10) {
            local_24 = local_24 + 0x10;
            local_2c = local_1c;
          }
          else {
            if (uVar25 != 0x20) {
              if (uVar25 == 0) goto LAB_00022008;
              uVar10 = (uint)DAT_0007040a;
              bVar20 = uVar10 != 0 & DAT_0006f408;
              puVar26 = &DAT_0006f40a + uVar25 * uVar10;
              if (bVar20 == 0) {
                puVar26 = (undefined *)0x0;
              }
              if (((bVar20 == 1) && (DAT_0004f1f0 == '\x01')) && (DAT_0004f1ec != 0)) {
                uVar25 = 0;
                do {
                  uVar17 = uVar25 << 4;
                  do {
                    uVar15 = uVar25;
                    if (uVar10 <= uVar15) goto LAB_00021f7c;
                    uVar11 = uVar17 / uVar10;
                    uVar25 = uVar15 + 1;
                    uVar12 = (uVar10 + 0xf + uVar17) / uVar10;
                    uVar17 = uVar17 + 0x10;
                    iVar24 = uVar12 - uVar11;
                  } while (uVar12 < uVar11 || iVar24 == 0);
                  cVar1 = puVar26[uVar15];
                  for (iVar21 = 0; iVar21 != 8; iVar21 = iVar21 + 1) {
                    if ((char)(cVar1 << ((byte)iVar21 & 0x1f)) < '\0') {
                      recovered_249e9(&DAT_0004f1e4,local_2c + iVar21,uVar11 + local_24,1,iVar24,
                                      uVar5,uVar6,uVar7);
                    }
                  }
                  uVar10 = (uint)DAT_0007040a;
                } while( true );
              }
            }
LAB_00021f7c:
            local_2c = local_2c + 8;
          }
          pbVar27 = pbVar27 + 1;
        } while( true );
      }
      if (DAT_0006f409 == '\0') {
        DAT_0006f409 = '\x01';
        iVar24 = FUN_000200ce();
        if ((iVar24 != 0) &&
           (iVar24 = (uint)*(ushort *)PTR_DAT_0002f014 + (uint)*(ushort *)PTR_DAT_0002f018 * 0x10,
           iVar24 != 0)) {
          uVar25 = (uint)*(ushort *)PTR_DAT_0002f010;
          if ((ushort)(*(ushort *)PTR_DAT_0002f010 - 0x11) < 0xfff0) {
            uVar25 = 0x10;
          }
          recovered_20c1d(0x6f40a,iVar24,uVar25 << 8);
          DAT_0007040a = (ushort)uVar25;
          DAT_0006f408 = 1;
          goto LAB_00021e5a;
        }
      }
    }
LAB_00022008:
    uVar16 = uVar16 + 1;
  } while( true );
}

