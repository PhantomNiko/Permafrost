/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_158 (*(char (*)[264])(frame + 1048))
#define local_34 (*(uint *)(frame + 1340))
#define local_38 (*(uint *)(frame + 1336))
#define local_40 (*(undefined8 * *)(frame + 1328))
#define local_48 (*(ulong *)(frame + 1320))
#define local_50 (*(ulong *)(frame + 1312))
#define local_558 (*(char (*)[1024])(frame + 24))
#define str_020a57b7 (*(char (*)[1])(0x20f5f03U))
#define str_020a5c95 (*(char (*)[1])(0x20f6437U))
#define str_020a5c9b (*(char (*)[1])(0x20f643dU))
ulong recovered_20b3a90(int *param_1,char *param_2,long param_3,long param_4,undefined8 *param_5)

{
  unsigned char frame[1424] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;
  uchar uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar8;
  char *pcVar7;
  long lVar9;
  ulong uVar10;
  ulong uVar11;

  local_38 = 0;
  local_34 = 0;
  if (param_4 == 2) {
    uVar10 = 0;
    local_40 = param_5;
    uVar3 = recovered_20b3650(param_1,param_2,param_3,2,0,(int *)&local_38);
    if (uVar3 != '\0') {
      uVar3 = recovered_20b3650(param_1,param_2,param_3,2,1,(int *)&local_34);
      if (uVar3 == '\0') {
        uVar10 = 0;
      }
      else {
        if ((ulong)local_34 != 0) {
          uVar5 = (ulong)local_38;
          uVar10 = 0;
          local_50 = (ulong)local_34;
          local_48 = uVar5;
          do {
            uVar6 = local_50;
            iVar4 = pf_varargs_20039e0__4_(local_158,0x100,str_020a5c95,(int)local_48 + (int)uVar10)
            ;
            lVar9 = (long)iVar4;
            uVar6 = uVar6 - uVar10;
            if (0xf < uVar6) {
              uVar6 = 0x10;
            }
            if (lVar9 + 4U < 0x100) {
              uVar11 = 1;
              do {
                iVar4 = pf_varargs_20039e0__4_
                                  (local_158 + lVar9,0x100 - lVar9,str_020a5c9b,
                                   (uint)*(byte *)((uVar5 - 1) + uVar11));
                if (uVar6 <= uVar11) break;
                lVar1 = iVar4 + lVar9;
                lVar9 = lVar9 + iVar4;
                uVar11 = uVar11 + 1;
              } while (lVar1 + 4U < 0x100);
            }
            uVar6 = 0;
            pcVar8 = local_158;
            while( true ) {
              do {
                pcVar7 = pcVar8 + 1;
                cVar2 = *pcVar8;
                pcVar8 = pcVar7;
              } while (cVar2 == '\r');
              if (cVar2 == '\0') break;
              if (cVar2 == '\n') {
                recovered_20c6270(local_558,uVar6,1,'\x01');
                uVar6 = 0;
              }
              else if (uVar6 + 1 < 0x400) {
                local_558[uVar6] = cVar2;
                uVar6 = uVar6 + 1;
              }
            }
            recovered_20c6270(local_558,uVar6,1,'\x01');
            uVar10 = uVar10 + 0x10;
            uVar5 = uVar5 + 0x10;
          } while (uVar10 < local_50);
        }
        recovered_203e680();
        *local_40 = 1;
        *(undefined4 *)(local_40 + 1) = 0;
        local_40[2] = 0;
        local_40[3] = 0;
        local_40[4] = 0;
        local_40[5] = 0;
        local_40[6] = 0;
        local_40[7] = 0;
        uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
      }
    }
  }
  else {
    uVar10 = 0;
    pf_varargs_205eb00__8__4__8_(param_1,param_2,str_020a57b7,(ulonglong)param_2,2,0x20f5f1cU);
  }
  return uVar10 & 0xffffffff;
}
