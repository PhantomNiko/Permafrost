/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_11 (*(char *)(frame + 79))
#define local_18 (*(int * *)(frame + 72))
#define local_1c (*(int * *)(frame + 68))
#define local_20 (*(void * *)(frame + 64))
#define local_24 (*(uint *)(frame + 60))
#define local_28 (*(uint *)(frame + 56))
#define local_2c (*(undefined4 *)(frame + 52))
#define local_30 (*(undefined4 *)(frame + 48))
#define local_34 (*(undefined4 *)(frame + 44))
#define local_38 (*(undefined4 *)(frame + 40))
#define local_3c (*(undefined4 *)(frame + 36))
#define local_40 (*(undefined4 *)(frame + 32))
#define local_44 (*(float *)(frame + 28))
#define local_48 (*(uint *)(frame + 24))
#define local_4c (*(int *)(frame + 20))
#define str_0208ff20 (*(char (*)[1])(0x20cd517U))
#define str_0209007a (*(char (*)[1])(0x20cd666U))
undefined4 recovered_2082ae0(int *incoming_ecx,int *incoming_edx,int *param_3,char *param_4)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char *format;
  int iVar2;
  int iVar3;

  if (incoming_edx == (int *)0x0) {
    return 0;
  }
  uVar1 = 0;
  if ((param_3 != (int *)0x0) && (*incoming_edx == 8)) {
    if ((*param_3 == 7) && (iVar2 = param_3[6], iVar2 != 0)) {
      uVar1 = 1;
      if (*(int *)(iVar2 + 8) != 0) {
        iVar3 = 0;
        local_24 = 0;
        local_1c = incoming_edx;
        local_18 = incoming_ecx;
        do {
          local_48 = local_24 + 1;
          local_40 = 0;
          local_3c = 0;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          local_4c = 1;
          local_44 = (float)(int)local_48;
          iVar2 = *(int *)(iVar2 + 0x10);
          local_20 = (void *)0x0;
          if ((iVar2 == 0) || (*local_1c != 8)) goto LAB_02058893;
          local_28 = local_48;
          local_24 = local_48;
          local_11 = recovered_2085e30(&local_4c,&local_20);
          recovered_2001710(local_20);
          if (local_11 == '\0') {
            format = str_0209007a;
LAB_02058880:
            pf_varargs_204ff60___(local_18,param_4,format);
            goto LAB_02058893;
          }
          uVar1 = recovered_207d2b0(local_1c,&local_4c,(int *)(iVar2 + iVar3),1);
          if ((char)uVar1 == '\0') {
            format = str_0208ff20;
            goto LAB_02058880;
          }
          iVar2 = param_3[6];
          iVar3 = iVar3 + 0x24;
        } while (local_24 < *(uint *)(iVar2 + 8));
        uVar1 = CONCAT31((int3)((uint)param_3 >> 8),1);
      }
    }
    else {
LAB_02058893:
      uVar1 = 0;
    }
  }
  return uVar1;
}
