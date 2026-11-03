#include "functions.h"
#undef DAT_000475e8
#define DAT_000475e8 (*(int *)(0x475e8U))
#undef DAT_0007cfd4
#define DAT_0007cfd4 (*(char *)(0x7cfd4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3fc5d
 */

int recovered_3fc5d(int context)

{
  unsigned char frame[64];

  int iVar1;
  bool bVar2;
  int *piVar3;

  if ((((DAT_0007cfd4 != '\0') || (bVar2 = recovered_27bd3(), bVar2)) &&
      (piVar3 = recovered_2a2f6(context), piVar3 != (int *)0x0)) &&
     ((iVar1 = piVar3[0xc], iVar1 != 0 && (bVar2 = recovered_3fcab((int)piVar3,iVar1), bVar2)))) {
    piVar3[0xc] = iVar1;
    DAT_000475e8 = *piVar3;
    return CONCAT31((int3)((uint)*piVar3 >> 8),1);
  }
  return 0;
}
