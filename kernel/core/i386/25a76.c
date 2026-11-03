#include "functions.h"
#undef DAT_0004c614
#define DAT_0004c614 (*(uint8_t *)(0x4c614U))
#undef DAT_0004ce94
#define DAT_0004ce94 (*(uint8_t *)(0x4ce94U))
#undef DAT_0004ce9c
#define DAT_0004ce9c (*(uint8_t *)(0x4ce9cU))
#undef DAT_0004cea0
#define DAT_0004cea0 (*(uint32_t *)(0x4cea0U))
#undef DAT_0004cea4
#define DAT_0004cea4 (*(uint32_t *)(0x4cea4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25a76
 */

int recovered_25a76(void)

{
  unsigned char frame[64];

  FUN_0002079d();
  DAT_0004ce9c = 0;
  DAT_0004cea0 = 0;
  DAT_0004ce94 = 0;
  DAT_0004cea4 = 0;
  recovered_259a8();
  DAT_0004c614 = 0;
  recovered_255b6(0xff00ff,0,0x50);
  recovered_25acd();
  recovered_2219f();
  return 1;
}
