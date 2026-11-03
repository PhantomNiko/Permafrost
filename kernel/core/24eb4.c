#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24eb4
 */

int recovered_24eb4(uint background,uint foreground,uint attribute)

{
  unsigned char frame[64];

  recovered_24ed9(background,foreground,(char)attribute);
  recovered_21d99();
  return 1;
}
