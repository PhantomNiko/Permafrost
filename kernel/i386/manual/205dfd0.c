/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define left (*(char * *)(frame + 16))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6d20 (*(char (*)[1])(0x20c6d20U))
#define str_020d9e14 (*(char volatile (*)[1])(0x20d9e14U))
#define output (*(char * *)(frame + 16))
#define local_1fe (*(char (*)[241])(frame + 34))
#define local_10d (*(char (*)[241])(frame + 275))
#define local_1c (*(undefined4 *)(frame + 516))
#define local_18 (*(undefined4 *)(frame + 520))
#define local_14 (*(uint *)(frame + 524))


undefined4 recovered_205dfd0(char *in_ECX,char *in_EDX,undefined4 *param_3)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;

  if (param_3 != (undefined4 *)0x0 && in_ECX != (char *)0x0) {
    pcVar4 = (char *)0x205dffa;
    bVar1 = recovered_205e0e0();
    if (bVar1 != 0) {
      output = local_1fe;
      recovered_2030400(in_ECX,str_020d9e14,output);
      if (in_EDX != (char *)0x0) {
        pcVar4 = output;
        pf_varargs_20044f0__4_(in_EDX,0xf1,&DAT_020c5119,(uint)output);
      }
      if ((local_1fe[0] == '\0') || (iVar2 = recovered_20022a0(output,&DAT_020c5359), iVar2 == 0)) {
        output = pcVar4;
        pcVar4 = str_020c6ac7;
      }
      else {
        pcVar4 = str_020c6d20;
      }
      pf_varargs_20044f0__4_(local_10d,0xf1,pcVar4,(uint)output);
      recovered_2001e00(&local_1c,0,0xc);
      iVar2 = DAT_020d9d5c;
      uVar3 = recovered_202ad00(iVar2,local_10d,&local_1c);
      if ((uVar3 != 0) && ((local_14 & 2) == 0)) {
        param_3[2] = local_14;
        param_3[1] = local_18;
        *param_3 = local_1c;
        return CONCAT31((int3)((uint)local_1c >> 8),1);
      }
    }
  }
  return 0;
}
#undef left
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020d9d5c
#undef str_020c6ac7
#undef str_020c6d20
#undef str_020d9e14
#undef output
#undef local_1fe
#undef local_10d
#undef local_1c
#undef local_18
#undef local_14
