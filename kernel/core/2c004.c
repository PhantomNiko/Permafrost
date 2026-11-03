#include "functions.h"
#undef DAT_0004e5f4
#define DAT_0004e5f4 (*(uint8_t *)(0x4e5f4U))
#undef DAT_0004e5f5
#define DAT_0004e5f5 (*(uint8_t *)(0x4e5f5U))
#undef DAT_0004eea8
#define DAT_0004eea8 (*(uint8_t *)(0x4eea8U))
#undef DAT_000524b0
#define DAT_000524b0 (*(uint32_t *)(0x524b0U))
#undef DAT_000637cc
#define DAT_000637cc (*(uint32_t *)(0x637ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c004
 */

void recovered_2c004(void)

{
  unsigned char frame[64];

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;

  uVar3 = DAT_0004eea8;
  uVar2 = DAT_0004e5f5;
  uVar1 = DAT_0004e5f4;
  recovered_28cc4(&DAT_000637cc,DAT_0004e5f4,DAT_0004eea8,DAT_0004e5f5);
  recovered_28cc4(&DAT_000524b0,uVar1,uVar3,uVar2);
  return;
}
