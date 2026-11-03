#include "functions.h"
#undef DAT_0002cc21
#define DAT_0002cc21 (*(uint8_t *)(0x2cc21U))
#undef str_0002cc06
#define str_0002cc06 (*(char (*)[1])(0x2cc06U))
#undef str_0002cc0f
#define str_0002cc0f (*(char (*)[1])(0x2cc0fU))
#undef str_0002cc15
#define str_0002cc15 (*(char (*)[1])(0x2cc15U))
#undef str_0002cc1b
#define str_0002cc1b (*(char (*)[1])(0x2cc1bU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24ac5
 */

void recovered_24ac5(uint param_1,int param_2)

{
  unsigned char frame[68];

  longlong lVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (param_1 < 0x40000000) {
      if (param_1 < 0x100000) {
        if (param_1 < 0x400) {
          format = &DAT_0002cc21;
        }
        else {
          param_1 = param_1 >> 10;
          format = str_0002cc1b;
        }
      }
      else {
        param_1 = param_1 >> 0x14;
        format = str_0002cc15;
      }
    }
    else {
      lVar1 = (ulonglong)(param_1 & 0x3fffffff) * 10;
      uVar2 = (int)((ulonglong)lVar1 >> 0x20) << 2 | (uint)lVar1 >> 0x1e;
      if (uVar2 != 0) {
        recovered_216bc((char *)param_2,0x20,str_0002cc06,param_1 >> 0x1e,uVar2);
        return;
      }
      format = str_0002cc0f;
      param_1 = param_1 >> 0x1e;
    }
    recovered_216bc((char *)param_2,0x20,format,param_1);
  }
  return;
}

