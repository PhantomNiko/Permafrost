#include "functions.h"
#undef PTR_DAT_0004e030
#define PTR_DAT_0004e030 (*(uint8_t * *)(0x4e030U))
#undef PTR_DAT_0004e034
#define PTR_DAT_0004e034 (*(uint8_t * *)(0x4e034U))
#undef PTR_DAT_0004e038
#define PTR_DAT_0004e038 (*(uint8_t * *)(0x4e038U))
#undef PTR_DAT_0004e04c
#define PTR_DAT_0004e04c (*(uint8_t * *)(0x4e04cU))
#undef PTR_DAT_0004e050
#define PTR_DAT_0004e050 (*(uint8_t * *)(0x4e050U))
#undef PTR_DAT_0004e054
#define PTR_DAT_0004e054 (*(uint8_t * *)(0x4e054U))
#undef PTR_DAT_0004e058
#define PTR_DAT_0004e058 (*(uint8_t * *)(0x4e058U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x296a6
 */

uint recovered_296a6(uint param_1,uint param_2,byte param_3)

{
  unsigned char frame[100];

  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;

  uVar2 = *(uint *)PTR_DAT_0004e054;
  uVar4 = *(uint *)PTR_DAT_0004e04c;
  uVar6 = *(uint *)PTR_DAT_0004e030;
  if (uVar6 == 0 || (uVar4 == 0 || uVar2 == 0)) {
    iVar1 = *(int *)PTR_DAT_0004e038;
    if (iVar1 == 0x20) {
LAB_00029745:
      return (uint)param_3 | (param_2 & 0xff) << 8 | (param_1 & 0xff) << 0x10;
    }
    if (iVar1 == 0x10) {
      uVar4 = 6;
      bVar3 = 0xb;
    }
    else {
      if (iVar1 == 0x18) goto LAB_00029745;
      if (iVar1 != 0xf) {
        return 0;
      }
      uVar4 = 5;
      bVar3 = 10;
    }
    bVar7 = 0;
    uVar6 = 5;
    bVar5 = 5;
    uVar2 = 5;
  }
  else {
    bVar7 = (byte)*(undefined4 *)PTR_DAT_0004e034;
    bVar5 = (byte)*(undefined4 *)PTR_DAT_0004e050;
    bVar3 = (byte)*(undefined4 *)PTR_DAT_0004e058;
  }
  uVar2 = recovered_29783(param_1 & 0xff,param_2 & 0xff,param_3,uVar2,bVar3,uVar4,bVar5,uVar6,bVar7)
  ;
  return uVar2;
}
