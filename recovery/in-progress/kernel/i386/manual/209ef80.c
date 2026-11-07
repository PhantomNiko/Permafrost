/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e9dd (*(uint8_t *)(0x20cf88bU))
#define in_stack_ffffffc0 (*(char * *)(frame + 16))
#define in_stack_ffffffc4 (*(uint *)(frame + 20))
#define local_11 (*(byte *)(frame + 63))
#define local_12 (*(byte *)(frame + 62))
#define local_18 (*(char * *)(frame + 56))
#define local_1c (*(int * *)(frame + 52))
#define local_20 (*(int *)(frame + 48))
#define local_24 (*(void * *)(frame + 44))
#define str_020914df (*(char (*)[1])(0x20cead0U))
#define str_02096d0e (*(char (*)[1])(0x20d51afU))
#define str_02096d26 (*(char (*)[1])(0x20d51c7U))
byte recovered_209ef80(int *incoming_ecx,char *incoming_edx,int *param_3,int param_4,
                      undefined4 *param_5,char param_6)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  byte *incoming_ecx_00;
  bool bVar1;
  int *incoming_edx_00;
  ulong size;
  void *pf_output_slot;
  char *pcVar2;
  undefined4 uVar3;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint incoming_edx_01;
  uint incoming_edx_02;
  uint extraout_EDX_02 = 0;
  uint extraout_EDX_03 = 0;
  uint uVar4;
  char *pcVar5;

  pcVar2 = incoming_edx;
  if ((0xfffffffd < param_4 - 3U) && (*param_3 == 3)) {
    incoming_ecx_00 = (byte *)param_3[3];
    if (incoming_ecx_00 != (byte *)0x0) {
      pcVar5 = &DAT_0208e9dd;
      if ((param_4 == 2) &&
         ((param_3[9] != 3 || (pcVar5 = (char *)param_3[0xc], pcVar5 == (char *)0x0)))) {
        in_stack_ffffffc4 = 2;
        pcVar5 = str_020914df;
        goto LAB_02073d68;
      }
      local_1c = incoming_ecx;
      local_18 = incoming_edx;
      incoming_edx_00 = recovered_2001650(0x24);
      if (incoming_edx_00 != (int *)0x0) {
        recovered_2001e00(incoming_edx_00,0,0x24);
        incoming_edx_00[6] = 0;
        incoming_edx_00[7] = 0;
        incoming_edx_00[8] = 0;
        size = recovered_2002270((char *)incoming_ecx_00);
        pf_output_slot = recovered_2001650(size + 1);
        if (pf_output_slot == (void *)0x0) {
          incoming_edx_00[2] = 0;
          recovered_2001710((void *)0x0);
          incoming_edx_00[2] = 0;
          recovered_2001710((void *)incoming_edx_00[3]);
          incoming_edx_00[3] = 0;
          incoming_edx_00[4] = 0;
          incoming_edx_00[5] = 0;
          recovered_2001710((void *)incoming_edx_00[8]);
          incoming_edx_00[6] = 0;
          incoming_edx_00[7] = 0;
          incoming_edx_00[8] = 0;
        }
        else {
          if (size != 0) {
            recovered_2001b70(pf_output_slot,incoming_ecx_00,size);
          }
          *(undefined1 *)((int)pf_output_slot + size) = 0;
          incoming_edx_00[2] = (int)pf_output_slot;
          if (param_6 == '\0') {
            pcVar2 = recovered_20024f0(pcVar5,'w');
            local_12 = 1;
            local_11 = true;
            if (pcVar2 == (char *)0x0) {
              pcVar2 = recovered_20024f0(pcVar5,'a');
              local_11 = true;
              if (pcVar2 == (char *)0x0) {
                pcVar2 = recovered_20024f0(pcVar5,'+');
                local_11 = pcVar2 != (char *)0x0;
              }
            }
            pcVar2 = recovered_20024f0(pcVar5,'r');
            if (pcVar2 == (char *)0x0) {
              pcVar2 = recovered_20024f0(pcVar5,'+');
              local_12 = local_11 ^ 1 | pcVar2 != (char *)0x0;
            }
            pcVar2 = recovered_20024f0(pcVar5,'a');
            *(byte *)((int)incoming_edx_00 + 5) = local_12 & 1;
            *(byte *)((int)incoming_edx_00 + 6) = local_11;
            if ((local_12 & 1) != 0) {
              local_24 = (void *)0x0;
              local_20 = 0;
              uVar3 = recovered_2027f10((int)incoming_ecx_00,&local_24,&local_20);
              if ((byte)uVar3 == 0) {
                if (local_11 == 0) {
                  recovered_20b6710((int)incoming_edx_00,incoming_edx_01);
                  recovered_2001710(incoming_edx_00);
                  *param_5 = 0;
                  param_5[1] = 0;
                  param_5[2] = 0;
                  param_5[3] = 0;
                  param_5[4] = 0;
                  param_5[5] = 0;
                  param_5[6] = 0;
                  param_5[7] = 0;
                  param_5[8] = 0;
                  return 1;
                }
              }
              else {
                bVar1 = recovered_20b6ce0((int)incoming_edx_00,local_24,local_20);
                if (!bVar1) {
                  recovered_20b6710((int)incoming_edx_00,incoming_edx_02);
                  recovered_2001710(incoming_edx_00);
                  pf_varargs_204ff60___(local_1c,local_18,str_02096d26);
                  return (byte)uVar3 ^ 1;
                }
              }
            }
            if (((local_11 == 0) || (pcVar2 == (char *)0x0)) ||
               (((void *)incoming_edx_00[3] == (void *)0x0 ||
                (uVar3 = recovered_20864b0(incoming_edx_00 + 6,(void *)incoming_edx_00[3],
                                           incoming_edx_00[4]), uVar4 = extraout_EDX_02,
                (char)uVar3 != '\0')))) goto LAB_02073f9f;
          }
          else {
            local_24 = (void *)0x0;
            local_20 = 0;
            pcVar2 = recovered_20024f0(pcVar5,'w');
            uVar4 = extraout_EDX;
            if (((pcVar2 != (char *)0x0) ||
                (pcVar2 = recovered_20024f0(pcVar5,'a'), uVar4 = extraout_EDX_00,
                pcVar2 != (char *)0x0)) ||
               (uVar3 = recovered_20b6770(incoming_ecx_00,&local_24,&local_20),
               uVar4 = extraout_EDX_01, (char)uVar3 == '\0')) {
              recovered_20b6710((int)incoming_edx_00,uVar4);
              recovered_2001710(incoming_edx_00);
              *param_5 = 0;
              param_5[1] = 0;
              param_5[2] = 0;
              param_5[3] = 0;
              param_5[4] = 0;
              param_5[5] = 0;
              param_5[6] = 0;
              param_5[7] = 0;
              param_5[8] = 0;
              return 1;
            }
            *(undefined2 *)(incoming_edx_00 + 1) = 0x101;
            incoming_edx_00[3] = (int)local_24;
            incoming_edx_00[4] = local_20;
LAB_02073f9f:
            uVar3 = recovered_20b6aa0(param_5,incoming_edx_00);
            uVar4 = extraout_EDX_03;
            if ((char)uVar3 != '\0') {
              return 1;
            }
          }
          recovered_20b6710((int)incoming_edx_00,uVar4);
        }
        recovered_2001710(incoming_edx_00);
      }
      pcVar5 = str_02096d26;
      incoming_ecx = local_1c;
      pcVar2 = local_18;
      incoming_edx = in_stack_ffffffc0;
      goto LAB_02073d68;
    }
    in_stack_ffffffc4 = 1;
    pf_varargs_204ff60__4__4_(incoming_ecx,incoming_edx,str_020914df,(uint)incoming_edx,1);
  }
  pcVar5 = str_02096d0e;
LAB_02073d68:
  pf_varargs_204ff60__4__4_(incoming_ecx,pcVar2,pcVar5,(uint)incoming_edx,in_stack_ffffffc4);
  return 0;
}
