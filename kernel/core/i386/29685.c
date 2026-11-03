#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29685
 */

void recovered_29685(int param_1,uint param_2,int param_3)

{
  unsigned char frame[64];

  byte bVar1;
  int iVar2;

  bVar1 = 0;
  for (iVar2 = 0; param_3 != iVar2; iVar2 = iVar2 + 1) {
    *(char *)(param_1 + iVar2) = (char)(param_2 >> (bVar1 & 0x1f));
    bVar1 = bVar1 + 8;
  }
  return;
}
