#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x236e0
 */

bool FUN_000236e0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (param_2 & 0x7fffffff) < 0x7ff00000;
}
