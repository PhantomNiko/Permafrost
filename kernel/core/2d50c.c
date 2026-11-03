#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2d50c
 */

undefined1 recovered_2d50c(undefined4 *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;

  puVar3 = (undefined1 *)*param_1;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_00057364;
  }
  puVar4 = (undefined1 *)*param_2;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_00057364;
  }
  iVar5 = 0;
  if (param_1[1] == param_2[1]) {
    do {
      if (param_1[1] == iVar5) {
        return 1;
      }
      pcVar1 = puVar3 + iVar5;
      pcVar2 = puVar4 + iVar5;
      iVar5 = iVar5 + 1;
    } while (*pcVar1 == *pcVar2);
  }
  return 0;
}
