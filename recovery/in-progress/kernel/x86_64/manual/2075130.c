/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define local_168 (*(char (*)[256])(frame + 280))
#define local_268 (*(undefined1 (*)[256])(frame + 24))
#define local_34 (*(uint *)(frame + 588))
#define local_40 (*(void * *)(frame + 576))
#define local_48 (*(ulong *)(frame + 568))
#define local_4c (*(uint *)(frame + 564))
#define local_58 (*(ulong *)(frame + 552))
#define local_60 (*(void * *)(frame + 544))
#define local_68 (*(char * *)(frame + 536))
#define str_020a3052 (*(char (*)[1])(0x20ec673U))
uchar recovered_2075130(long *param_1,undefined8 param_2,char *param_3,uint param_4)

{
  unsigned char frame[672] __attribute__((aligned(16))) = {0};

  char cVar1;
  ushort uVar2;
  uchar uVar3;
  uchar uVar4;
  byte bVar5;
  ushort *buffer;
  ushort *buffer_00;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;

  local_40 = (void *)0x0;
  local_48 = 0;
  if ((param_4 < 0x21 && param_1 != (long *)0x0) &&
     (local_68 = param_3, buffer = recovered_2000ad0((ulong)*(uint *)(param_1 + 3)),
     buffer != (ushort *)0x0)) {
    uVar3 = recovered_2075410(param_1,(int)param_2,(long)buffer);
    if ((uVar3 != '\0') &&
       (((*buffer & 0xf000) == 0x4000 &&
        (uVar3 = recovered_2075640(param_1,buffer,(long *)&local_40,&local_48), uVar3 != '\0')))) {
      uVar3 = '\x01';
      if (7 < local_48) {
        local_4c = param_4 + 1;
        uVar7 = 0;
        do {
          uVar2 = *(ushort *)((long)local_40 + uVar7 + 4);
          if ((uVar2 < 8) || (uVar8 = (uint)uVar2 + uVar7, local_48 < uVar8)) break;
          bVar5 = *(byte *)((long)local_40 + uVar7 + 6);
          uVar6 = (uint)bVar5;
          if (uVar6 <= uVar2 - 8 && (bVar5 != 0 && *(uint *)((long)local_40 + uVar7) != 0)) {
            if (uVar6 == 2) {
              if (*(char *)((long)local_40 + uVar7 + 8) == '.') {
                cVar1 = *(char *)((long)local_40 + uVar7 + 9);
                goto joined_r0x0204f1ad;
              }
LAB_0204f1bb:
              local_34 = *(uint *)((long)local_40 + uVar7);
              recovered_2001410(local_268,(void *)((long)local_40 + uVar7 + 8),(ulong)bVar5);
              local_268[bVar5] = 0;
              if ((local_68 == (char *)0x0) || (*local_68 == '\0')) {
                pf_varargs_20039e0__8_(local_168,0xf1,&DAT_020a25e3,(ulonglong)local_268);
              }
              else {
                pf_varargs_20039e0__8__8_
                          (local_168,0xf1,str_020a3052,(ulonglong)local_68,(ulonglong)local_268);
              }
              buffer_00 = recovered_2000ad0((ulong)*(uint *)(param_1 + 3));
              if (buffer_00 == (ushort *)0x0) {
LAB_0204f313:
                uVar3 = '\0';
                break;
              }
              uVar4 = recovered_2075410(param_1,local_34,(long)buffer_00);
              if (uVar4 != '\0') {
                if ((*buffer_00 & 0xf000) == 0x8000) {
                  local_60 = (void *)0x0;
                  local_58 = 0;
                  bVar5 = recovered_2075640(param_1,buffer_00,(long *)&local_60,&local_58);
                  if ((local_58 >> 0x20 == 0 & bVar5) == 1) {
                    uVar4 = recovered_2074ee0((long)local_168,(long)local_60,(int)local_58,1,
                                              local_34,0);
LAB_0204f303:
                    if (uVar4 == '\0') goto LAB_0204f30b;
                  }
                  else {
                    recovered_2000bb0(local_60);
                  }
                }
                else if ((*buffer_00 & 0xf000) == 0x4000) {
                  uVar4 = recovered_2074ee0((long)local_168,0,0,3,local_34,0);
                  if (uVar4 != '\0') {
                    uVar4 = recovered_2075130(param_1,(ulong)local_34,local_168,local_4c);
                    goto LAB_0204f303;
                  }
LAB_0204f30b:
                  recovered_2000bb0(buffer_00);
                  goto LAB_0204f313;
                }
              }
              recovered_2000bb0(buffer_00);
            }
            else if (uVar6 == 1) {
              cVar1 = *(char *)((long)local_40 + uVar7 + 8);
joined_r0x0204f1ad:
              if (cVar1 != '.') goto LAB_0204f1bb;
            }
            else if (bVar5 < 0xf1) goto LAB_0204f1bb;
          }
          uVar7 = uVar8;
        } while (uVar8 + 8 <= local_48);
      }
      recovered_2000bb0(local_40);
      recovered_2000bb0(buffer);
      return uVar3;
    }
    recovered_2000bb0(buffer);
    recovered_2000bb0(local_40);
  }
  return '\0';
}
