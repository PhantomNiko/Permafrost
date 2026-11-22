#include "functions.h"



#undef DAT_020de164
#undef DAT_020de168
#undef DAT_0214b320
#undef DAT_0214b364
#undef UNK_0214b324

#undef DAT_0214b320
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#undef DAT_0214b364
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2039a00
 */

uchar recovered_2039a00(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  undefined3 extraout_var = 0;
  uint uVar2;

  uVar1 = recovered_2006ec0();
  uVar2 = 0;
  if (CONCAT31(extraout_var,uVar1) < 0x20) {
    uVar2 = CONCAT31(extraout_var,uVar1);
  }
  (&DAT_0214b364)[uVar2 * 0x12] = uVar2;
  if (2000 < param_1 && (&DAT_0214b320)[uVar2 * 0x12] != 0) {
    do {
      recovered_2039960(0);
      param_1 = param_1 - 2000;
    } while (2000 < param_1);
  }
  uVar1 = recovered_200afa0(param_1);
  return uVar1;
}
