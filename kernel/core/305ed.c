#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x305ed
 */

undefined4 recovered_305ed(int *param_1)

{
  unsigned char frame[64];

  char *pcVar1;
  undefined4 uVar2;
  bool bVar3;

  if (param_1 == (int *)0x0) {
switchD_000305fc_default:
    uVar2 = 0;
  }
  else {
    pcVar1 = (char *)(*param_1 + -1);
    switch((uintptr_t)(pcVar1)) {
    case 0x0:
    case 0x4:
    case 0x5:
      bVar3 = param_1[1] == 0;
      break;
    case 0x1:
      return CONCAT31((int3)((uint)pcVar1 >> 8),pf_bits_float((uint32_t)param_1[2]) != 0.0);
    case 0x2:
      pcVar1 = (char *)param_1[3];
      if (pcVar1 == (char *)0x0) goto switchD_000305fc_default;
      bVar3 = *pcVar1 == '\0';
      break;
    case 0x3:
      bVar3 = param_1[5] == 0;
      break;
    case 0x6:
      pcVar1 = (char *)param_1[6];
      if (pcVar1 == (char *)0x0) goto switchD_000305fc_default;
      bVar3 = *(int *)(pcVar1 + 8) == 0;
      break;
    case 0x7:
      pcVar1 = (char *)param_1[7];
      if (pcVar1 == (char *)0x0) goto switchD_000305fc_default;
      bVar3 = *(int *)(pcVar1 + 4) == 0;
      break;
    case 0x8:
      bVar3 = param_1[8] == 0;
      break;
    default:
      goto switchD_000305fc_default;
    }
    uVar2 = CONCAT31((int3)((uint)pcVar1 >> 8),!bVar3);
  }
  return uVar2;
}
