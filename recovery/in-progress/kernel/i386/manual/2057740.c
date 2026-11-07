/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define local_129 (*(undefined1 (*)[241])(frame + 263))
#define local_14 (*(ushort * *)(frame + 540))
#define local_18 (*(ushort * *)(frame + 536))
#define local_1c (*(uint *)(frame + 532))
#define local_20 (*(void * *)(frame + 528))
#define local_21a (*(char (*)[241])(frame + 22))
#define local_24 (*(void * *)(frame + 524))
#define local_28 (*(uint *)(frame + 520))
#define local_2c (*(uint *)(frame + 516))
#define local_30 (*(ushort * *)(frame + 512))
#define local_34 (*(int * *)(frame + 508))
#define local_38 (*(uint *)(frame + 504))
#define str_0208ed92 (*(char (*)[1])(0x20c526fU))
undefined4 recovered_2057740(int incoming_ecx,int incoming_edx,char *param_3,uint param_4)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  int *incoming_ecx_00;
  ushort *incoming_edx_00;
  undefined4 uVar3;
  uint uVar4;
  ushort *incoming_edx_01;
  uint uVar5;

  local_20 = (void *)0x0;
  local_28 = 0;
  if ((param_4 < 0x21 && incoming_ecx != 0) &&
     (incoming_edx_00 = recovered_2001650(*(ulong *)(incoming_ecx + 0x14)),
     incoming_edx_00 != (ushort *)0x0)) {
    uVar3 = recovered_2057a40((int *)incoming_ecx,incoming_edx,(int)incoming_edx_00);
    if (((char)uVar3 != '\0') &&
       (((*incoming_edx_00 & 0xf000) == 0x4000 &&
        (local_18 = incoming_edx_00,
        uVar3 = recovered_2057c20(incoming_ecx,incoming_edx_00,(int *)&local_20,&local_28),
        (char)uVar3 != '\0')))) {
      uVar3 = CONCAT31((int3)((uint)incoming_edx >> 8),1);
      if (7 < local_28) {
        incoming_edx_01 = (ushort *)(param_4 + 1);
        uVar4 = 0;
        local_34 = (int *)incoming_ecx;
        local_30 = incoming_edx_01;
        do {
          incoming_ecx_00 = local_34;
          uVar5 = (uint)*(ushort *)((int)local_20 + uVar4 + 4);
          if ((uVar5 < 8) || (local_38 = uVar4 + uVar5, local_28 < local_38)) break;
          local_1c = *(uint *)((int)local_20 + uVar4);
          bVar1 = *(byte *)((int)local_20 + uVar4 + 6);
          incoming_edx_01 = (ushort *)(uint)bVar1;
          if (incoming_edx_01 <= (ushort *)(uVar5 - 8) && (bVar1 != 0 && local_1c != 0)) {
            if (incoming_edx_01 == (ushort *)0x2) {
              if (*(char *)((int)local_20 + uVar4 + 8) == '.') {
                cVar2 = *(char *)((int)local_20 + uVar4 + 9);
                goto joined_r0x02041c84;
              }
LAB_02041c91:
              recovered_2001b70(local_129,(void *)((int)local_20 + uVar4 + 8),(ulong)incoming_edx_01
                               );
              local_129[(int)incoming_edx_01] = 0;
              if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
                pf_varargs_2003aa0__4_(local_21a,0xf1,&DAT_0208e323,(uint)local_129);
              }
              else {
                pf_varargs_2003aa0__4__4_(local_21a,0xf1,str_0208ed92,(uint)param_3,(uint)local_129)
                ;
              }
              incoming_edx_00 = local_18;
              incoming_edx_01 = recovered_2001650(incoming_ecx_00[5]);
              if (incoming_edx_01 == (ushort *)0x0) {
LAB_02041e10:
                uVar3 = 0;
                goto LAB_02041de8;
              }
              uVar3 = recovered_2057a40(incoming_ecx_00,local_1c,(int)incoming_edx_01);
              if ((char)uVar3 != '\0') {
                local_14 = incoming_edx_01;
                if ((*incoming_edx_01 & 0xf000) == 0x8000) {
                  local_24 = (void *)0x0;
                  local_2c = 0;
                  uVar3 = recovered_2057c20((int)incoming_ecx_00,incoming_edx_01,(int *)&local_24,
                                            &local_2c);
                  if ((char)uVar3 == '\0') {
                    recovered_2001710(local_24);
                  }
                  else {
                    uVar3 = recovered_2057520((int)local_21a,local_24,local_2c,1,local_1c,0);
                    if ((char)uVar3 == '\0') goto LAB_02041e08;
                  }
                  incoming_edx_01 = local_14;
                }
                else if ((*incoming_edx_01 & 0xf000) == 0x4000) {
                  uVar3 = recovered_2057520((int)local_21a,(void *)0x0,0,3,local_1c,0);
                  if (((char)uVar3 == '\0') ||
                     (uVar3 = recovered_2057740((int)incoming_ecx_00,local_1c,local_21a,
                                                (uint)local_30), incoming_edx_01 = local_14,
                     (char)uVar3 == '\0')) {
LAB_02041e08:
                    recovered_2001710(local_14);
                    goto LAB_02041e10;
                  }
                }
              }
              recovered_2001710(incoming_edx_01);
            }
            else if (incoming_edx_01 == (ushort *)0x1) {
              cVar2 = *(char *)((int)local_20 + uVar4 + 8);
joined_r0x02041c84:
              if (cVar2 != '.') goto LAB_02041c91;
            }
            else if (bVar1 < 0xf1) goto LAB_02041c91;
          }
          uVar4 = local_38;
        } while (local_38 + 8 <= local_28);
        uVar3 = CONCAT31((int3)((uint)incoming_edx_01 >> 8),1);
        incoming_edx_00 = local_18;
      }
LAB_02041de8:
      recovered_2001710(local_20);
      recovered_2001710(incoming_edx_00);
      return uVar3;
    }
    recovered_2001710(incoming_edx_00);
    recovered_2001710(local_20);
  }
  return 0;
}
