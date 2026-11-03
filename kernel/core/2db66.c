#include "functions.h"
#define local_1c (*(double *)(frame + 16))
#define local_14 (*(double *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2db66
 */

void recovered_2db66(int param_1)

{
  unsigned char frame[76] = {0};


  recovered_2db4a(param_1);
  local_1c = *(double *)(param_1 + 4) * *(double *)(param_1 + 0x68);
  local_14 = *(double *)(param_1 + 4) * *(double *)(param_1 + 0x70);
  recovered_2b1ac((int *)(param_1 + 0x18),&local_1c);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}
