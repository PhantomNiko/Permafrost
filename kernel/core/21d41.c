#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21d41
 */

int recovered_21d41(char *text)

{
  unsigned char frame[64];

  for (; ((byte *)text != (byte *)0x0 && (*text != 0)); text = text + 1) {
    recovered_21cc7(*text);
  }
  recovered_21aed();
  return 1;
}
