#include "functions.h"
#undef DAT_0005d9cc
#define DAT_0005d9cc (*(uint32_t * *)(0x5d9ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23522
 */

uint recovered_23522(int param_1)

{
  unsigned char frame[64] = {0};

  uint extraout_EAX = 0;

  if (DAT_0005d9cc != (undefined4 *)0x0) {
    DAT_0005d9cc = (undefined4 *)*DAT_0005d9cc;
  }
  recovered_23540(param_1);
  return extraout_EAX;
}
