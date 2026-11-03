#include "functions.h"
#undef DAT_0004ce9c
#define DAT_0004ce9c (*(char *)(0x4ce9cU))
#undef DAT_000504c0
#define DAT_000504c0 (*(char *)(0x504c0U))
#undef DAT_000504c2
#define DAT_000504c2 (*(byte *)(0x504c2U))
#undef DAT_000504c3
#define DAT_000504c3 (*(byte *)(0x504c3U))
#undef DAT_000504c4
#define DAT_000504c4 (*(byte *)(0x504c4U))
#undef DAT_000504c5
#define DAT_000504c5 (*(byte *)(0x504c5U))
#undef DAT_000504c6
#define DAT_000504c6 (*(byte *)(0x504c6U))
#undef DAT_000505b8
#define DAT_000505b8 (*(int *)(0x505b8U))
#undef DAT_000505bc
#define DAT_000505bc (*(byte *)(0x505bcU))
#undef DAT_000505be
#define DAT_000505be (*(uint8_t *)(0x505beU))
#undef DAT_000515be
#define DAT_000515be (*(ushort *)(0x515beU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25ae1
 */

uint recovered_25ae1(void)

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
  if ((DAT_0004ce9c == '\0') && (uVar7 = recovered_292a4(), (char)uVar7 != '\0')) {
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
          if (((ushort)uVar7 < DAT_000515be & DAT_000505bc) == 1) {
            bVar6 = (&DAT_000505be)[uVar7 + (uint)DAT_000515be * iVar8];
          }
          else {
            bVar6 = 0;
          }
          if (((DAT_000504c0 == '\x01') && (DAT_000504c2 <= (byte)iVar8)) &&
             ((0xef < (byte)(DAT_000504c5 - 0x11) && 0xf7 < (byte)(DAT_000504c4 - 9)) &&
              (DAT_000505b8 != 0 && iVar8 - (uint)DAT_000504c2 < (uint)DAT_000504c3))) {
            uVar10 = 0x10 - DAT_000504c5 >> 1;
            cVar9 = (char)uVar10;
            if ((byte)(DAT_000504c5 + cVar9) <= (byte)uVar7 || uVar7 < (uVar10 & 0xff))
            goto LAB_00025ca4;
            uVar10 = (uint)(byte)((byte)uVar7 - cVar9);
            iVar11 = DAT_000505b8 +
                     (iVar8 - (uint)DAT_000504c2) * (uint)DAT_000504c5 * (uint)DAT_000504c6;
            if (DAT_000504c6 == 1 && DAT_000504c4 == 8) {
              bVar6 = *(byte *)(iVar11 + uVar10);
            }
            else {
              bVar6 = 0;
              for (uVar12 = 0; DAT_000504c4 != uVar12; uVar12 = uVar12 + 1) {
                bVar6 = (byte)(0x80 >> (((byte)(8 - DAT_000504c4) >> 1) + (byte)uVar12 & 0x1f)) &
                        (char)(*(char *)(iVar11 + DAT_000504c6 * uVar10 + (uVar12 >> 3)) <<
                              ((byte)uVar12 & 7)) >> 7 | bVar6;
              }
            }
          }
        }
        else {
LAB_00025ca4:
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
