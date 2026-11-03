#include "functions.h"
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
#undef str_00049af5
#define str_00049af5 (*(char (*)[1])(0x49af5U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45319
 */

undefined4 recovered_45319(uint param_1,char *param_2,int param_3,undefined1 *param_4,int param_5,int *param_6)

{
  unsigned char frame[64];

  bool bVar1;
  void *pvVar2;
  int *piVar3;
  undefined3 extraout_var = 0;
  undefined3 uVar4;
  undefined1 *puVar5;

  puVar5 = &DAT_0004627c;
  if (param_4 != (undefined1 *)0x0) {
    puVar5 = param_4;
  }
  if (param_6 == (int *)0x0) {
    return 0;
  }
  *param_6 = 0;
  pvVar2 = recovered_29c3c((int)puVar5,param_5);
  if (param_3 == 0) {
    *param_6 = (int)pvVar2;
    uVar4 = (undefined3)((uint)pvVar2 >> 8);
  }
  else {
    if (pvVar2 == (void *)0x0) goto LAB_000453c8;
    piVar3 = (int *)recovered_36512(param_3,(int)pvVar2);
    recovered_21203((int)pvVar2);
    if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
      bVar1 = recovered_35e82(piVar3,param_6);
      if (bVar1) {
        return CONCAT31(extraout_var,1);
      }
      recovered_21203(*param_6);
      *param_6 = 0;
      goto LAB_000453c8;
    }
    pvVar2 = recovered_29c3c((int)puVar5,param_5);
    *param_6 = (int)pvVar2;
    uVar4 = (undefined3)((uint)pvVar2 >> 8);
  }
  if (param_5 == 0 || pvVar2 != (void *)0x0) {
    return CONCAT31(uVar4,1);
  }
LAB_000453c8:
  recovered_30f0b(param_1,param_2,str_00049af5);
  return 0;
}
