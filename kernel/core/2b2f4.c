#include "functions.h"
#define local_24 (*(int *)(frame + 24))
#define local_20 (*(int *)(frame + 28))
#define local_1c (*(int *)(frame + 32))
#define local_18 (*(int *)(frame + 36))
#define local_14 (*(int *)(frame + 40))
#define local_10 (*(int *)(frame + 44))
#define local_2c (*(int *)(frame + 16))
#define local_28 (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b2f4
 */

void recovered_2b2f4(int *param_1)

{
  unsigned char frame[92] = {0};


  if ((char)param_1[3] == '\x01') {
    if ((*(double *)(param_1 + 8) == *(double *)(param_1 + 4)) &&
       (!NAN(*(double *)(param_1 + 8)) && !NAN(*(double *)(param_1 + 4)))) {
      if ((*(double *)(param_1 + 10) == *(double *)(param_1 + 6)) &&
         (!NAN(*(double *)(param_1 + 10)) && !NAN(*(double *)(param_1 + 6)))) goto LAB_0002b361;
    }
    local_20 = param_1[0xb];
    local_24 = param_1[10];
    local_2c = param_1[8];
    local_28 = param_1[9];
    local_1c = param_1[4];
    local_18 = param_1[5];
    local_14 = param_1[6];
    local_10 = param_1[7];
    recovered_2b748(param_1,&local_2c);
  }
LAB_0002b361:
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[8] = param_1[4];
  param_1[9] = param_1[5];
  param_1[10] = param_1[6];
  param_1[0xb] = param_1[7];
  return;
}
