#include "functions.h"
#undef DAT_00047600
#define DAT_00047600 (*(uint8_t *)(0x47600U))
#undef DAT_00047604
#define DAT_00047604 (*(uint32_t *)(0x47604U))
#undef DAT_00047608
#define DAT_00047608 (*(uint32_t *)(0x47608U))
#undef DAT_0004760c
#define DAT_0004760c (*(uint8_t *)(0x4760cU))
#undef DAT_0004760d
#define DAT_0004760d (*(uint8_t *)(0x4760dU))
#undef DAT_0004760e
#define DAT_0004760e (*(uint8_t *)(0x4760eU))
#undef DAT_0004760f
#define DAT_0004760f (*(uint8_t *)(0x4760fU))
#undef DAT_00047610
#define DAT_00047610 (*(uint8_t *)(0x47610U))
#undef DAT_00047611
#define DAT_00047611 (*(uint8_t *)(0x47611U))
#undef DAT_00047612
#define DAT_00047612 (*(uint8_t *)(0x47612U))
#undef DAT_00047663
#define DAT_00047663 (*(uint8_t *)(0x47663U))
#undef DAT_00047e80
#define DAT_00047e80 (*(uint8_t *)(0x47e80U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21a56
 */

undefined4 FUN_00021a56(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  unsigned char frame[64];

  undefined1 *puVar1;
  int iVar2;
  int iVar3;

  DAT_00047e80 = 0;
  DAT_00047600 = 1;
  puVar1 = &DAT_00047600;
  DAT_00047604 = 0;
  DAT_00047608 = 0;
  DAT_0004760c = (undefined1)((uint)param_1 >> 0x10);
  DAT_0004760d = (undefined1)((uint)param_1 >> 8);
  DAT_0004760e = (undefined1)param_1;
  DAT_0004760f = (undefined1)((uint)param_2 >> 0x10);
  DAT_00047610 = (undefined1)((uint)param_2 >> 8);
  DAT_00047611 = (undefined1)param_2;
  DAT_00047612 = param_3;
  for (iVar2 = 0; iVar2 != 0x19; iVar2 = iVar2 + 1) {
    for (iVar3 = 0x13; iVar3 != 99; iVar3 = iVar3 + 1) {
      puVar1[iVar3] = 0x20;
    }
    (&DAT_00047663)[iVar2 * 0x51] = 0;
    puVar1 = puVar1 + 0x51;
  }
  recovered_21aed();
  return 1;
}
