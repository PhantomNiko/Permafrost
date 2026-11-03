#include "functions.h"
#undef DAT_0004e5f0
#define DAT_0004e5f0 (*(uint32_t *)(0x4e5f0U))
#undef DAT_0004e5f4
#define DAT_0004e5f4 (*(byte *)(0x4e5f4U))
#undef DAT_0004e5f5
#define DAT_0004e5f5 (*(byte *)(0x4e5f5U))
#undef DAT_0004e614
#define DAT_0004e614 (*(uint8_t *)(0x4e614U))
#undef DAT_0004ee94
#define DAT_0004ee94 (*(uint8_t *)(0x4ee94U))
#undef DAT_0004ee9c
#define DAT_0004ee9c (*(uint8_t *)(0x4ee9cU))
#undef DAT_0004eea0
#define DAT_0004eea0 (*(uint32_t *)(0x4eea0U))
#undef DAT_0004eea4
#define DAT_0004eea4 (*(uint32_t *)(0x4eea4U))
#undef DAT_0004eea8
#define DAT_0004eea8 (*(byte *)(0x4eea8U))
#undef PTR_DAT_0004e038
#define PTR_DAT_0004e038 (*(uint8_t * *)(0x4e038U))
#undef PTR_DAT_0004e03c
#define PTR_DAT_0004e03c (*(uint8_t * *)(0x4e03cU))
#undef PTR_DAT_0004e040
#define PTR_DAT_0004e040 (*(uint8_t * *)(0x4e040U))
#undef PTR_DAT_0004e044
#define PTR_DAT_0004e044 (*(uint8_t * *)(0x4e044U))
#undef PTR_DAT_0004e048
#define PTR_DAT_0004e048 (*(uint8_t * *)(0x4e048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x255e5
 */

int recovered_255e5(void)

{
  unsigned char frame[64];

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;

  uVar1 = recovered_256fe();
  if ((char)uVar1 == '\0') {
    uVar4 = recovered_25756();
    DAT_0004ee9c = 0;
    if (((((int)uVar4 != 0) && (*(int *)PTR_DAT_0004e040 != 0)) && (*(int *)PTR_DAT_0004e044 != 0))
       && (((*(int *)PTR_DAT_0004e048 != 0 && (*(int *)PTR_DAT_0004e03c != 0)) &&
           ((0x11 < *(int *)PTR_DAT_0004e038 - 0xfU ||
            (DAT_0004ee9c = 1, (0x20203U >> (*(int *)PTR_DAT_0004e038 - 0xfU & 0x1f) & 1) == 0))))))
    {
      DAT_0004ee9c = 0;
    }
  }
  uVar1 = recovered_256fe();
  if ((char)uVar1 == '\0') {
    DAT_0004ee94 = 0;
    iVar3 = 0;
  }
  else {
    DAT_0004e614 = 0;
    uVar2 = recovered_25885(*(uint *)PTR_DAT_0004e048,*(uint *)PTR_DAT_0004e03c);
    if ((char)uVar2 == '\0') {
      FUN_0002079d();
      iVar3 = 0;
      DAT_0004ee9c = 0;
      DAT_0004eea0 = 0;
      DAT_0004ee94 = 0;
      DAT_0004eea4 = 0;
      recovered_25954();
    }
    else {
      DAT_0004e5f0 = *(undefined4 *)PTR_DAT_0004e038;
      recovered_255a3(0,0xffffff,0xf);
      DAT_0004ee94 = 1;
      recovered_25987((uint)DAT_0004e5f4,(uint)DAT_0004eea8,DAT_0004e5f5);
      iVar3 = 1;
    }
  }
  return iVar3;
}
