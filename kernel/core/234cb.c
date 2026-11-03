#include "functions.h"
#undef DAT_0005d9cc
#define DAT_0005d9cc (*(uint32_t * *)(0x5d9ccU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x234cb
 */

uint recovered_234cb(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = DAT_0005d9cc;
  DAT_0005d9cc = param_1;
  return (uint)param_1;
}
