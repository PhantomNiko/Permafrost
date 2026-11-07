/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020a2972 (*(uint8_t *)(0x20fe023U))
#define DAT_020a3ac7 (*(uint8_t *)(0x20ecb5fU))
#define DAT_020a52b0 (*(uint8_t *)(0x20f5a50U))
#define DAT_020ab83f (*(uint8_t *)(0x20fe3a9U))
#define DAT_020ab840 (*(uint8_t *)(0x20fe3aaU))
#define DAT_020ab841 (*(uint8_t *)(0x20fe3abU))
#define DAT_020ab842 (*(uint8_t *)(0x20fe3acU))
#define DAT_020ab843 (*(char *)(0x20fe3adU))
#define DAT_020ab844 (*(char *)(0x20fe3aeU))
#define DAT_020ab845 (*(char *)(0x20fe3afU))
#define DAT_020ab846 (*(char *)(0x20fe3b0U))
#define DAT_020ab847 (*(uint8_t *)(0x20fe3b1U))
#define DAT_020ab848 (*(uint8_t *)(0x20fe3b2U))
#define DAT_020ab849 (*(uint8_t *)(0x20fe3b3U))
#define DAT_020ab84a (*(uint8_t *)(0x20fe3b4U))
#define DAT_020ab84b (*(uint8_t *)(0x20fe3b5U))
#define DAT_020ab84c (*(uint8_t *)(0x20fe3b6U))
#define DAT_020ab851 (*(uint8_t *)(0x20fe3bbU))
#define DAT_020ab855 (*(uint8_t *)(0x20fe3bfU))
#define DAT_020ab85c (*(uint8_t *)(0x20fe3c6U))
#define DAT_020ab863 (*(uint8_t *)(0x20fe3cdU))
#define DAT_020de620 (*(uint64_t volatile *)(0x226c270U))
#define DAT_020de628 (*(uint64_t volatile *)(0x226c278U))
#define abStackY_ea8 (*(byte (*)[128])(frame + 24))
#define abStack_219 (*(byte (*)[321])(frame + 3239))
#define in_stack_fffffffffffff1d8 (*(ulong ****** *)(frame + 152))
#define in_stack_fffffffffffff1e8 (*(undefined8 *)(frame + 168))
#define in_stack_fffffffffffff1f0 (*(undefined8 *)(frame + 176))
#define in_stack_fffffffffffff1f8 (*(undefined8 *)(frame + 184))
#define local_38 (*(ulong *)(frame + 3720))
#define local_618 (*(ulong (*)[127])(frame + 2216))
#define local_74 (*(char *)(frame + 3660))
#define local_78 (*(byte (*)[4])(frame + 3656))
#define local_80 (*(undefined8 *)(frame + 3648))
#define local_90 (*(undefined8 *)(frame + 3632))
#define local_a0 (*(undefined8 *)(frame + 3616))
#define local_b0 (*(undefined8 *)(frame + 3600))
#define local_c0 (*(undefined8 *)(frame + 3584))
#define local_d0 (*(undefined8 *)(frame + 3568))
#define local_d8 (*(void * *)(frame + 3560))
#define str_020a24dc (*(char (*)[1])(0x20ec389U))
#define str_020ab869 (*(char (*)[1])(0x20fe3d3U))
#define str_020ab874 (*(char (*)[1])(0x20fe3deU))
#define str_020ab88e (*(char (*)[1])(0x20fe3f8U))
#define str_020ab8a1 (*(char (*)[1])(0x20fe40bU))
#define str_020ab8aa (*(char (*)[1])(0x20fe414U))
#define str_020ab8bf (*(char (*)[1])(0x20fe429U))
#define str_020ab8d2 (*(char (*)[1])(0x20fe43cU))
#define str_020ab8f7 (*(char (*)[1])(0x20fe461U))
#define str_020ab901 (*(char (*)[1])(0x20fe46bU))
#define str_020ab91d (*(char (*)[1])(0x20fe487U))
#define uStack_88 (*(undefined8 *)(frame + 3640))
#define uStack_98 (*(undefined8 *)(frame + 3624))
#define uStack_a8 (*(undefined8 *)(frame + 3608))
#define uStack_b8 (*(undefined8 *)(frame + 3592))
#define uStack_c8 (*(undefined8 *)(frame + 3576))
uint recovered_2064910(undefined1 *param_1,ulong in_R8,ulong in_R9,undefined8 param_4,
                      ulong ************param_5,ulong ******param_6,ulong ******param_7,
                      undefined8 param_8,undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  unsigned char frame[3808] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong *******pppppppuVar2;
  ulong *******pppppppuVar3;
  byte bVar4;
  uchar uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  byte bVar13;
  undefined1 *puVar14;
  undefined1 *extraout_RDX = 0;
  ulong *******in_R9_00;
  undefined1 *extraout_RDX_00 = 0;
  undefined1 *extraout_RDX_01 = 0;
  undefined1 *extraout_RDX_02 = 0;
  long lVar15;
  byte *text;
  ulong *puVar16;
  ulong ******ppppppuVar17;
  ulong ******ppppppuVar18;
  char *pcVar19;
  ulong *puVar20;
  byte *text_00;
  long lVar21;
  char *pcVar22;
  undefined4 extraout_XMM0_Da = 0;
  undefined4 extraout_XMM0_Db = 0;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  if (param_1 == (undefined1 *)0x0) {
    param_1 = &DAT_020a259c;
  }
  pf_varargs_20039e0__8_((char *)(abStack_219 + 1),0x140,&DAT_020a25e3,(ulonglong)param_1);
  for (lVar15 = 0; (abStack_219[lVar15 + 1] - 9 < 5 || (abStack_219[lVar15 + 1] == 0x20));
      lVar15 = lVar15 + 1) {
  }
  if (lVar15 != 0) {
    uVar8 = recovered_2002e80((char *)(abStack_219 + lVar15 + 1));
    recovered_2001850(abStack_219 + 1,abStack_219 + lVar15 + 1,uVar8 + 1);
  }
  for (uVar8 = recovered_2002e80((char *)(abStack_219 + 1));
      (uVar8 != 0 && ((abStack_219[uVar8] - 9 < 5 || (abStack_219[uVar8] == 0x20))));
      uVar8 = uVar8 - 1) {
    abStack_219[uVar8] = 0;
  }
  if (abStack_219[1] == 0) {
    return 0;
  }
  bVar4 = abStack_219[1] - 0x20;
  if (0x19 < (byte)(abStack_219[1] + 0x9f)) {
    bVar4 = abStack_219[1];
  }
  if (bVar4 == 0x52) {
    cVar1 = abStack_219[2] + -0x20;
    if (0x19 < (byte)(abStack_219[2] + 0x9f)) {
      cVar1 = abStack_219[2];
    }
    if (cVar1 == 'E') {
      cVar1 = abStack_219[3] + -0x20;
      if (0x19 < (byte)(abStack_219[3] + 0x9f)) {
        cVar1 = abStack_219[3];
      }
      if (cVar1 == 'M') {
        return 0;
      }
    }
  }
  uVar8 = 0;
  while ((0x2c < abStack_219[1] || ((0x100100003e01U >> ((ulong)abStack_219[1] & 0x3f) & 1) == 0)))
  {
    if (uVar8 + 1 < 0x40) {
      bVar4 = abStack_219[1] - 0x20;
      if (0x19 < (byte)(abStack_219[1] + 0x9f)) {
        bVar4 = abStack_219[1];
      }
      local_78[uVar8] = bVar4;
    }
    abStack_219[1] = abStack_219[uVar8 + 2];
    uVar8 = uVar8 + 1;
  }
  uVar10 = 0x3f;
  if (uVar8 < 0x3f) {
    uVar10 = uVar8;
  }
  local_78[uVar10] = 0;
  text_00 = abStack_219 + uVar10 + 1;
  for (lVar15 = 0; (text_00[lVar15] - 9 < 5 || (text_00[lVar15] == 0x20)); lVar15 = lVar15 + 1) {
  }
  uVar10 = 0x3f;
  if (uVar8 < 0x3f) {
    uVar10 = uVar8;
  }
  if (lVar15 != 0) {
    uVar9 = recovered_2002e80((char *)(abStack_219 + lVar15 + uVar10 + 1));
    recovered_2001850(text_00,abStack_219 + lVar15 + uVar10 + 1,uVar9 + 1);
  }
  uVar10 = recovered_2002e80((char *)text_00);
  if (uVar10 != 0) {
    uVar9 = 0x3f;
    if (uVar8 < 0x3f) {
      uVar9 = uVar8;
    }
    do {
      if ((4 < abStack_219[uVar10 + uVar9] - 9) && (abStack_219[uVar10 + uVar9] != 0x20)) break;
      abStack_219[uVar10 + uVar9] = 0;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar8 = 0;
  bVar4 = *text_00;
  if (bVar4 != 0) {
LAB_0204375d:
    do {
      if (bVar4 < 0x20) {
        if (bVar4 == 9) {
LAB_02043755:
          bVar4 = text_00[1];
          text_00 = text_00 + 1;
          goto LAB_0204375d;
        }
        if (bVar4 == 0) break;
      }
      else if ((bVar4 == 0x2c) || (bVar4 == 0x20)) goto LAB_02043755;
      if (7 < uVar8) {
        uVar8 = 0;
        pcVar19 = str_020ab874;
        while( true ) {
          do {
            pcVar22 = pcVar19 + 1;
            cVar1 = *pcVar19;
            pcVar19 = pcVar22;
          } while (cVar1 == '\r');
          if (cVar1 == '\0') break;
          if (cVar1 == '\n') {
            recovered_20c6270((undefined1 *)local_618,uVar8,1,'\x01');
            uVar8 = 0;
          }
          else if (uVar8 + 1 < 0x400) {
            *(char *)((long)local_618 + uVar8) = cVar1;
            uVar8 = uVar8 + 1;
          }
        }
        recovered_20c6270((undefined1 *)local_618,uVar8,1,'\x01');
        return 1;
      }
      lVar15 = uVar8 * 0x100;
      text = abStackY_ea8 + lVar15 + 0x90;
      if (bVar4 == 0x2c) {
        uVar10 = 0;
      }
      else {
        bVar13 = 0;
        uVar10 = 0;
        ppppppuVar17 = (ulong ******)0x0;
        do {
          if (bVar4 == 0x27) {
LAB_020437be:
            param_5 = (ulong ************)CONCAT71((int7)((ulong)param_5 >> 8),bVar13 != bVar4);
            ppppppuVar18 = (ulong ******)(ulong)(byte)((byte)ppppppuVar17 ^ 1 | bVar13 != bVar4);
            if (ppppppuVar17 == (ulong ******)0x0) {
              bVar13 = bVar4;
            }
            param_6 = ppppppuVar18;
          }
          else {
            ppppppuVar18 = ppppppuVar17;
            if (bVar4 == 0x22) goto LAB_020437be;
          }
          if (uVar10 + 1 < 0x100) {
            text[uVar10] = bVar4;
            uVar10 = uVar10 + 1;
          }
          bVar4 = text_00[1];
          text_00 = text_00 + 1;
        } while ((bVar4 != 0) &&
                (ppppppuVar17 = ppppppuVar18, bVar4 != 0x2c || ppppppuVar18 != (ulong ******)0x0));
      }
      text[uVar10] = 0;
      for (lVar21 = 0; (text[lVar21] - 9 < 5 || (text[lVar21] == 0x20)); lVar21 = lVar21 + 1) {
      }
      if (lVar21 != 0) {
        uVar10 = recovered_2002e80((char *)(text + lVar21));
        recovered_2001850(text,text + lVar21,uVar10 + 1);
      }
      uVar10 = recovered_2002e80((char *)text);
      while ((uVar10 != 0 &&
             ((abStackY_ea8[uVar10 + lVar15 + 0x8f] - 9 < 5 ||
              (abStackY_ea8[uVar10 + lVar15 + 0x8f] == 0x20))))) {
        abStackY_ea8[uVar10 + lVar15 + 0x8f] = 0;
        uVar10 = uVar10 - 1;
      }
      uVar8 = uVar8 + 1;
      bVar4 = text_00[*text_00 == 0x2c];
      text_00 = text_00 + (*text_00 == 0x2c);
    } while (bVar4 != 0);
  }
  cVar1 = DAT_020ab843;
  if (local_78[0] == 0) {
joined_r0x02043c76:
    if (cVar1 != '\0') {
      if (local_78[0] != 0) goto LAB_02043aac;
      pcVar22 = &DAT_020ab847;
      pcVar19 = (char *)0x0;
      goto LAB_02043d07;
    }
    uVar8 = DAT_020de628;
    if (uVar8 != 0) {
      lVar15 = DAT_020de620;
      uVar10 = 0;
      do {
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          recovered_2000bb0(*(void **)(lVar15 + uVar10 * 8));
          *(undefined8 *)(lVar15 + uVar10 * 8) = 0;
          lVar15 = DAT_020de620;
          uVar8 = DAT_020de628;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar8);
    }
    DAT_020de628 = 0;
    uVar8 = 0;
    pcVar19 = &DAT_020a2972;
    while( true ) {
      do {
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 == '\r');
      if (cVar1 == '\0') break;
      if (cVar1 == '\n') {
        recovered_20c6270((undefined1 *)local_618,uVar8,1,'\x01');
        uVar8 = 0;
      }
      else if (uVar8 + 1 < 0x400) {
        *(char *)((long)local_618 + uVar8) = cVar1;
        uVar8 = uVar8 + 1;
      }
    }
LAB_02043ce5:
    recovered_20c6270((undefined1 *)local_618,uVar8,1,'\x01');
    goto LAB_02044079;
  }
  bVar4 = local_78[0] - 0x20;
  if (0x19 < (byte)(local_78[0] + 0x9f)) {
    bVar4 = local_78[0];
  }
  if (bVar4 == 0x4e) {
    cVar1 = DAT_020ab844;
    if (local_78[1] != 0) {
      bVar4 = local_78[1] - 0x20;
      if (0x19 < (byte)(local_78[1] + 0x9f)) {
        bVar4 = local_78[1];
      }
      if (bVar4 != 0x45) goto LAB_02043aac;
      cVar1 = DAT_020ab845;
      if (local_78[2] != 0) {
        bVar4 = local_78[2] - 0x20;
        if (0x19 < (byte)(local_78[2] + 0x9f)) {
          bVar4 = local_78[2];
        }
        if ((bVar4 != 0x57) || (cVar1 = DAT_020ab846, local_78[3] != 0)) goto LAB_02043aac;
      }
    }
    goto joined_r0x02043c76;
  }
  if (bVar4 == 0x4c) {
    if (local_78[1] == 0) {
      pcVar19 = &DAT_020ab83f;
    }
    else {
      param_5 = (ulong ************)(ulong)(local_78[1] - 0x20);
      bVar4 = (byte)(local_78[1] - 0x20);
      if (0x19 < (byte)(local_78[1] + 0x9f)) {
        bVar4 = local_78[1];
      }
      if (bVar4 != 0x49) goto LAB_02043aac;
      if (local_78[2] == 0) {
        pcVar19 = &DAT_020ab840;
      }
      else {
        param_5 = (ulong ************)(ulong)(local_78[2] - 0x20);
        bVar4 = (byte)(local_78[2] - 0x20);
        if (0x19 < (byte)(local_78[2] + 0x9f)) {
          bVar4 = local_78[2];
        }
        if (bVar4 != 0x53) goto LAB_02043aac;
        if (local_78[3] == 0) {
          pcVar19 = &DAT_020ab841;
        }
        else {
          param_5 = (ulong ************)(ulong)(local_78[3] - 0x20);
          bVar4 = (byte)(local_78[3] - 0x20);
          if (0x19 < (byte)(local_78[3] + 0x9f)) {
            bVar4 = local_78[3];
          }
          if ((bVar4 != 0x54) || (local_74 != '\0')) goto LAB_02043aac;
          pcVar19 = &DAT_020ab842;
        }
      }
    }
    if (*pcVar19 != '\0') goto LAB_02043aac;
    lVar15 = DAT_020de628;
    if (lVar15 != 0) {
      uVar8 = 0;
      do {
        lVar15 = DAT_020de620;
        puVar14 = *(undefined1 **)(lVar15 + uVar8 * 8);
        uVar8 = uVar8 + 1;
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = &DAT_020a259c;
        }
        pf_varargs_2039720__4__8_(str_020ab91d,(uint)uVar8,(ulonglong)puVar14);
        uVar10 = DAT_020de628;
      } while (uVar8 < uVar10);
      goto LAB_02044079;
    }
    uVar8 = 0;
    pcVar19 = &DAT_020a3ac7;
    while( true ) {
      do {
        pcVar22 = pcVar19 + 1;
        cVar1 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar1 == '\r');
      if (cVar1 == '\0') break;
      if (cVar1 == '\n') {
        recovered_20c6270((undefined1 *)local_618,uVar8,1,'\x01');
        uVar8 = 0;
      }
      else if (uVar8 + 1 < 0x400) {
        *(char *)((long)local_618 + uVar8) = cVar1;
        uVar8 = uVar8 + 1;
      }
    }
    goto LAB_02043ce5;
  }
LAB_02043aac:
  pcVar19 = (char *)(ulong)(byte)(local_78[0] - 0x20);
  if ((byte)(local_78[0] + 0x9f) < 0x1a) {
    local_78[0] = local_78[0] - 0x20;
  }
  if (local_78[0] == 0x53) {
    if (local_78[1] == 0) {
      pcVar22 = &DAT_020ab848;
    }
    else {
      bVar4 = local_78[1] - 0x20;
      if (0x19 < (byte)(local_78[1] + 0x9f)) {
        bVar4 = local_78[1];
      }
      pcVar19 = (char *)(ulong)bVar4;
      if (bVar4 != 0x41) goto LAB_02043d10;
      if (local_78[2] == 0) {
        pcVar22 = &DAT_020ab849;
      }
      else {
        bVar4 = local_78[2] - 0x20;
        if (0x19 < (byte)(local_78[2] + 0x9f)) {
          bVar4 = local_78[2];
        }
        pcVar19 = (char *)(ulong)bVar4;
        if (bVar4 != 0x56) goto LAB_02043d10;
        if (local_78[3] == 0) {
          pcVar22 = &DAT_020ab84a;
        }
        else {
          bVar4 = local_78[3] - 0x20;
          if (0x19 < (byte)(local_78[3] + 0x9f)) {
            bVar4 = local_78[3];
          }
          pcVar19 = (char *)(ulong)bVar4;
          if ((bVar4 != 0x45) || (local_74 != '\0')) goto LAB_02043d10;
          pcVar22 = &DAT_020ab84b;
        }
      }
    }
LAB_02043d07:
    if (*pcVar22 != '\0') goto LAB_02043d10;
    if (uVar8 == 0) {
      pf_varargs_20039e0__8_((char *)local_618,0xf1,&DAT_020a25e3,0x20ec37dU);
    }
    else {
      recovered_20a9540((long)(abStackY_ea8 + 0x90),(long)local_618,(byte *)0xf1);
    }
    local_d8 = (void *)0x0;
    local_38 = 0;
    uVar5 = recovered_20e74d0((long *)&local_d8,(long *)&local_38);
    if (uVar5 == '\0') {
LAB_02044085:
      pcVar19 = str_020ab88e;
      goto LAB_0204408c;
    }
    uVar6 = recovered_203f020((long)local_618,(long)local_d8,local_38);
    recovered_2000bb0(local_d8);
    if ((char)uVar6 == '\0') goto LAB_02044085;
    puVar11 = local_618;
    puVar20 = local_618;
    do {
      do {
        puVar16 = puVar11;
        puVar11 = (ulong *)((long)puVar20 + 1);
        cVar1 = (char)*puVar20;
        puVar20 = puVar11;
      } while (cVar1 == '/');
    } while ((cVar1 == '\\') || (puVar11 = puVar16, cVar1 != '\0'));
    pcVar19 = str_020ab8a1;
LAB_0204406f:
    pf_varargs_2039720__8_(pcVar19,(ulonglong)puVar16);
LAB_02044079:
    recovered_203e680();
    return 0;
  }
LAB_02043d10:
  uVar10 = uVar8;
  uVar6 = recovered_206eb80((char *)local_78,&DAT_020ab855);
  if ((char)uVar6 == '\0') {
    uVar6 = recovered_206eb80((char *)local_78,&DAT_020ab84c);
    if ((char)uVar6 != '\0') {
      if (uVar8 == 0) {
        pf_varargs_20039e0__8_((char *)local_618,0xf1,&DAT_020a25e3,0x20ec37dU);
      }
      else {
        recovered_20a9540((long)(abStackY_ea8 + 0x90),(long)local_618,(byte *)0xf1);
      }
      local_d8 = (void *)0x0;
      local_38 = 0;
      uVar6 = recovered_203eea0((long)local_618,&local_d8,&local_38);
      if ((char)uVar6 != '\0') {
        if ((3 < local_38) && (iVar7 = recovered_2002a00(local_d8,&DAT_020a52b0,4), iVar7 == 0)) {
          pcVar19 = str_020ab8d2;
          goto LAB_0204408c;
        }
        uVar5 = recovered_2095e60((long)local_d8,local_38);
        if (uVar5 != '\0') {
          puVar11 = local_618;
          puVar20 = local_618;
          do {
            do {
              puVar16 = puVar11;
              puVar11 = (ulong *)((long)puVar20 + 1);
              cVar1 = (char)*puVar20;
              puVar20 = puVar11;
            } while (cVar1 == '/');
          } while ((cVar1 == '\\') || (puVar11 = puVar16, cVar1 != '\0'));
          pcVar19 = str_020ab8f7;
          goto LAB_0204406f;
        }
      }
      pcVar19 = str_020ab8bf;
LAB_0204408c:
      recovered_2057db0(pcVar19);
      return 1;
    }
    uVar6 = recovered_206eb80((char *)local_78,&DAT_020ab85c);
    if ((char)uVar6 == '\0') {
      uVar6 = recovered_206eb80((char *)local_78,&DAT_020ab851);
      if ((char)uVar6 == '\0') {
        uVar6 = recovered_206eb80((char *)local_78,&DAT_020ab863);
        if ((char)uVar6 != '\0') {
          if (uVar8 == 0) {
            pcVar19 = str_020a24dc;
            puVar20 = (ulong *)0xf1;
            pf_varargs_20039e0__8_((char *)local_618,0xf1,&DAT_020a25e3,0x20ec389U);
            puVar14 = extraout_RDX_02;
          }
          else {
            puVar20 = local_618;
            recovered_20a9540((long)(abStackY_ea8 + 0x90),(long)puVar20,(byte *)0xf1);
            puVar14 = extraout_RDX_00;
          }
          uVar6 = recovered_20e6f60((long)local_618,puVar20,puVar14,(ulong *******)pcVar19);
          recovered_203e680();
          return (uint)(byte)((byte)uVar6 ^ 1);
        }
        uVar6 = recovered_206eb80((char *)local_78,str_020ab869);
        if ((char)uVar6 == '\0') {
          pf_varargs_2039720__8_(str_020ab901,(ulonglong)local_78);
          recovered_203e680();
          return 1;
        }
        uVar12 = recovered_20e8a90(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),in_XMM1_Qa,in_XMM2_Qa
                                   ,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa);
        return (uint)uVar12;
      }
      pppppppuVar2 = (ulong *******)DAT_020de620;
      pppppppuVar3 = (ulong *******)DAT_020de628;
      recovered_2096360(pppppppuVar2,pppppppuVar3,in_R9_00,pcVar19,param_5,param_6,
                        in_stack_fffffffffffff1d8,uVar10,in_stack_fffffffffffff1e8,
                        in_stack_fffffffffffff1f0,in_stack_fffffffffffff1f8);
      goto LAB_02044079;
    }
    if (uVar8 == 0) {
      pcVar19 = str_020a24dc;
      puVar20 = (ulong *)0xf1;
      pf_varargs_20039e0__8_((char *)local_618,0xf1,&DAT_020a25e3,0x20ec389U);
      puVar14 = extraout_RDX_01;
    }
    else {
      puVar20 = local_618;
      recovered_20a9540((long)(abStackY_ea8 + 0x90),(long)puVar20,(byte *)0xf1);
      puVar14 = extraout_RDX;
    }
    uVar5 = recovered_20e8930((long)local_618,puVar20,puVar14,(ulong *)pcVar19);
    uVar6 = 1;
    if (uVar5 == '\0') goto LAB_0204414c;
    puVar11 = local_618;
    puVar20 = local_618;
    do {
      do {
        puVar16 = puVar11;
        puVar11 = (ulong *)((long)puVar20 + 1);
        cVar1 = (char)*puVar20;
        puVar20 = puVar11;
      } while (cVar1 == '/');
    } while ((cVar1 == '\\') || (puVar11 = puVar16, cVar1 != '\0'));
    pcVar19 = str_020ab8f7;
LAB_0204413f:
    uVar6 = 0;
    pf_varargs_2039720__8_(pcVar19,(ulonglong)puVar16);
  }
  else {
    if (uVar8 == 0) {
      pf_varargs_20039e0__8_((char *)local_618,0xf1,&DAT_020a25e3,0x20ec389U);
    }
    else {
      recovered_20a9540((long)(abStackY_ea8 + 0x90),(long)local_618,(byte *)0xf1);
    }
    local_d8 = (void *)CONCAT62(PF_PART6(local_d8, 2),1);
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    lVar15 = DAT_020de620;
    lVar21 = DAT_020de628;
    uVar5 = recovered_20e7640(lVar15,lVar21,&local_d8);
    if (uVar5 != '\0') {
      uVar6 = recovered_20e7fb0((undefined2 *)&local_d8,(long)local_618);
      recovered_20c0290((undefined2 *)&local_d8);
      if ((char)uVar6 != '\0') {
        puVar11 = local_618;
        puVar20 = local_618;
        do {
          do {
            puVar16 = puVar11;
            puVar11 = (ulong *)((long)puVar20 + 1);
            cVar1 = (char)*puVar20;
            puVar20 = puVar11;
          } while (cVar1 == '/');
        } while ((cVar1 == '\\') || (puVar11 = puVar16, cVar1 != '\0'));
        pcVar19 = str_020ab8a1;
        goto LAB_0204413f;
      }
    }
    recovered_2057db0(str_020ab8aa);
    uVar6 = 1;
  }
LAB_0204414c:
  recovered_203e680();
  return uVar6;
}
