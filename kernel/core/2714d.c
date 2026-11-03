#include "functions.h"
#undef PTR_DAT_00044030
#define PTR_DAT_00044030 (*(uint8_t * *)(0x44030U))
#undef PTR_DAT_00044034
#define PTR_DAT_00044034 (*(uint8_t * *)(0x44034U))
#undef PTR_DAT_0004404c
#define PTR_DAT_0004404c (*(uint8_t * *)(0x4404cU))
#undef PTR_DAT_00044050
#define PTR_DAT_00044050 (*(uint8_t * *)(0x44050U))
#undef PTR_DAT_00044054
#define PTR_DAT_00044054 (*(uint8_t * *)(0x44054U))
#undef PTR_DAT_00044058
#define PTR_DAT_00044058 (*(uint8_t * *)(0x44058U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2714d
 */

uint recovered_2714d(uint param_1,uint param_2,byte param_3)

{
  unsigned char frame[64];

  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar3 = *(uint *)PTR_DAT_0004404c;
  uVar5 = *(uint *)PTR_DAT_00044030;
  if (uVar5 == 0 || (uVar3 == 0 || *(uint *)PTR_DAT_00044054 == 0)) {
    uVar3 = (uint)param_3 | (param_2 & 0xff) << 8 | (param_1 & 0xff) << 0x10;
  }
  else {
    uVar4 = recovered_2720e(param_1 & 0xff,*(uint *)PTR_DAT_00044054);
    bVar1 = *PTR_DAT_00044058;
    uVar3 = recovered_2720e(param_2 & 0xff,uVar3);
    bVar2 = *PTR_DAT_00044050;
    uVar5 = recovered_2720e((uint)param_3,uVar5);
    uVar3 = uVar5 << (*PTR_DAT_00044034 & 0x1f) | uVar3 << (bVar2 & 0x1f) | uVar4 << (bVar1 & 0x1f);
  }
  return uVar3;
}
