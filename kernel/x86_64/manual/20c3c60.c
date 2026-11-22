/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a2c9d (*(uint8_t *)(0x20f6cfaU))
#define local_38 (*(int * *)(frame + 40))
#define local_40 (*(int * *)(frame + 32))
#define local_48 (*(ulong *)(frame + 24))
#define local_50 (*(long *)(frame + 16))
#define str_020a577d (*(char (*)[1])(0x20f5f38U))
#define str_020aafac (*(char (*)[1])(0x20fc636U))
#define str_020aafc4 (*(char (*)[1])(0x20fc64eU))
ulong recovered_20c3c60(int *param_1,char *param_2,int *param_3,long param_4,int *param_5,
                       char param_6)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  byte *text;
  uchar uVar1;
  uint uVar2;
  int *out;
  ulong uVar3;
  void *out_00;
  ulonglong uVar4;
  byte bVar5;
  char *pcVar6;
  bool bVar7;

  if ((0xfffffffffffffffd < param_4 - 3U) && (*param_3 == 3)) {
    text = *(byte **)(param_3 + 4);
    if (text != (byte *)0x0) {
      if (param_4 == 2) {
        if ((param_3[0x10] != 3) || (pcVar6 = *(char **)(param_3 + 0x14), pcVar6 == (char *)0x0)) {
          uVar3 = 0;
          pf_varargs_205eb00__8__4_(param_1,param_2,str_020a577d,(ulonglong)param_2,2);
          goto LAB_020854ea;
        }
      }
      else {
        pcVar6 = &DAT_020a2c9d;
      }
      local_40 = param_5;
      local_38 = param_1;
      out = recovered_2000ad0(0x40);
      if (out != (int *)0x0) {
        recovered_2002110(out,0,0x40);
        out[10] = 0;
        out[0xb] = 0;
        out[0xc] = 0;
        out[0xd] = 0;
        out[0xe] = 0;
        out[0xf] = 0;
        uVar3 = recovered_2002e80((char *)text);
        out_00 = recovered_2000ad0(uVar3 + 1);
        if (out_00 == (void *)0x0) {
          out[2] = 0;
          out[3] = 0;
          recovered_2000bb0((void *)0x0);
          out[2] = 0;
          out[3] = 0;
          recovered_2000bb0(*(void **)(out + 4));
          out[4] = 0;
          out[5] = 0;
          out[6] = 0;
          out[7] = 0;
          out[8] = 0;
          out[9] = 0;
          recovered_2000bb0(*(void **)(out + 0xe));
          out[10] = 0;
          out[0xb] = 0;
          out[0xc] = 0;
          out[0xd] = 0;
          out[0xe] = 0;
          out[0xf] = 0;
          recovered_2000bb0(out);
        }
        else {
          if (uVar3 != 0) {
            recovered_2001410(out_00,text,uVar3);
          }
          *(undefined1 *)((long)out_00 + uVar3) = 0;
          *(void **)(out + 2) = out_00;
          if (param_6 == '\0') {
            uVar4 = recovered_2003450(pcVar6,'w');
            bVar5 = 1;
            bVar7 = true;
            if ((uVar4 == 0) && (uVar4 = recovered_2003450(pcVar6,'a'), uVar4 == 0)) {
              uVar4 = recovered_2003450(pcVar6,'+');
              bVar7 = uVar4 != 0;
            }
            uVar4 = recovered_2003450(pcVar6,'r');
            if (uVar4 == 0) {
              uVar4 = recovered_2003450(pcVar6,'+');
              bVar5 = bVar7 ^ 1U | uVar4 != 0;
            }
            uVar4 = recovered_2003450(pcVar6,'a');
            *(byte *)((long)out + 5) = bVar5;
            *(bool *)((long)out + 6) = bVar7;
            if (bVar5 != 0) {
              local_50 = 0;
              local_48 = 0;
              uVar2 = recovered_203eea0((long)text,&local_50,&local_48);
              uVar3 = (ulong)uVar2;
              if ((char)uVar2 == '\0') {
                if (bVar7 == false) {
                  recovered_20dec20((long)out);
                  recovered_2000bb0(out);
                  local_40[0] = 0;
                  local_40[1] = 0;
                  local_40[2] = 0;
                  local_40[4] = 0;
                  local_40[5] = 0;
                  local_40[6] = 0;
                  local_40[7] = 0;
                  local_40[8] = 0;
                  local_40[9] = 0;
                  local_40[10] = 0;
                  local_40[0xb] = 0;
                  local_40[0xc] = 0;
                  local_40[0xd] = 0;
                  local_40[0xe] = 0;
                  local_40[0xf] = 0;
                  uVar3 = uVar3 ^ 1;
                  goto LAB_020854ea;
                }
              }
              else {
                uVar1 = recovered_20df2a0((long)out,local_50,local_48);
                if (uVar1 == '\0') {
                  recovered_20dec20((long)out);
                  recovered_2000bb0(out);
                  pf_varargs_205eb00___(local_38,param_2,str_020aafc4);
                  uVar3 = uVar3 ^ 1;
                  goto LAB_020854ea;
                }
              }
            }
            if (((bVar7 == false) || (uVar4 == 0)) ||
               ((*(long *)(out + 4) == 0 ||
                (uVar1 = recovered_20a9490((long *)(out + 10),*(long *)(out + 4),*(long *)(out + 6))
                , uVar1 != '\0')))) goto LAB_020857e4;
          }
          else {
            local_50 = 0;
            local_48 = 0;
            uVar4 = recovered_2003450(pcVar6,'w');
            if (((uVar4 != 0) || (uVar4 = recovered_2003450(pcVar6,'a'), uVar4 != 0)) ||
               (uVar1 = recovered_20dec80(text,&local_50,&local_48), uVar1 == '\0')) {
              recovered_20dec20((long)out);
              recovered_2000bb0(out);
              local_40[0] = 0;
              local_40[1] = 0;
              local_40[2] = 0;
              local_40[4] = 0;
              local_40[5] = 0;
              local_40[6] = 0;
              local_40[7] = 0;
              local_40[8] = 0;
              local_40[9] = 0;
              local_40[10] = 0;
              local_40[0xb] = 0;
              local_40[0xc] = 0;
              local_40[0xd] = 0;
              local_40[0xe] = 0;
              local_40[0xf] = 0;
              uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
              goto LAB_020854ea;
            }
            *(undefined2 *)(out + 1) = 0x101;
            *(long *)(out + 4) = local_50;
            *(ulong *)(out + 6) = local_48;
LAB_020857e4:
            uVar1 = recovered_20df030(local_40,out);
            uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
            if (uVar1 != '\0') goto LAB_020854ea;
          }
          recovered_20dec20((long)out);
          recovered_2000bb0(out);
        }
      }
      uVar3 = 0;
      pf_varargs_205eb00___(local_38,param_2,str_020aafc4);
      goto LAB_020854ea;
    }
    pf_varargs_205eb00__8__4_(param_1,param_2,str_020a577d,(ulonglong)param_2,1);
  }
  uVar3 = 0;
  pf_varargs_205eb00__8_(param_1,param_2,str_020aafac,(ulonglong)param_2);
LAB_020854ea:
  return uVar3 & 0xffffffff;
}
