/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_02130740 (*(uint32_t volatile *)(0x2130740U))
#define DAT_02130744 (*(uint32_t volatile *)(0x2130744U))
#define DAT_02130748 (*(uint32_t volatile *)(0x2130748U))
#define DAT_02130758 (*(uint32_t volatile *)(0x2130758U))
#define DAT_0213075c (*(uint32_t volatile *)(0x213075cU))
#define DAT_02130794 (*(uint32_t volatile *)(0x2130794U))
#define DAT_02130798 (*(uint32_t volatile *)(0x2130798U))
#define DAT_021307a4 (*(uint32_t volatile *)(0x21307a4U))
#define DAT_021307a8 (*(uint32_t volatile *)(0x21307a8U))
#define DAT_021307ac (*(uint32_t volatile *)(0x21307acU))
#define DAT_021307b0 (*(uint32_t volatile *)(0x21307b0U))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))


uint recovered_20519d0(uint cluster)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;

  iVar3 = DAT_0213075c;
  bVar9 = DAT_021307dc;
  if ((iVar3 - 3U < 3 & bVar9) == 1) {
    iVar5 = DAT_02130798;
    iVar11 = DAT_02130740;
    uVar8 = DAT_02130758;
    iVar1 = DAT_02130744;
    iVar2 = DAT_02130748;
    iVar4 = DAT_02130794;
    iVar6 = DAT_021307a4;
    if ((iVar6 != 0 && (iVar5 != 0 && iVar4 != 0)) &&
        ((iVar2 != 0 && iVar1 != 0) && (iVar11 == 0x200 && (uVar8 & 1) == 0))) {
      uVar8 = DAT_021307a8;
      uVar7 = DAT_021307ac;
      if (uVar7 != 0 && (uint)(iVar11 * iVar5) <= uVar8) {
        if (cluster == 0) {
          return 0;
        }
        iVar11 = DAT_021307b0;
        if (iVar11 == 0) {
          return 0;
        }
        if (uVar7 + 2 <= cluster || cluster < 2) {
          return 0;
        }
        uVar8 = 1;
        while( true ) {
          uVar10 = uVar8;
          if (iVar3 == 5) {
            cluster = *(uint *)(iVar6 + cluster * 4) & 0xfffffff;
          }
          else if (iVar3 == 4) {
            cluster = (uint)*(ushort *)(iVar6 + cluster * 2);
          }
          else {
            iVar11 = (cluster >> 1) + iVar6;
            bVar9 = *(byte *)(cluster + iVar11);
            if ((cluster & 1) == 0) {
              uVar8 = (*(byte *)(iVar11 + 1 + cluster) & 0xf) << 8;
            }
            else {
              bVar9 = bVar9 >> 4;
              uVar8 = (uint)*(byte *)(iVar11 + 1 + cluster) << 4;
            }
            cluster = uVar8 | bVar9;
          }
          if (cluster == 0) {
            return uVar10;
          }
          if (iVar3 == 5) {
            if (0xffffff7 < cluster) {
              return uVar10;
            }
          }
          else if (iVar3 == 4) {
            if (0xfff7 < cluster) {
              return uVar10;
            }
          }
          else if (0xff7 < cluster) {
            return uVar10;
          }
          if (cluster == 1) break;
          if (uVar7 + 2 <= cluster) {
            return uVar10;
          }
          uVar8 = uVar10 + 1;
          if (uVar7 <= uVar10) {
            return uVar10;
          }
        }
        return uVar10;
      }
    }
  }
  return 0;
}
#undef DAT_02130740
#undef DAT_02130744
#undef DAT_02130748
#undef DAT_02130758
#undef DAT_0213075c
#undef DAT_02130794
#undef DAT_02130798
#undef DAT_021307a4
#undef DAT_021307a8
#undef DAT_021307ac
#undef DAT_021307b0
#undef DAT_021307dc
