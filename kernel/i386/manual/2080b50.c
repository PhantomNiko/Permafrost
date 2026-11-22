/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208fe5f (*(uint8_t *)(0x20cd456U))
#define local_11 (*(uchar *)(frame + 95))
#define local_5c (*(ulong (*)[18])(frame + 20))
uchar recovered_2080b50(ulonglong *param_1,ulong *param_2)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  int iVar2;
  uint incoming_edx;
  uint incoming_edx_00;
  uint incoming_edx_01;
  uint incoming_edx_02;
  ulong *puVar3;
  byte bVar4;

  bVar4 = 0;
  uVar1 = recovered_2080c90(param_1,param_2);
  if (uVar1 != '\0') {
    if (**(uint **)((int)param_1 + 4) <= (uint)param_1[1]) {
      return '\x01';
    }
    iVar2 = recovered_20022a0(*(char **)((*(uint **)((int)param_1 + 4))[2] + (uint)param_1[1] * 4),
                              &DAT_0208fe5f);
    if (iVar2 != 0) {
      return '\x01';
    }
    local_5c[0] = 0;
    local_5c[1] = 0;
    local_5c[2] = 0;
    local_5c[3] = 0;
    local_5c[4] = 0;
    local_5c[5] = 0;
    local_5c[6] = 0;
    local_5c[7] = 0;
    local_5c[8] = 0;
    local_5c[9] = 0;
    local_5c[10] = 0;
    local_5c[0xb] = 0;
    local_5c[0xc] = 0;
    local_5c[0xd] = 0;
    local_5c[0xe] = 0;
    local_5c[0xf] = 0;
    local_5c[0x10] = 0;
    local_5c[0x11] = 0;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    uVar1 = recovered_2080b50(param_1,local_5c);
    if (uVar1 == '\0') {
      recovered_2043a90(param_2,incoming_edx);
    }
    else {
      local_11 = recovered_207fec0(*(void **)param_1,&DAT_0208fe5f,param_2,local_5c,local_5c + 9);
      recovered_2043a90(param_2,incoming_edx_00);
      recovered_2043a90(local_5c,incoming_edx_01);
      if (local_11 != '\0') {
        if (param_2 == (ulong *)0x0) {
          return '\x01';
        }
        recovered_2043a90(param_2,incoming_edx_02);
        puVar3 = local_5c + 9;
        for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
          *param_2 = *puVar3;
          puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
          param_2 = param_2 + (uint)bVar4 * -2 + 1;
        }
        return '\x01';
      }
    }
  }
  return '\0';
}
