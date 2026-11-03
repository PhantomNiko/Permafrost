#include "functions.h"
#undef PTR_DAT_0005d0a4
#define PTR_DAT_0005d0a4 (*(uint8_t * *)(0x5d0a4U))
#undef PTR_DAT_0005d0a8
#define PTR_DAT_0005d0a8 (*(uint8_t * *)(0x5d0a8U))
#undef PTR_DAT_0005d0ac
#define PTR_DAT_0005d0ac (*(uint8_t * *)(0x5d0acU))
#undef PTR_DAT_0005d0c0
#define PTR_DAT_0005d0c0 (*(uint8_t * *)(0x5d0c0U))
#undef PTR_DAT_0005d0c4
#define PTR_DAT_0005d0c4 (*(uint8_t * *)(0x5d0c4U))
#undef PTR_DAT_0005d0c8
#define PTR_DAT_0005d0c8 (*(uint8_t * *)(0x5d0c8U))
#undef PTR_DAT_0005d0cc
#define PTR_DAT_0005d0cc (*(uint8_t * *)(0x5d0ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x371bf
 */

uint recovered_371bf(uint param_1,uint param_2,byte param_3)

{
  unsigned char frame[100] = {0};

  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;

  uVar2 = *(uint *)PTR_DAT_0005d0c8;
  uVar4 = *(uint *)PTR_DAT_0005d0c0;
  uVar6 = *(uint *)PTR_DAT_0005d0a4;
  if (uVar6 == 0 || (uVar4 == 0 || uVar2 == 0)) {
    iVar1 = *(int *)PTR_DAT_0005d0ac;
    if (iVar1 == 0x20) {
LAB_0003725e:
      return (uint)param_3 | (param_2 & 0xff) << 8 | (param_1 & 0xff) << 0x10;
    }
    if (iVar1 == 0x10) {
      uVar4 = 6;
      bVar3 = 0xb;
    }
    else {
      if (iVar1 == 0x18) goto LAB_0003725e;
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
    bVar7 = (byte)*(undefined4 *)PTR_DAT_0005d0a8;
    bVar5 = (byte)*(undefined4 *)PTR_DAT_0005d0c4;
    bVar3 = (byte)*(undefined4 *)PTR_DAT_0005d0cc;
  }
  uVar2 = recovered_3729c(param_1 & 0xff,param_2 & 0xff,param_3,uVar2,bVar3,uVar4,bVar5,uVar6,bVar7)
  ;
  return uVar2;
}
