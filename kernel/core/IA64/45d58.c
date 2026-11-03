#include "functions.h"
#undef DAT_0008207c
#define DAT_0008207c (*(uint32_t *)(0x8207cU))
#undef DAT_00082084
#define DAT_00082084 (*(uint8_t *)(0x82084U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45d58
 */

uint recovered_45d58(uint count)

{
  unsigned char frame[64];

  uint uVar1;

  uVar1 = recovered_2e3b2(&DAT_0008207c,(uint *)&DAT_00082084,count);
  return uVar1;
}
