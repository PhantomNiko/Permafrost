#include "functions.h"
#undef DAT_00057c0f
#define DAT_00057c0f (*(uint8_t *)(0x57c0fU))
#undef str_00057bf4
#define str_00057bf4 (*(char (*)[1])(0x57bf4U))
#undef str_00057bfd
#define str_00057bfd (*(char (*)[1])(0x57bfdU))
#undef str_00057c03
#define str_00057c03 (*(char (*)[1])(0x57c03U))
#undef str_00057c09
#define str_00057c09 (*(char (*)[1])(0x57c09U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x37cd5
 */

void recovered_37cd5(uint param_1,uint param_2,char *param_3)

{
  unsigned char frame[68] = {0};

  longlong lVar1;
  uint uVar2;
  uint uVar3;

  if (param_3 != (char *)0x0) {
    if (param_2 < (param_1 < 0x40000000)) {
      if (param_2 < (param_1 < 0x100000)) {
        if (param_2 < (param_1 < 0x400)) {
          format = &DAT_00057c0f;
        }
        else {
          param_1 = param_2 << 0x16 | param_1 >> 10;
          format = str_00057c09;
        }
      }
      else {
        param_1 = param_2 << 0xc | param_1 >> 0x14;
        format = str_00057c03;
      }
    }
    else {
      uVar3 = param_2 << 2 | param_1 >> 0x1e;
      lVar1 = (ulonglong)(param_1 & 0x3fffffff) * 10;
      uVar2 = (int)((ulonglong)lVar1 >> 0x20) << 2 | (uint)lVar1 >> 0x1e;
      if (uVar2 != 0 && uVar3 < 10) {
        recovered_22362(param_3,0x20,str_00057bf4,uVar3,uVar2);
        return;
      }
      format = str_00057bfd;
      param_1 = uVar3;
    }
    recovered_22362(param_3,0x20,format,param_1);
  }
  return;
}
