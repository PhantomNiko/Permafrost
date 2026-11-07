/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006834 (*(code * *)(0x6834U))
#define local_18 (*(ulong *)(frame + 24))
#define local_1c (*(void * *)(frame + 20))
undefined4 recovered_2019160(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pf_output_slot;
  ulong uVar2;

  if (param_3 != (int *)0x0 && (param_2 != (int *)0x0 && param_1 != 0)) {
    recovered_2001e00(&local_1c,0,0xc);
    if ((((_DAT_00006800 == 0x50414d57) && (_DAT_00006804 != 0)) && (0xb < _DAT_00006808)) &&
       (((0x37 < _DAT_00006808 && (_DAT_00006834 != (code *)0x0)) &&
        (iVar1 = (*_DAT_00006834)(param_1,&local_1c), iVar1 != 0)))) {
      pf_output_slot = recovered_2001650(local_18 + (local_18 == 0));
      if (pf_output_slot == (void *)0x0) {
        return 0;
      }
      uVar2 = 0;
      if (local_18 != 0) {
        recovered_2001b70(pf_output_slot,local_1c,local_18);
        uVar2 = local_18;
      }
      *param_2 = (int)pf_output_slot;
      *param_3 = uVar2;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return 0;
}
