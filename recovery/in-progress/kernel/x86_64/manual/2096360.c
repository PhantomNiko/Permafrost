/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a3ac7 (*(uint8_t *)(0x20ecb5fU))
#define DAT_020a3b08 (*(uint8_t *)(0x20f42c9U))
#define DAT_020a3b0c (*(uint8_t *)(0x20f42cdU))
#define DAT_020a3b13 (*(uint8_t *)(0x20f42d4U))
#define acStackY_508 (*(char (*)[128])(frame + 24))
#define in_stack_fffffffffffffb78 (*(undefined8 *)(frame + 152))
#define in_stack_fffffffffffffb80 (*(undefined8 *)(frame + 160))
#define in_stack_fffffffffffffb88 (*(ulong ******* *)(frame + 168))
#define in_stack_fffffffffffffb90 (*(ulong ******* *)(frame + 176))
#define in_stack_fffffffffffffb98 (*(long * *)(frame + 184))
#define in_stack_fffffffffffffba0 (*(ulong ******* *)(frame + 192))
#define in_stack_fffffffffffffba8 (*(ulong ******* *)(frame + 200))
#define in_stack_fffffffffffffbb0 (*(ulong ******* *)(frame + 208))
#define local_34 (*(int *)(frame + 1260))
#define local_40 (*(ulong ******* *)(frame + 1248))
#define local_50 (*(undefined8 *)(frame + 1232))
#define local_60 (*(undefined8 *)(frame + 1216))
#define local_70 (*(undefined8 *)(frame + 1200))
#define local_78 (*(undefined4 *)(frame + 1192))
#define local_80 (*(ulong *********** *)(frame + 1184))
#define str_020a3acf (*(char (*)[1])(0x20f4290U))
#define str_020a3ae9 (*(char (*)[1])(0x20f42aaU))
#define str_020a3b18 (*(char (*)[1])(0x20f42d9U))
#define str_020a3b1e (*(char (*)[1])(0x20f42dfU))
#define uStack_48 (*(undefined8 *)(frame + 1240))
#define uStack_58 (*(undefined8 *)(frame + 1224))
#define uStack_68 (*(undefined8 *)(frame + 1208))
uint recovered_2096360(ulong *******param_1,ulong *******param_2,ulong *******in_R9,
                      undefined8 param_4,ulong ************param_5,ulong ******param_6,
                      ulong ******param_7,undefined8 param_8,undefined8 param_9,undefined8 param_10,
                      undefined8 param_11)

{
  unsigned char frame[1344] __attribute__((aligned(16))) = {0};

  char cVar1;
  uchar uVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong *******pppppppuVar6;
  char *pcVar7;
  undefined8 unaff_R15;
  undefined7 uVar8;

  local_40 = (ulong *******)0x0;
  local_34 = 0;
  local_80 = (ulong ***********)0x0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uVar8 = (undefined7)((ulong)unaff_R15 >> 8);
  if (param_2 == (ulong *******)0x0) {
    uVar5 = 0;
    pcVar4 = &DAT_020a3ac7;
    while( true ) {
      do {
        pcVar7 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar7;
      } while (cVar1 == '\r');
      if (cVar1 == '\0') break;
      if (cVar1 == '\n') {
        recovered_20c6270(acStackY_508 + 0x80,uVar5,1,'\x01');
        uVar5 = 0;
      }
      else if (uVar5 + 1 < 0x400) {
        acStackY_508[uVar5 + 0x80] = cVar1;
        uVar5 = uVar5 + 1;
      }
    }
    recovered_20c6270(acStackY_508 + 0x80,uVar5,1,'\x01');
    uVar3 = (uint)CONCAT71(uVar8,1);
  }
  else {
    uVar3 = recovered_2096580((ulong ***********)param_1,(ulong ************)param_2,
                              (ulong ******)&local_40,(ulong ******)&local_34,&local_80,
                              (ulong ***********)param_6,in_stack_fffffffffffffb78,
                              in_stack_fffffffffffffb80,in_stack_fffffffffffffb88,
                              in_stack_fffffffffffffb90,in_stack_fffffffffffffb98,
                              in_stack_fffffffffffffba0,in_stack_fffffffffffffba8,
                              in_stack_fffffffffffffbb0);
    if ((char)uVar3 == '\0') {
      recovered_205ec00(&local_80);
      uVar3 = 0;
    }
    else if (local_34 == 0) {
      recovered_205ec00(&local_80);
      uVar3 = (uint)CONCAT71(uVar8,1);
      pppppppuVar6 = local_40;
      if (local_40 < param_2) {
        do {
          uVar2 = recovered_209c520((long)param_1[(long)pppppppuVar6],&DAT_020a3b08);
          if ((((uVar2 != '\0') ||
               (uVar2 = recovered_209c520((long)param_1[(long)pppppppuVar6],&DAT_020a3b0c),
               uVar2 != '\0')) ||
              (uVar2 = recovered_209c520((long)param_1[(long)pppppppuVar6],&DAT_020a3b13),
              uVar2 != '\0')) ||
             (uVar2 = recovered_209c520((long)param_1[(long)pppppppuVar6],str_020a3b18),
             uVar2 != '\0')) {
            pcVar4 = str_020a3b1e;
            goto LAB_02058c5b;
          }
          pppppppuVar6 = (ulong *******)((long)pppppppuVar6 + 1);
        } while (param_2 != pppppppuVar6);
      }
    }
    else {
      recovered_205ec00(&local_80);
      pcVar4 = str_020a3ae9;
      if (local_34 == 1) {
        pcVar4 = str_020a3acf;
      }
LAB_02058c5b:
      uVar3 = 0;
      pf_varargs_205eb00___(acStackY_508 + 0x80,(char *)0x0,pcVar4);
    }
  }
  return uVar3;
}
