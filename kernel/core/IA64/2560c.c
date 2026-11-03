#include "functions.h"
#undef DAT_0004c5f0
#define DAT_0004c5f0 (*(uint32_t *)(0x4c5f0U))
#undef DAT_0004c5f4
#define DAT_0004c5f4 (*(byte *)(0x4c5f4U))
#undef DAT_0004c5f5
#define DAT_0004c5f5 (*(byte *)(0x4c5f5U))
#undef DAT_0004c614
#define DAT_0004c614 (*(uint8_t *)(0x4c614U))
#undef DAT_0004ce94
#define DAT_0004ce94 (*(uint8_t *)(0x4ce94U))
#undef DAT_0004ce9c
#define DAT_0004ce9c (*(uint8_t *)(0x4ce9cU))
#undef DAT_0004cea0
#define DAT_0004cea0 (*(uint32_t *)(0x4cea0U))
#undef DAT_0004cea4
#define DAT_0004cea4 (*(uint32_t *)(0x4cea4U))
#undef DAT_0004cea8
#define DAT_0004cea8 (*(byte *)(0x4cea8U))
#undef PTR_DAT_0004c038
#define PTR_DAT_0004c038 (*(uint8_t * *)(0x4c038U))
#undef PTR_DAT_0004c03c
#define PTR_DAT_0004c03c (*(uint8_t * *)(0x4c03cU))
#undef PTR_DAT_0004c040
#define PTR_DAT_0004c040 (*(uint8_t * *)(0x4c040U))
#undef PTR_DAT_0004c044
#define PTR_DAT_0004c044 (*(uint8_t * *)(0x4c044U))
#undef PTR_DAT_0004c048
#define PTR_DAT_0004c048 (*(uint8_t * *)(0x4c048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2560c
 */

int recovered_2560c(void)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar1 = recovered_25725();
  if ((char)uVar1 == '\0') {
    iVar2 = recovered_2577d();
    DAT_0004ce9c = 0;
    if ((((iVar2 != 0) && (*(int *)PTR_DAT_0004c040 != 0)) && (*(int *)PTR_DAT_0004c044 != 0)) &&
       (((*(int *)PTR_DAT_0004c048 != 0 && (*(int *)PTR_DAT_0004c03c != 0)) &&
        ((0x11 < *(int *)PTR_DAT_0004c038 - 0xfU ||
         (DAT_0004ce9c = 1, (0x20203U >> (*(int *)PTR_DAT_0004c038 - 0xfU & 0x1f) & 1) == 0)))))) {
      DAT_0004ce9c = 0;
    }
  }
  uVar1 = recovered_25725();
  if ((char)uVar1 == '\0') {
    DAT_0004ce94 = 0;
    iVar2 = 0;
  }
  else {
    DAT_0004c614 = 0;
    uVar3 = recovered_258ed(*(uint *)PTR_DAT_0004c048,*(uint *)PTR_DAT_0004c03c);
    if ((char)uVar3 == '\0') {
      FUN_0002079d();
      iVar2 = 0;
      DAT_0004ce9c = 0;
      DAT_0004cea0 = 0;
      DAT_0004ce94 = 0;
      DAT_0004cea4 = 0;
      recovered_259bc();
    }
    else {
      DAT_0004c5f0 = *(undefined4 *)PTR_DAT_0004c038;
      recovered_255ca(0,0xffffff,0xf);
      DAT_0004ce94 = 1;
      recovered_259ef((uint)DAT_0004c5f4,(uint)DAT_0004cea8,DAT_0004c5f5);
      iVar2 = 1;
    }
  }
  return iVar2;
}
