/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define local_101 (*(char (*)[241])(frame + 47))


void recovered_205ec70(char *in_ECX,char *in_EDX,char *param_3)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;

  if (in_ECX == (char *)0x0) {
    pcVar4 = &DAT_020c5359;
  }
  else {
    pcVar4 = &DAT_020c5359;
    if (*in_ECX != '\0') {
      pcVar4 = in_ECX;
    }
  }
  pcVar2 = local_101;
  pf_varargs_20044f0__4_(pcVar2,0xf1,&DAT_020c5119,(uint)pcVar4);
  if (in_EDX != (char *)0x0) {
    *in_EDX = '\0';
  }
  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
  }
  iVar1 = recovered_20022a0(pcVar2,&DAT_020c5359);
  if (iVar1 != 0) {
    pcVar3 = (char *)0x0;
    do {
      if (*pcVar2 == '/') {
        pcVar3 = pcVar2;
      }
      else if (*pcVar2 == '\0') goto code_r0x0205ecef;
      pcVar2 = pcVar2 + 1;
    } while( true );
  }
LAB_0205ed2a:
  pcVar2 = pcVar4;
  if (in_EDX == (char *)0x0) {
    return;
  }
  pcVar4 = &DAT_020c5359;
LAB_0205ed71:
  pf_varargs_20044f0__4_(in_EDX,0xf1,pcVar4,(uint)pcVar2);
  return;
code_r0x0205ecef:
  if (pcVar3 == (char *)0x0) {
    if (in_EDX != (char *)0x0) {
      pf_varargs_20044f0___(in_EDX,0xf1,&DAT_020c5359);
    }
    if (param_3 == (char *)0x0) {
      return;
    }
    pcVar2 = local_101;
    pcVar4 = &DAT_020c5119;
    in_EDX = param_3;
    goto LAB_0205ed71;
  }
  if (param_3 != (char *)0x0) {
    pcVar4 = pcVar3 + 1;
    pf_varargs_20044f0__4_(param_3,0xf1,&DAT_020c5119,(uint)pcVar4);
  }
  pcVar2 = local_101;
  if (pcVar3 != pcVar2) {
    *pcVar3 = '\0';
    if (in_EDX == (char *)0x0) {
      return;
    }
    pcVar4 = &DAT_020c5119;
    goto LAB_0205ed71;
  }
  goto LAB_0205ed2a;
}
#undef DAT_020c5119
#undef DAT_020c5359
#undef local_101
