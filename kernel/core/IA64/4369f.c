#include "functions.h"
#undef DAT_0004c5f8
#define DAT_0004c5f8 (*(int *)(0x4c5f8U))
#undef DAT_00082054
#define DAT_00082054 (*(char *)(0x82054U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4369f
 */

int recovered_4369f(int context)

{
  unsigned char frame[64];

  uint uVar1;
  bool bVar2;
  int *piVar3;

  if ((((DAT_00082054 != '\0') || (bVar2 = recovered_28ac0(), bVar2)) &&
      (piVar3 = recovered_2b54f(context), piVar3 != (int *)0x0)) &&
     ((uVar1 = piVar3[0xc], uVar1 != 0 && (bVar2 = recovered_436ed((int)piVar3,uVar1), bVar2)))) {
    piVar3[0xc] = uVar1;
    DAT_0004c5f8 = *piVar3;
    return CONCAT31((int3)((uint)*piVar3 >> 8),1);
  }
  return 0;
}
