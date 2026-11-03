#include "functions.h"
#undef DAT_00048b9e
#define DAT_00048b9e (*(uint8_t *)(0x48b9eU))
#undef str_00048b83
#define str_00048b83 (*(char (*)[1])(0x48b83U))
#undef str_00048b8c
#define str_00048b8c (*(char (*)[1])(0x48b8cU))
#undef str_00048b92
#define str_00048b92 (*(char (*)[1])(0x48b92U))
#undef str_00048b98
#define str_00048b98 (*(char (*)[1])(0x48b98U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a1bc
 */

void recovered_2a1bc(uint param_1,uint param_2,char *param_3)

{
  unsigned char frame[68];

  longlong lVar1;
  uint uVar2;
  uint uVar3;

  if (param_3 != (char *)0x0) {
    if (param_2 < (param_1 < 0x40000000)) {
      if (param_2 < (param_1 < 0x100000)) {
        if (param_2 < (param_1 < 0x400)) {
          format = &DAT_00048b9e;
        }
        else {
          param_1 = param_2 << 0x16 | param_1 >> 10;
          format = str_00048b98;
        }
      }
      else {
        param_1 = param_2 << 0xc | param_1 >> 0x14;
        format = str_00048b92;
      }
    }
    else {
      uVar3 = param_2 << 2 | param_1 >> 0x1e;
      lVar1 = (ulonglong)(param_1 & 0x3fffffff) * 10;
      uVar2 = (int)((ulonglong)lVar1 >> 0x20) << 2 | (uint)lVar1 >> 0x1e;
      if (uVar2 != 0 && uVar3 < 10) {
        recovered_21de7(param_3,0x20,str_00048b83,uVar3,uVar2);
        return;
      }
      format = str_00048b8c;
      param_1 = uVar3;
    }
    recovered_21de7(param_3,0x20,format,param_1);
  }
  return;
}
