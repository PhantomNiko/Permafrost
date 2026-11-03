#include "functions.h"
#undef str_0004390d
#define str_0004390d (*(char (*)[1])(0x4390dU))
#undef str_00043a41
#define str_00043a41 (*(char (*)[1])(0x43a41U))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x339d1
 */

undefined4 recovered_339d1(uint param_1,int *param_2,int *param_3,int param_4,char *param_5)

{
  unsigned char frame[68];

  bool bVar1;
  undefined4 uVar2;
  char *format;

  local_14 = 0;
  if (param_2 != (int *)0x0) {
    if (param_4 == 0) {
      return 0;
    }
    if (param_3 == (int *)0x0) {
      return 0;
    }
    if (*param_2 != 8) {
      return 0;
    }
    bVar1 = recovered_3444b(param_3,&local_14);
    recovered_20dfd(local_14);
    format = str_00043a41;
    if (bVar1) {
      uVar2 = recovered_30544(param_2,param_3,(int *)param_4,1);
      format = str_0004390d;
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
    recovered_2f9c3(param_1,param_5,format);
  }
  return 0;
}
