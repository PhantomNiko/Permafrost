#include "functions.h"
#undef DAT_000938e4
#define DAT_000938e4 (*(int *)(0x938e4U))
#undef DAT_000938e8
#define DAT_000938e8 (*(int *)(0x938e8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32e94
 */

void recovered_32e94(void)

{
  unsigned char frame[64] = {0};

  recovered_21203(DAT_000938e4);
  recovered_21203(DAT_000938e8);
  DAT_000938e4 = 0;
  DAT_000938e8 = 0;
  return;
}
