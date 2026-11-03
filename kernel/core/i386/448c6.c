#include "functions.h"
#undef DAT_0004996d
#define DAT_0004996d (*(uint8_t *)(0x4996dU))
#undef PTR_str_00047029_0004c5ac
#define PTR_str_00047029_0004c5ac (*(uint8_t * *)(0x4c5acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x448c6
 */

undefined * recovered_448c6(int param_1)

{
  unsigned char frame[64];

  undefined *puVar1;

  puVar1 = &DAT_0004996d;
  if (param_1 - 1U < 4) {
    puVar1 = (&PTR_str_00047029_0004c5ac)[param_1];
  }
  return puVar1;
}
