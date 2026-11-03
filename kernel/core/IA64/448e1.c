#include "functions.h"
#undef DAT_0004999e
#define DAT_0004999e (*(uint8_t *)(0x4999eU))
#undef PTR_str_0004707e_0004c5ac
#define PTR_str_0004707e_0004c5ac (*(uint8_t * *)(0x4c5acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x448e1
 */

undefined * recovered_448e1(int param_1)

{
  unsigned char frame[64];

  undefined *puVar1;

  puVar1 = &DAT_0004999e;
  if (param_1 - 1U < 4) {
    puVar1 = (&PTR_str_0004707e_0004c5ac)[param_1];
  }
  return puVar1;
}
