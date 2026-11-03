#include "functions.h"
#undef DAT_0004c5f4
#define DAT_0004c5f4 (*(uint8_t *)(0x4c5f4U))
#undef DAT_0004c5f5
#define DAT_0004c5f5 (*(uint8_t *)(0x4c5f5U))
#undef DAT_0004cea8
#define DAT_0004cea8 (*(uint8_t *)(0x4cea8U))
#undef DAT_000504b0
#define DAT_000504b0 (*(uint32_t *)(0x504b0U))
#undef DAT_000617cc
#define DAT_000617cc (*(uint32_t *)(0x617ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c080
 */

void recovered_2c080(void)

{
  unsigned char frame[64];

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;

  uVar3 = DAT_0004cea8;
  uVar2 = DAT_0004c5f5;
  uVar1 = DAT_0004c5f4;
  recovered_28cde(&DAT_000617cc,DAT_0004c5f4,DAT_0004cea8,DAT_0004c5f5);
  recovered_28cde(&DAT_000504b0,uVar1,uVar3,uVar2);
  return;
}
