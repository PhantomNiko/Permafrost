#include "functions.h"
#undef DAT_00054e2c
#define DAT_00054e2c (*(char *)(0x54e2cU))
#undef PTR_DAT_00044038
#define PTR_DAT_00044038 (*(uint8_t * *)(0x44038U))
#undef PTR_DAT_0004403c
#define PTR_DAT_0004403c (*(uint8_t * *)(0x4403cU))
#undef PTR_DAT_00044040
#define PTR_DAT_00044040 (*(uint8_t * *)(0x44040U))
#undef PTR_DAT_00044044
#define PTR_DAT_00044044 (*(uint8_t * *)(0x44044U))
#undef PTR_DAT_00044048
#define PTR_DAT_00044048 (*(uint8_t * *)(0x44048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23848
 */

undefined4 recovered_23848(void)

{
  unsigned char frame[64];

  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((DAT_00054e2c == '\x01') && (*(int *)PTR_DAT_00044040 != 0)) &&
      (*(int *)PTR_DAT_00044044 != 0)) &&
     ((*(int *)PTR_DAT_00044048 != 0 && (*(int *)PTR_DAT_0004403c != 0)))) {
    uVar1 = CONCAT31((int3)(*(int *)PTR_DAT_00044038 - 0x18U >> 8),
                     (*(int *)PTR_DAT_00044038 - 0x18U & 0xfffffff7) == 0);
  }
  return uVar1;
}

