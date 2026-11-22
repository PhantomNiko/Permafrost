/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020c585f (*(uint8_t *)(0x20c585fU))
#define str_020cc5d8 (*(char (*)[1])(0x20cc5d8U))
#define local_223 (*(char (*)[287])(frame + 29))
#define local_104 (*(char *)(frame + 316))
#define local_103 (*(char (*)[243])(frame + 317))
#define local_224 (*(char *)(frame + 28))


void recovered_2074200(char *in_ECX,uint in_EDX,char *param_3,uint param_4,byte param_5,char param_6
                      ,byte param_7)

{
  unsigned char frame[608] __attribute__((aligned(16))) = {0};

  undefined1 *vararg1;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  char *pcVar5;

  vararg1 = &DAT_020c5084;
  pcVar5 = param_3;
  if (param_3 == (char *)0x0) {
    pcVar5 = &DAT_020c5084;
  }
  if ((param_3 != (char *)0x0 & param_7 & param_5) == 1) {
    iVar1 = recovered_20022a0(param_3,&DAT_020c5359);
    vararg1 = &DAT_020c5084;
    if (iVar1 != 0) {
      vararg1 = &DAT_020c5359;
    }
  }
  pf_varargs_20044f0__4__4_(&local_104,0xf4,&DAT_020c585f,(uint)pcVar5,(uint)vararg1);
  if (param_6 == '\0') {
    if (in_EDX == 0 || in_ECX == (char *)0x0) {
      return;
    }
    if ((*in_ECX != '\0') && (uVar2 = recovered_2002270(in_ECX), uVar2 + 1 < in_EDX)) {
      (in_ECX + uVar2)[0] = '\n';
      (in_ECX + uVar2)[1] = '\0';
    }
    uVar2 = recovered_2002270(in_ECX);
    if (in_EDX <= uVar2 + 1) {
      return;
    }
    if (local_104 != '\0') {
      pcVar5 = local_103;
      uVar3 = uVar2;
      do {
        in_ECX[uVar3] = local_104;
        local_104 = *pcVar5;
        uVar2 = uVar3 + 1;
        if (local_104 == '\0') break;
        uVar4 = uVar3 + 2;
        pcVar5 = pcVar5 + 1;
        uVar3 = uVar2;
      } while (uVar4 < in_EDX);
    }
  }
  else {
    uVar4 = 100;
    if (param_5 == 0) {
      uVar4 = 0x2d;
    }
    pf_varargs_20044f0__4__4__4_(&local_224,0x120,str_020cc5d8,uVar4,param_4,(uint)&local_104);
    if (in_EDX == 0 || in_ECX == (char *)0x0) {
      return;
    }
    if ((*in_ECX != '\0') && (uVar2 = recovered_2002270(in_ECX), uVar2 + 1 < in_EDX)) {
      (in_ECX + uVar2)[0] = '\n';
      (in_ECX + uVar2)[1] = '\0';
    }
    uVar2 = recovered_2002270(in_ECX);
    if (in_EDX <= uVar2 + 1) {
      return;
    }
    if (local_224 != '\0') {
      pcVar5 = local_223;
      uVar3 = uVar2;
      do {
        in_ECX[uVar3] = local_224;
        local_224 = *pcVar5;
        uVar2 = uVar3 + 1;
        if (local_224 == '\0') break;
        uVar4 = uVar3 + 2;
        pcVar5 = pcVar5 + 1;
        uVar3 = uVar2;
      } while (uVar4 < in_EDX);
    }
  }
  in_ECX[uVar2] = '\0';
  return;
}
#undef DAT_020c5084
#undef DAT_020c5359
#undef DAT_020c585f
#undef str_020cc5d8
#undef local_223
#undef local_104
#undef local_103
#undef local_224
