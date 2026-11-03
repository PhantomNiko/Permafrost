#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20dbf
 */

char * recovered_20dbf(char *param_1,char *param_2)

{
  unsigned char frame[64];

  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  if (*param_2 != '\0') {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      iVar3 = 0;
      do {
        pcVar1 = param_2 + iVar3;
        if (*pcVar1 == '\0') {
          return param_1;
        }
        pcVar2 = param_1 + iVar3;
        iVar3 = iVar3 + 1;
      } while (*pcVar2 == *pcVar1);
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}

