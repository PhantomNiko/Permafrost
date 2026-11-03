#include "functions.h"
#undef DAT_00047e88
#define DAT_00047e88 (*(char *)(0x47e88U))
#undef DAT_0004b4a0
#define DAT_0004b4a0 (*(char *)(0x4b4a0U))
#undef DAT_0004b4a2
#define DAT_0004b4a2 (*(byte *)(0x4b4a2U))
#undef DAT_0004b4a3
#define DAT_0004b4a3 (*(byte *)(0x4b4a3U))
#undef DAT_0004b4a4
#define DAT_0004b4a4 (*(byte *)(0x4b4a4U))
#undef DAT_0004b4a5
#define DAT_0004b4a5 (*(byte *)(0x4b4a5U))
#undef DAT_0004b4a6
#define DAT_0004b4a6 (*(byte *)(0x4b4a6U))
#undef DAT_0004b598
#define DAT_0004b598 (*(int *)(0x4b598U))
#undef DAT_0004b59c
#define DAT_0004b59c (*(byte *)(0x4b59cU))
#undef DAT_0004b59e
#define DAT_0004b59e (*(uint8_t *)(0x4b59eU))
#undef DAT_0004c59e
#define DAT_0004c59e (*(ushort *)(0x4c59eU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25089
 */

uint recovered_25089(void)

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
  if ((DAT_00047e88 == '\0') && (uVar7 = recovered_2837e(), (char)uVar7 != '\0')) {
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
          if (((ushort)uVar7 < DAT_0004c59e & DAT_0004b59c) == 1) {
            bVar6 = (&DAT_0004b59e)[uVar7 + (uint)DAT_0004c59e * iVar8];
          }
          else {
            bVar6 = 0;
          }
          if (((DAT_0004b4a0 == '\x01') && (DAT_0004b4a2 <= (byte)iVar8)) &&
             ((0xef < (byte)(DAT_0004b4a5 - 0x11) && 0xf7 < (byte)(DAT_0004b4a4 - 9)) &&
              (DAT_0004b598 != 0 && iVar8 - (uint)DAT_0004b4a2 < (uint)DAT_0004b4a3))) {
            uVar10 = 0x10 - DAT_0004b4a5 >> 1;
            cVar9 = (char)uVar10;
            if ((byte)(DAT_0004b4a5 + cVar9) <= (byte)uVar7 || uVar7 < (uVar10 & 0xff))
            goto LAB_0002524c;
            uVar10 = (uint)(byte)((byte)uVar7 - cVar9);
            iVar11 = DAT_0004b598 +
                     (iVar8 - (uint)DAT_0004b4a2) * (uint)DAT_0004b4a5 * (uint)DAT_0004b4a6;
            if (DAT_0004b4a6 == 1 && DAT_0004b4a4 == 8) {
              bVar6 = *(byte *)(iVar11 + uVar10);
            }
            else {
              bVar6 = 0;
              for (uVar12 = 0; DAT_0004b4a4 != uVar12; uVar12 = uVar12 + 1) {
                bVar6 = (byte)(0x80 >> (((byte)(8 - DAT_0004b4a4) >> 1) + (byte)uVar12 & 0x1f)) &
                        (char)(*(char *)(iVar11 + DAT_0004b4a6 * uVar10 + (uVar12 >> 3)) <<
                              ((byte)uVar12 & 7)) >> 7 | bVar6;
              }
            }
          }
        }
        else {
LAB_0002524c:
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
