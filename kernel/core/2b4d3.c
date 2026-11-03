#include "functions.h"
#undef DAT_0004eeac
#define DAT_0004eeac (*(int *)(0x4eeacU))
#undef DAT_0004eeb0
#define DAT_0004eeb0 (*(uint32_t *)(0x4eeb0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b4d3
 */

int * recovered_2b4d3(int param_1)

{
  unsigned char frame[64];

  int *piVar1;
  int iVar2;

  iVar2 = 0;
  piVar1 = &DAT_0004eeb0;
  while( true ) {
    if (DAT_0004eeac == iVar2) {
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
