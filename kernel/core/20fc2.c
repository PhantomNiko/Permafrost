#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20fc2
 */

ulonglong recovered_20fc2(ulonglong numerator,ulonglong denominator)

{
  unsigned char frame[64] = {0};

  ulonglong uVar1;

  uVar1 = recovered_20fe3((undefined4)numerator,PF_PART4(numerator, 4),(uint)denominator,PF_PART4(denominator, 4),
                          (uint *)0x0);
  return uVar1;
}
