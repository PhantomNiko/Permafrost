#include "functions.h"
#undef DAT_00046909
#define DAT_00046909 (*(uint8_t *)(0x46909U))
#undef str_000468ee
#define str_000468ee (*(char (*)[1])(0x468eeU))
#undef str_000468f7
#define str_000468f7 (*(char (*)[1])(0x468f7U))
#undef str_000468fd
#define str_000468fd (*(char (*)[1])(0x468fdU))
#undef str_00046903
#define str_00046903 (*(char (*)[1])(0x46903U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a204
 */

void recovered_2a204(uint param_1,uint param_2,char *param_3)

{
  unsigned char frame[68];

  longlong lVar1;
  uint uVar2;
  uint uVar3;

  if (param_3 != (char *)0x0) {
    if (param_2 < (param_1 < 0x40000000)) {
      if (param_2 < (param_1 < 0x100000)) {
        if (param_2 < (param_1 < 0x400)) {
          format = &DAT_00046909;
        }
        else {
          param_1 = param_2 << 0x16 | param_1 >> 10;
          format = str_00046903;
        }
      }
      else {
        param_1 = param_2 << 0xc | param_1 >> 0x14;
        format = str_000468fd;
      }
    }
    else {
      uVar3 = param_2 << 2 | param_1 >> 0x1e;
      lVar1 = (ulonglong)(param_1 & 0x3fffffff) * 10;
      uVar2 = (int)((ulonglong)lVar1 >> 0x20) << 2 | (uint)lVar1 >> 0x1e;
      if (uVar2 != 0 && uVar3 < 10) {
        recovered_21de7(param_3,0x20,str_000468ee,uVar3,uVar2);
        return;
      }
      format = str_000468f7;
      param_1 = uVar3;
    }
    recovered_21de7(param_3,0x20,format,param_1);
  }
  return;
}
