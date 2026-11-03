#include "functions.h"
#undef DAT_0008407c
#define DAT_0008407c (*(uint32_t *)(0x8407cU))
#undef DAT_00084084
#define DAT_00084084 (*(uint8_t *)(0x84084U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x47fe2
 */

uint recovered_47fe2(uint count)

{
  unsigned char frame[64];

  uint uVar1;

  uVar1 = recovered_2e4c0(&DAT_0008407c,(uint *)&DAT_00084084,count);
  return uVar1;
}
