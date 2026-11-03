#include "functions.h"
#undef DAT_00056870
#define DAT_00056870 (*(uint8_t *)(0x56870U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21944
 */

longlong recovered_21944(double param_1)

{
  unsigned char frame[64] = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_00056870 + (uint)(0.0 <= param_1) * 8));
}
