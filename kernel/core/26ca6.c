#include "functions.h"
#undef str_0003f34b
#define str_0003f34b (*(char (*)[1])(0x3f34bU))
#undef str_0003f368
#define str_0003f368 (*(char (*)[1])(0x3f368U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26ca6
 */

undefined4 recovered_26ca6(int param_1,uint param_2,undefined1 *param_3,char *param_4)

{
  unsigned char frame[84];

  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0 || param_2 < 0xc) {
    format = str_0003f34b;
  }
  else {
    iVar1 = recovered_20fc5(param_1,0x3f363,4);
    if (iVar1 == 0) {
      uVar2 = recovered_26f53(param_1 + 0xc,param_2 - 0xc,*(byte *)(param_1 + 4),
                              *(byte *)(param_1 + 5),*(byte *)(param_1 + 8),*(byte *)(param_1 + 6),
                              *(byte *)(param_1 + 7),param_3,param_4);
      return uVar2;
    }
    format = str_0003f368;
  }
  recovered_219e1(param_4,0x80,format);
  return 0;
}

