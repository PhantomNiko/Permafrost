/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020b9d54 (*(uint8_t volatile *)(0x21408e9U))
#define DAT_020c0134 (*(uint32_t volatile *)(0x214b108U))
#define DAT_020c0138 (*(uint32_t volatile *)(0x214b10cU))
#define str_0209194d (*(char (*)[1])(0x20cef25U))
undefined4 recovered_2090100(int *incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  undefined4 uVar3;

  cVar1 = DAT_020b9d54;
  if (((cVar1 == '\x01') && (uVar3 = recovered_2042790(), (char)uVar3 != '\0')) &&
     (iVar2 = DAT_020c0134, iVar2 != 0)) {
    iVar2 = DAT_020c0138;
    if (iVar2 != 0) {
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  pf_varargs_204ff60___(incoming_ecx,incoming_edx,str_0209194d);
  return 0;
}
