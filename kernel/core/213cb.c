#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x213cb
 */

int recovered_213cb(int param_1,int param_2,int param_3)

{
  unsigned char frame[64];

  byte *pbVar1;
  byte *pbVar2;
  int iVar3;

  iVar3 = 0;
  do {
    if (param_3 == iVar3) {
      return 0;
    }
    pbVar1 = (byte *)(param_1 + iVar3);
    pbVar2 = (byte *)(param_2 + iVar3);
    iVar3 = iVar3 + 1;
  } while (*pbVar1 == *pbVar2);
  return (uint)*pbVar1 - (uint)*pbVar2;
}
