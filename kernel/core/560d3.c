#include "functions.h"
#undef DAT_00093908
#define DAT_00093908 (*(uint32_t *)(0x93908U))
#undef DAT_00093910
#define DAT_00093910 (*(uint8_t *)(0x93910U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x560d3
 */

uint recovered_560d3(uint count)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  uVar1 = recovered_3c7a5(&DAT_00093908,(uint *)&DAT_00093910,count);
  return uVar1;
}
