/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define PTR_DAT_02098000 (*(uint8_t * *)(0x20d8000U))
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006838 (*(code * *)(0x6838U))
undefined4 * recovered_20187f0(int param_1,int param_2,int *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  if (param_3 == (int *)0x0) goto LAB_0200c42d;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00006800 == 0x50414d57) &&
        (((_DAT_00006804 != 0 && (0xb < _DAT_00006808)) && (0x3b < _DAT_00006808)))) &&
       (_DAT_00006838 != (code *)0x0)) {
      iVar1 = (*_DAT_00006838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_0200c413;
      }
    }
    *(undefined4 *)PTR_DAT_02098000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_0200c413:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_2001710((void *)param_3[0x3f]);
  }
  recovered_2001710(param_3);
LAB_0200c42d:
  puVar2 = recovered_2018470(param_1,param_2);
  return puVar2;
}
