#include "functions.h"
#undef DAT_00046398
#define DAT_00046398 (*(uint8_t *)(0x46398U))
#undef str_00049388
#define str_00049388 (*(char (*)[1])(0x49388U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4444e
 */

void recovered_4444e(char *param_1,int param_2,char *param_3)

{
  unsigned char frame[64];

  byte bVar1;
  uint uVar2;
  int iVar3;

  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return;
      }
    }
    else if ((param_2 == 0) || (*param_1 != '\0')) {
      uVar2 = 0;
      for (iVar3 = 0; iVar3 != 0xc; iVar3 = iVar3 + 1) {
        bVar1 = param_1[iVar3];
        if ((bVar1 == 0) || (0x3f < uVar2 + 1)) break;
        if (bVar1 == 0x7f || bVar1 < 0x20) {
          if (0x3f < uVar2 + 4) break;
          recovered_21de7(param_3 + uVar2,0x40 - uVar2,str_00049388,(uint)bVar1);
          uVar2 = uVar2 + 4;
        }
        else {
          param_3[uVar2] = bVar1;
          uVar2 = uVar2 + 1;
        }
      }
      param_3[uVar2] = '\0';
      if (param_2 == 0) {
        return;
      }
      if (*param_3 != '\0') {
        return;
      }
    }
    recovered_21de7(param_3,0x40,&DAT_00046398,param_2);
  }
  return;
}
