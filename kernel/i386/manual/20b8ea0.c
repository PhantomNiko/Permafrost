/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf20c (*(uint8_t volatile *)(0x2245294U))
#define DAT_020cf210 (*(uint8_t volatile *)(0x2245298U))
#define local_11 (*(char *)(frame + 47))
#define local_18 (*(uint *)(frame + 40))
#define local_1c (*(void * *)(frame + 36))
#define local_24 (*(uint (*)[2])(frame + 28))
#define local_28 (*(ulong ******* *)(frame + 24))
#define local_2c (*(undefined4 *)(frame + 20))
#define local_30 (*(uint *)(frame + 16))
#define str_0208f8c5 (*(char (*)[1])(0x20ccec2U))
uint recovered_20b8ea0(int incoming_ecx,uint incoming_edx,uint param_3,uint *param_4,int *param_5,
                      uint *param_6)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint incoming_edx_00;

  local_18 = param_3;
  if (param_5 != (int *)0x0) {
    *param_5 = 0;
  }
  uVar3 = 0;
  if (((param_3 < incoming_edx) && (incoming_ecx != 0)) && (param_4 != (uint *)0x0)) {
    local_28 = (ulong *******)incoming_edx;
    uVar4 = recovered_207a500(*(char **)(incoming_ecx + param_3 * 4),local_24);
    if ((char)uVar4 == '\0') {
      local_30 = param_3;
      local_2c = *(undefined4 *)(incoming_ecx + param_3 * 4);
      pf_varargs_204ff60___(&local_30,(char *)0x0,str_0208f8c5);
      uVar3 = 0;
    }
    else {
      local_11 = recovered_20b7580((int *)local_24,incoming_edx_00);
      if (local_24[0] != 0) {
        uVar3 = 0;
        do {
          recovered_2001710(*(void **)((int)local_1c + uVar3 * 4));
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_24[0]);
      }
      recovered_2001710(local_1c);
      local_24[0] = 0;
      local_24[1] = 0;
      local_1c = (void *)0x0;
      if (local_11 == '\0') {
        uVar3 = recovered_2074a50(incoming_ecx,(ulong *******)(param_3 + 1),(int *)&local_18,
                                  (uint *)param_5,param_6);
      }
      else {
        uVar1 = DAT_020cf20c;
        uVar2 = DAT_020cf210;
        DAT_020cf20c = 1;
        DAT_020cf210 = 1;
        uVar3 = recovered_2074a50(incoming_ecx,local_28,(int *)&local_18,(uint *)param_5,param_6);
        DAT_020cf20c = uVar1;
        DAT_020cf210 = uVar2;
      }
      if (((char)uVar3 == '\x01' && param_5 != (int *)0x0) && (*param_5 == 3)) {
        *param_5 = 0;
      }
      *param_4 = local_18;
    }
  }
  return uVar3;
}
