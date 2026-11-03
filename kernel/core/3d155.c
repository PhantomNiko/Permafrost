#include "functions.h"
#undef PTR_str_0003fe57_00044594
#define PTR_str_0003fe57_00044594 (*(uint8_t * *)(0x44594U))
#undef str_00041e15
#define str_00041e15 (*(char (*)[1])(0x41e15U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3d155
 */

char * recovered_3d155(int param_1)

{
  unsigned char frame[64];

  char *pcVar1;

  pcVar1 = str_00041e15;
  if (param_1 - 1U < 4) {
    pcVar1 = (&PTR_str_0003fe57_00044594)[param_1];
  }
  return pcVar1;
}
