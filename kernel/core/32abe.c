#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x32abe
 */

int recovered_32abe(uint background,uint foreground,uint attribute)

{
  unsigned char frame[64] = {0};

  recovered_32ae3(background,foreground,(char)attribute);
  recovered_2f46d();
  return 1;
}
