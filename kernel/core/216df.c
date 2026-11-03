#include "functions.h"
#undef DAT_0002f0b8
#define DAT_0002f0b8 (*(int *)(0x2f0b8U))
#undef DAT_0003f0c0
#define DAT_0003f0c0 (*(int *)(0x3f0c0U))
#undef DAT_0003f0cc
#define DAT_0003f0cc (*(uint *)(0x3f0ccU))
#undef DAT_0003f0d0
#define DAT_0003f0d0 (*(uint *)(0x3f0d0U))
#undef DAT_0003f0d4
#define DAT_0003f0d4 (*(byte *)(0x3f0d4U))
#undef _DAT_00006084
#define _DAT_00006084 (*(uint *)(0x6084U))
#undef str_0002cac9
#define str_0002cac9 (*(char (*)[1])(0x2cac9U))
#undef str_0002cadf
#define str_0002cadf (*(char (*)[1])(0x2cadfU))
#undef str_0002cb00
#define str_0002cb00 (*(char (*)[1])(0x2cb00U))
#undef str_0002cb22
#define str_0002cb22 (*(char (*)[1])(0x2cb22U))
#undef str_0002cb3f
#define str_0002cb3f (*(char (*)[1])(0x2cb3fU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x216df
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000216df(void)

{
  unsigned char frame[64];

  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  uVar1 = DAT_0003f0d0;
  if ((DAT_0002f0b8 == 0) || ((DAT_0003f0d4 & DAT_0003f0c0 != 0) == 0)) {
    pcVar3 = str_0002cac9;
  }
  else {
    iVar4 = _DAT_00006084 - DAT_0003f0cc;
    if (DAT_0003f0cc <= _DAT_00006084 && iVar4 != 0) {
      if (DAT_0003f0d0 < (uint)(DAT_0003f0c0 * iVar4)) {
        DAT_0003f0d0 = DAT_0003f0c0 * iVar4;
        uVar2 = recovered_217ea();
        if ((char)uVar2 == '\0') {
          pcVar3 = str_0002cb22;
          goto LAB_00021740;
        }
        recovered_21c41(str_0002cb3f,iVar4);
      }
      else {
        recovered_2176e(str_0002cb00);
      }
      return 1;
    }
    pcVar3 = str_0002cadf;
  }
LAB_00021740:
  DAT_0003f0d0 = uVar1;
  recovered_2176e(pcVar3);
  return 0;
}

