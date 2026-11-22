/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020cbcbf (*(uint8_t *)(0x20cbcbfU))
#define DAT_0223b6fc (*(uint32_t volatile *)(0x223b6fcU))
#define in_stack_fffffe00 (*(uchar * *)(frame + 32))
#define local_1f3 (*(uchar (*)[241])(frame + 45))
#define local_102 (*(char (*)[242])(frame + 286))


uint recovered_20717b0(char *param_1,int param_2,int param_3)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  int iVar2;
  char *pcVar3;

  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    iVar2 = DAT_0223b6fc;
    if (iVar2 == 0) {
      return 0;
    }
    if (*(char *)(iVar2 + 0x139) == '\0') {
      return 0;
    }
    pcVar3 = (char *)(iVar2 + 0x139);
  }
  else {
    iVar2 = recovered_20022a0(param_1,&DAT_020c5359);
    if (iVar2 == 0) {
      pcVar3 = &DAT_020c5359;
    }
    else {
      in_stack_fffffe00 = local_1f3;
      recovered_202a060((int)(param_1 + (*param_1 == '/')),in_stack_fffffe00);
      if (local_1f3[0] == '\0') {
        return 0;
      }
      pcVar3 = &DAT_020cbcbf;
    }
    pf_varargs_20044f0__4_(local_102,0xf2,pcVar3,(uint)in_stack_fffffe00);
    if (local_102[0] == '\0') {
      return 0;
    }
    pcVar3 = local_102;
  }
  recovered_206cc70(pcVar3,param_2,param_3);
  recovered_206de50(pcVar3,param_2,param_3);
  iVar2 = DAT_0223b6fc;
  if (iVar2 == 0) {
    return 1;
  }
  if (((param_1 != (char *)0x0) && (*param_1 != '\0')) && (*(char *)(iVar2 + 0x6ea) == '\x01')) {
    iVar2 = recovered_20022a0((char *)(iVar2 + 0x139),pcVar3);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = DAT_0223b6fc;
  }
  pf_varargs_20044f0__4_((char *)(iVar2 + 0x139),0xf1,&DAT_020c5119,(uint)pcVar3);
  iVar2 = DAT_0223b6fc;
  *(undefined1 *)(iVar2 + 0x6ea) = 1;
  if (param_2 != 0) {
    pf_varargs_20044f0__4_((char *)(iVar2 + 0x22a),0x60,&DAT_020c5119,param_2);
  }
  if (param_3 != 0) {
    uVar1 = DAT_0223b6fc;
    uVar1 = DAT_0223b6fc;
    iVar2 = DAT_0223b6fc;
    pf_varargs_20044f0__4_((char *)(iVar2 + 0x28a),0x400,&DAT_020c5119,param_3);
  }
  return 1;
}
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020cbcbf
#undef DAT_0223b6fc
#undef in_stack_fffffe00
#undef local_1f3
#undef local_102
