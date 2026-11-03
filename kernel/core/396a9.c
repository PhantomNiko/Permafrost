#include "functions.h"
#undef DAT_00088e64
#define DAT_00088e64 (*(int *)(0x88e64U))
#undef DAT_00088e68
#define DAT_00088e68 (*(int *)(0x88e68U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x396a9
 */

void recovered_396a9(void)

{
  unsigned char frame[64];

  if (DAT_00088e64 == 0) {
    return;
  }
  DAT_00088e64 = DAT_00088e64 + -1;
  recovered_3e584((int *)(DAT_00088e64 * 0xc + DAT_00088e68));
  return;
}

