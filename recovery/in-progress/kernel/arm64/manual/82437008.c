/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044eadf (*(uint8_t *)(0x824742efU))
#define in_stack_ffffffffffffffe8 (*(ulong *)(frame + 24))
#define str_4044eac4 (*(char (*)[1])(0x824742d4U))
#define str_4044eacd (*(char (*)[1])(0x824742ddU))
#define str_4044ead3 (*(char (*)[1])(0x824742e3U))
#define str_4044ead9 (*(char (*)[1])(0x824742e9U))
uint recovered_82437008(ulong param_1,long param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;
  bool bVar2;
  uint uVar3;
  char *format;
  ulong uVar4;

  if (param_2 != 0) {
    uVar4 = param_1 >> 0x1e;
    if (uVar4 == 0) {
      if (param_1 < 0x100000) {
        if (param_1 < 0x400) {
          format = &DAT_4044eadf;
        }
        else {
          param_1 = param_1 >> 10;
          format = str_4044ead9;
        }
      }
      else {
        param_1 = param_1 >> 0x14;
        format = str_4044ead3;
      }
    }
    else {
      bVar1 = false;
      bVar2 = true;
      if (0x6666666 < (param_1 & 0x3fffffff)) {
        bVar2 = 8 < (uint)uVar4;
        bVar1 = (uint)uVar4 == 9;
      }
      if (!bVar2 || bVar1) {
        in_stack_ffffffffffffffe8 = (param_1 & 0x3fffffff) * 5 >> 0x1d;
        format = str_4044eac4;
        param_1 = uVar4;
      }
      else {
        format = str_4044eacd;
        param_1 = uVar4;
      }
    }
    uVar3 = pf_varargs_404019bc_2((char *)param_2,0x20,format,param_1,in_stack_ffffffffffffffe8);
    param_1 = (ulong)uVar3;
  }
  return (uint)param_1;
}
