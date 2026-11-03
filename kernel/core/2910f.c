#include "functions.h"
#undef DAT_00042c67
#define DAT_00042c67 (*(uint8_t *)(0x42c67U))
#undef str_00042c4c
#define str_00042c4c (*(char (*)[1])(0x42c4cU))
#undef str_00042c55
#define str_00042c55 (*(char (*)[1])(0x42c55U))
#undef str_00042c5b
#define str_00042c5b (*(char (*)[1])(0x42c5bU))
#undef str_00042c61
#define str_00042c61 (*(char (*)[1])(0x42c61U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2910f
 */

void recovered_2910f(uint param_1,uint param_2,char *param_3)

{
  unsigned char frame[68];

  longlong lVar1;
  uint uVar2;
  uint uVar3;

  if (param_3 != (char *)0x0) {
    if (param_2 < (param_1 < 0x40000000)) {
      if (param_2 < (param_1 < 0x100000)) {
        if (param_2 < (param_1 < 0x400)) {
          format = &DAT_00042c67;
        }
        else {
          param_1 = param_2 << 0x16 | param_1 >> 10;
          format = str_00042c61;
        }
      }
      else {
        param_1 = param_2 << 0xc | param_1 >> 0x14;
        format = str_00042c5b;
      }
    }
    else {
      uVar3 = param_2 << 2 | param_1 >> 0x1e;
      lVar1 = (ulonglong)(param_1 & 0x3fffffff) * 10;
      uVar2 = (int)((ulonglong)lVar1 >> 0x20) << 2 | (uint)lVar1 >> 0x1e;
      if (uVar2 != 0 && uVar3 < 10) {
        recovered_219e1(param_3,0x20,str_00042c4c,uVar3,uVar2);
        return;
      }
      format = str_00042c55;
      param_1 = uVar3;
    }
    recovered_219e1(param_3,0x20,format,param_1);
  }
  return;
}
