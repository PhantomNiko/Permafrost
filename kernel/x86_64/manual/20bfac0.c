/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_48 (*(undefined8 *)(frame + 136))
#define local_58 (*(undefined8 *)(frame + 120))
#define local_68 (*(void * *)(frame + 104))
#define local_70 (*(undefined4 *)(frame + 96))
#define local_78 (*(undefined8 *)(frame + 88))
#define local_88 (*(undefined8 *)(frame + 72))
#define local_98 (*(undefined8 *)(frame + 56))
#define local_a8 (*(undefined8 *)(frame + 40))
#define local_b0 (*(undefined4 *)(frame + 32))
#define local_b8 (*(undefined8 *)(frame + 24))
#define str_020a275e (*(char (*)[1])(0x20ec574U))
#define uStack_40 (*(undefined8 *)(frame + 144))
#define uStack_50 (*(undefined8 *)(frame + 128))
#define uStack_60 (*(undefined8 *)(frame + 112))
#define uStack_80 (*(undefined8 *)(frame + 80))
#define uStack_90 (*(undefined8 *)(frame + 64))
#define uStack_a0 (*(undefined8 *)(frame + 48))
uint recovered_20bfac0(undefined4 *param_1,char *param_2)

{
  unsigned char frame[240] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong size;
  void *out;
  char *text;

  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  text = str_020a275e;
  if (param_2 != (char *)0x0) {
    text = param_2;
  }
  size = recovered_2002e80(text);
  out = recovered_2000ad0(size + 1);
  if (out == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    if (size != 0) {
      recovered_2001410(out,text,size);
    }
    *(undefined1 *)((long)out + size) = 0;
    recovered_205ec00(&local_78);
    local_78 = CONCAT44(PF_PART4(local_78, 4),3);
    local_68 = out;
    uVar1 = recovered_20a5b10(param_1,(undefined4 *)&local_b8,2);
  }
  recovered_205ec00(&local_78);
  return uVar1;
}
