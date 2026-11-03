#include "functions.h"
#undef DAT_0004cea0
#define DAT_0004cea0 (*(uint *)(0x4cea0U))
#undef DAT_0004cea4
#define DAT_0004cea4 (*(uint *)(0x4cea4U))
#undef DAT_00082058
#define DAT_00082058 (*(uint32_t * *)(0x82058U))
#undef DAT_0008205c
#define DAT_0008205c (*(uint32_t * *)(0x8205cU))
#undef PTR_DAT_0004c03c
#define PTR_DAT_0004c03c (*(uint8_t * *)(0x4c03cU))
#undef PTR_DAT_0004c048
#define PTR_DAT_0004c048 (*(uint8_t * *)(0x4c048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x258ed
 */

undefined4 recovered_258ed(uint param_1,uint param_2)

{
  unsigned char frame[64];

  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  uVar2 = recovered_25725();
  if (((param_2 != 0) && (param_1 != 0)) && ((char)uVar2 != '\0')) {
    puVar3 = recovered_211fa(param_1 * 4 + 4);
    puVar4 = recovered_211fa(param_2 * 4 + 4);
    if (((puVar4 != (undefined4 *)0x0 && puVar3 != (undefined4 *)0x0) &&
        (bVar1 = recovered_2c0c7(*(uint *)PTR_DAT_0004c048,param_1,puVar3), bVar1)) &&
       (bVar1 = recovered_2c0c7(*(uint *)PTR_DAT_0004c03c,param_2,puVar4), bVar1)) {
      recovered_259bc();
      DAT_0004cea0 = param_1;
      DAT_0004cea4 = param_2;
      DAT_00082058 = puVar3;
      DAT_0008205c = puVar4;
      return CONCAT31((int3)((uint)puVar4 >> 8),1);
    }
    recovered_21203((int)puVar3);
    recovered_21203((int)puVar4);
  }
  return 0;
}
