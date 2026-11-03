#include "functions.h"
#undef DAT_0004c5f4
#define DAT_0004c5f4 (*(uint8_t *)(0x4c5f4U))
#undef DAT_0004c5f5
#define DAT_0004c5f5 (*(uint8_t *)(0x4c5f5U))
#undef DAT_0004c5fd
#define DAT_0004c5fd (*(uint8_t *)(0x4c5fdU))
#undef DAT_0004ce94
#define DAT_0004ce94 (*(uint8_t *)(0x4ce94U))
#undef DAT_0004cea8
#define DAT_0004cea8 (*(uint8_t *)(0x4cea8U))
#undef DAT_000617dc
#define DAT_000617dc (*(uint8_t *)(0x617dcU))
#undef DAT_000617dd
#define DAT_000617dd (*(uint8_t *)(0x617ddU))
#undef DAT_000617de
#define DAT_000617de (*(uint8_t *)(0x617deU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x255b6
 */

void recovered_255b6(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  unsigned char frame[64];

  DAT_0004ce94 = 0;
  DAT_0004cea8 = (undefined1)((uint)param_1 >> 8);
  DAT_0004c5f5 = (undefined1)param_1;
  DAT_0004c5f4 = (undefined1)((uint)param_1 >> 0x10);
  DAT_000617dd = (undefined1)((uint)param_2 >> 8);
  DAT_000617de = (undefined1)param_2;
  DAT_000617dc = (undefined1)((uint)param_2 >> 0x10);
  DAT_0004c5fd = param_3;
  recovered_2c00a();
  return;
}
