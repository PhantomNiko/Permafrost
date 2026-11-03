#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x314e1
 */

int recovered_314e1(char *param_1)

{
  unsigned char frame[64];

  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  iVar4 = 0;
  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, cVar1 != '\0')) {
    if ((cVar1 == '-') || (iVar5 = iVar4, cVar1 == '+')) {
      iVar5 = 1;
    }
    iVar4 = 0;
    bVar3 = 0;
    for (pcVar6 = param_1 + iVar5; cVar1 = *pcVar6, cVar1 != '\0'; pcVar6 = pcVar6 + 1) {
      if ((byte)(cVar1 - 0x30U) < 10) {
        iVar4 = 1;
      }
      else {
        bVar2 = (bool)(cVar1 != '.' | bVar3);
        bVar3 = 1;
        if (bVar2) {
          return 0;
        }
      }
    }
  }
  return iVar4;
}

