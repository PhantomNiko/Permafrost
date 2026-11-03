#include "functions.h"
#undef DAT_0005ad2d
#define DAT_0005ad2d (*(uint8_t *)(0x5ad2dU))
#undef PTR_str_00058364_0005d6d8
#define PTR_str_00058364_0005d6d8 (*(uint8_t * *)(0x5d6d8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x54776
 */

undefined * recovered_54776(int param_1)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;

  puVar1 = &DAT_0005ad2d;
  if (param_1 - 1U < 4) {
    puVar1 = (&PTR_str_00058364_0005d6d8)[param_1];
  }
  return puVar1;
}
