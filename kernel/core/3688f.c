#include "functions.h"
#undef str_00049938
#define str_00049938 (*(char (*)[1])(0x49938U))
#undef str_00049a92
#define str_00049a92 (*(char (*)[1])(0x49a92U))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3688f
 */

undefined4 recovered_3688f(uint param_1,int *param_2,int *param_3,int param_4,char *param_5)

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
    bVar1 = recovered_37a39(param_3,&local_14);
    recovered_21203(local_14);
    format = str_00049a92;
    if (bVar1) {
      uVar2 = recovered_333ee(param_2,param_3,(int *)param_4,1);
      format = str_00049938;
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
    recovered_310b6(param_1,param_5,format);
  }
  return 0;
}
