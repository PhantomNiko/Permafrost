#include "functions.h"
#undef DAT_000468e6
#define DAT_000468e6 (*(uint8_t *)(0x468e6U))
#undef str_000468cb
#define str_000468cb (*(char (*)[1])(0x468cbU))
#undef str_000468d4
#define str_000468d4 (*(char (*)[1])(0x468d4U))
#undef str_000468da
#define str_000468da (*(char (*)[1])(0x468daU))
#undef str_000468e0
#define str_000468e0 (*(char (*)[1])(0x468e0U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a1c2
 */

void recovered_2a1c2(uint param_1,uint param_2,char *param_3)

{
  unsigned char frame[68];

  longlong lVar1;
  uint uVar2;
  uint uVar3;

  if (param_3 != (char *)0x0) {
    if (param_2 < (param_1 < 0x40000000)) {
      if (param_2 < (param_1 < 0x100000)) {
        if (param_2 < (param_1 < 0x400)) {
          format = &DAT_000468e6;
        }
        else {
          param_1 = param_2 << 0x16 | param_1 >> 10;
          format = str_000468e0;
        }
      }
      else {
        param_1 = param_2 << 0xc | param_1 >> 0x14;
        format = str_000468da;
      }
    }
    else {
      uVar3 = param_2 << 2 | param_1 >> 0x1e;
      lVar1 = (ulonglong)(param_1 & 0x3fffffff) * 10;
      uVar2 = (int)((ulonglong)lVar1 >> 0x20) << 2 | (uint)lVar1 >> 0x1e;
      if (uVar2 != 0 && uVar3 < 10) {
        recovered_21de7(param_3,0x20,str_000468cb,uVar3,uVar2);
        return;
      }
      format = str_000468d4;
      param_1 = uVar3;
    }
    recovered_21de7(param_3,0x20,format,param_1);
  }
  return;
}
