#include "functions.h"
#undef DAT_0003f539
#define DAT_0003f539 (*(uint8_t *)(0x3f539U))
#undef str_0003f51e
#define str_0003f51e (*(char (*)[1])(0x3f51eU))
#undef str_0003f527
#define str_0003f527 (*(char (*)[1])(0x3f527U))
#undef str_0003f52d
#define str_0003f52d (*(char (*)[1])(0x3f52dU))
#undef str_0003f533
#define str_0003f533 (*(char (*)[1])(0x3f533U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27711
 */

void recovered_27711(uint param_1,uint param_2,char *param_3)

{
  unsigned char frame[68];

  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 != (char *)0x0) {
    if (param_2 < (param_1 < 0x40000000)) {
      if (param_2 < (param_1 < 0x100000)) {
        if (param_2 < (param_1 < 0x400)) {
          format = &DAT_0003f539;
        }
        else {
          param_1 = param_2 << 0x16 | param_1 >> 10;
          format = str_0003f533;
        }
      }
      else {
        param_1 = param_2 << 0xc | param_1 >> 0x14;
        format = str_0003f52d;
      }
    }
    else {
      uVar3 = param_2 << 2 | param_1 >> 0x1e;
      lVar1 = (ulonglong)(param_1 & 0x3fffffff) * 10;
      uVar2 = (int)((ulonglong)lVar1 >> 0x20) << 2 | (uint)lVar1 >> 0x1e;
      if (uVar2 != 0 && uVar3 < 10) {
        recovered_219e1(param_3,0x20,str_0003f51e,uVar3,uVar2);
        return;
      }
      format = str_0003f527;
      param_1 = uVar3;
    }
    recovered_219e1(param_3,0x20,format,param_1);
  }
  return;
}

