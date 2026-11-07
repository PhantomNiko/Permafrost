/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define auStack_138 (*(undefined1 (*)[160])(frame + 24))
#define local_40 (*(undefined8 *)(frame + 272))
#define local_60 (*(undefined8 *)(frame + 240))
#define local_68 (*(undefined8 *)(frame + 232))
#define local_78 (*(undefined8 *)(frame + 216))
#define local_80 (*(undefined2 (*)[4])(frame + 208))
#define local_90 (*(int ***** *)(frame + 192))
#define local_98 (*(undefined8 *)(frame + 184))
#define plStack_88 (*(long * *)(frame + 200))
#define str_4044e4f7 (*(char (*)[1])(0x82479b8fU))
#define uStack_28 (*(undefined8 *)(frame + 296))
#define uStack_30 (*(undefined8 *)(frame + 288))
#define uStack_38 (*(undefined8 *)(frame + 280))
#define uStack_48 (*(undefined8 *)(frame + 264))
#define uStack_50 (*(undefined8 *)(frame + 256))
#define uStack_58 (*(undefined8 *)(frame + 248))
#define uStack_70 (*(undefined8 *)(frame + 224))
undefined8 recovered_8246eb6c(long param_1)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;

  local_90 = (int *****)0x0;
  plStack_88 = (long *)0x0;
  local_98 = 0;
  local_80[0] = 1;
  uStack_70 = 0;
  local_78 = 0;
  local_68 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uVar1 = recovered_8246ec28(param_1,(long)local_80,auStack_138);
  if ((uVar1 & 1) != 0) {
    uVar1 = recovered_82461e6c((long)local_80,(long *)&plStack_88,(ulong *)&local_90,&local_98,
                               auStack_138,0xa0);
    if ((uVar1 & 1) != 0) {
      uVar2 = recovered_8244a970((long)plStack_88,local_90);
      recovered_8244a8c0(plStack_88,(long)local_90);
      recovered_82461e08(local_80);
      return uVar2;
    }
    recovered_82461e08(local_80);
  }
  pf_varargs_4041aa18_1(str_4044e4f7,(ulonglong)auStack_138);
  return 0;
}
