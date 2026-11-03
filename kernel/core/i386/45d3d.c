#include "functions.h"
#undef DAT_0008207c
#define DAT_0008207c (*(uint32_t *)(0x8207cU))
#undef DAT_00082084
#define DAT_00082084 (*(uint8_t *)(0x82084U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45d3d
 */

uint recovered_45d3d(uint count)

{
  unsigned char frame[64];

  uint uVar1;

  uVar1 = recovered_2e37a(&DAT_0008207c,(uint *)&DAT_00082084,count);
  return uVar1;
}
