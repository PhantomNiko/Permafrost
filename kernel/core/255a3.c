#include "functions.h"
#undef DAT_0004e5f4
#define DAT_0004e5f4 (*(uint8_t *)(0x4e5f4U))
#undef DAT_0004e5f5
#define DAT_0004e5f5 (*(uint8_t *)(0x4e5f5U))
#undef DAT_0004e5fd
#define DAT_0004e5fd (*(uint8_t *)(0x4e5fdU))
#undef DAT_0004ee94
#define DAT_0004ee94 (*(uint8_t *)(0x4ee94U))
#undef DAT_0004eea8
#define DAT_0004eea8 (*(uint8_t *)(0x4eea8U))
#undef DAT_000637dc
#define DAT_000637dc (*(uint8_t *)(0x637dcU))
#undef DAT_000637dd
#define DAT_000637dd (*(uint8_t *)(0x637ddU))
#undef DAT_000637de
#define DAT_000637de (*(uint8_t *)(0x637deU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x255a3
 */

void recovered_255a3(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  unsigned char frame[64];

  DAT_0004ee94 = 0;
  DAT_0004eea8 = (undefined1)((uint)param_1 >> 8);
  DAT_0004e5f5 = (undefined1)param_1;
  DAT_0004e5f4 = (undefined1)((uint)param_1 >> 0x10);
  DAT_000637dd = (undefined1)((uint)param_2 >> 8);
  DAT_000637de = (undefined1)param_2;
  DAT_000637dc = (undefined1)((uint)param_2 >> 0x10);
  DAT_0004e5fd = param_3;
  recovered_2c004();
  return;
}
