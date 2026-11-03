#include "functions.h"
#undef DAT_00047e88
#define DAT_00047e88 (*(char *)(0x47e88U))
#undef PTR_DAT_00047038
#define PTR_DAT_00047038 (*(uint8_t * *)(0x47038U))
#undef PTR_DAT_0004703c
#define PTR_DAT_0004703c (*(uint8_t * *)(0x4703cU))
#undef PTR_DAT_00047040
#define PTR_DAT_00047040 (*(uint8_t * *)(0x47040U))
#undef PTR_DAT_00047044
#define PTR_DAT_00047044 (*(uint8_t * *)(0x47044U))
#undef PTR_DAT_00047048
#define PTR_DAT_00047048 (*(uint8_t * *)(0x47048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24fca
 */

undefined4 recovered_24fca(void)

{
  unsigned char frame[64];

  undefined4 uVar1;

  uVar1 = 0;
  if ((((DAT_00047e88 == '\x01') && (*(int *)PTR_DAT_00047040 != 0)) &&
      (*(int *)PTR_DAT_00047044 != 0)) &&
     ((*(int *)PTR_DAT_00047048 != 0 && (*(int *)PTR_DAT_0004703c != 0)))) {
    uVar1 = CONCAT31((int3)(*(int *)PTR_DAT_00047038 - 0x18U >> 8),
                     (*(int *)PTR_DAT_00047038 - 0x18U & 0xfffffff7) == 0);
  }
  return uVar1;
}
