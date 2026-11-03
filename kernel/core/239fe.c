#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x239fe
 */

undefined4 * recovered_239fe(uint param_1,int *param_2)

{
  unsigned char frame[64] = {0};

  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;

  puVar4 = (undefined4 *)0x0;
  if (param_1 == 0xff) {
    return (undefined4 *)0x0;
  }
  if (0xc < (param_1 & 0xf)) {
    return (undefined4 *)0x0;
  }
  iVar1 = *param_2;
  switch((uintptr_t)(param_1 & 0xf)) {
  case 0:
  case 3:
  case 0xb:
    puVar4 = (undefined4 *)recovered_23add(iVar1,4);
    iVar3 = iVar1 + 4;
    break;
  case 1:
    puVar4 = (undefined4 *)recovered_23ab2(param_2);
    goto LAB_00023a8b;
  case 2:
    puVar4 = (undefined4 *)recovered_23add(iVar1,2);
    goto LAB_00023a83;
  case 4:
  case 0xc:
    puVar4 = (undefined4 *)recovered_23add(iVar1,8);
    iVar3 = iVar1 + 8;
    break;
  default:
    goto switchD_00023a2c_caseD_5;
  case 9:
    puVar4 = (undefined4 *)recovered_23b02(param_2);
    goto LAB_00023a8b;
  case 10:
    uVar2 = recovered_23add(iVar1,2);
    puVar4 = (undefined4 *)((int)(short)uVar2 & 0xffff0000U | uVar2);
LAB_00023a83:
    iVar3 = iVar1 + 2;
  }
  *param_2 = iVar3;
LAB_00023a8b:
  if ((param_1 & 0x70) != 0) {
    if ((param_1 & 0x70) != 0x10) {
      return (undefined4 *)0x0;
    }
    puVar4 = (undefined4 *)((int)puVar4 + iVar1);
  }
  if (((char)param_1 < '\0') && (puVar4 != (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)*puVar4;
  }
switchD_00023a2c_caseD_5:
  return puVar4;
}
