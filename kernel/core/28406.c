#include "functions.h"
#undef str_00042742
#define str_00042742 (*(char (*)[1])(0x42742U))
#undef str_0004275f
#define str_0004275f (*(char (*)[1])(0x4275fU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28406
 */

undefined4 recovered_28406(int param_1,uint param_2,undefined1 *param_3,char *param_4)

{
  unsigned char frame[84];

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 < 0xc) {
    format = str_00042742;
  }
  else {
    iVar1 = recovered_20fc5(param_1,0x4275a,4);
    if (iVar1 == 0) {
      uVar2 = recovered_284a7(param_1 + 0xc,param_2 - 0xc,*(byte *)(param_1 + 4),
                              *(byte *)(param_1 + 5),*(byte *)(param_1 + 8),*(byte *)(param_1 + 6),
                              *(byte *)(param_1 + 7),param_3,param_4);
      return uVar2;
    }
    format = str_0004275f;
  }
  recovered_219e1(param_4,0x80,format);
  return 0;
}
