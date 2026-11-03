#include "functions.h"
#undef DAT_0005e92c
#define DAT_0005e92c (*(uint *)(0x5e92cU))
#undef DAT_0005e930
#define DAT_0005e930 (*(uint *)(0x5e930U))
#undef DAT_000938e4
#define DAT_000938e4 (*(uint32_t * *)(0x938e4U))
#undef DAT_000938e8
#define DAT_000938e8 (*(uint32_t * *)(0x938e8U))
#undef PTR_DAT_0005d0b0
#define PTR_DAT_0005d0b0 (*(uint8_t * *)(0x5d0b0U))
#undef PTR_DAT_0005d0bc
#define PTR_DAT_0005d0bc (*(uint8_t * *)(0x5d0bcU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32dc5
 */

undefined4 recovered_32dc5(uint param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  uVar2 = recovered_32c3e();
  if (((param_2 != 0) && (param_1 != 0)) && ((char)uVar2 != '\0')) {
    puVar3 = recovered_211fa(param_1 * 4 + 4);
    puVar4 = recovered_211fa(param_2 * 4 + 4);
    if (((puVar4 != (undefined4 *)0x0 && puVar3 != (undefined4 *)0x0) &&
        (bVar1 = recovered_3a413(*(uint *)PTR_DAT_0005d0bc,param_1,puVar3), bVar1)) &&
       (bVar1 = recovered_3a413(*(uint *)PTR_DAT_0005d0b0,param_2,puVar4), bVar1)) {
      recovered_32e94();
      DAT_0005e92c = param_1;
      DAT_0005e930 = param_2;
      DAT_000938e4 = puVar3;
      DAT_000938e8 = puVar4;
      return CONCAT31((int3)((uint)puVar4 >> 8),1);
    }
    recovered_21203((int)puVar3);
    recovered_21203((int)puVar4);
  }
  return 0;
}
