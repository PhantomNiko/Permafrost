#include "functions.h"
#undef PTR_DAT_00044010
#define PTR_DAT_00044010 (*(uint8_t * *)(0x44010U))
#undef PTR_DAT_00044014
#define PTR_DAT_00044014 (*(uint8_t * *)(0x44014U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x27e67
 */

undefined4 recovered_27e67(uint param_1,int *param_2)

{
  unsigned char frame[64];

  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;

  if (param_2 == (int *)0x0) {
    return 0;
  }
  *(uint *)PTR_DAT_00044010 = param_1 & 0xff;
  puVar2 = PTR_DAT_00044014;
  *(undefined4 *)PTR_DAT_00044014 = 0;
  iVar3 = FUN_000202c9();
  iVar1 = *(int *)puVar2;
  if (iVar1 == 0 || iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    *param_2 = iVar1;
    uVar4 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar4;
}
