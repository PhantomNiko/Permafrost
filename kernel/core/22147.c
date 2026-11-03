#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22147
 */

int recovered_22147(char *text)

{
  unsigned char frame[64];

  for (; ((byte *)text != (byte *)0x0 && (*text != 0)); text = text + 1) {
    recovered_220cd(*text);
  }
  recovered_21ef3();
  return 1;
}
