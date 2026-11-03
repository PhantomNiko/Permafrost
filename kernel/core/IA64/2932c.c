#include "functions.h"
#undef str_000463aa
#define str_000463aa (*(char (*)[1])(0x463aaU))
#undef str_000463c7
#define str_000463c7 (*(char (*)[1])(0x463c7U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2932c
 */

undefined4 recovered_2932c(int param_1,uint param_2,undefined1 *param_3,char *param_4)

{
  unsigned char frame[84];

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 < 0xc) {
    format = str_000463aa;
  }
  else {
    iVar1 = recovered_213cb(param_1,0x463c2,4);
    if (iVar1 == 0) {
      uVar2 = recovered_293cd(param_1 + 0xc,param_2 - 0xc,*(byte *)(param_1 + 4),
                              *(byte *)(param_1 + 5),*(byte *)(param_1 + 8),*(byte *)(param_1 + 6),
                              *(byte *)(param_1 + 7),param_3,param_4);
      return uVar2;
    }
    format = str_000463c7;
  }
  recovered_21de7(param_4,0x80,format);
  return 0;
}
