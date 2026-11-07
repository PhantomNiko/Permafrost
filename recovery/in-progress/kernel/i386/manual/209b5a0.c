/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(undefined4 * *)(frame + 92))
#define local_18 (*(undefined4 *)(frame + 88))
#define local_1c (*(undefined4 *)(frame + 84))
#define local_20 (*(undefined4 *)(frame + 80))
#define local_24 (*(undefined4 *)(frame + 76))
#define local_28 (*(undefined4 *)(frame + 72))
#define local_2c (*(void * *)(frame + 68))
#define local_30 (*(undefined4 *)(frame + 64))
#define local_34 (*(undefined4 *)(frame + 60))
#define local_38 (*(undefined4 *)(frame + 56))
#define local_3c (*(undefined4 *)(frame + 52))
#define local_40 (*(undefined4 *)(frame + 48))
#define local_44 (*(undefined4 *)(frame + 44))
#define local_48 (*(undefined4 *)(frame + 40))
#define local_4c (*(undefined4 *)(frame + 36))
#define local_50 (*(undefined4 *)(frame + 32))
#define local_54 (*(undefined4 *)(frame + 28))
#define local_58 (*(undefined4 *)(frame + 24))
#define local_5c (*(undefined4 *)(frame + 20))
#define str_0208e49e (*(char (*)[1])(0x20c51c8U))
undefined4 recovered_209b5a0(uint incoming_ecx,char *incoming_edx)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  ulong size;
  void *pf_output_slot;
  undefined4 uVar1;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint uVar2;
  uint extraout_EDX_01 = 0;
  char *text;

  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = (void *)0x0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  text = str_0208e49e;
  if (incoming_edx != (char *)0x0) {
    text = incoming_edx;
  }
  local_14 = (undefined4 *)incoming_ecx;
  size = recovered_2002270(text);
  pf_output_slot = recovered_2001650(size + 1);
  if (pf_output_slot == (void *)0x0) {
    uVar1 = 0;
    uVar2 = extraout_EDX;
  }
  else {
    uVar2 = extraout_EDX;
    if (size != 0) {
      recovered_2001b70(pf_output_slot,text,size);
      uVar2 = extraout_EDX_00;
    }
    *(undefined1 *)((int)pf_output_slot + size) = 0;
    recovered_2043a90(&local_38,uVar2);
    local_38 = 3;
    local_2c = pf_output_slot;
    uVar1 = recovered_20830f0(local_14,(int)&local_5c,2);
    uVar2 = extraout_EDX_01;
  }
  recovered_2043a90(&local_38,uVar2);
  return uVar1;
}
