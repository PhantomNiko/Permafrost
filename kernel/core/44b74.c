#include "functions.h"
#undef str_000589a3
#define str_000589a3 (*(char (*)[1])(0x589a3U))
#undef str_00058afd
#define str_00058afd (*(char (*)[1])(0x58afdU))
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x44b74
 */

undefined4 recovered_44b74(uint param_1,int *param_2,int *param_3,int param_4,char *param_5)

{
  unsigned char frame[68] = {0};

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
    bVar1 = recovered_45d1e(param_3,&local_14);
    recovered_21203(local_14);
    format = str_00058afd;
    if (bVar1) {
      uVar2 = recovered_416d3(param_2,param_3,(int *)param_4,1);
      format = str_000589a3;
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
    recovered_3f39b(param_1,param_5,format);
  }
  return 0;
}
