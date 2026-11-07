/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020a2e68 (*(uint8_t *)(0x20ec75dU))
#define local_120 (*(undefined1 (*)[192])(frame + 1520))
#define local_180 (*(undefined1 (*)[96])(frame + 1424))
#define local_1c0 (*(char (*)[64])(frame + 1360))
#define local_200 (*(char (*)[64])(frame + 1296))
#define local_2a0 (*(char (*)[160])(frame + 1136))
#define local_2a4 (*(uint *)(frame + 1132))
#define local_2a8 (*(uint *)(frame + 1128))
#define local_2ac (*(uint *)(frame + 1124))
#define local_2b0 (*(uint *)(frame + 1120))
#define local_2b8 (*(uint *)(frame + 1112))
#define local_2bc (*(int *)(frame + 1108))
#define local_2c4 (*(uint (*)[2])(frame + 1100))
#define local_34 (*(uint *)(frame + 1756))
#define local_3b8 (*(char (*)[244])(frame + 856))
#define local_44 (*(uint *)(frame + 1740))
#define local_48 (*(uint *)(frame + 1736))
#define local_4b8 (*(char (*)[256])(frame + 600))
#define local_4c (*(uint *)(frame + 1732))
#define local_50 (*(uint *)(frame + 1728))
#define local_54 (*(uint *)(frame + 1724))
#define local_58 (*(uint *)(frame + 1720))
#define local_5f8 (*(char (*)[320])(frame + 280))
#define local_60 (*(int (*)[2])(frame + 1712))
#define local_6f8 (*(char (*)[256])(frame + 24))
#define str_020a93f4 (*(char (*)[1])(0x20fd5efU))
#define str_020a9403 (*(char (*)[1])(0x20fd5feU))
#define str_020a940f (*(char (*)[1])(0x20fd60aU))
#define str_020a941c (*(char (*)[1])(0x20fd617U))
#define str_020a9496 (*(char (*)[1])(0x20fd691U))
#define str_020a94a4 (*(char (*)[1])(0x20fd69fU))
#define str_020a94f4 (*(char (*)[1])(0x20fd6efU))
void recovered_20e4440(int param_1,uint param_2)

{
  unsigned char frame[1840] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *left;

  if (param_1 != 0 && param_2 < 0x10) {
    local_34 = param_2 + 1;
    do {
      while (uVar1 = recovered_20dc670(param_1,(int *)local_2c4), uVar1 != 0) {
        left = local_2a0;
        if (local_2a0[0] == '\0') {
          left = &DAT_020a2e68;
        }
        iVar2 = recovered_2002eb0(left,&DAT_020a2e68);
        if (iVar2 == 0) {
          pf_varargs_20039e0___(local_6f8,0xf1,str_020a93f4);
        }
        else {
          if (*left == '/') {
            pcVar3 = str_020a9403;
          }
          else {
            pcVar3 = str_020a940f;
          }
          pf_varargs_20039e0__8_(local_6f8,0xf1,pcVar3,(ulonglong)left);
        }
        pcVar3 = local_1c0;
        pf_varargs_20039e0__4__8__8__8__8__8__4__4__4__4_
                  (local_5f8,0x140,str_020a941c,local_2c4[0],(ulonglong)left,(ulonglong)local_200,
                   (ulonglong)pcVar3,(ulonglong)local_180,(ulonglong)local_120,local_2b0,local_2ac,
                   local_2a8,local_2a4);
        if (local_1c0[0] == '\0') {
          pcVar3 = str_020a9496;
        }
        if (local_200[0] != '\0') {
          pcVar3 = local_200;
        }
        recovered_208d6d0(local_6f8,(long)pcVar3,(long)local_5f8);
        pf_varargs_20039e0__8_(local_3b8,0xf1,&DAT_020a25e3,(ulonglong)local_6f8);
        uVar1 = recovered_20e4750(param_1,0,local_60);
        if (uVar1 != 0) {
          pf_varargs_20039e0__4__4__4__4__4__4__4_
                    (local_5f8,0x140,str_020a94a4,0,local_50,local_54,local_4c,local_58,local_48,
                     local_44);
          pf_varargs_20039e0__8__4_(local_4b8,0xf1,str_020a94f4,(ulonglong)local_3b8,0);
          recovered_208d6d0(local_4b8,0x20fd6f9U,(long)local_5f8);
          uVar1 = recovered_20e4750(param_1,1,local_60);
          if (uVar1 != 0) {
            pf_varargs_20039e0__4__4__4__4__4__4__4_
                      (local_5f8,0x140,str_020a94a4,1,local_50,local_54,local_4c,local_58,local_48,
                       local_44);
            pf_varargs_20039e0__8__4_(local_4b8,0xf1,str_020a94f4,(ulonglong)local_3b8,1);
            recovered_208d6d0(local_4b8,0x20fd6f9U,(long)local_5f8);
          }
        }
        if (local_2bc != 0) {
          recovered_20e4440(local_2bc,local_34);
        }
        param_1 = local_2b8;
        if (local_2b8 == 0) {
          return;
        }
      }
      param_1 = recovered_2005ca0();
    } while (param_1 != 0);
  }
  return;
}
