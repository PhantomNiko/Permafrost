#include "functions.h"
#undef DAT_0005d760
#define DAT_0005d760 (*(uint8_t *)(0x5d760U))
#undef DAT_0005d761
#define DAT_0005d761 (*(uint8_t *)(0x5d761U))
#undef DAT_0005e934
#define DAT_0005e934 (*(uint8_t *)(0x5e934U))
#undef DAT_00061d3c
#define DAT_00061d3c (*(uint32_t *)(0x61d3cU))
#undef DAT_00073058
#define DAT_00073058 (*(uint32_t *)(0x73058U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3a301
 */

void recovered_3a301(void)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;

  uVar3 = DAT_0005e934;
  uVar2 = DAT_0005d761;
  uVar1 = DAT_0005d760;
  recovered_367e5(&DAT_00073058,DAT_0005d760,DAT_0005e934,DAT_0005d761);
  recovered_367e5(&DAT_00061d3c,uVar1,uVar3,uVar2);
  return;
}
