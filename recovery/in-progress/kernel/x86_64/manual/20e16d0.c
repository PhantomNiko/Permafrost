/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020e6100 (*(uint8_t volatile *)(0x2274190U))
#define DAT_020e6108 (*(uint8_t volatile *)(0x2274198U))
#define auStackY_478 (*(ulong (*)[128])(frame + 24))
#define in_stack_ffffffffffffff88 (*(undefined8 *)(frame + 1048))
#define in_stack_ffffffffffffff90 (*(undefined8 *)(frame + 1056))
#define in_stack_ffffffffffffffa0 (*(ulong *)(frame + 1072))
#define in_stack_ffffffffffffffb0 (*(void * *)(frame + 1088))
#define str_020a3b63 (*(char (*)[1])(0x20f4324U))
uchar recovered_20e16d0(long param_1,ulong param_2,ulong param_3,ulong *param_4,int *param_5,
                       ulong *******param_6)

{
  unsigned char frame[1200] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  uchar uVar3;
  uint uVar4;
  ulong uVar5;
  ulong ************ppppppppppppuVar6;
  ulong *******pppppppuVar7;

  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  uVar3 = '\0';
  if (((param_3 < param_2) && (param_1 != 0)) && (param_4 != (ulong *)0x0)) {
    ppppppppppppuVar6 = (ulong ************)param_6;
    pppppppuVar7 = (ulong *******)param_3;
    uVar3 = recovered_209c670(*(long *)(param_1 + param_3 * 8),auStackY_478 + 0x83);
    if (uVar3 == '\0') {
      uVar3 = '\0';
      pf_varargs_205eb00___(auStackY_478 + 0x80,(char *)0x0,str_020a3b63);
    }
    else {
      uVar3 = recovered_20dfc30((long *)(auStackY_478 + 0x83));
      if (in_stack_ffffffffffffffa0 != 0) {
        uVar5 = 0;
        do {
          recovered_2000bb0(*(void **)((long)in_stack_ffffffffffffffb0 + uVar5 * 8));
          uVar5 = uVar5 + 1;
        } while (uVar5 < in_stack_ffffffffffffffa0);
      }
      recovered_2000bb0(in_stack_ffffffffffffffb0);
      if (uVar3 == '\0') {
        uVar4 = recovered_2096580((ulong ***********)param_1,(ulong ************)(param_3 + 1),
                                  (ulong ******)&pppppppuVar7,(ulong ******)param_5,
                                  ppppppppppppuVar6,(ulong ***********)param_6,
                                  in_stack_ffffffffffffff88,in_stack_ffffffffffffff90,
                                  (ulong *******)param_4,(ulong *******)0x0,(long *)0x0,
                                  (ulong *******)0x0,(ulong *******)ppppppppppppuVar6,pppppppuVar7);
        uVar3 = (uchar)uVar4;
      }
      else {
        uVar1 = DAT_020e6100;
        uVar2 = DAT_020e6108;
        DAT_020e6100 = 1;
        DAT_020e6108 = 1;
        uVar4 = recovered_2096580((ulong ***********)param_1,(ulong ************)param_2,
                                  (ulong ******)&pppppppuVar7,(ulong ******)param_5,
                                  ppppppppppppuVar6,(ulong ***********)param_6,
                                  in_stack_ffffffffffffff88,in_stack_ffffffffffffff90,
                                  (ulong *******)param_4,(ulong *******)0x0,(long *)0x0,
                                  (ulong *******)0x0,(ulong *******)ppppppppppppuVar6,pppppppuVar7);
        uVar3 = (uchar)uVar4;
        DAT_020e6100 = uVar1;
        DAT_020e6108 = uVar2;
      }
      if ((uVar3 == '\x01' && param_5 != (int *)0x0) && (*param_5 == 3)) {
        *param_5 = 0;
      }
      *param_4 = (ulong)pppppppuVar7;
    }
  }
  return uVar3;
}
