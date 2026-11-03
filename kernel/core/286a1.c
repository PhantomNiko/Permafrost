#include "functions.h"
#undef PTR_DAT_00047030
#define PTR_DAT_00047030 (*(uint8_t * *)(0x47030U))
#undef PTR_DAT_00047034
#define PTR_DAT_00047034 (*(uint8_t * *)(0x47034U))
#undef PTR_DAT_0004704c
#define PTR_DAT_0004704c (*(uint8_t * *)(0x4704cU))
#undef PTR_DAT_00047050
#define PTR_DAT_00047050 (*(uint8_t * *)(0x47050U))
#undef PTR_DAT_00047054
#define PTR_DAT_00047054 (*(uint8_t * *)(0x47054U))
#undef PTR_DAT_00047058
#define PTR_DAT_00047058 (*(uint8_t * *)(0x47058U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x286a1
 */

uint recovered_286a1(uint param_1,uint param_2,byte param_3)

{
  unsigned char frame[64];

  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar3 = *(uint *)PTR_DAT_0004704c;
  uVar5 = *(uint *)PTR_DAT_00047030;
  if (uVar5 == 0 || (uVar3 == 0 || *(uint *)PTR_DAT_00047054 == 0)) {
    uVar3 = (uint)param_3 | (param_2 & 0xff) << 8 | (param_1 & 0xff) << 0x10;
  }
  else {
    uVar4 = recovered_28762(param_1 & 0xff,*(uint *)PTR_DAT_00047054);
    bVar1 = *PTR_DAT_00047058;
    uVar3 = recovered_28762(param_2 & 0xff,uVar3);
    bVar2 = *PTR_DAT_00047050;
    uVar5 = recovered_28762((uint)param_3,uVar5);
    uVar3 = uVar5 << (*PTR_DAT_00047034 & 0x1f) | uVar3 << (bVar2 & 0x1f) | uVar4 << (bVar1 & 0x1f);
  }
  return uVar3;
}
