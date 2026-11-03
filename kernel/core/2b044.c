#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b044
 */

undefined4 * recovered_2b044(void *this,float param_1)

{
  unsigned char frame[64];

  recovered_2ad04(this);
  *(undefined4 *)this = 2;
  *(float *)((int)this + 8) = param_1;
  *(int *)((int)this + 4) = (int)ROUND(param_1);
  return this;
}
