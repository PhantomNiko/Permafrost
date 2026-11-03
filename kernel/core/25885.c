#include "functions.h"
#undef DAT_0004eea0
#define DAT_0004eea0 (*(uint *)(0x4eea0U))
#undef DAT_0004eea4
#define DAT_0004eea4 (*(uint *)(0x4eea4U))
#undef DAT_00084058
#define DAT_00084058 (*(uint32_t * *)(0x84058U))
#undef DAT_0008405c
#define DAT_0008405c (*(uint32_t * *)(0x8405cU))
#undef PTR_DAT_0004e03c
#define PTR_DAT_0004e03c (*(uint8_t * *)(0x4e03cU))
#undef PTR_DAT_0004e048
#define PTR_DAT_0004e048 (*(uint8_t * *)(0x4e048U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25885
 */

undefined4 recovered_25885(uint param_1,uint param_2)

{
  unsigned char frame[64];

  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  uVar2 = recovered_256fe();
  if (((param_2 != 0) && (param_1 != 0)) && ((char)uVar2 != '\0')) {
    puVar3 = recovered_211fa(param_1 * 4 + 4);
    puVar4 = recovered_211fa(param_2 * 4 + 4);
    if (((puVar4 != (undefined4 *)0x0 && puVar3 != (undefined4 *)0x0) &&
        (bVar1 = recovered_2c116(*(uint *)PTR_DAT_0004e048,param_1,puVar3), bVar1)) &&
       (bVar1 = recovered_2c116(*(uint *)PTR_DAT_0004e03c,param_2,puVar4), bVar1)) {
      recovered_25954();
      DAT_0004eea0 = param_1;
      DAT_0004eea4 = param_2;
      DAT_00084058 = puVar3;
      DAT_0008405c = puVar4;
      return CONCAT31((int3)((uint)puVar4 >> 8),1);
    }
    recovered_21203((int)puVar3);
    recovered_21203((int)puVar4);
  }
  return 0;
}
