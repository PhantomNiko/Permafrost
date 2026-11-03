#include "functions.h"
#undef PTR_DAT_0004e010
#define PTR_DAT_0004e010 (*(uint8_t * *)(0x4e010U))
#undef PTR_DAT_0004e014
#define PTR_DAT_0004e014 (*(uint8_t * *)(0x4e014U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b54a
 */

undefined4 recovered_2b54a(uint param_1,int *param_2)

{
  unsigned char frame[64];

  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;

  if (param_2 == (int *)0x0) {
    return 0;
  }
  puVar2 = recovered_2b180((byte)param_1);
  if (puVar2 == (undefined1 *)0x0) {
    *(uint *)PTR_DAT_0004e010 = param_1 & 0xff;
    puVar1 = PTR_DAT_0004e014;
    *(undefined4 *)PTR_DAT_0004e014 = 0;
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
