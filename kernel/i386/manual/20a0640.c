/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define local_14 (*(char * *)(frame + 60))
#define local_18 (*(int * *)(frame + 56))
#define local_1c (*(undefined4 *)(frame + 52))
#define local_20 (*(undefined4 *)(frame + 48))
#define local_24 (*(undefined4 *)(frame + 44))
#define local_28 (*(undefined4 *)(frame + 40))
#define local_2c (*(undefined4 *)(frame + 36))
#define local_30 (*(void * *)(frame + 32))
#define local_34 (*(undefined4 *)(frame + 28))
#define local_38 (*(undefined4 *)(frame + 24))
#define local_3c (*(undefined4 *)(frame + 20))
undefined4 recovered_20a0640(int *incoming_ecx,int incoming_edx,undefined1 *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong size;
  void *pf_output_slot;
  undefined4 *incoming_ecx_00;
  undefined4 uVar1;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint incoming_edx_00;
  char *extraout_EDX_01 = 0;
  char *extraout_EDX_02 = 0;
  char *extraout_EDX_03 = 0;
  char *pcVar2;

  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = (void *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  pcVar2 = &DAT_0208e2dc;
  if (param_3 != (undefined1 *)0x0) {
    pcVar2 = param_3;
  }
  local_18 = incoming_ecx;
  local_14 = (char *)incoming_edx;
  size = recovered_2002270(pcVar2);
  pf_output_slot = recovered_2001650(size + 1);
  if (pf_output_slot == (void *)0x0) {
    return 0;
  }
  incoming_edx_00 = extraout_EDX;
  if (size != 0) {
    recovered_2001b70(pf_output_slot,pcVar2,size);
    incoming_edx_00 = extraout_EDX_00;
  }
  *(undefined1 *)((int)pf_output_slot + size) = 0;
  recovered_2043a90(&local_3c,incoming_edx_00);
  local_3c = 3;
  pcVar2 = extraout_EDX_01;
  local_30 = pf_output_slot;
  if ((((local_18 == (int *)0x0) || (pcVar2 = extraout_EDX_01, *local_18 != 8)) ||
      (pcVar2 = local_14, local_14 == (char *)0x0 || local_18[7] == 0)) ||
     (incoming_ecx_00 = (undefined4 *)recovered_209b1b0(local_18[7],local_14,'\x01'),
     pcVar2 = extraout_EDX_02, incoming_ecx_00 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = recovered_207e1d0(incoming_ecx_00,&local_3c);
    pcVar2 = extraout_EDX_03;
  }
  recovered_2043a90(&local_3c,(uint)pcVar2);
  return uVar1;
}
