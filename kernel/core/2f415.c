#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2f415
 */

int recovered_2f415(char *text)

{
  unsigned char frame[64] = {0};

  for (; ((byte *)text != (byte *)0x0 && (*text != 0)); text = text + 1) {
    recovered_2f39b(*text);
  }
  recovered_2f1c1();
  return 1;
}
