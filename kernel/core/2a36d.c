#include "functions.h"
#undef PTR_DAT_00047010
#define PTR_DAT_00047010 (*(uint8_t * *)(0x47010U))
#undef PTR_DAT_00047014
#define PTR_DAT_00047014 (*(uint8_t * *)(0x47014U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2a36d
 */

undefined4 recovered_2a36d(uint param_1,int *param_2)

{
  unsigned char frame[64];

  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;

  if (param_2 == (int *)0x0) {
    return 0;
  }
  *(uint *)PTR_DAT_00047010 = param_1 & 0xff;
  puVar2 = PTR_DAT_00047014;
  *(undefined4 *)PTR_DAT_00047014 = 0;
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
