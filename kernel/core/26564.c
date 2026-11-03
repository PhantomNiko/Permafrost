#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26564
 */

undefined4 recovered_26564(int *param_1)

{
  unsigned char frame[64];

  char *pcVar1;
  bool bVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  pcVar1 = (char *)(*param_1 + -1);
  switch((uintptr_t)(pcVar1)) {
  case 0x0:
  case 0x4:
  case 0x5:
    bVar2 = param_1[1] == 0;
    break;
  case 0x1:
    return CONCAT31((int3)((uint)pcVar1 >> 8),pf_bits_float((uint32_t)param_1[2]) != 0.0);
  case 0x2:
    pcVar1 = (char *)param_1[3];
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
    bVar2 = *pcVar1 == '\0';
    break;
  case 0x3:
    bVar2 = param_1[5] == 0;
    break;
  case 0x6:
    pcVar1 = (char *)param_1[6];
    goto LAB_000265ad;
  case 0x7:
    pcVar1 = (char *)param_1[7];
LAB_000265ad:
    if (pcVar1 == (char *)0x0) {
LAB_000265bc:
      return 0;
    }
    bVar2 = *(int *)(pcVar1 + 4) == 0;
    break;
  default:
    goto LAB_000265bc;
  }
  return CONCAT31((int3)((uint)pcVar1 >> 8),!bVar2);
}

