#include "functions.h"
#undef DAT_0007041c
#define DAT_0007041c (*(int *)(0x7041cU))
#undef DAT_00070420
#define DAT_00070420 (*(uint *)(0x70420U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25519
 */

void recovered_25519(void)

{
  unsigned char frame[64];

  recovered_2573b(DAT_0007041c,DAT_00070420);
  return;
}

