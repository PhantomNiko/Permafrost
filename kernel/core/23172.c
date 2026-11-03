#include "functions.h"
#undef DAT_0004ee28
#define DAT_0004ee28 (*(byte *)(0x4ee28U))
#undef DAT_0004ee2c
#define DAT_0004ee2c (*(int *)(0x4ee2cU))
#undef DAT_0004ee38
#define DAT_0004ee38 (*(uint *)(0x4ee38U))
#undef DAT_0004ee3c
#define DAT_0004ee3c (*(uint *)(0x4ee3cU))
#undef DAT_0004ee44
#define DAT_0004ee44 (*(uint *)(0x4ee44U))
#undef DAT_0004ee48
#define DAT_0004ee48 (*(int *)(0x4ee48U))
#undef DAT_0004ee90
#define DAT_0004ee90 (*(char *)(0x4ee90U))
#undef DAT_0004ee98
#define DAT_0004ee98 (*(int *)(0x4ee98U))
#undef str_00048549
#define str_00048549 (*(char (*)[1])(0x48549U))
#undef str_0004855f
#define str_0004855f (*(char (*)[1])(0x4855fU))
#undef str_0004857f
#define str_0004857f (*(char (*)[1])(0x4857fU))
#undef str_000485a0
#define str_000485a0 (*(char (*)[1])(0x485a0U))
#undef str_000485c2
#define str_000485c2 (*(char (*)[1])(0x485c2U))
#undef str_000485df
#define str_000485df (*(char (*)[1])(0x485dfU))
#undef str_00048602
#define str_00048602 (*(char (*)[1])(0x48602U))
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
  int iVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;

  iVar4 = DAT_0004ee48;
  uVar2 = DAT_0004ee38;
  bVar1 = DAT_0004ee28;
  if ((((DAT_0004ee98 == 0) || (DAT_0004ee90 != '\x01')) || (DAT_0004ee2c == 0)) ||
     ((DAT_0004ee48 != 1 && (DAT_0004ee48 != 6)))) {
    pcVar8 = str_00048549;
  }
  else if ((DAT_0004ee44 & 1) == 0) {
    uVar6 = recovered_23284();
    uVar3 = DAT_0004ee3c;
    if (uVar6 == 0) {
      pcVar8 = str_0004857f;
      DAT_0004ee3c = uVar3;
    }
    else {
      if (uVar6 <= DAT_0004ee3c) {
        pcVar8 = recovered_233c9(DAT_0004ee48);
        format = str_000485a0;
LAB_00023261:
        recovered_23390(format,pcVar8);
        return 1;
      }
      DAT_0004ee3c = uVar6;
      bVar5 = recovered_233e2();
      if (bVar5) {
        uVar7 = recovered_24e3f((uint)bVar1,uVar2,uVar6,DAT_0004ee44);
        if (((char)uVar7 != '\0') && (DAT_0004ee48 == iVar4)) {
          pcVar8 = recovered_233c9(iVar4);
          format = str_00048602;
          goto LAB_00023261;
        }
        pcVar8 = str_000485df;
      }
      else {
        pcVar8 = str_000485c2;
        DAT_0004ee3c = uVar3;
      }
    }
  }
  else {
    pcVar8 = str_0004855f;
  }
  recovered_22d6b(pcVar8);
  return 0;
}
