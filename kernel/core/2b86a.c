#include "functions.h"
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
#undef DAT_0002d5cc
#define DAT_0002d5cc (*(uint8_t *)(0x2d5ccU))
#undef str_0002d5b3
#define str_0002d5b3 (*(char (*)[1])(0x2d5b3U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b86a
 */

bool recovered_2b86a(int *param_1,char *param_2,int param_3,int param_4)

{
  unsigned char frame[64];

  undefined1 *puVar1;
  
  if (param_3 != param_4) {
    puVar1 = &DAT_0002d5cc;
    if (param_4 == 1) {
      puVar1 = &DAT_0002ca9c;
    }
    recovered_2609c((uint)param_1,param_2,str_0002d5b3,param_2,param_4,puVar1);
  }
  return param_3 == param_4;
}

