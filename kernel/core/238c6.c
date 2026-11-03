#include "functions.h"
#undef DAT_000445f0
#define DAT_000445f0 (*(uint8_t *)(0x445f0U))
#undef DAT_00054e2c
#define DAT_00054e2c (*(uint8_t *)(0x54e2cU))
#undef DAT_00054e2d
#define DAT_00054e2d (*(uint8_t *)(0x54e2dU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x238c6
 */

undefined4 FUN_000238c6(void)

{
  unsigned char frame[64];

  FUN_00020537();
  DAT_00054e2c = 0;
  DAT_00054e2d = 0;
  DAT_000445f0 = 0;
  recovered_23757(0xff00ff,0,0x50);
  recovered_23907();
  recovered_21d99();
  return 1;
}
