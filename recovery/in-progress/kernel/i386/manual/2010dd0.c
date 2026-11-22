#include "functions.h"
#undef DAT_021043cc
#define DAT_021043cc (*(uint8_t volatile *)(0x21043ccU))
#undef DAT_021043cd
#define DAT_021043cd (*(uint8_t volatile *)(0x21043cdU))
#undef DAT_021043ce
#define DAT_021043ce (*(uint8_t volatile *)(0x21043ceU))
#undef DAT_021043cf
#define DAT_021043cf (*(uint8_t volatile *)(0x21043cfU))
#undef DAT_021043d4
#define DAT_021043d4 (*(uint32_t volatile *)(0x21043d4U))
#undef DAT_021043d8
#define DAT_021043d8 (*(uint32_t volatile *)(0x21043d8U))
#undef DAT_021043dc
#define DAT_021043dc (*(uint32_t volatile *)(0x21043dcU))
#undef DAT_021043e4
#define DAT_021043e4 (*(uint16_t volatile *)(0x21043e4U))
#undef DAT_021043e6
#define DAT_021043e6 (*(uint16_t volatile *)(0x21043e6U))
#undef DAT_021043f0
#define DAT_021043f0 (*(uint32_t volatile *)(0x21043f0U))
#undef DAT_021043f4
#define DAT_021043f4 (*(uint32_t volatile *)(0x21043f4U))
#undef DAT_021043f8
#define DAT_021043f8 (*(uint32_t volatile *)(0x21043f8U))
#undef DAT_021043fc
#define DAT_021043fc (*(uint32_t volatile *)(0x21043fcU))
#undef DAT_02104400
#define DAT_02104400 (*(uint32_t volatile *)(0x2104400U))
#undef DAT_02104404
#define DAT_02104404 (*(uint32_t volatile *)(0x2104404U))
#undef DAT_02104408
#define DAT_02104408 (*(uint32_t volatile *)(0x2104408U))
#undef DAT_0210440c
#define DAT_0210440c (*(uint32_t volatile *)(0x210440cU))
#undef DAT_02104414
#define DAT_02104414 (*(uint32_t volatile *)(0x2104414U))
#undef DAT_02104418
#define DAT_02104418 (*(uint32_t volatile *)(0x2104418U))
#undef DAT_0210441c
#define DAT_0210441c (*(uint32_t volatile *)(0x210441cU))
#define local_14 (*(uint *)(frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2010dd0
 */

uint recovered_2010dd0(uint *out)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint unaff_EBX = 0;
  int iVar8;

  cVar1 = DAT_021043cc;
  if (cVar1 != '\x01') {
    return 0;
  }
  cVar1 = DAT_021043cd;
  if (cVar1 == '\0') {
    iVar6 = DAT_021043d4;
    if ((iVar6 == 0) || (iVar8 = DAT_021043d8, iVar8 == 0)) {
      DAT_02104414 = 0x1f;
      return 0;
    }
    DAT_02104414 = 0x20;
    DAT_021043f8 = 0xffffffff;
    DAT_02104408 = 0xffff;
    DAT_0210440c = 0xffff;
    *(undefined1 *)(iVar6 + 0x14) = 0;
    iVar6 = DAT_021043d4;
    *(undefined1 *)(iVar6 + 0x14) = 1;
    iVar6 = DAT_021043d4;
    *(undefined1 *)(iVar6 + 0x14) = 3;
    puVar2 = (undefined4 *)DAT_021043d4;
    *puVar2 = 0;
    uVar7 = puVar2[1];
    *puVar2 = 1;
    if (((uVar7 & 2) == 0) || ((puVar2[1] & 1) == 0)) {
      DAT_02104414 = 0x21;
    }
    else {
      puVar2[2] = 0;
      puVar2[3] = 2;
      puVar2[2] = 1;
      puVar2[3] = 1;
      iVar6 = DAT_021043d4;
      *(undefined1 *)(iVar6 + 0x14) = 0xb;
      iVar6 = DAT_021043d4;
      uVar7 = (uint)*(byte *)(iVar6 + 0x14);
      DAT_0210441c = uVar7;
      if ((*(byte *)(iVar6 + 0x14) & 8) != 0) {
        DAT_021043e4 = *(undefined2 *)(iVar6 + 0x12);
        iVar6 = DAT_021043dc;
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(iVar6 + 4);
        }
        iVar8 = 4;
        if (0xfffffffb < iVar6 - 5U) {
          iVar8 = iVar6;
        }
        DAT_021043e6 = (short)iVar8;
        uVar7 = recovered_2014970(2,1);
        unaff_EBX = 0;
        if ((char)uVar7 == '\0') {
          return 0;
        }
        uVar7 = recovered_2014970(3,0);
        if ((char)uVar7 == '\0') {
          return 0;
        }
        if (iVar8 != 0) {
          uVar7 = recovered_2014970(0,1);
          if ((char)uVar7 == '\0') {
            return 0;
          }
          unaff_EBX = 0;
          uVar7 = recovered_2014970(1,0);
          if ((char)uVar7 == '\0') {
            return 0;
          }
          if (iVar8 != 1) {
            iVar8 = iVar8 + -1;
            unaff_EBX = 5;
            do {
              uVar7 = recovered_2014970(unaff_EBX - 1 & 0xffff,1);
              if ((char)uVar7 == '\0') {
                return 0;
              }
              uVar7 = recovered_2014970(unaff_EBX & 0xffff,0);
              if ((char)uVar7 == '\0') {
                return 0;
              }
              unaff_EBX = unaff_EBX + 2;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        iVar6 = DAT_021043d4;
        *(undefined1 *)(iVar6 + 0x14) = 0xf;
        iVar6 = DAT_021043d4;
        DAT_0210441c = (uint)*(byte *)(iVar6 + 0x14);
        DAT_021043cd = 1;
        DAT_02104414 = 0x3c;
        recovered_2014ce0(0,0);
        iVar6 = 100;
        do {
          local_14 = 0;
          do {
            local_14 = local_14 + 1;
          } while (local_14 < 0x40);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        recovered_2014320(2,recovered_2014530);
        iVar6 = 100;
        do {
          local_14 = 0;
          do {
            local_14 = local_14 + 1;
          } while (local_14 < 0x40);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        recovered_2014320(2,recovered_2014530);
        iVar6 = 100;
        do {
          local_14 = 0;
          do {
            local_14 = local_14 + 1;
          } while (local_14 < 0x40);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        recovered_2014320(2,recovered_2014530);
        iVar6 = 100;
        do {
          local_14 = 0;
          do {
            local_14 = local_14 + 1;
          } while (local_14 < 0x40);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        recovered_2014320(2,recovered_2014530);
        goto LAB_02010df5;
      }
      DAT_02104414 = 0x22;
    }
    DAT_02104418 = uVar7;
  }
  else {
LAB_02010df5:
    recovered_2014320(2,recovered_2014530);
    uVar7 = DAT_021043f8;
    uVar3 = DAT_021043e6;
    if (uVar7 < uVar3) {
      uVar5 = 1 << ((byte)uVar7 & 0x1f);
      if (0x1f < uVar7) {
        uVar5 = 0;
      }
      cVar1 = DAT_021043ce;
      if (((cVar1 == '\0') && (uVar4 = DAT_021043f0, (uVar4 & uVar5) != 0)) &&
         (uVar4 = DAT_021043f4, (uVar4 & uVar5) != 0)) {
        recovered_2014750();
        uVar7 = DAT_021043f8;
      }
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar7 * 2 + 2;
      }
      recovered_2014320(uVar5 & 0xffff,recovered_2014860);
    }
    recovered_2001e00(out,0,0x20);
    cVar1 = DAT_021043cf;
    if (cVar1 == '\x01') {
      *out = 1;
      uVar7 = DAT_021043fc;
      out[1] = uVar7;
      uVar7 = DAT_02104400;
      out[2] = uVar7;
      uVar7 = DAT_02104404;
      out[3] = uVar7;
      uVar7 = DAT_02104408;
      out[6] = uVar7;
      uVar7 = DAT_0210440c;
      out[7] = uVar7;
      return CONCAT31((int3)(unaff_EBX >> 8),1);
    }
  }
  return 0;
}
