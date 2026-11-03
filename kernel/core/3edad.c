#include "functions.h"
#undef DAT_00088e78
#define DAT_00088e78 (*(uint32_t *)(0x88e78U))
#undef DAT_00088e80
#define DAT_00088e80 (*(uint8_t *)(0x88e80U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3edad
 */

uint recovered_3edad(uint param_1)

{
  unsigned char frame[64];

  uint uVar1;
  
  uVar1 = recovered_2a6e8(&DAT_00088e78,(uint *)&DAT_00088e80,param_1);
  return uVar1;
}

