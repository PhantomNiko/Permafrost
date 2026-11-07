/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_38 (*(undefined8 *)(frame + 136))
#define local_48 (*(undefined8 *)(frame + 120))
#define local_50 (*(undefined8 *)(frame + 112))
#define local_60 (*(undefined8 *)(frame + 96))
#define local_68 (*(undefined4 *)(frame + 88))
#define local_78 (*(undefined8 *)(frame + 72))
#define local_88 (*(undefined8 *)(frame + 56))
#define local_90 (*(undefined8 *)(frame + 48))
#define local_a0 (*(undefined8 *)(frame + 32))
#define local_a8 (*(undefined4 *)(frame + 24))
#define local_b0 (*(undefined8 *)(frame + 16))
#define str_4044e3dd (*(char (*)[1])(0x82473ae2U))
#define uStack_40 (*(undefined8 *)(frame + 128))
#define uStack_58 (*(undefined8 *)(frame + 104))
#define uStack_70 (*(undefined8 *)(frame + 80))
#define uStack_80 (*(undefined8 *)(frame + 64))
#define uStack_98 (*(undefined8 *)(frame + 40))
undefined8 recovered_824619ec(long param_1,char *param_2)

{
  unsigned char frame[224] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  bool bVar2;
  undefined8 uVar3;

  local_b0 = 0;
  local_a8 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  local_68 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_50 = 0;
  uStack_40 = 0;
  local_48 = 0;
  local_38 = 0;
  pcVar1 = str_4044e3dd;
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
  }
  bVar2 = recovered_8244ee88((undefined4 *)&uStack_70,pcVar1);
  uVar3 = 0;
  if (bVar2) {
    uVar3 = recovered_824514a4(param_1,(long)&local_b0,2);
  }
  recovered_8243166c(&uStack_70);
  return uVar3;
}
