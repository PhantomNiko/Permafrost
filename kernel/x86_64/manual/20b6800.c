/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020d6adc (*(uint8_t volatile *)(0x226c4d4U))
#define str_020a44a2 (*(char (*)[1])(0x20f4c43U))
#define str_020a5763 (*(char (*)[1])(0x20f5f1eU))
#define str_020a577d (*(char (*)[1])(0x20f5f38U))
#define str_020a57b7 (*(char (*)[1])(0x20f5f03U))
#define str_020a63c0 (*(char (*)[1])(0x20f6dbaU))
#define str_020a63c6 (*(char (*)[1])(0x20f6dc0U))
ulong recovered_20b6800(int *param_1,char *param_2,int *param_3,long param_4,undefined4 *param_5,
                       ulong in_R9)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined1 uVar2;
  ulong uVar3;
  void *out;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  char cVar7;
  char *text;

  if (param_4 == 1) {
    if (param_3 == (int *)0x0) {
      pcVar5 = str_020a5763;
    }
    else {
      if ((*param_3 == 3) && (pcVar5 = *(char **)(param_3 + 4), pcVar5 != (char *)0x0)) {
        cVar1 = *pcVar5;
        text = str_020a44a2;
        pcVar4 = str_020a44a2;
        if (cVar1 == '\0') {
LAB_02079847:
          if (*pcVar4 == '\0') {
            uVar2 = 1;
LAB_02079863:
            DAT_020d6adc = uVar2;
            goto LAB_02079536;
          }
        }
        else {
          if (cVar1 == 'l') {
LAB_020795e8:
            cVar6 = pcVar5[1];
            if (cVar6 == '\0') {
              pcVar4 = str_020a63c0 + 1;
            }
            else {
              if (cVar6 != 'a') {
                cVar7 = cVar6 + -0x20;
                if (0x19 < (byte)(cVar6 + 0x9fU)) {
                  cVar7 = cVar6;
                }
                if (cVar7 != 'A') goto LAB_02079741;
              }
              cVar6 = pcVar5[2];
              if (cVar6 == '\0') {
                pcVar4 = str_020a63c0 + 2;
              }
              else {
                if (cVar6 != 't') {
                  cVar7 = cVar6 + -0x20;
                  if (0x19 < (byte)(cVar6 + 0x9fU)) {
                    cVar7 = cVar6;
                  }
                  if (cVar7 != 'T') goto LAB_02079741;
                }
                cVar6 = pcVar5[3];
                if (cVar6 == '\0') {
                  pcVar4 = str_020a63c0 + 3;
                }
                else {
                  if (cVar6 != 'i') {
                    cVar7 = cVar6 + -0x20;
                    if (0x19 < (byte)(cVar6 + 0x9fU)) {
                      cVar7 = cVar6;
                    }
                    if (cVar7 != 'I') goto LAB_02079741;
                  }
                  cVar6 = pcVar5[4];
                  if (cVar6 == '\0') {
                    pcVar4 = str_020a63c0 + 4;
                  }
                  else {
                    if (cVar6 != 'n') {
                      cVar7 = cVar6 + -0x20;
                      if (0x19 < (byte)(cVar6 + 0x9fU)) {
                        cVar7 = cVar6;
                      }
                      if (cVar7 != 'N') goto LAB_02079741;
                    }
                    if (pcVar5[5] != '\0') goto LAB_02079741;
                    pcVar4 = str_020a63c0 + 5;
                  }
                }
              }
            }
            if (*pcVar4 != '\0') goto LAB_02079741;
            text = str_020a63c0;
            uVar2 = 0;
            goto LAB_02079863;
          }
          cVar6 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar6 = cVar1;
          }
          if (cVar6 == 'L') goto LAB_020795e8;
LAB_02079741:
          if (cVar1 == 'r') {
LAB_02079763:
            cVar1 = pcVar5[1];
            if (cVar1 == '\0') {
              pcVar4 = str_020a44a2 + 1;
            }
            else {
              if (cVar1 != 'u') {
                cVar6 = cVar1 + -0x20;
                if (0x19 < (byte)(cVar1 + 0x9fU)) {
                  cVar6 = cVar1;
                }
                if (cVar6 != 'U') goto LAB_0207984c;
              }
              cVar1 = pcVar5[2];
              if (cVar1 == '\0') {
                pcVar4 = str_020a44a2 + 2;
              }
              else {
                if (cVar1 != 'n') {
                  cVar6 = cVar1 + -0x20;
                  if (0x19 < (byte)(cVar1 + 0x9fU)) {
                    cVar6 = cVar1;
                  }
                  if (cVar6 != 'N') goto LAB_0207984c;
                }
                cVar1 = pcVar5[3];
                if (cVar1 == '\0') {
                  pcVar4 = str_020a44a2 + 3;
                }
                else {
                  if (cVar1 != 'e') {
                    cVar6 = cVar1 + -0x20;
                    if (0x19 < (byte)(cVar1 + 0x9fU)) {
                      cVar6 = cVar1;
                    }
                    if (cVar6 != 'E') goto LAB_0207984c;
                  }
                  cVar1 = pcVar5[4];
                  if (cVar1 == '\0') {
                    pcVar4 = str_020a44a2 + 4;
                  }
                  else {
                    if (cVar1 != 's') {
                      cVar6 = cVar1 + -0x20;
                      if (0x19 < (byte)(cVar1 + 0x9fU)) {
                        cVar6 = cVar1;
                      }
                      if (cVar6 != 'S') goto LAB_0207984c;
                    }
                    if (pcVar5[5] != '\0') goto LAB_0207984c;
                    pcVar4 = str_020a44a2 + 5;
                  }
                }
              }
            }
            goto LAB_02079847;
          }
          cVar6 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar6 = cVar1;
          }
          if (cVar6 == 'R') goto LAB_02079763;
        }
LAB_0207984c:
        uVar3 = 0;
        pf_varargs_205eb00___(param_1,param_2,str_020a63c6);
        goto LAB_0207970b;
      }
      pcVar5 = str_020a577d;
    }
    uVar3 = 0;
    pf_varargs_205eb00__8__4_(param_1,param_2,pcVar5,(ulonglong)param_2,1);
  }
  else {
    if (param_4 != 0) {
      uVar3 = 0;
      pf_varargs_205eb00__8__4__8_(param_1,param_2,str_020a57b7,(ulonglong)param_2,1,0x20ec670U);
      goto LAB_0207970b;
    }
    text = str_020a63c0;
    cVar1 = DAT_020d6adc;
    if (cVar1 != '\0') {
      text = str_020a44a2;
    }
LAB_02079536:
    uVar3 = recovered_2002e80(text);
    if (param_5 != (undefined4 *)0x0) {
      out = recovered_2000ad0(uVar3 + 1);
      if (out != (void *)0x0) {
        if (uVar3 != 0) {
          recovered_2001410(out,text,uVar3);
        }
        *(undefined1 *)((long)out + uVar3) = 0;
        recovered_205ec00((undefined8 *)param_5);
        *param_5 = 3;
        *(void **)(param_5 + 4) = out;
        uVar3 = CONCAT71((int7)((ulong)param_5 >> 8),1);
        goto LAB_0207970b;
      }
    }
    uVar3 = 0;
  }
LAB_0207970b:
  return uVar3 & 0xffffffff;
}
