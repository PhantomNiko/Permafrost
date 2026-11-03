#include "functions.h"
#undef DAT_0004bcc2
#define DAT_0004bcc2 (*(uint8_t *)(0x4bcc2U))
#undef PTR_str_000492f9_0004e5ac
#define PTR_str_000492f9_0004e5ac (*(uint8_t * *)(0x4e5acU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x466ac
 */

undefined * recovered_466ac(int param_1)

{
  unsigned char frame[64];

  undefined *puVar1;

  puVar1 = &DAT_0004bcc2;
  if (param_1 - 1U < 4) {
    puVar1 = (&PTR_str_000492f9_0004e5ac)[param_1];
  }
  return puVar1;
}
