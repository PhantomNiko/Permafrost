#include "functions.h"
#undef DAT_00084088
#define DAT_00084088 (*(uint *)(0x84088U))
#undef DAT_0008408c
#define DAT_0008408c (*(int *)(0x8408cU))
#undef DAT_000841c8
#define DAT_000841c8 (*(uint *)(0x841c8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41449
 */

undefined4 recovered_41449(int param_1,int param_2)

{
  unsigned char frame[64];

  int iVar1;
  undefined4 uVar2;
  uint uVar3;

  iVar1 = DAT_0008408c;
  if (DAT_00084088 == DAT_000841c8) {
    uVar3 = 4;
    if (DAT_00084088 != 0) {
      uVar3 = DAT_00084088 * 2;
    }
    iVar1 = recovered_21289(DAT_0008408c,uVar3 * 8);
    if (iVar1 == 0) {
      return 0;
    }
    DAT_0008408c = iVar1;
    for (; DAT_000841c8 < uVar3; DAT_000841c8 = DAT_000841c8 + 1) {
      *(undefined4 *)(iVar1 + DAT_000841c8 * 8) = 0;
      *(undefined4 *)(iVar1 + 4 + DAT_000841c8 * 8) = 0;
    }
    DAT_000841c8 = uVar3;
  }
  uVar2 = recovered_4759a((int *)(iVar1 + DAT_00084088 * 8),param_1,param_2);
  if ((char)uVar2 == '\0') {
    return 0;
  }
  DAT_00084088 = DAT_00084088 + 1;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}
