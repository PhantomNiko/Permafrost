#include "functions.h"
#undef DAT_0005e938
#define DAT_0005e938 (*(int *)(0x5e938U))
#undef DAT_0005e93c
#define DAT_0005e93c (*(uint32_t *)(0x5e93cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x396e8
 */

int * recovered_396e8(int param_1)

{
  unsigned char frame[64] = {0};

  int *piVar1;
  int iVar2;

  iVar2 = 0;
  piVar1 = &DAT_0005e93c;
  while( true ) {
    if (DAT_0005e938 == iVar2) {
      return (int *)0x0;
    }
    if (*piVar1 == param_1) break;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0xd;
  }
  if (iVar2 < 0) {
    return (int *)0x0;
  }
  return piVar1;
}
