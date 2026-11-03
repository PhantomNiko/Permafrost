#include "functions.h"
#undef DAT_0002f0a4
#define DAT_0002f0a4 (*(uint8_t *)(0x2f0a4U))
#undef DAT_0002f0a5
#define DAT_0002f0a5 (*(uint8_t *)(0x2f0a5U))
#undef DAT_0002f0a6
#define DAT_0002f0a6 (*(uint8_t *)(0x2f0a6U))
#undef DAT_0004f1cd
#define DAT_0004f1cd (*(uint8_t *)(0x4f1cdU))
#undef DAT_0004f1ce
#define DAT_0004f1ce (*(uint8_t *)(0x4f1ceU))
#undef DAT_0004f1cf
#define DAT_0004f1cf (*(uint8_t *)(0x4f1cfU))
#undef DAT_0004f1d0
#define DAT_0004f1d0 (*(uint8_t *)(0x4f1d0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21c7a
 */

undefined4 recovered_21c7a(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  unsigned char frame[64];

  DAT_0004f1cd = (undefined1)((uint)param_1 >> 8);
  DAT_0002f0a5 = (undefined1)param_1;
  DAT_0002f0a4 = (undefined1)((uint)param_1 >> 0x10);
  DAT_0004f1cf = (undefined1)((uint)param_2 >> 8);
  DAT_0004f1d0 = (undefined1)param_2;
  DAT_0004f1ce = (undefined1)((uint)param_2 >> 0x10);
  DAT_0002f0a6 = param_3;
  recovered_244f0();
  recovered_21cca();
  return 1;
}

