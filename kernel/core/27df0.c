#include "functions.h"
#undef DAT_00054f20
#define DAT_00054f20 (*(int *)(0x54f20U))
#undef DAT_00054f24
#define DAT_00054f24 (*(uint32_t *)(0x54f24U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27df0
 */

int * recovered_27df0(int param_1)

{
  unsigned char frame[64];

  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_00054f24;
  while( true ) {
    if (DAT_00054f20 == iVar2) {
      return (int *)0x0;
    }
    if (*piVar1 == param_1) break;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 9;
  }
  if (iVar2 < 0) {
    return (int *)0x0;
  }
  return piVar1;
}

