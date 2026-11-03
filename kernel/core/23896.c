#include "functions.h"
#undef DAT_00057324
#define DAT_00057324 (*(uint32_t *)(0x57324U))
#undef DAT_00058434
#define DAT_00058434 (*(uint32_t *)(0x58434U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23896
 */

void recovered_23896(void)

{
  unsigned char frame[64];

  undefined4 uVar1;

  uVar1 = recovered_2853c(&DAT_00058434);
  if ((char)uVar1 != '\0') {
    uVar1 = recovered_2853c(&DAT_00057324);
    if ((char)uVar1 != '\0') {
      FUN_000284f5();
      return;
    }
  }
  return;
}
