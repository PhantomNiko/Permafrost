#include "functions.h"
#undef DAT_00054e2c
#define DAT_00054e2c (*(char *)(0x54e2cU))
#undef DAT_00057334
#define DAT_00057334 (*(char *)(0x57334U))
#undef DAT_00057336
#define DAT_00057336 (*(byte *)(0x57336U))
#undef DAT_00057337
#define DAT_00057337 (*(byte *)(0x57337U))
#undef DAT_00057338
#define DAT_00057338 (*(byte *)(0x57338U))
#undef DAT_00057339
#define DAT_00057339 (*(byte *)(0x57339U))
#undef DAT_0005733a
#define DAT_0005733a (*(byte *)(0x5733aU))
#undef DAT_0005742c
#define DAT_0005742c (*(int *)(0x5742cU))
#undef DAT_00057430
#define DAT_00057430 (*(byte *)(0x57430U))
#undef DAT_00057432
#define DAT_00057432 (*(uint8_t *)(0x57432U))
#undef DAT_00058432
#define DAT_00058432 (*(ushort *)(0x58432U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23907
 */

uint recovered_23907(void)

{
  unsigned char frame[64];

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined4 in_EAX = 0;
  uint uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;

  out(0x3c4,2);
  uVar1 = in(0x3c5);
  out(0x3c4,4);
  uVar2 = in(0x3c5);
  out(0x3ce,4);
  uVar3 = in(0x3cf);
  out(0x3ce,5);
  uVar4 = in(0x3cf);
  out(0x3ce,6);
  uVar5 = in(0x3cf);
  uVar7 = CONCAT31((int3)((uint)in_EAX >> 8),uVar5);
  if ((DAT_00054e2c == '\0') && (uVar7 = recovered_26bc7(), (char)uVar7 != '\0')) {
    out(0x3c4,2);
    out(0x3c5,4);
    out(0x3c4,4);
    out(0x3c5,7);
    out(0x3ce,4);
    out(0x3cf,2);
    out(0x3ce,5);
    out(0x3cf,0);
    out(0x3ce,6);
    out(0x3cf,4);
    for (iVar8 = 0; iVar8 != 0x100; iVar8 = iVar8 + 1) {
      for (uVar7 = 0; uVar7 != 0x20; uVar7 = uVar7 + 1) {
        if (uVar7 < 0x10) {
          if (((ushort)uVar7 < DAT_00058432 & DAT_00057430) == 1) {
            bVar6 = (&DAT_00057432)[uVar7 + (uint)DAT_00058432 * iVar8];
          }
          else {
            bVar6 = 0;
          }
          if (((DAT_00057334 == '\x01') && (DAT_00057336 <= (byte)iVar8)) &&
             ((0xef < (byte)(DAT_00057339 - 0x11) && 0xf7 < (byte)(DAT_00057338 - 9)) &&
              (DAT_0005742c != 0 && iVar8 - (uint)DAT_00057336 < (uint)DAT_00057337))) {
            uVar10 = 0x10 - DAT_00057339 >> 1;
            cVar9 = (char)uVar10;
            if ((byte)(DAT_00057339 + cVar9) <= (byte)uVar7 || uVar7 < (uVar10 & 0xff))
            goto LAB_00023aca;
            uVar10 = (uint)(byte)((byte)uVar7 - cVar9);
            iVar11 = DAT_0005742c +
                     (iVar8 - (uint)DAT_00057336) * (uint)DAT_00057339 * (uint)DAT_0005733a;
            if (DAT_0005733a == 1 && DAT_00057338 == 8) {
              bVar6 = *(byte *)(iVar11 + uVar10);
            }
            else {
              bVar6 = 0;
              for (uVar12 = 0; DAT_00057338 != uVar12; uVar12 = uVar12 + 1) {
                bVar6 = (byte)(0x80 >> (((byte)(8 - DAT_00057338) >> 1) + (byte)uVar12 & 0x1f)) &
                        (char)(*(char *)(iVar11 + DAT_0005733a * uVar10 + (uVar12 >> 3)) <<
                              ((byte)uVar12 & 7)) >> 7 | bVar6;
              }
            }
          }
        }
        else {
LAB_00023aca:
          bVar6 = 0;
        }
        *(byte *)(uVar7 + 0xa0000 + iVar8 * 0x20) = bVar6;
      }
    }
    out(0x3c4,2);
    out(0x3c5,uVar1);
    out(0x3c4,4);
    out(0x3c5,uVar2);
    out(0x3ce,4);
    out(0x3cf,uVar3);
    out(0x3ce,5);
    out(0x3cf,uVar4);
    out(0x3ce,6);
    uVar7 = CONCAT31(1,uVar5);
    out(0x3cf,uVar5);
  }
  return uVar7;
}
