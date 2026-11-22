/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define format (*(char * *)(frame + 28))
#define local_14 (*(undefined1 * *)(frame + 44))
#define local_18 (*(undefined4 *)(frame + 40))
#define local_1c (*(undefined4 *)(frame + 36))
#define str_0209147e (*(char (*)[1])(0x20cea54U))
#define str_02091495 (*(char (*)[1])(0x20cea6bU))
uint recovered_208e090(int *incoming_ecx,char *incoming_edx,uint *param_3,int param_4,
                      uint *in_stack_0000000c)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined1 *buffer;
  uint uVar2;

  if (param_4 == 0) {
    format = str_0209147e;
    goto LAB_0206487a;
  }
  if (param_3 == (uint *)0x0) goto switchD_02064802_default;
  switch((uintptr_t)(*param_3)) {
  case 1:
  case 5:
  case 6:
    uVar2 = param_3[1];
    goto joined_r0x02064836;
  case 2:
    if ((pf_bits_float((uint32_t)param_3[2]) != 0.0) || (NAN(pf_bits_float((uint32_t)param_3[2])))) goto LAB_02064924;
    break;
  case 3:
    if (((char *)param_3[3] != (char *)0x0) && (*(char *)param_3[3] != '\0')) goto LAB_02064924;
    break;
  case 4:
    uVar2 = param_3[5];
    goto joined_r0x02064836;
  case 7:
    if (param_3[6] != 0) {
      uVar2 = *(uint *)(param_3[6] + 8);
      goto joined_r0x02064836;
    }
    break;
  case 8:
    if (param_3[7] != 0) {
      uVar2 = *(uint *)(param_3[7] + 4);
      goto joined_r0x02064836;
    }
    break;
  case 9:
    uVar2 = param_3[8];
joined_r0x02064836:
    if (uVar2 != 0) {
LAB_02064924:
      uVar2 = recovered_207e1d0(in_stack_0000000c,param_3);
      return uVar2;
    }
  }
switchD_02064802_default:
  if (param_4 == 1) {
    format = str_02091495;
LAB_0206487a:
    pf_varargs_204ff60___(incoming_ecx,incoming_edx,format);
    return 0;
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = (undefined1 *)0x0;
  uVar1 = recovered_2086030((int *)(param_3 + 9),(int)&local_1c,0);
  if ((char)uVar1 == '\0') {
    recovered_2001710(local_14);
LAB_02064901:
    recovered_2001710((void *)0x0);
  }
  else {
    buffer = local_14;
    if (local_14 == (undefined1 *)0x0) {
      buffer = recovered_2001650(1);
      if (buffer == (undefined1 *)0x0) goto LAB_02064901;
      *buffer = 0;
    }
    pf_varargs_204ff60__4_(incoming_ecx,incoming_edx,&DAT_0208e323,(uint)buffer);
    recovered_2001710(buffer);
  }
  return 0;
}
