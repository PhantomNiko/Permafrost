/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9cb8 (*(uint32_t volatile *)(0x2130724U))
#define DAT_020b9d50 (*(uint8_t volatile *)(0x21307dcU))
#define local_101 (*(byte (*)[241])(frame + 31))
#define str_02097643 (*(char (*)[1])(0x20d6d25U))
undefined4 recovered_20bdfe0(int incoming_ecx,undefined4 *incoming_edx,char *param_3)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  int iVar1;
  char cVar2;
  uint incoming_ecx_00;
  undefined4 uVar3;
  uint incoming_edx_00;
  uint incoming_edx_01;

  if ((incoming_ecx != 0) && (cVar2 = DAT_020b9d50, cVar2 != '\0')) {
    recovered_202a060(incoming_ecx,local_101);
    incoming_ecx_00 = recovered_202af10(local_101,incoming_edx_00);
    if ((incoming_ecx_00 != 0xffffffff) &&
       (((iVar1 = DAT_020b9cb8, iVar1 == 0 ||
         ((*(byte *)(iVar1 + 0xfc + incoming_ecx_00 * 0x110) & 2) == 0)) &&
        (uVar3 = recovered_202b020(incoming_ecx_00,incoming_edx_01), (char)uVar3 != '\0')))) {
      iVar1 = DAT_020b9cb8;
      uVar3 = recovered_209b6b0(*(void **)(iVar1 + 0xf4 + incoming_ecx_00 * 0x110),
                                *(void **)(iVar1 + 0xf8 + incoming_ecx_00 * 0x110),incoming_edx,
                                param_3,0xa0);
      return uVar3;
    }
  }
  pf_varargs_2003aa0___(param_3,0xa0,str_02097643);
  return 0;
}
