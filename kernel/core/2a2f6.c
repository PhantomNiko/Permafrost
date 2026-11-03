#include "functions.h"
#undef DAT_0004808c
#define DAT_0004808c (*(int *)(0x4808cU))
#undef DAT_00048090
#define DAT_00048090 (*(uint32_t *)(0x48090U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a2f6
 */

int * recovered_2a2f6(int param_1)

{
  unsigned char frame[64];

  int *piVar1;
  int iVar2;

  iVar2 = 0;
  piVar1 = &DAT_00048090;
  while( true ) {
    if (DAT_0004808c == iVar2) {
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
