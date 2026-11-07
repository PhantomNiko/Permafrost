/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define _DAT_00006800 (*(int *)(0x6800U))
#define _DAT_00006804 (*(int *)(0x6804U))
#define _DAT_00006808 (*(uint *)(0x6808U))
#define _DAT_00006834 (*(uint *)(0x6834U))
#define local_30 (*(uint *)(frame + 32))
#define local_34 (*(uint *)(frame + 28))
ulong recovered_201c6a0(long param_1,long *param_2,ulong *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *out;
  ulong uVar2;

  if (param_3 != (ulong *)0x0 && (param_2 != (long *)0x0 && param_1 != 0)) {
    uVar2 = 0;
    recovered_2002110(&local_34,0,0xc);
    if (_DAT_00006800 != 0x50414d57) goto LAB_0200c28f;
    if ((((_DAT_00006804 != 0) && (0xb < _DAT_00006808)) && (0x37 < _DAT_00006808)) &&
       ((code *)(ulong)_DAT_00006834 != (code *)0x0)) {
      iVar1 = (*(code *)(ulong)_DAT_00006834)(param_1,&local_34);
      if (iVar1 != 0) {
        out = recovered_2000ad0((ulong)(local_30 + (local_30 == 0)));
        if (out != (void *)0x0) {
          if ((ulong)local_30 == 0) {
            uVar2 = 0;
          }
          else {
            recovered_2001410(out,(void *)(ulong)local_34,(ulong)local_30);
            uVar2 = (ulong)local_30;
          }
          *param_2 = (long)out;
          *param_3 = uVar2;
          uVar2 = CONCAT71((int7)((ulong)out >> 8),1);
          goto LAB_0200c28f;
        }
      }
    }
  }
  uVar2 = 0;
LAB_0200c28f:
  return uVar2 & 0xffffffff;
}
