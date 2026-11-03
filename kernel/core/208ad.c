#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x208ad
 */

ulonglong recovered_208ad(ulonglong numerator,ulonglong denominator)

{
  unsigned char frame[64];

  ulonglong uVar1;
  
  uVar1 = recovered_208ce((undefined4)numerator,PF_PART4(numerator, 4),(uint)denominator,PF_PART4(denominator, 4),
                          (uint *)0x0);
  return uVar1;
}

