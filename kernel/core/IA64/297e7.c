#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x297e7
 */

uint recovered_297e7(int param_1,uint param_2)

{
  unsigned char frame[64];

  if (param_2 < 8) {
    return (((param_1 << ((byte)param_2 & 0x1f)) - param_1) + 0x7fU) / 0xff;
  }
  return param_1 << ((byte)param_2 - 8 & 0x1f);
}
