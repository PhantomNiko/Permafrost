#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x255a5
 */

int recovered_255a5(uint background,uint foreground,uint attribute)

{
  unsigned char frame[64];

  recovered_255ca(background,foreground,(char)attribute);
  recovered_2219f();
  return 1;
}
