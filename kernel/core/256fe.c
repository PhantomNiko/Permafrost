#include "functions.h"
#undef DAT_0004ee9c
#define DAT_0004ee9c (*(char *)(0x4ee9cU))
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
 * Address: 0x256fe
 */

uint recovered_256fe(void)

{
  unsigned char frame[64];

  uint uVar1;

  uVar1 = 0;
  if ((((DAT_0004ee9c == '\x01') && (*(int *)PTR_DAT_0004e040 != 0)) &&
      (*(int *)PTR_DAT_0004e044 != 0)) &&
     ((*(int *)PTR_DAT_0004e048 != 0 && (*(int *)PTR_DAT_0004e03c != 0)))) {
    if (*(int *)PTR_DAT_0004e038 - 0xfU < 0x12) {
      uVar1 = 0x20203 >> ((byte)(*(int *)PTR_DAT_0004e038 - 0xfU) & 0x1f);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 & 0xffffff01;
}
