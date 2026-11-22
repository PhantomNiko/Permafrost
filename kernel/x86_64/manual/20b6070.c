/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf454 (*(uint8_t volatile *)(0x215a894U))
#define local_128 (*(byte (*)[244])(frame + 24))
#define local_34 (*(uint *)(frame + 268))
#define str_020a5763 (*(char (*)[1])(0x20f5f1eU))
#define str_020a577d (*(char (*)[1])(0x20f5f38U))
#define str_020a57b7 (*(char (*)[1])(0x20f5f03U))
#define str_020a5ddf (*(char (*)[1])(0x20f657dU))
ulong recovered_20b6070(int *param_1,char *param_2,int *param_3,long param_4,undefined4 *param_5,
                       undefined8 in_R9)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;
  uchar uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 extraout_RDX = 0;
  char *format;
  byte *pbVar6;
  ulong uVar7;

  local_34 = 0;
  if (param_4 == 2) {
    if (param_3 == (int *)0x0) {
      format = str_020a5763;
    }
    else {
      if ((*param_3 == 3) && (lVar1 = *(long *)(param_3 + 4), lVar1 != 0)) {
        uVar3 = recovered_20b3650(param_1,param_2,(long)param_3,2,1,(int *)&local_34);
        if (uVar3 == '\0') {
          uVar7 = 0;
        }
        else {
          cVar2 = DAT_020cf454;
          if (cVar2 == '\x01') {
            pbVar6 = local_128;
            recovered_20411d0(lVar1,local_128);
            uVar5 = recovered_2042180(local_128);
            if ((uVar5 != 0xffffffffffffffff) &&
               ((lVar1 = DAT_020cf3a0, lVar1 == 0 ||
                ((*(byte *)(lVar1 + 0x104 + uVar5 * 0x118) & 2) == 0)))) {
              uVar3 = recovered_20422c0(uVar5,pbVar6,extraout_RDX);
              if (uVar3 != '\0') {
                lVar1 = DAT_020cf3a0;
                recovered_2001410((void *)(ulong)local_34,*(void **)(lVar1 + 0xf8 + uVar5 * 0x118),
                                  (ulong)*(uint *)(lVar1 + 0x100 + uVar5 * 0x118));
                iVar4 = (*(code *)(ulong)local_34)();
                *param_5 = 1;
                param_5[1] = iVar4;
                param_5[2] = (float)iVar4;
                *(undefined8 *)(param_5 + 4) = 0;
                *(undefined8 *)(param_5 + 6) = 0;
                *(undefined8 *)(param_5 + 8) = 0;
                *(undefined8 *)(param_5 + 10) = 0;
                *(undefined8 *)(param_5 + 0xc) = 0;
                *(undefined8 *)(param_5 + 0xe) = 0;
                uVar7 = CONCAT71((int7)(uVar5 >> 8),1);
                goto LAB_02078bc4;
              }
            }
          }
          uVar7 = 0;
          pf_varargs_205eb00___(param_1,param_2,str_020a5ddf);
        }
        goto LAB_02078bc4;
      }
      format = str_020a577d;
    }
    uVar7 = 0;
    pf_varargs_205eb00__8__4_(param_1,param_2,format,(ulonglong)param_2,1);
  }
  else {
    uVar7 = 0;
    pf_varargs_205eb00__8__4__8_(param_1,param_2,str_020a57b7,(ulonglong)param_2,2,0x20f5f1cU);
  }
LAB_02078bc4:
  return uVar7 & 0xffffffff;
}
