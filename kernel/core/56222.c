#include "functions.h"
#undef DAT_00057391
#define DAT_00057391 (*(uint8_t *)(0x57391U))
#undef str_0005c9f4
#define str_0005c9f4 (*(char (*)[1])(0x5c9f4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x56222
 */

uint recovered_56222(char *param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  uint in_EAX = 0;
  char *pcVar1;

  if (param_1 != (char *)0x0) {
    pcVar1 = str_0005c9f4;
    if (param_2 != (char *)0x0) {
      pcVar1 = param_2;
    }
    in_EAX = recovered_22362(param_1,0xa0,&DAT_00057391,pcVar1);
  }
  return in_EAX;
}
