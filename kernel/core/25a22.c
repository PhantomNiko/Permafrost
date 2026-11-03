#include "functions.h"
#undef DAT_0004e614
#define DAT_0004e614 (*(uint8_t *)(0x4e614U))
#undef DAT_0004ee94
#define DAT_0004ee94 (*(uint8_t *)(0x4ee94U))
#undef DAT_0004ee9c
#define DAT_0004ee9c (*(uint8_t *)(0x4ee9cU))
#undef DAT_0004eea0
#define DAT_0004eea0 (*(uint32_t *)(0x4eea0U))
#undef DAT_0004eea4
#define DAT_0004eea4 (*(uint32_t *)(0x4eea4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25a22
 */

int recovered_25a22(void)

{
  unsigned char frame[64];

  FUN_0002079d();
  DAT_0004ee9c = 0;
  DAT_0004eea0 = 0;
  DAT_0004ee94 = 0;
  DAT_0004eea4 = 0;
  recovered_25954();
  DAT_0004e614 = 0;
  recovered_255a3(0xff00ff,0,0x50);
  recovered_25a79();
  recovered_2219f();
  return 1;
}
