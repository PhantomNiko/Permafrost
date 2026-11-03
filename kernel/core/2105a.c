#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2105a
 */

char * recovered_2105a(char *param_1,char param_2)

{
  unsigned char frame[64];

  while( true ) {
    if (*param_1 == '\0') {
      if (param_2 != '\0') {
        param_1 = (char *)0x0;
      }
      return param_1;
    }
    if (param_2 == *param_1) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}
