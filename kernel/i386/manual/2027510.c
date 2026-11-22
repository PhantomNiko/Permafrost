#include "functions.h"


#undef DAT_021306f8
#undef DAT_021306fc
#undef DAT_02130700
#undef DAT_02130704
#undef DAT_02130708
#undef DAT_02130720

#undef DAT_020c22e0
#define DAT_020c22e0 (*(uint8_t *)(0x20c22e0U))
#undef DAT_021408e8
#define DAT_021408e8 (*(uint8_t volatile *)(0x21408e8U))
#undef DAT_021468fc
#define DAT_021468fc (*(uint8_t volatile *)(0x21468fcU))
#undef DAT_021483b8
#define DAT_021483b8 (*(uint8_t volatile *)(0x21483b8U))
#undef DAT_0214b114
#define DAT_0214b114 (*(uint8_t volatile *)(0x214b114U))
#undef DAT_0214b320
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#undef DAT_0214b364
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#undef DAT_0215bc54
#define DAT_0215bc54 (*(uint8_t volatile *)(0x215bc54U))
#undef DAT_0224b2d8
#define DAT_0224b2d8 (*(uint32_t volatile *)(0x224b2d8U))
#undef DAT_0224b2dc
#define DAT_0224b2dc (*(uint32_t volatile *)(0x224b2dcU))
#undef Ram0214b114
#define Ram0214b114 (*(uint32_t volatile *)(0x214b114U))
#define local_11 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2027510
 */

uint recovered_2027510(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  uchar uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;

  recovered_2026f10();
  local_11 = 0;
  uVar2 = recovered_2006ec0();
  uVar6 = 0;
  if (CONCAT31(extraout_var,uVar2) < 0x20) {
    uVar6 = CONCAT31(extraout_var,uVar2);
  }
  (&DAT_0214b364)[uVar6 * 0x12] = uVar6;
  pcVar4 = (char *)(&DAT_0214b320)[uVar6 * 0x12];
  if (pcVar4 != (char *)0x0) {
    if (*(int *)(pcVar4 + 0x74) != 0) {
      iVar9 = 0x20;
      pcVar7 = &DAT_021468fc;
      do {
        if (((*pcVar7 == '\x01') && (pcVar7[4] == '\x01')) &&
           (*(int *)(pcVar7 + 0x74) == *(int *)(pcVar4 + 0x74))) {
          pcVar4 = pcVar7;
          break;
        }
        pcVar7 = pcVar7 + 0xb8;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (*(int *)(pcVar4 + 0x10) != 0) {
      iVar9 = 0;
      bVar8 = false;
      do {
        iVar5 = iVar9 * 0x294;
        iVar9 = iVar9 + 1;
        pcVar7 = &DAT_021483b8 + iVar5;
        while ((*pcVar7 != '\x01' || (*(int *)(pcVar7 + 8) != *(int *)(pcVar4 + 0x10)))) {
          iVar9 = iVar9 + 1;
          pcVar7 = pcVar7 + 0x294;
          if (iVar9 == 0x11) {
            if (bVar8) goto LAB_0202766b;
            goto LAB_020275d7;
          }
        }
        if ((*(uint *)(pcVar7 + 0x28) & 0xe) == 10) goto LAB_020275d7;
        bVar8 = true;
        uVar6 = 0;
      } while (iVar9 != 0x10);
      goto LAB_0202766d;
    }
  }
LAB_020275d7:
  cVar1 = DAT_021408e8;
  if (cVar1 == '\x01') {
    do {
      uVar6 = recovered_2012410(&local_11);
      if ((char)uVar6 == '\0') goto LAB_02027617;
      cVar1 = DAT_0215bc54;
    } while ((cVar1 == '\x01') && (DAT_0215bc54 = 0, local_11 == 10));
    uVar6 = local_11 - 8;
    if (uVar6 < 0x14) {
                    /* WARNING: Could not recover jumptable at 0x02027689. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(&DAT_020c22e0 + uVar6 * 4))();
      return uVar3;
    }
    if (local_11 == 0x7f) {
      uVar6 = 0xe08;
    }
    else {
      if (0x5e < (byte)(local_11 - 0x20)) {
        local_11 = 0;
      }
      uVar6 = (uint)local_11;
    }
    goto LAB_0202766d;
  }
LAB_02027617:
  uVar6 = DAT_0224b2d8;
  if (uVar6 == 0) {
LAB_02027652:
    uVar6 = recovered_2009400();
    if (uVar6 != 0) {
LAB_0202765b:
      Ram0214b114 = uVar6 & 0x70000;
      goto LAB_0202766d;
    }
  }
  else {
    uVar10 = 0;
    puVar11 = &DAT_0224b2dc;
    do {
      if ((code *)*puVar11 != (code *)0x0) {
        uVar6 = (*(code *)*puVar11)();
        if (uVar6 != 0) goto LAB_0202765b;
        uVar6 = DAT_0224b2d8;
      }
      uVar10 = uVar10 + 1;
      puVar11 = puVar11 + 0x4f;
    } while (uVar10 < uVar6);
    if (uVar6 == 0) goto LAB_02027652;
  }
LAB_0202766b:
  uVar6 = 0;
LAB_0202766d:
  return uVar6;
}
