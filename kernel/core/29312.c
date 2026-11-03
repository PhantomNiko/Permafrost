#include "functions.h"
#undef str_0004864a
#define str_0004864a (*(char (*)[1])(0x4864aU))
#undef str_00048667
#define str_00048667 (*(char (*)[1])(0x48667U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29312
 */

undefined4 recovered_29312(int param_1,uint param_2,undefined1 *param_3,char *param_4)

{
  unsigned char frame[84];

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 < 0xc) {
    format = str_0004864a;
  }
  else {
    iVar1 = recovered_213cb(param_1,0x48662,4);
    if (iVar1 == 0) {
      uVar2 = recovered_293b3(param_1 + 0xc,param_2 - 0xc,*(byte *)(param_1 + 4),
                              *(byte *)(param_1 + 5),*(byte *)(param_1 + 8),*(byte *)(param_1 + 6),
                              *(byte *)(param_1 + 7),param_3,param_4);
      return uVar2;
    }
    format = str_00048667;
  }
  recovered_21de7(param_4,0x80,format);
  return 0;
}
