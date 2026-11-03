#include "functions.h"
#undef DAT_0004e614
#define DAT_0004e614 (*(uint8_t *)(0x4e614U))
#undef DAT_0004e618
#define DAT_0004e618 (*(uint32_t *)(0x4e618U))
#undef DAT_0004e61c
#define DAT_0004e61c (*(uint32_t *)(0x4e61cU))
#undef DAT_0004e620
#define DAT_0004e620 (*(uint8_t *)(0x4e620U))
#undef DAT_0004e621
#define DAT_0004e621 (*(uint8_t *)(0x4e621U))
#undef DAT_0004e622
#define DAT_0004e622 (*(uint8_t *)(0x4e622U))
#undef DAT_0004e623
#define DAT_0004e623 (*(uint8_t *)(0x4e623U))
#undef DAT_0004e624
#define DAT_0004e624 (*(uint8_t *)(0x4e624U))
#undef DAT_0004e625
#define DAT_0004e625 (*(uint8_t *)(0x4e625U))
#undef DAT_0004e626
#define DAT_0004e626 (*(uint8_t *)(0x4e626U))
#undef DAT_0004e677
#define DAT_0004e677 (*(uint8_t *)(0x4e677U))
#undef DAT_0004ee94
#define DAT_0004ee94 (*(uint8_t *)(0x4ee94U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21e5c
 */

undefined4 FUN_00021e5c(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  unsigned char frame[64];

  undefined1 *puVar1;
  int iVar2;
  int iVar3;

  DAT_0004ee94 = 0;
  DAT_0004e614 = 1;
  puVar1 = &DAT_0004e614;
  DAT_0004e618 = 0;
  DAT_0004e61c = 0;
  DAT_0004e620 = (undefined1)((uint)param_1 >> 0x10);
  DAT_0004e621 = (undefined1)((uint)param_1 >> 8);
  DAT_0004e622 = (undefined1)param_1;
  DAT_0004e623 = (undefined1)((uint)param_2 >> 0x10);
  DAT_0004e624 = (undefined1)((uint)param_2 >> 8);
  DAT_0004e625 = (undefined1)param_2;
  DAT_0004e626 = param_3;
  for (iVar2 = 0; iVar2 != 0x19; iVar2 = iVar2 + 1) {
    for (iVar3 = 0x13; iVar3 != 99; iVar3 = iVar3 + 1) {
      puVar1[iVar3] = 0x20;
    }
    (&DAT_0004e677)[iVar2 * 0x51] = 0;
    puVar1 = puVar1 + 0x51;
  }
  recovered_21ef3();
  return 1;
}
