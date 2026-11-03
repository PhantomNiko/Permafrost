#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x288e4
 */

undefined4 * recovered_288e4(void *this,float param_1)

{
  unsigned char frame[64];

  recovered_285a4(this);
  *(undefined4 *)this = 2;
  *(float *)((int)this + 8) = param_1;
  *(int *)((int)this + 4) = (int)ROUND(param_1);
  return this;
}
