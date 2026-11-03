#include "functions.h"
#undef DAT_0004b490
#define DAT_0004b490 (*(uint32_t *)(0x4b490U))
#undef DAT_0005c7ac
#define DAT_0005c7ac (*(uint32_t *)(0x5c7acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25018
 */

void recovered_25018(void)

{
  unsigned char frame[64];

  undefined4 uVar1;

  uVar1 = recovered_2ac9c(&DAT_0005c7ac);
  if ((char)uVar1 != '\0') {
    uVar1 = recovered_2ac9c(&DAT_0004b490);
    if ((char)uVar1 != '\0') {
      recovered_2ac55();
      return;
    }
  }
  return;
}
