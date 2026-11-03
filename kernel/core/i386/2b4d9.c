#include "functions.h"
#undef DAT_0004ceac
#define DAT_0004ceac (*(int *)(0x4ceacU))
#undef DAT_0004ceb0
#define DAT_0004ceb0 (*(uint32_t *)(0x4ceb0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b4d9
 */

int * recovered_2b4d9(int param_1)

{
  unsigned char frame[64];

  int *piVar1;
  int iVar2;

  iVar2 = 0;
  piVar1 = &DAT_0004ceb0;
  while( true ) {
    if (DAT_0004ceac == iVar2) {
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
