/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a3cbb (*(uint8_t *)(0x20f447cU))
#define DAT_020a3f28 (*(uint8_t *)(0x20f46e9U))
#define local_38 (*(ulong *)(frame + 104))
#define local_40 (*(ulong * *)(frame + 96))
#define local_48 (*(void * *)(frame + 88))
#define local_58 (*(undefined8 *)(frame + 72))
#define local_68 (*(undefined8 *)(frame + 56))
#define local_78 (*(undefined8 *)(frame + 40))
#define local_88 (*(ulong *)(frame + 24))
#define str_020a3fc5 (*(char (*)[1])(0x20f4786U))
#define str_020a3ff8 (*(char (*)[1])(0x20f47b9U))
#define str_020a402c (*(char (*)[1])(0x20f47edU))
#define str_020a4045 (*(char (*)[1])(0x20f4806U))
#define str_020ab57a (*(char (*)[1])(0x20fcbf1U))
#define uStack_50 (*(undefined8 *)(frame + 80))
#define uStack_60 (*(undefined8 *)(frame + 64))
#define uStack_70 (*(undefined8 *)(frame + 48))
#define uStack_7c (*(undefined4 *)(frame + 36))
#define uStack_80 (*(undefined4 *)(frame + 32))
uint recovered_20e13d0(long param_1,ulong *param_2,long param_3,ulong *in_R8,ulong *in_R9)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  long lVar1;
  uchar uVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  ulong size;
  byte *pbVar6;
  char *format;
  byte *left;
  ulong unaff_R14;

  local_38 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if (param_3 == 0 || (param_2 == (ulong *)0x0 || param_1 == 0)) {
    return 0;
  }
  uVar2 = recovered_20a0000(param_2,1,0x20f4783U,&local_38);
  if (uVar2 == '\0') {
    left = &DAT_020a3f28;
    format = str_020a3fc5;
LAB_0209b8cb:
    pf_varargs_205eb00___((void *)param_1,(char *)left,format);
  }
  else {
    if (1 < local_38) {
      unaff_R14 = 1;
      local_48 = (void *)param_1;
      local_40 = param_2;
      do {
        left = *(byte **)(param_2[2] + unaff_R14 * 8);
        if ((unaff_R14 & 1) != 0) {
          if (((left == (byte *)0x0) || (bVar3 = *left, bVar3 == 0)) ||
             ((0x19 < (byte)((bVar3 & 0xdf) + 0xbf) && ((bVar3 != 0x5f && (bVar3 != 0x24)))))) {
LAB_0209b8bb:
            format = str_020a3ff8;
          }
          else {
            bVar3 = left[1];
            if (bVar3 != 0) {
              pbVar6 = left + 2;
              do {
                if ((((bVar3 != 0x2e) && (bVar3 != 0x24)) && (bVar3 != 0x5f)) &&
                   ((9 < (byte)(bVar3 - 0x30U) && (0x19 < (byte)((bVar3 & 0xdf) + 0xbf)))))
                goto LAB_0209b8bb;
                bVar3 = *pbVar6;
                pbVar6 = pbVar6 + 1;
              } while (bVar3 != 0);
            }
            pvVar5 = recovered_2000d40(*(void **)(param_3 + 0x50),*(long *)(param_3 + 0x58) * 8 + 8)
            ;
            if (pvVar5 != (void *)0x0) {
              *(void **)(param_3 + 0x50) = pvVar5;
              size = recovered_2002e80((char *)left);
              pvVar5 = recovered_2000ad0(size + 1);
              if (pvVar5 != (void *)0x0) {
                if (size != 0) {
                  recovered_2001410(pvVar5,left,size);
                }
                *(undefined1 *)((long)pvVar5 + size) = 0;
                lVar1 = *(long *)(param_3 + 0x58);
                *(long *)(param_3 + 0x58) = lVar1 + 1;
                *(void **)(*(long *)(param_3 + 0x50) + lVar1 * 8) = pvVar5;
                param_1 = (long)local_48;
                param_2 = local_40;
                goto LAB_0209b6e7;
              }
            }
            left = *(byte **)(local_40[2] + unaff_R14 * 8);
            format = str_020ab57a;
            param_1 = (long)local_48;
          }
          goto LAB_0209b8cb;
        }
        iVar4 = recovered_2002eb0((char *)left,&DAT_020a3cbb);
        if (iVar4 != 0) {
          left = *(byte **)(param_2[2] + unaff_R14 * 8);
          format = str_020a402c;
          goto LAB_0209b8cb;
        }
LAB_0209b6e7:
        unaff_R14 = unaff_R14 + 1;
      } while (unaff_R14 < local_38);
    }
    if (*(long *)(param_3 + 0x58) != 0) {
      if ((local_38 + 1 < *param_2) &&
         (uVar2 = recovered_20a01c0(param_1,param_2,local_38 + 1,*param_2,&local_88), uVar2 != '\0')
         ) {
        if (((uint)local_88 < 9) && ((0x181U >> ((uint)local_88 & 0x1f) & 1) != 0)) {
          recovered_205ec00((undefined8 *)(param_3 + 0x60));
          *(undefined8 *)(param_3 + 0x90) = local_58;
          *(undefined8 *)(param_3 + 0x98) = uStack_50;
          *(undefined8 *)(param_3 + 0x80) = local_68;
          *(undefined8 *)(param_3 + 0x88) = uStack_60;
          *(undefined8 *)(param_3 + 0x70) = local_78;
          *(undefined8 *)(param_3 + 0x78) = uStack_70;
          *(ulong *)(param_3 + 0x60) = local_88;
          *(ulong *)(param_3 + 0x68) = CONCAT44(uStack_7c,uStack_80);
          *(undefined2 *)(param_3 + 0x30) = 1;
          *(undefined8 *)(param_3 + 0xa0) = 0;
          return (uint)CONCAT71((int7)(unaff_R14 >> 8),1);
        }
        recovered_205ec00(&local_88);
        left = &DAT_020a3f28;
        format = str_020a4045;
        goto LAB_0209b8cb;
      }
    }
    recovered_205ec00(&local_88);
  }
  return 0;
}
