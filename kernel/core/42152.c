#include "functions.h"
#undef DAT_0007cff0
#define DAT_0007cff0 (*(uint32_t *)(0x7cff0U))
#undef DAT_0007cff8
#define DAT_0007cff8 (*(uint8_t *)(0x7cff8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x42152
 */

uint recovered_42152(uint count)

{
  unsigned char frame[64];

  uint uVar1;

  uVar1 = recovered_2ce6a(&DAT_0007cff0,(uint *)&DAT_0007cff8,count);
  return uVar1;
}
