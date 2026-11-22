/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define local_40 (*(undefined8 *)(frame + 64))
#define local_50 (*(undefined8 *)(frame + 48))
#define local_60 (*(void * *)(frame + 32))
#define local_68 (*(undefined4 *)(frame + 24))
#define local_70 (*(undefined8 *)(frame + 16))
#define uStack_38 (*(undefined8 *)(frame + 72))
#define uStack_48 (*(undefined8 *)(frame + 56))
#define uStack_58 (*(undefined8 *)(frame + 40))
uchar recovered_20c56d0(int *param_1,long param_2,undefined1 *param_3)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  ulong size;
  void *out;
  undefined8 *puVar3;
  char *text;

  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  text = &DAT_020a259c;
  if (param_3 != (undefined1 *)0x0) {
    text = param_3;
  }
  size = recovered_2002e80(text);
  out = recovered_2000ad0(size + 1);
  if (out == (void *)0x0) {
    return '\0';
  }
  if (size != 0) {
    recovered_2001410(out,text,size);
  }
  *(undefined1 *)((long)out + size) = 0;
  recovered_205ec00(&local_70);
  local_70 = CONCAT44(PF_PART4(local_70, 4),3);
  local_60 = out;
  if ((((param_1 == (int *)0x0) || (*param_1 != 8)) ||
      (param_2 == 0 || *(long *)(param_1 + 0xc) == 0)) ||
     (puVar3 = (undefined8 *)recovered_20bf690(*(long *)(param_1 + 0xc),param_2,'\x01'),
     puVar3 == (undefined8 *)0x0)) {
    uVar1 = '\0';
  }
  else {
    uVar2 = recovered_20a0670(puVar3,&local_70);
    uVar1 = (uchar)uVar2;
  }
  recovered_205ec00(&local_70);
  return uVar1;
}
