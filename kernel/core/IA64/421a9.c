#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x421a9
 */

undefined4 recovered_421a9(int param_1,int param_2,int *param_3,int *param_4)

{
  unsigned char frame[64];

  if (param_4 != (int *)0x0 && (param_3 != (int *)0x0 && param_1 != 0)) {
    for (; *(char *)(param_1 + param_2) != '\0'; param_2 = param_2 + 1) {
      if ((byte)(*(char *)(param_1 + param_2) - 0x30U) < 10) {
        *param_3 = param_2;
        do {
          param_2 = param_2 + 1;
          *param_4 = param_2;
        } while ((byte)(*(char *)(param_1 + param_2) - 0x30U) < 10);
        return CONCAT31((int3)((uint)param_4 >> 8),1);
      }
    }
  }
  return 0;
}
