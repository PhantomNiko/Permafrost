#include "functions.h"
#undef DAT_000445dc
#define DAT_000445dc (*(uint8_t *)(0x445dcU))
#undef DAT_000445dd
#define DAT_000445dd (*(uint8_t *)(0x445ddU))
#undef DAT_000445de
#define DAT_000445de (*(uint8_t *)(0x445deU))
#undef DAT_00054e2d
#define DAT_00054e2d (*(uint8_t *)(0x54e2dU))
#undef DAT_00058444
#define DAT_00058444 (*(uint8_t *)(0x58444U))
#undef DAT_00058445
#define DAT_00058445 (*(uint8_t *)(0x58445U))
#undef DAT_00058446
#define DAT_00058446 (*(uint8_t *)(0x58446U))
#undef DAT_00088e5f
#define DAT_00088e5f (*(uint8_t *)(0x88e5fU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23757
 */

void recovered_23757(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  unsigned char frame[64];

  DAT_00054e2d = 0;
  DAT_00088e5f = (undefined1)((uint)param_1 >> 8);
  DAT_000445de = (undefined1)param_1;
  DAT_000445dd = (undefined1)((uint)param_1 >> 0x10);
  DAT_00058445 = (undefined1)((uint)param_2 >> 8);
  DAT_00058446 = (undefined1)param_2;
  DAT_00058444 = (undefined1)((uint)param_2 >> 0x10);
  DAT_000445dc = param_3;
  FUN_000284f5();
  return;
}
