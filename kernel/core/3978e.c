#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
#undef DAT_0003f7fb
#define DAT_0003f7fb (*(uint8_t *)(0x3f7fbU))
#undef str_0004145d
#define str_0004145d (*(char (*)[1])(0x4145dU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3978e
 */

bool recovered_3978e(uint param_1,char *param_2,int param_3,int param_4)

{
  unsigned char frame[64];

  undefined1 *puVar1;
  
  if (param_3 != param_4) {
    puVar1 = &DAT_0003f7fb;
    if (param_4 == 1) {
      puVar1 = &DAT_0003f254;
    }
    recovered_2d241(param_1,param_2,str_0004145d,param_2,param_4,puVar1);
  }
  return param_3 == param_4;
}

