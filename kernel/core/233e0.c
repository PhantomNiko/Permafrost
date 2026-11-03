#include "functions.h"
#undef DAT_0005d9c8
#define DAT_0005d9c8 (*(int *)(0x5d9c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x233e0
 */

void recovered_233e0(void)

{
  unsigned char frame[64] = {0};

  undefined4 *puVar1;
  int iVar2;

  iVar2 = DAT_0005d9c8;
  if (DAT_0005d9c8 != 0) {
    puVar1 = (undefined4 *)(DAT_0005d9c8 + 8);
    DAT_0005d9c8 = *(int *)(DAT_0005d9c8 + 8);
    *puVar1 = 0;
    if (*(char *)(iVar2 + 0x18) == '\0') {
      if (*(code **)(iVar2 + 4) != (code *)0x0) {
        (**(code **)(iVar2 + 4))(iVar2 + 0x1c);
      }
      recovered_21203(iVar2);
    }
  }
  return;
}
