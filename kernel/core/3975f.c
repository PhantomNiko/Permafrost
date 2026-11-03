#include "functions.h"
#undef PTR_DAT_0005d084
#define PTR_DAT_0005d084 (*(uint8_t * *)(0x5d084U))
#undef PTR_DAT_0005d088
#define PTR_DAT_0005d088 (*(uint8_t * *)(0x5d088U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3975f
 */

undefined4 recovered_3975f(uint param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;

  if (param_2 == (int *)0x0) {
    return 0;
  }
  puVar2 = recovered_38896((byte)param_1);
  if (puVar2 == (undefined1 *)0x0) {
    *(uint *)PTR_DAT_0005d084 = param_1 & 0xff;
    puVar1 = PTR_DAT_0005d088;
    *(undefined4 *)PTR_DAT_0005d088 = 0;
    iVar3 = FUN_0002037d();
    iVar4 = *(int *)puVar1;
    if (iVar4 == 0 || iVar3 == 0) {
      return 0;
    }
  }
  else {
    iVar4 = *(int *)(puVar2 + 4);
  }
  *param_2 = iVar4;
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}
