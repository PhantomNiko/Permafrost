#include "functions.h"
#undef DAT_0004ce28
#define DAT_0004ce28 (*(byte *)(0x4ce28U))
#undef DAT_0004ce2c
#define DAT_0004ce2c (*(int *)(0x4ce2cU))
#undef DAT_0004ce38
#define DAT_0004ce38 (*(uint *)(0x4ce38U))
#undef DAT_0004ce3c
#define DAT_0004ce3c (*(uint *)(0x4ce3cU))
#undef DAT_0004ce44
#define DAT_0004ce44 (*(uint *)(0x4ce44U))
#undef DAT_0004ce48
#define DAT_0004ce48 (*(uint *)(0x4ce48U))
#undef DAT_0004ce90
#define DAT_0004ce90 (*(char *)(0x4ce90U))
#undef DAT_0004ce98
#define DAT_0004ce98 (*(int *)(0x4ce98U))
#undef str_00046291
#define str_00046291 (*(char (*)[1])(0x46291U))
#undef str_000462a7
#define str_000462a7 (*(char (*)[1])(0x462a7U))
#undef str_000462c7
#define str_000462c7 (*(char (*)[1])(0x462c7U))
#undef str_000462e8
#define str_000462e8 (*(char (*)[1])(0x462e8U))
#undef str_0004630a
#define str_0004630a (*(char (*)[1])(0x4630aU))
#undef str_00046327
#define str_00046327 (*(char (*)[1])(0x46327U))
#undef str_0004634a
#define str_0004634a (*(char (*)[1])(0x4634aU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23172
 */

int recovered_23172(void)

{
  unsigned char frame[92];

  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;

  uVar4 = DAT_0004ce48;
  uVar2 = DAT_0004ce38;
  bVar1 = DAT_0004ce28;
  if ((((DAT_0004ce98 == 0) || (DAT_0004ce90 != '\x01')) || (DAT_0004ce2c == 0)) ||
     ((6 < DAT_0004ce48 || ((0x46U >> (DAT_0004ce48 & 0x1f) & 1) == 0)))) {
    pcVar8 = str_00046291;
  }
  else if ((DAT_0004ce44 & 1) == 0) {
    uVar6 = recovered_23297();
    uVar3 = DAT_0004ce3c;
    if (uVar6 == 0) {
      pcVar8 = str_000462c7;
      DAT_0004ce3c = uVar3;
    }
    else {
      if (uVar6 <= DAT_0004ce3c) {
        pcVar8 = recovered_233dc(DAT_0004ce48);
        format = str_000462e8;
LAB_00023276:
        recovered_233a3(format,pcVar8);
        return 1;
      }
      DAT_0004ce3c = uVar6;
      bVar5 = recovered_233f5();
      if (bVar5) {
        uVar7 = recovered_24e52((uint)bVar1,uVar2,uVar6,DAT_0004ce44);
        if (((char)uVar7 != '\0') && (DAT_0004ce48 == uVar4)) {
          pcVar8 = recovered_233dc(uVar4);
          format = str_0004634a;
          goto LAB_00023276;
        }
        pcVar8 = str_00046327;
      }
      else {
        pcVar8 = str_0004630a;
        DAT_0004ce3c = uVar3;
      }
    }
  }
  else {
    pcVar8 = str_000462a7;
  }
  recovered_22d6b(pcVar8);
  return 0;
}
