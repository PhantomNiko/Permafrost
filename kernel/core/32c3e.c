#include "functions.h"
#undef DAT_0005e928
#define DAT_0005e928 (*(char *)(0x5e928U))
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
 * Address: 0x32c3e
 */

uint recovered_32c3e(void)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = 0;
  if ((((DAT_0005e928 == '\x01') && (*(int *)PTR_DAT_0005d0b4 != 0)) &&
      (*(int *)PTR_DAT_0005d0b8 != 0)) &&
     ((*(int *)PTR_DAT_0005d0bc != 0 && (*(int *)PTR_DAT_0005d0b0 != 0)))) {
    if (*(int *)PTR_DAT_0005d0ac - 0xfU < 0x12) {
      uVar1 = 0x20203 >> ((byte)(*(int *)PTR_DAT_0005d0ac - 0xfU) & 0x1f);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 & 0xffffff01;
}
