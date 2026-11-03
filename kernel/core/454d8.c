#include "functions.h"
#undef DAT_0004e5f8
#define DAT_0004e5f8 (*(int *)(0x4e5f8U))
#undef DAT_00084054
#define DAT_00084054 (*(char *)(0x84054U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x454d8
 */

int recovered_454d8(int context)

{
  unsigned char frame[64];

  uint uVar1;
  bool bVar2;
  int *piVar3;

  if ((((DAT_00084054 != '\0') || (bVar2 = recovered_28aa6(), bVar2)) &&
      (piVar3 = recovered_2b4d3(context), piVar3 != (int *)0x0)) &&
     ((uVar1 = piVar3[0xc], uVar1 != 0 && (bVar2 = recovered_45526((int)piVar3,uVar1), bVar2)))) {
    piVar3[0xc] = uVar1;
    DAT_0004e5f8 = *piVar3;
    return CONCAT31((int3)((uint)*piVar3 >> 8),1);
  }
  return 0;
}
