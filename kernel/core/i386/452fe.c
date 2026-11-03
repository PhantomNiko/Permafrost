#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
#undef str_00049ac4
#define str_00049ac4 (*(char (*)[1])(0x49ac4U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x452fe
 */

undefined4 recovered_452fe(uint param_1,char *param_2,int param_3,undefined1 *param_4,int param_5,int *param_6)

{
  unsigned char frame[64];

  bool bVar1;
  void *pvVar2;
  int *piVar3;
  undefined3 extraout_var = 0;
  undefined3 uVar4;
  undefined1 *puVar5;

  puVar5 = &DAT_00046264;
  if (param_4 != (undefined1 *)0x0) {
    puVar5 = param_4;
  }
  if (param_6 == (int *)0x0) {
    return 0;
  }
  *param_6 = 0;
  pvVar2 = recovered_29c28((int)puVar5,param_5);
  if (param_3 == 0) {
    *param_6 = (int)pvVar2;
    uVar4 = (undefined3)((uint)pvVar2 >> 8);
  }
  else {
    if (pvVar2 == (void *)0x0) goto LAB_000453ad;
    piVar3 = (int *)recovered_364da(param_3,(int)pvVar2);
    recovered_21203((int)pvVar2);
    if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
      bVar1 = recovered_35e4a(piVar3,param_6);
      if (bVar1) {
        return CONCAT31(extraout_var,1);
      }
      recovered_21203(*param_6);
      *param_6 = 0;
      goto LAB_000453ad;
    }
    pvVar2 = recovered_29c28((int)puVar5,param_5);
    *param_6 = (int)pvVar2;
    uVar4 = (undefined3)((uint)pvVar2 >> 8);
  }
  if (param_5 == 0 || pvVar2 != (void *)0x0) {
    return CONCAT31(uVar4,1);
  }
LAB_000453ad:
  recovered_30ed3(param_1,param_2,str_00049ac4);
  return 0;
}
