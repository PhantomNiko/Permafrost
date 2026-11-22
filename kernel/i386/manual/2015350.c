#include "functions.h"
#undef DAT_0210466f
#define DAT_0210466f (*(uint8_t volatile *)(0x210466fU))
#undef DAT_02104671
#define DAT_02104671 (*(uint8_t volatile *)(0x2104671U))
#undef DAT_02104696
#define DAT_02104696 (*(uint16_t volatile *)(0x2104696U))
#undef DAT_02104698
#define DAT_02104698 (*(uint16_t volatile *)(0x2104698U))
#undef DAT_021046bc
#define DAT_021046bc (*(uint32_t volatile *)(0x21046bcU))
#undef DAT_021046c0
#define DAT_021046c0 (*(uint32_t volatile *)(0x21046c0U))
#undef DAT_021046c4
#define DAT_021046c4 (*(uint32_t volatile *)(0x21046c4U))
#undef DAT_021046c8
#define DAT_021046c8 (*(uint32_t volatile *)(0x21046c8U))
#undef DAT_021046cc
#define DAT_021046cc (*(uint32_t volatile *)(0x21046ccU))
#undef DAT_021046d0
#define DAT_021046d0 (*(uint8_t volatile *)(0x21046d0U))
#undef DAT_021046d1
#define DAT_021046d1 (*(uint8_t volatile *)(0x21046d1U))
#undef DAT_021046d2
#define DAT_021046d2 (*(uint8_t volatile *)(0x21046d2U))
#undef DAT_021046d3
#define DAT_021046d3 (*(uint8_t volatile *)(0x21046d3U))
#undef DAT_021046d4
#define DAT_021046d4 (*(uint8_t volatile *)(0x21046d4U))
#undef DAT_0212c240
#define DAT_0212c240 (*(uint8_t volatile *)(0x212c240U))
#undef DAT_0212c241
#define DAT_0212c241 (*(uint8_t volatile *)(0x212c241U))
#undef DAT_0212c242
#define DAT_0212c242 (*(uint8_t volatile *)(0x212c242U))
#undef DAT_0212c243
#define DAT_0212c243 (*(uint8_t volatile *)(0x212c243U))
#undef DAT_0212c244
#define DAT_0212c244 (*(uint8_t volatile *)(0x212c244U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2015350
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_2015350(uint *out)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  uVar3 = DAT_02104698;
  if (uVar3 == 0) {
    uVar3 = DAT_02104696;
  }
  uVar9 = (uint)uVar3;
  if (0x3ff < uVar9) {
    uVar9 = 0x400;
  }
  if (2 < uVar3) {
    recovered_2001e00(out,0,0x20);
    cVar2 = DAT_0212c240;
    bVar1 = DAT_0212c241;
    uVar7 = (uint)(bVar1 < 8 && (cVar2 != '\0' && 4 < uVar3));
    if (uVar7 < uVar9) {
      do {
        if ((&DAT_0212c240)[uVar7] != '\0') {
          cVar2 = DAT_02104671;
          if ((cVar2 != '\x01') || (uVar7 = (uint)(5 < uVar3 && bVar1 < 8), uVar9 < uVar7 + 5)) {
            uVar9 = recovered_2015da0(&DAT_0212c240,uVar9,out);
            if ((char)uVar9 == '\0') {
              return 0;
            }
            DAT_021046bc = out[1];
            goto LAB_0201552b;
          }
          uVar3 = *(ushort *)(&DAT_0212c241 + uVar7);
          uVar4 = *(ushort *)(&DAT_0212c243 + uVar7);
          bVar1 = (&DAT_0212c240)[uVar7];
          if ((bVar1 & 1) != 0) {
            *(byte *)(out + 1) = (byte)out[1] | 1;
            bVar1 = (&DAT_0212c240)[uVar7];
          }
          if ((bVar1 & 2) != 0) {
            *(byte *)(out + 1) = (byte)out[1] | 2;
            bVar1 = (&DAT_0212c240)[uVar7];
          }
          if ((bVar1 & 4) != 0) {
            *(byte *)(out + 1) = (byte)out[1] | 4;
          }
          if (((((&DAT_0212c241)[uVar7] == (&DAT_021046d1)[uVar7]) &&
               ((&DAT_0212c242)[uVar7] == (&DAT_021046d2)[uVar7])) &&
              ((&DAT_0212c243)[uVar7] == (&DAT_021046d3)[uVar7])) &&
             ((&DAT_0212c244)[uVar7] == (&DAT_021046d4)[uVar7])) {
            DAT_021046bc = out[1];
            cVar2 = DAT_0210466f;
            if (cVar2 != '\x01') goto LAB_020154e1;
            uVar9 = DAT_021046c0;
            uVar7 = DAT_021046c4;
            uVar8 = DAT_021046c8;
            uVar5 = DAT_021046cc;
          }
          else {
            DAT_021046bc = out[1];
LAB_020154e1:
            uVar9 = (uint)uVar3;
            uVar7 = (uint)uVar4;
            DAT_021046c0 = uVar9;
            DAT_021046c4 = uVar7;
            uVar8 = DAT_021046c8;
            if (uVar8 < uVar9) {
              DAT_021046c8 = uVar9;
              uVar8 = uVar9;
            }
            uVar5 = DAT_021046cc;
            if (uVar5 < uVar7) {
              DAT_021046cc = uVar7;
              uVar5 = uVar7;
            }
          }
          *(byte *)out = (byte)*out | 1;
          out[2] = uVar9;
          out[3] = uVar7;
          out[6] = uVar8;
          out[7] = uVar5;
LAB_0201552b:
          DAT_0210466f = 1;
          pvVar6 = recovered_2001b70(&DAT_021046d0,&DAT_0212c240,0x400);
          return CONCAT31((int3)((uint)pvVar6 >> 8),1);
        }
        uVar7 = uVar7 + 1;
      } while (uVar9 != uVar7);
    }
  }
  return 0;
}
