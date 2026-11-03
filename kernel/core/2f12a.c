#include "functions.h"
#undef DAT_0005dea0
#define DAT_0005dea0 (*(uint8_t *)(0x5dea0U))
#undef DAT_0005dea4
#define DAT_0005dea4 (*(uint32_t *)(0x5dea4U))
#undef DAT_0005dea8
#define DAT_0005dea8 (*(uint32_t *)(0x5dea8U))
#undef DAT_0005deac
#define DAT_0005deac (*(uint8_t *)(0x5deacU))
#undef DAT_0005dead
#define DAT_0005dead (*(uint8_t *)(0x5deadU))
#undef DAT_0005deae
#define DAT_0005deae (*(uint8_t *)(0x5deaeU))
#undef DAT_0005deaf
#define DAT_0005deaf (*(uint8_t *)(0x5deafU))
#undef DAT_0005deb0
#define DAT_0005deb0 (*(uint8_t *)(0x5deb0U))
#undef DAT_0005deb1
#define DAT_0005deb1 (*(uint8_t *)(0x5deb1U))
#undef DAT_0005deb2
#define DAT_0005deb2 (*(uint8_t *)(0x5deb2U))
#undef DAT_0005df03
#define DAT_0005df03 (*(uint8_t *)(0x5df03U))
#undef DAT_0005e720
#define DAT_0005e720 (*(uint8_t *)(0x5e720U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2f12a
 */

undefined4 FUN_0002f12a(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;

  DAT_0005e720 = 0;
  DAT_0005dea0 = 1;
  puVar1 = &DAT_0005dea0;
  DAT_0005dea4 = 0;
  DAT_0005dea8 = 0;
  DAT_0005deac = (undefined1)((uint)param_1 >> 0x10);
  DAT_0005dead = (undefined1)((uint)param_1 >> 8);
  DAT_0005deae = (undefined1)param_1;
  DAT_0005deaf = (undefined1)((uint)param_2 >> 0x10);
  DAT_0005deb0 = (undefined1)((uint)param_2 >> 8);
  DAT_0005deb1 = (undefined1)param_2;
  DAT_0005deb2 = param_3;
  for (iVar2 = 0; iVar2 != 0x19; iVar2 = iVar2 + 1) {
    for (iVar3 = 0x13; iVar3 != 99; iVar3 = iVar3 + 1) {
      puVar1[iVar3] = 0x20;
    }
    (&DAT_0005df03)[iVar2 * 0x51] = 0;
    puVar1 = puVar1 + 0x51;
  }
  recovered_2f1c1();
  return 1;
}
