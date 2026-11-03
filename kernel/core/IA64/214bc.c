#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x214bc
 */

char * FUN_000214bc(char *param_1,char *param_2)

{
  unsigned char frame[64];

  char *pcVar1;

  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    pcVar1 = recovered_21460(param_2,*param_1);
    if (pcVar1 != (char *)0x0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}
