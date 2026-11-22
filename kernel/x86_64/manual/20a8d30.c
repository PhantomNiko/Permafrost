/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a4156 (*(uint8_t *)(0x20f4911U))
#define DAT_020a427e (*(uint8_t *)(0x20ede4eU))
#define DAT_020a432a (*(uint8_t *)(0x20f4adaU))
#define local_78 (*(undefined1 * *)(frame + 40))
#define local_88 (*(long (*)[2])(frame + 24))
#define str_020a4283 (*(char (*)[1])(0x20ee540U))
uint recovered_20a8d30(int *param_1,undefined8 *param_2)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  int iVar1;
  uchar uVar2;
  uint uVar3;
  undefined7 extraout_var = 0;
  undefined1 *puVar4;
  char *data;
  ulong uVar5;

  if (param_2 == (undefined8 *)0x0 || param_1 == (int *)0x0) {
    return 0;
  }
  *param_2 = 0;
  uVar3 = 0;
  switch((uintptr_t)(*param_1)) {
  case 1:
    pf_varargs_20039e0__4_((char *)local_88,0x60,&DAT_020a4156,param_1[1]);
    break;
  case 2:
    pf_varargs_20039e0__d8_((char *)local_88,0x60,&DAT_020a432a,(double)pf_bits_float((uint32_t)param_1[2]));
    break;
  case 3:
    *param_2 = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_78 = (undefined1 *)0x0;
    uVar2 = recovered_20a8f50(param_1,local_88,0);
    puVar4 = (undefined1 *)CONCAT71(extraout_var,uVar2);
    if (uVar2 == '\0') {
      recovered_2000bb0(local_78);
      return 0;
    }
    if (local_78 == (undefined1 *)0x0) {
      puVar4 = recovered_2000ad0(1);
      if (puVar4 == (undefined1 *)0x0) {
        local_78 = (undefined1 *)0x0;
      }
      else {
        *puVar4 = 0;
        local_78 = puVar4;
      }
    }
    *param_2 = local_78;
    goto LAB_0206b56a;
  default:
    goto switchD_0206b456_caseD_4;
  case 5:
    iVar1 = param_1[1];
    uVar5 = (ulong)(iVar1 == 0);
    local_78 = recovered_2000ad0(uVar5 + 5);
    puVar4 = (undefined1 *)0x0;
    if (local_78 != (undefined1 *)0x0) {
      uVar5 = uVar5 | 4;
      data = &DAT_020a427e;
      if (iVar1 == 0) {
        data = str_020a4283;
      }
      goto LAB_0206b554;
    }
    goto LAB_0206b564;
  }
  uVar5 = recovered_2002e80((char *)local_88);
  puVar4 = recovered_2000ad0(uVar5 + 1);
  local_78 = puVar4;
  if (puVar4 != (undefined1 *)0x0) {
    if (uVar5 != 0) {
      data = (char *)local_88;
LAB_0206b554:
      puVar4 = recovered_2001410(local_78,data,uVar5);
    }
    local_78[uVar5] = 0;
  }
LAB_0206b564:
  *param_2 = local_78;
LAB_0206b56a:
  uVar3 = (uint)CONCAT71((int7)((ulong)puVar4 >> 8),local_78 != (undefined1 *)0x0);
switchD_0206b456_caseD_4:
  return uVar3;
}
