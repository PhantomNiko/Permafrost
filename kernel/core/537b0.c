#include "functions.h"
#undef DAT_0005d764
#define DAT_0005d764 (*(int *)(0x5d764U))
#undef DAT_000938e0
#define DAT_000938e0 (*(char *)(0x938e0U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x537b0
 */

int recovered_537b0(int context)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  bool bVar2;
  int *piVar3;

  if ((((DAT_000938e0 != '\0') || (bVar2 = recovered_365c7(), bVar2)) &&
      (piVar3 = recovered_396e8(context), piVar3 != (int *)0x0)) &&
     ((uVar1 = piVar3[0xc], uVar1 != 0 && (bVar2 = recovered_537fe((int)piVar3,uVar1), bVar2)))) {
    piVar3[0xc] = uVar1;
    DAT_0005d764 = *piVar3;
    return CONCAT31((int3)((uint)*piVar3 >> 8),1);
  }
  return 0;
}
