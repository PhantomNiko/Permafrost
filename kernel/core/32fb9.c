#include "functions.h"
#undef DAT_0005e928
#define DAT_0005e928 (*(char *)(0x5e928U))
#undef DAT_00061d4c
#define DAT_00061d4c (*(char *)(0x61d4cU))
#undef DAT_00061d4e
#define DAT_00061d4e (*(byte *)(0x61d4eU))
#undef DAT_00061d4f
#define DAT_00061d4f (*(byte *)(0x61d4fU))
#undef DAT_00061d50
#define DAT_00061d50 (*(byte *)(0x61d50U))
#undef DAT_00061d51
#define DAT_00061d51 (*(byte *)(0x61d51U))
#undef DAT_00061d52
#define DAT_00061d52 (*(byte *)(0x61d52U))
#undef DAT_00061e44
#define DAT_00061e44 (*(int *)(0x61e44U))
#undef DAT_00061e48
#define DAT_00061e48 (*(byte *)(0x61e48U))
#undef DAT_00061e4a
#define DAT_00061e4a (*(uint8_t *)(0x61e4aU))
#undef DAT_00062e4a
#define DAT_00062e4a (*(ushort *)(0x62e4aU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32fb9
 */

uint recovered_32fb9(void)

{
  unsigned char frame[64] = {0};

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
  if ((DAT_0005e928 == '\0') && (uVar7 = recovered_36da3(), (char)uVar7 != '\0')) {
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
          if (((ushort)uVar7 < DAT_00062e4a & DAT_00061e48) == 1) {
            bVar6 = (&DAT_00061e4a)[uVar7 + (uint)DAT_00062e4a * iVar8];
          }
          else {
            bVar6 = 0;
          }
          if (((DAT_00061d4c == '\x01') && (DAT_00061d4e <= (byte)iVar8)) &&
             ((0xef < (byte)(DAT_00061d51 - 0x11) && 0xf7 < (byte)(DAT_00061d50 - 9)) &&
              (DAT_00061e44 != 0 && iVar8 - (uint)DAT_00061d4e < (uint)DAT_00061d4f))) {
            uVar10 = 0x10 - DAT_00061d51 >> 1;
            cVar9 = (char)uVar10;
            if ((byte)(DAT_00061d51 + cVar9) <= (byte)uVar7 || uVar7 < (uVar10 & 0xff))
            goto LAB_0003317c;
            uVar10 = (uint)(byte)((byte)uVar7 - cVar9);
            iVar11 = DAT_00061e44 +
                     (iVar8 - (uint)DAT_00061d4e) * (uint)DAT_00061d51 * (uint)DAT_00061d52;
            if (DAT_00061d52 == 1 && DAT_00061d50 == 8) {
              bVar6 = *(byte *)(iVar11 + uVar10);
            }
            else {
              bVar6 = 0;
              for (uVar12 = 0; DAT_00061d50 != uVar12; uVar12 = uVar12 + 1) {
                bVar6 = (byte)(0x80 >> (((byte)(8 - DAT_00061d50) >> 1) + (byte)uVar12 & 0x1f)) &
                        (char)(*(char *)(iVar11 + DAT_00061d52 * uVar10 + (uVar12 >> 3)) <<
                              ((byte)uVar12 & 7)) >> 7 | bVar6;
              }
            }
          }
        }
        else {
LAB_0003317c:
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
