#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x25e64
 */

uint recovered_25e64(int *param_1,uint param_2,undefined1 *param_3)

{
  unsigned char frame[64] = {0};

  uint extraout_EAX = 0;

  param_1[1] = 0;
  FUN_00025e74(param_1,param_2,param_3);
  return extraout_EAX;
}
