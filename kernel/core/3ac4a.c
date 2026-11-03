#include "functions.h"
#undef DAT_00057391
#define DAT_00057391 (*(uint8_t *)(0x57391U))
#define local_114 (*(byte (*)[256])(frame + 16))
#define local_14 (*(byte * *)(frame + 272))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3ac4a
 */

undefined4 recovered_3ac4a(int param_1,float *param_2)

{
  unsigned char frame[324] = {0};

  float10 fVar1;

  local_14 = (byte *)0x0;
  if (param_2 != (float *)0x0 && param_1 != 0) {
    recovered_22362((char *)local_114,0x100,&DAT_00057391,param_1);
    recovered_3677d(local_114);
    if (((local_114[0] != 0) &&
        (fVar1 = recovered_21fe4(local_114,&local_14),
        local_14 != local_114 && local_14 != (byte *)0x0)) && (*local_14 == 0)) {
      *param_2 = (float)fVar1;
      return CONCAT31((int3)((uint)local_14 >> 8),1);
    }
  }
  return 0;
}
