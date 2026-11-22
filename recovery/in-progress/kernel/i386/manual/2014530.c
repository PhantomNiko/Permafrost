#include "functions.h"
#undef DAT_021043ce
#define DAT_021043ce (*(uint8_t volatile *)(0x21043ceU))
#undef DAT_021043e6
#define DAT_021043e6 (*(uint16_t volatile *)(0x21043e6U))
#undef DAT_021043e8
#define DAT_021043e8 (*(uint32_t volatile *)(0x21043e8U))
#undef DAT_021043ec
#define DAT_021043ec (*(uint32_t volatile *)(0x21043ecU))
#undef DAT_021043f0
#define DAT_021043f0 (*(uint32_t volatile *)(0x21043f0U))
#undef DAT_021043f4
#define DAT_021043f4 (*(uint32_t volatile *)(0x21043f4U))
#undef DAT_021043f8
#define DAT_021043f8 (*(uint32_t volatile *)(0x21043f8U))
#undef DAT_02104414
#define DAT_02104414 (*(uint32_t volatile *)(0x2104414U))
#undef DAT_02104418
#define DAT_02104418 (*(uint32_t volatile *)(0x2104418U))
#undef Ram021043ce
#define Ram021043ce (*(uint16_t volatile *)(0x21043ceU))
#undef str_020c5106
#define str_020c5106 (*(char (*)[1])(0x20c5106U))
#define local_18 (*(uint *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2014530
 */

void recovered_2014530(uint *param_1,uint param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;

  if (param_2 < 4) {
    uVar3 = 0;
    bVar8 = true;
    uVar6 = 1;
    uVar4 = 0;
  }
  else {
    uVar3 = *param_1;
    bVar8 = true;
    local_18 = 0;
    if (param_2 < 6) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ushort)param_1[1];
      if (7 < param_2) {
        bVar8 = *(char *)((int)param_1 + 6) == '\0' && *(char *)((int)param_1 + 7) == '\0';
      }
    }
    uVar6 = 1 << ((byte)uVar3 & 0x1f);
    if (0x1f < uVar3) goto LAB_020145b7;
  }
  local_18 = uVar6;
LAB_020145b7:
  if (((param_1 != (uint *)0x0) && (7 < param_2)) && (uVar1 = DAT_021043e6, uVar3 < uVar1)) {
    DAT_02104418 = (uint)uVar4 << 0x10 | uVar3;
    switch((uintptr_t)(uVar4)) {
    case 1:
      if (!bVar8) {
        uVar6 = DAT_021043e8;
        DAT_021043e8 = uVar6 | local_18;
        uVar2 = DAT_021043e8;
        uVar2 = DAT_021043e8;
        uVar2 = DAT_021043e8;
        uVar6 = DAT_021043ec;
        if ((uVar6 & local_18) == 0) {
          recovered_2014ce0(uVar3,3);
          uVar3 = DAT_021043ec;
          DAT_021043ec = uVar3 | local_18;
          uVar2 = DAT_021043ec;
          uVar2 = DAT_021043ec;
          uVar2 = DAT_021043ec;
        }
      }
      break;
    case 2:
      local_18 = ~local_18;
      uVar6 = DAT_021043e8;
      DAT_021043e8 = uVar6 & local_18;
      uVar2 = DAT_021043e8;
      uVar2 = DAT_021043e8;
      uVar2 = DAT_021043e8;
      uVar6 = DAT_021043ec;
      DAT_021043ec = uVar6 & local_18;
      uVar2 = DAT_021043ec;
      uVar2 = DAT_021043ec;
      uVar2 = DAT_021043ec;
      uVar6 = DAT_021043f0;
      DAT_021043f0 = uVar6 & local_18;
      uVar2 = DAT_021043f0;
      uVar2 = DAT_021043f0;
      uVar2 = DAT_021043f0;
      uVar6 = DAT_021043f4;
      DAT_021043f4 = uVar6 & local_18;
      uVar2 = DAT_021043f4;
      uVar2 = DAT_021043f4;
      uVar2 = DAT_021043f4;
      uVar6 = DAT_021043f8;
      if (uVar6 == uVar3) {
        DAT_021043f8 = 0xffffffff;
        Ram021043ce = 0;
      }
      break;
    case 6:
      if (bVar8) {
        uVar6 = DAT_021043f0;
        DAT_021043f0 = uVar6 & ~local_18;
        uVar2 = DAT_021043f0;
        uVar2 = DAT_021043f0;
        uVar2 = DAT_021043f0;
        uVar6 = DAT_021043f8;
        if (uVar6 == uVar3) {
          Ram021043ce = 0;
        }
      }
      else {
        uVar6 = DAT_021043f0;
        DAT_021043f0 = uVar6 | local_18;
        uVar2 = DAT_021043f0;
        uVar2 = DAT_021043f0;
        uVar2 = DAT_021043f0;
        uVar6 = DAT_021043f8;
        if ((uVar6 == uVar3) && (uVar3 = DAT_021043f4, (uVar3 & local_18) != 0)) {
          recovered_2014750();
          return;
        }
      }
      break;
    case 7:
      if (8 < param_2) {
        uVar7 = param_2 - 8;
        uVar6 = uVar7;
        if (0x11 < uVar7) {
          uVar6 = 0x12;
        }
        uVar5 = 0;
        do {
          if (*(char *)((int)param_1 + uVar5 + 8) != str_020c5106[uVar5]) {
            return;
          }
          uVar5 = uVar5 + 1;
        } while (uVar6 != uVar5);
        if ((0x11 < uVar7) && ((uVar7 == 0x12 || (*(char *)((int)param_1 + 0x1a) == '\0')))) {
          DAT_021043f8 = uVar3;
          uVar6 = DAT_021043f4;
          if ((uVar6 & local_18) == 0) {
            recovered_2014ce0(uVar3,6);
            uVar3 = DAT_021043f4;
            DAT_021043f4 = uVar3 | local_18;
            uVar2 = DAT_021043f4;
            uVar2 = DAT_021043f4;
            uVar2 = DAT_021043f4;
          }
          uVar3 = DAT_021043f0;
          if ((uVar3 & local_18) != 0) {
            recovered_2014750();
          }
          DAT_02104414 = 0x40;
        }
      }
    }
  }
  return;
}
