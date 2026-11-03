#include "functions.h"
#undef PTR_DAT_0004c030
#define PTR_DAT_0004c030 (*(uint8_t * *)(0x4c030U))
#undef PTR_DAT_0004c034
#define PTR_DAT_0004c034 (*(uint8_t * *)(0x4c034U))
#undef PTR_DAT_0004c038
#define PTR_DAT_0004c038 (*(uint8_t * *)(0x4c038U))
#undef PTR_DAT_0004c04c
#define PTR_DAT_0004c04c (*(uint8_t * *)(0x4c04cU))
#undef PTR_DAT_0004c050
#define PTR_DAT_0004c050 (*(uint8_t * *)(0x4c050U))
#undef PTR_DAT_0004c054
#define PTR_DAT_0004c054 (*(uint8_t * *)(0x4c054U))
#undef PTR_DAT_0004c058
#define PTR_DAT_0004c058 (*(uint8_t * *)(0x4c058U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x296c0
 */

uint recovered_296c0(uint param_1,uint param_2,byte param_3)

{
  unsigned char frame[100];

  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;

  uVar2 = *(uint *)PTR_DAT_0004c054;
  uVar4 = *(uint *)PTR_DAT_0004c04c;
  uVar6 = *(uint *)PTR_DAT_0004c030;
  if (uVar6 == 0 || (uVar4 == 0 || uVar2 == 0)) {
    iVar1 = *(int *)PTR_DAT_0004c038;
    if (iVar1 == 0x20) {
LAB_0002975f:
      return (uint)param_3 | (param_2 & 0xff) << 8 | (param_1 & 0xff) << 0x10;
    }
    if (iVar1 == 0x10) {
      uVar4 = 6;
      bVar3 = 0xb;
    }
    else {
      if (iVar1 == 0x18) goto LAB_0002975f;
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
    bVar7 = (byte)*(undefined4 *)PTR_DAT_0004c034;
    bVar5 = (byte)*(undefined4 *)PTR_DAT_0004c050;
    bVar3 = (byte)*(undefined4 *)PTR_DAT_0004c058;
  }
  uVar2 = recovered_2979d(param_1 & 0xff,param_2 & 0xff,param_3,uVar2,bVar3,uVar4,bVar5,uVar6,bVar7)
  ;
  return uVar2;
}
