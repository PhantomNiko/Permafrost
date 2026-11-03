#include "functions.h"
#undef str_000576bb
#define str_000576bb (*(char (*)[1])(0x576bbU))
#undef str_000576d8
#define str_000576d8 (*(char (*)[1])(0x576d8U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x36e2b
 */

undefined4 recovered_36e2b(int param_1,uint param_2,undefined1 *param_3,char *param_4)

{
  unsigned char frame[84] = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 < 0xc) {
    format = str_000576bb;
  }
  else {
    iVar1 = recovered_213fb(param_1,0x576d3,4);
    if (iVar1 == 0) {
      uVar2 = recovered_36ecc(param_1 + 0xc,param_2 - 0xc,*(byte *)(param_1 + 4),
                              *(byte *)(param_1 + 5),*(byte *)(param_1 + 8),*(byte *)(param_1 + 6),
                              *(byte *)(param_1 + 7),param_3,param_4);
      return uVar2;
    }
    format = str_000576d8;
  }
  recovered_22362(param_4,0x80,format);
  return 0;
}
