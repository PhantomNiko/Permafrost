/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define local_38 (*(undefined1 * *)(frame + 40))
#define local_40 (*(char * *)(frame + 32))
#define local_48 (*(ulong *)(frame + 24))
#define str_020a63e6 (*(char (*)[1])(0x20f6de0U))
#define str_020a640d (*(char (*)[1])(0x20f6e07U))
#define str_020a6437 (*(char (*)[1])(0x20f6e31U))
ulong recovered_20b6b70(int *param_1,char *param_2,long param_3,ulong param_4,undefined4 *param_5,
                       undefined8 in_R9)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  char *pcVar4;
  undefined1 *data;

  local_40 = (char *)0x0;
  local_38 = (undefined1 *)0x0;
  local_48 = 0;
  if (param_4 == 0) {
    uVar2 = recovered_2002e80(&DAT_020a259c);
    if (param_5 != (undefined4 *)0x0) {
      pvVar3 = recovered_2000ad0(uVar2 + 1);
      if (pvVar3 != (void *)0x0) {
        if (uVar2 != 0) {
          recovered_2001410(pvVar3,&DAT_020a259c,uVar2);
        }
        *(undefined1 *)((long)pvVar3 + uVar2) = 0;
        recovered_205ec00((undefined8 *)param_5);
        *param_5 = 3;
        *(void **)(param_5 + 4) = pvVar3;
LAB_020799be:
        uVar2 = CONCAT71((int7)((ulong)param_5 >> 8),1);
        goto LAB_02079a08;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar1 = recovered_20c5840(param_3,param_4,(long *)&local_40);
    pcVar4 = local_40;
    if ((char)uVar1 == '\0') {
      recovered_2000bb0(local_40);
      pcVar4 = str_020a63e6;
    }
    else {
      uVar2 = recovered_2002e80(local_40);
      uVar1 = recovered_20c6420(pcVar4,uVar2,&local_38,&local_48);
      recovered_2000bb0(local_40);
      uVar2 = local_48;
      if ((char)uVar1 == '\0') {
        recovered_2000bb0(local_38);
        pcVar4 = str_020a640d;
      }
      else {
        if (param_5 != (undefined4 *)0x0) {
          data = &DAT_020a259c;
          if (local_38 != (undefined1 *)0x0) {
            data = local_38;
          }
          pvVar3 = recovered_2000ad0(local_48 + 1);
          if (pvVar3 != (void *)0x0) {
            if (uVar2 != 0) {
              recovered_2001410(pvVar3,data,uVar2);
            }
            *(undefined1 *)((long)pvVar3 + uVar2) = 0;
            recovered_205ec00((undefined8 *)param_5);
            *param_5 = 3;
            *(void **)(param_5 + 4) = pvVar3;
            recovered_2000bb0(local_38);
            goto LAB_020799be;
          }
        }
        recovered_2000bb0(local_38);
        pcVar4 = str_020a6437;
      }
    }
    uVar2 = 0;
    pf_varargs_205eb00___(param_1,param_2,pcVar4);
  }
LAB_02079a08:
  return uVar2 & 0xffffffff;
}
