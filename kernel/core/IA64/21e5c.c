#include "functions.h"
#undef DAT_0004c614
#define DAT_0004c614 (*(uint8_t *)(0x4c614U))
#undef DAT_0004c618
#define DAT_0004c618 (*(uint32_t *)(0x4c618U))
#undef DAT_0004c61c
#define DAT_0004c61c (*(uint32_t *)(0x4c61cU))
#undef DAT_0004c620
#define DAT_0004c620 (*(uint8_t *)(0x4c620U))
#undef DAT_0004c621
#define DAT_0004c621 (*(uint8_t *)(0x4c621U))
#undef DAT_0004c622
#define DAT_0004c622 (*(uint8_t *)(0x4c622U))
#undef DAT_0004c623
#define DAT_0004c623 (*(uint8_t *)(0x4c623U))
#undef DAT_0004c624
#define DAT_0004c624 (*(uint8_t *)(0x4c624U))
#undef DAT_0004c625
#define DAT_0004c625 (*(uint8_t *)(0x4c625U))
#undef DAT_0004c626
#define DAT_0004c626 (*(uint8_t *)(0x4c626U))
#undef DAT_0004c677
#define DAT_0004c677 (*(uint8_t *)(0x4c677U))
#undef DAT_0004ce94
#define DAT_0004ce94 (*(uint8_t *)(0x4ce94U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21e5c
 */

undefined4 FUN_00021e5c(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  unsigned char frame[64];

  undefined1 *puVar1;
  int iVar2;
  int iVar3;

  DAT_0004ce94 = 0;
  DAT_0004c614 = 1;
  puVar1 = &DAT_0004c614;
  DAT_0004c618 = 0;
  DAT_0004c61c = 0;
  DAT_0004c620 = (undefined1)((uint)param_1 >> 0x10);
  DAT_0004c621 = (undefined1)((uint)param_1 >> 8);
  DAT_0004c622 = (undefined1)param_1;
  DAT_0004c623 = (undefined1)((uint)param_2 >> 0x10);
  DAT_0004c624 = (undefined1)((uint)param_2 >> 8);
  DAT_0004c625 = (undefined1)param_2;
  DAT_0004c626 = param_3;
  for (iVar2 = 0; iVar2 != 0x19; iVar2 = iVar2 + 1) {
    for (iVar3 = 0x13; iVar3 != 99; iVar3 = iVar3 + 1) {
      puVar1[iVar3] = 0x20;
    }
    (&DAT_0004c677)[iVar2 * 0x51] = 0;
    puVar1 = puVar1 + 0x51;
  }
  recovered_21ef3();
  return 1;
}
