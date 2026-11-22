/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_31 (*(char *)(frame + 127))
#define local_40 (*(char * *)(frame + 112))
#define local_48 (*(int * *)(frame + 104))
#define local_50 (*(void * *)(frame + 96))
#define local_58 (*(int * *)(frame + 88))
#define local_68 (*(undefined8 *)(frame + 72))
#define local_78 (*(undefined8 *)(frame + 56))
#define local_88 (*(undefined8 *)(frame + 40))
#define local_90 (*(float *)(frame + 32))
#define local_94 (*(int *)(frame + 28))
#define local_98 (*(int *)(frame + 24))
#define str_020a41be (*(char (*)[1])(0x20f4979U))
#define str_020a4318 (*(char (*)[1])(0x20f4ac8U))
#define uStack_60 (*(undefined8 *)(frame + 80))
#define uStack_70 (*(undefined8 *)(frame + 64))
#define uStack_80 (*(undefined8 *)(frame + 48))
uchar recovered_20a54d0(int *param_1,int *param_2,int *param_3,char *param_4,undefined8 in_R8,
                       undefined8 in_R9)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  char *format;
  long lVar3;
  ulong uVar4;
  long lVar5;

  uVar1 = '\0';
  if (((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) && (uVar1 = '\0', *param_2 == 8)) {
    if ((*param_3 == 7) && (lVar3 = *(long *)(param_3 + 10), lVar3 != 0)) {
      uVar1 = '\x01';
      if (*(long *)(lVar3 + 8) != 0) {
        lVar5 = 0;
        uVar4 = 0;
        local_58 = param_3;
        local_48 = param_1;
        local_40 = param_4;
        do {
          uVar4 = uVar4 + 1;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_98 = 1;
          local_94 = (int)uVar4;
          local_90 = (float)local_94;
          lVar3 = *(long *)(lVar3 + 0x18);
          local_50 = (void *)0x0;
          if ((lVar3 == 0) || (*param_2 != 8)) goto LAB_02067d33;
          uVar2 = recovered_20a8d30(&local_98,&local_50);
          local_31 = (char)uVar2;
          recovered_2000bb0(local_50);
          if (local_31 == '\0') {
            format = str_020a4318;
LAB_02067d2c:
            pf_varargs_205eb00___(local_48,local_40,format);
            goto LAB_02067d33;
          }
          uVar1 = recovered_209f5a0(param_2,&local_98,(int *)(lVar3 + lVar5),1);
          if (uVar1 == '\0') {
            format = str_020a41be;
            goto LAB_02067d2c;
          }
          lVar3 = *(long *)(local_58 + 10);
          lVar5 = lVar5 + 0x40;
        } while (uVar4 < *(ulong *)(lVar3 + 8));
        uVar1 = '\x01';
      }
    }
    else {
LAB_02067d33:
      uVar1 = '\0';
    }
  }
  return uVar1;
}
