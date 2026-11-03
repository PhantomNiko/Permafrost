#include "functions.h"
#undef DAT_0002ca40
#define DAT_0002ca40 (*(uint8_t *)(0x2ca40U))
#undef DAT_0002cb7f
#define DAT_0002cb7f (*(uint8_t *)(0x2cb7fU))
#undef DAT_0002e224
#define DAT_0002e224 (*(uint8_t *)(0x2e224U))
#undef DAT_0003f0d8
#define DAT_0003f0d8 (*(uint8_t *)(0x3f0d8U))
#undef DAT_0003f0d9
#define DAT_0003f0d9 (*(uint8_t *)(0x3f0d9U))
#undef DAT_0004f1cc
#define DAT_0004f1cc (*(char *)(0x4f1ccU))
#undef DAT_00070428
#define DAT_00070428 (*(char *)(0x70428U))
#undef _LAB_0000046c
#define _LAB_0000046c (*(uint8_t *)(0x46cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x241e6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_241e6(void)

{
  unsigned char frame[64];

  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  DAT_0003f0d8 = 0;
  uVar7 = 0;
  uVar3 = _LAB_0000046c / 9;
  recovered_21cca();
  if (DAT_0004f1cc == '\x01') {
    recovered_2449b(&DAT_0002ca40);
  }
  do {
    uVar8 = uVar7 + 1;
LAB_00024221:
    do {
      if (DAT_0004f1cc == '\x01') {
        do {
          bVar1 = in(0x3fd);
          if ((bVar1 & 1) == 0) goto LAB_00024258;
          cVar2 = in(0x3f8);
          if (DAT_00070428 != '\x01') {
            if (cVar2 == '\n') goto LAB_00024381;
            break;
          }
          DAT_00070428 = '\0';
        } while (cVar2 == '\n');
        if (cVar2 == '\r') {
          DAT_00070428 = '\x01';
LAB_00024381:
          (&DAT_0003f0d8)[uVar7] = 0;
          recovered_2449b(&DAT_0002cb7f);
LAB_00024392:
          recovered_21cca();
          return;
        }
        if ((cVar2 == '\x7f' || cVar2 == '\b') && uVar7 != 0) {
          *(undefined1 *)(uVar7 + 0x3f0d7) = 0;
          recovered_2449b(&DAT_0002e224);
LAB_0002435a:
          uVar8 = uVar7 - 1;
        }
        else {
          if ((0x5e < (byte)(cVar2 - 0x20U)) || (0xef < uVar8)) goto LAB_00024221;
          (&DAT_0003f0d8)[uVar7] = cVar2;
          (&DAT_0003f0d9)[uVar7] = 0;
          recovered_244bd(cVar2);
        }
LAB_0002435c:
        uVar5 = _LAB_0000046c / 9;
        uVar7 = uVar8;
        break;
      }
LAB_00024258:
      uVar4 = FUN_00020023();
      if ((short)uVar4 != 0) {
        cVar2 = (char)uVar4;
        if ((cVar2 == '\r') || (uVar6 = (ushort)((uint)uVar4 >> 8) & 0xff, uVar6 == 0x1c)) {
          (&DAT_0003f0d8)[uVar7] = 0;
          goto LAB_00024392;
        }
        if ((uVar6 == 0xe || cVar2 == '\b') && uVar7 != 0) {
          *(undefined1 *)(uVar7 + 0x3f0d7) = 0;
          goto LAB_0002435a;
        }
        if (((byte)(cVar2 - 0x20U) < 0x5f) && (uVar8 < 0xf0)) {
          (&DAT_0003f0d8)[uVar7] = cVar2;
          (&DAT_0003f0d9)[uVar7] = 0;
          goto LAB_0002435c;
        }
        goto LAB_00024221;
      }
      uVar5 = _LAB_0000046c / 9;
    } while ((((byte)uVar5 ^ (byte)uVar3) & 1) == 0);
    recovered_21cca();
    uVar3 = uVar5;
  } while( true );
}

