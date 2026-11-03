#include "functions.h"
#undef DAT_0000046c
#define DAT_0000046c (*(uint8_t *)(0x46cU))
#undef DAT_0003f184
#define DAT_0003f184 (*(uint8_t *)(0x3f184U))
#undef DAT_0003f53e
#define DAT_0003f53e (*(uint8_t *)(0x3f53eU))
#undef DAT_00054e2d
#define DAT_00054e2d (*(uint8_t *)(0x54e2dU))
#undef DAT_00054e2e
#define DAT_00054e2e (*(uint8_t *)(0x54e2eU))
#undef DAT_00054e2f
#define DAT_00054e2f (*(uint8_t *)(0x54e2fU))
#undef DAT_00088e5d
#define DAT_00088e5d (*(char *)(0x88e5dU))
#undef DAT_00088f90
#define DAT_00088f90 (*(char *)(0x88f90U))
#undef PTR_DAT_0004308f
#define PTR_DAT_0004308f (*(void * *)(0x4308fU))
#undef _DAT_0000046c
#define _DAT_0000046c (*(uint *)(0x46cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x263da
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_263da(void)

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
  
  DAT_00054e2e = 0;
  uVar7 = 0;
  uVar3 = _DAT_0000046c / 9;
  recovered_21d99();
  if (DAT_00088e5d == '\x01') {
    recovered_27c0e(&DAT_0003f184);
  }
  do {
    uVar8 = uVar7 + 1;
LAB_00026415:
    do {
      if (DAT_00088e5d == '\x01') {
        do {
          bVar1 = in(0x3fd);
          if ((bVar1 & 1) == 0) goto LAB_0002644c;
          cVar2 = in(0x3f8);
          if (DAT_00088f90 != '\x01') {
            if (cVar2 == '\n') goto LAB_00026575;
            break;
          }
          DAT_00088f90 = '\0';
        } while (cVar2 == '\n');
        if (cVar2 == '\r') {
          DAT_00088f90 = '\x01';
LAB_00026575:
          (&DAT_00054e2e)[uVar7] = 0;
          recovered_27c0e(&DAT_0003f53e);
LAB_00026586:
          recovered_21d99();
          return;
        }
        if ((cVar2 == '\x7f' || cVar2 == '\b') && uVar7 != 0) {
          (&DAT_00054e2d)[uVar7] = 0;
          recovered_27c0e((char *)&PTR_DAT_0004308f);
LAB_0002654e:
          uVar8 = uVar7 - 1;
        }
        else {
          if ((0x5e < (byte)(cVar2 - 0x20U)) || (0xef < uVar8)) goto LAB_00026415;
          (&DAT_00054e2e)[uVar7] = cVar2;
          (&DAT_00054e2f)[uVar7] = 0;
          recovered_27dbd(cVar2);
        }
LAB_00026550:
        uVar5 = _DAT_0000046c / 9;
        uVar7 = uVar8;
        break;
      }
LAB_0002644c:
      uVar4 = FUN_00020023();
      if ((short)uVar4 != 0) {
        cVar2 = (char)uVar4;
        if ((cVar2 == '\r') || (uVar6 = (ushort)((uint)uVar4 >> 8) & 0xff, uVar6 == 0x1c)) {
          (&DAT_00054e2e)[uVar7] = 0;
          goto LAB_00026586;
        }
        if ((uVar6 == 0xe || cVar2 == '\b') && uVar7 != 0) {
          (&DAT_00054e2d)[uVar7] = 0;
          goto LAB_0002654e;
        }
        if (((byte)(cVar2 - 0x20U) < 0x5f) && (uVar8 < 0xf0)) {
          (&DAT_00054e2e)[uVar7] = cVar2;
          (&DAT_00054e2f)[uVar7] = 0;
          goto LAB_00026550;
        }
        goto LAB_00026415;
      }
      uVar5 = _DAT_0000046c / 9;
    } while ((((byte)uVar5 ^ (byte)uVar3) & 1) == 0);
    recovered_21d99();
    uVar3 = uVar5;
  } while( true );
}

