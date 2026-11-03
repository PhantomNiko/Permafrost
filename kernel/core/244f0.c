#include "functions.h"
#undef DAT_0002f0a4
#define DAT_0002f0a4 (*(uint8_t *)(0x2f0a4U))
#undef DAT_0002f0a5
#define DAT_0002f0a5 (*(uint8_t *)(0x2f0a5U))
#undef DAT_0004f1cd
#define DAT_0004f1cd (*(uint8_t *)(0x4f1cdU))
#undef DAT_0004f1d4
#define DAT_0004f1d4 (*(uint32_t *)(0x4f1d4U))
#undef DAT_0004f1e4
#define DAT_0004f1e4 (*(uint32_t *)(0x4f1e4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x244f0
 */

void recovered_244f0(void)

{
  unsigned char frame[64];

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar3 = DAT_0004f1cd;
  uVar2 = DAT_0002f0a5;
  uVar1 = DAT_0002f0a4;
  recovered_24537(&DAT_0004f1d4,DAT_0002f0a4,DAT_0004f1cd,DAT_0002f0a5);
  recovered_24537(&DAT_0004f1e4,uVar1,uVar3,uVar2);
  return;
}

