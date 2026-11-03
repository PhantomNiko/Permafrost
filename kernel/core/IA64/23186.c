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
#undef str_000462a9
#define str_000462a9 (*(char (*)[1])(0x462a9U))
#undef str_000462bf
#define str_000462bf (*(char (*)[1])(0x462bfU))
#undef str_000462df
#define str_000462df (*(char (*)[1])(0x462dfU))
#undef str_00046300
#define str_00046300 (*(char (*)[1])(0x46300U))
#undef str_00046322
#define str_00046322 (*(char (*)[1])(0x46322U))
#undef str_0004633f
#define str_0004633f (*(char (*)[1])(0x4633fU))
#undef str_00046362
#define str_00046362 (*(char (*)[1])(0x46362U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23186
 */

int recovered_23186(void)

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
    pcVar8 = str_000462a9;
  }
  else if ((DAT_0004ce44 & 1) == 0) {
    uVar6 = recovered_232ab();
    uVar3 = DAT_0004ce3c;
    if (uVar6 == 0) {
      pcVar8 = str_000462df;
      DAT_0004ce3c = uVar3;
    }
    else {
      if (uVar6 <= DAT_0004ce3c) {
        pcVar8 = recovered_233f0(DAT_0004ce48);
        format = str_00046300;
LAB_0002328a:
        recovered_233b7(format,pcVar8);
        return 1;
      }
      DAT_0004ce3c = uVar6;
      bVar5 = recovered_23409();
      if (bVar5) {
        uVar7 = recovered_24e66((uint)bVar1,uVar2,uVar6,DAT_0004ce44);
        if (((char)uVar7 != '\0') && (DAT_0004ce48 == uVar4)) {
          pcVar8 = recovered_233f0(uVar4);
          format = str_00046362;
          goto LAB_0002328a;
        }
        pcVar8 = str_0004633f;
      }
      else {
        pcVar8 = str_00046322;
        DAT_0004ce3c = uVar3;
      }
    }
  }
  else {
    pcVar8 = str_000462bf;
  }
  recovered_22d6b(pcVar8);
  return 0;
}
