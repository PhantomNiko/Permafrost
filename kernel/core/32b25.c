#include "functions.h"
#undef DAT_0005d75c
#define DAT_0005d75c (*(uint32_t *)(0x5d75cU))
#undef DAT_0005d760
#define DAT_0005d760 (*(byte *)(0x5d760U))
#undef DAT_0005d761
#define DAT_0005d761 (*(byte *)(0x5d761U))
#undef DAT_0005dea0
#define DAT_0005dea0 (*(uint8_t *)(0x5dea0U))
#undef DAT_0005e720
#define DAT_0005e720 (*(uint8_t *)(0x5e720U))
#undef DAT_0005e928
#define DAT_0005e928 (*(uint8_t *)(0x5e928U))
#undef DAT_0005e92c
#define DAT_0005e92c (*(uint32_t *)(0x5e92cU))
#undef DAT_0005e930
#define DAT_0005e930 (*(uint32_t *)(0x5e930U))
#undef DAT_0005e934
#define DAT_0005e934 (*(byte *)(0x5e934U))
#undef PTR_DAT_0005d0ac
#define PTR_DAT_0005d0ac (*(uint8_t * *)(0x5d0acU))
#undef PTR_DAT_0005d0b0
#define PTR_DAT_0005d0b0 (*(uint8_t * *)(0x5d0b0U))
#undef PTR_DAT_0005d0b4
#define PTR_DAT_0005d0b4 (*(uint8_t * *)(0x5d0b4U))
#undef PTR_DAT_0005d0b8
#define PTR_DAT_0005d0b8 (*(uint8_t * *)(0x5d0b8U))
#undef PTR_DAT_0005d0bc
#define PTR_DAT_0005d0bc (*(uint8_t * *)(0x5d0bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32b25
 */

int recovered_32b25(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;

  uVar1 = recovered_32c3e();
  if ((char)uVar1 == '\0') {
    uVar4 = recovered_32c96();
    DAT_0005e928 = 0;
    if (((((int)uVar4 != 0) && (*(int *)PTR_DAT_0005d0b4 != 0)) && (*(int *)PTR_DAT_0005d0b8 != 0))
       && (((*(int *)PTR_DAT_0005d0bc != 0 && (*(int *)PTR_DAT_0005d0b0 != 0)) &&
           ((0x11 < *(int *)PTR_DAT_0005d0ac - 0xfU ||
            (DAT_0005e928 = 1, (0x20203U >> (*(int *)PTR_DAT_0005d0ac - 0xfU & 0x1f) & 1) == 0))))))
    {
      DAT_0005e928 = 0;
    }
  }
  uVar1 = recovered_32c3e();
  if ((char)uVar1 == '\0') {
    DAT_0005e720 = 0;
    iVar3 = 0;
  }
  else {
    DAT_0005dea0 = 0;
    uVar2 = recovered_32dc5(*(uint *)PTR_DAT_0005d0bc,*(uint *)PTR_DAT_0005d0b0);
    if ((char)uVar2 == '\0') {
      FUN_0002079d();
      iVar3 = 0;
      DAT_0005e928 = 0;
      DAT_0005e92c = 0;
      DAT_0005e720 = 0;
      DAT_0005e930 = 0;
      recovered_32e94();
    }
    else {
      DAT_0005d75c = *(undefined4 *)PTR_DAT_0005d0ac;
      recovered_32ae3(0,0xffffff,0xf);
      DAT_0005e720 = 1;
      recovered_32ec7((uint)DAT_0005d760,(uint)DAT_0005e934,DAT_0005d761);
      iVar3 = 1;
    }
  }
  return iVar3;
}
