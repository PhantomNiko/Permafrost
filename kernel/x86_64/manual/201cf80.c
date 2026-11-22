/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cea28 (*(uint64_t volatile *)(0x215a258U))
#define DAT_020cea30 (*(uint64_t volatile *)(0x215a260U))
#define cStack_36 (*(char *)(frame + 26))
#define local_30 (*(undefined4 *)(frame + 32))
#define local_38 (*(undefined2 *)(frame + 24))
#define uStack_34 (*(undefined4 *)(frame + 28))
#define uStack_35 (*(undefined1 *)(frame + 27))
ulonglong recovered_201cf80(undefined8 *param_1)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  undefined8 *puVar2;
  uchar uVar3;
  byte *in_RSI;
  long *plVar4;

  plVar4 = (long *)DAT_020cea30;
  if (plVar4 != (long *)0x0) {
    pbVar1 = (byte *)*param_1;
    do {
      local_30 = 0;
      local_38 = 0;
      cStack_36 = '\0';
      uStack_35 = 0;
      uStack_34 = 0;
      in_RSI = pbVar1;
      uVar3 = recovered_201da20((long)plVar4,pbVar1,&local_38);
      if ((uVar3 != '\0') && (cStack_36 == '\x01')) {
        param_1[3] = plVar4;
        param_1[4] = CONCAT44(local_30,uStack_34);
        recovered_201d0d0(param_1,in_RSI);
        puVar2 = (undefined8 *)DAT_020cea28;
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_201ca30();
        }
        *(undefined1 *)(puVar2 + 5) = 1;
        puVar2[3] = 0;
        puVar2[4] = 0;
                    /* WARNING: Subroutine does not return */
        recovered_201cf80(puVar2);
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_201ca30();
}
