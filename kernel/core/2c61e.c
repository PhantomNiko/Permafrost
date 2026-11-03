#include "functions.h"
#undef DAT_0007041c
#define DAT_0007041c (*(uint32_t *)(0x7041cU))
#undef DAT_00070424
#define DAT_00070424 (*(uint8_t *)(0x70424U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c61e
 */

uint recovered_2c61e(uint param_1)

{
  unsigned char frame[64];

  uint uVar1;
  
  uVar1 = recovered_25673(&DAT_0007041c,(uint *)&DAT_00070424,param_1);
  return uVar1;
}

