#include "functions.h"
#undef str_0004048c
#define str_0004048c (*(char (*)[1])(0x4048cU))
#undef str_000405c0
#define str_000405c0 (*(char (*)[1])(0x405c0U))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3124f
 */

undefined4 recovered_3124f(uint param_1,int *param_2,int *param_3,int param_4,char *param_5)

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
    bVar1 = recovered_31cc9(param_3,&local_14);
    recovered_20dfd(local_14);
    format = str_000405c0;
    if (bVar1) {
      uVar2 = recovered_2ddc2(param_2,param_3,(int *)param_4,1);
      format = str_0004048c;
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
    recovered_2d241(param_1,param_5,format);
  }
  return 0;
}
