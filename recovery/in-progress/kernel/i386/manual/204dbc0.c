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


void recovered_204dbc0(uint cluster)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;

  iVar4 = DAT_0213075c;
  bVar3 = DAT_021307dc;
  if (((((iVar4 - 3U < 3 & bVar3) == 1) && (bVar3 = PF_PART1(DAT_02130758, 0), (bVar3 & 1) == 0)) &&
      (iVar5 = DAT_02130740, iVar5 == 0x200)) &&
     (((iVar5 = DAT_02130744, iVar5 != 0 && (iVar5 = DAT_02130748, iVar5 != 0)) &&
      ((iVar5 = DAT_02130794, iVar5 != 0 &&
       ((iVar5 = DAT_02130798, iVar5 != 0 && (iVar1 = DAT_021307a4, iVar1 != 0)))))))) {
    uVar7 = DAT_021307a8;
    iVar1 = DAT_021307ac;
    if ((iVar1 != 0 && (uint)(iVar5 * 0x200) <= uVar7) &&
       (((cluster != 0 && (iVar5 = DAT_021307b0, iVar5 != 0)) &&
        (cluster < iVar1 + 2U && 1 < cluster)))) {
      uVar7 = 1;
      while( true ) {
        iVar5 = DAT_021307a4;
        if (iVar5 == 0) {
          recovered_2050860(cluster,0);
          return;
        }
        if (iVar4 == 5) {
          uVar6 = *(uint *)(iVar5 + cluster * 4) & 0xfffffff;
        }
        else if (iVar4 == 4) {
          uVar6 = (uint)*(ushort *)(iVar5 + cluster * 2);
        }
        else {
          iVar5 = iVar5 + (cluster >> 1);
          bVar3 = *(byte *)(cluster + iVar5);
          if ((cluster & 1) == 0) {
            uVar6 = (*(byte *)(iVar5 + 1 + cluster) & 0xf) << 8;
          }
          else {
            bVar3 = bVar3 >> 4;
            uVar6 = (uint)*(byte *)(iVar5 + 1 + cluster) << 4;
          }
          uVar6 = uVar6 | bVar3;
        }
        recovered_2050860(cluster,0);
        if (uVar6 == 0) break;
        iVar4 = DAT_0213075c;
        if (iVar4 == 5) {
          if (0xffffff7 < uVar6) {
            return;
          }
        }
        else if (iVar4 == 4) {
          if (0xfff7 < uVar6) {
            return;
          }
        }
        else {
          if (iVar4 != 3) {
            return;
          }
          if (0xff7 < uVar6) {
            return;
          }
        }
        if (uVar6 == 1) {
          return;
        }
        uVar2 = DAT_021307ac;
        if (uVar2 + 2 <= uVar6) {
          return;
        }
        bVar8 = uVar2 <= uVar7;
        uVar7 = uVar7 + 1;
        cluster = uVar6;
        if (bVar8) {
          return;
        }
      }
    }
  }
  return;
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
