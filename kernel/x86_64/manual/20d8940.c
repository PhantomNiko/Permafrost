/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020a26f3 (*(uint8_t *)(0x20ec517U))
#define DAT_020a35bc (*(uint8_t *)(0x20eda40U))
#define DAT_020a35bd (*(uint8_t *)(0x20eda41U))
#define DAT_020a35be (*(uint8_t *)(0x20eda42U))
#define DAT_020a35bf (*(uint8_t *)(0x20eda43U))
#define DAT_020a35c0 (*(uint8_t *)(0x20eda44U))
#define DAT_020a35c1 (*(uint8_t *)(0x20eda45U))
#define DAT_020a5d98 (*(uint8_t *)(0x20f3121U))
#define DAT_020a8d56 (*(uint8_t *)(0x20fa6c9U))
#define DAT_020adde0 (*(uint32_t volatile *)(0x2102800U))
#define DAT_020adf04 (*(uint8_t volatile *)(0x2107094U))
#define DAT_020e38c0 (*(uint64_t volatile *)(0x22740e0U))
#define DAT_020e38c8 (*(uint64_t volatile *)(0x22740e8U))
#define DAT_020e38e0 (*(uint64_t volatile *)(0x22694e8U))
#define local_1a8 (*(char (*)[256])(frame + 1800))
#define local_1ac (*(int *)(frame + 1796))
#define local_1ad (*(undefined1 *)(frame + 1795))
#define local_1ee (*(char (*)[65])(frame + 1730))
#define local_20e (*(char (*)[32])(frame + 1698))
#define local_34 (*(uint *)(frame + 2172))
#define local_38 (*(uint *)(frame + 2168))
#define local_40 (*(char * *)(frame + 2160))
#define local_75f (*(char (*)[1361])(frame + 337))
#define local_850 (*(char (*)[241])(frame + 96))
#define local_890 (*(char (*)[64])(frame + 32))
#define local_894 (*(undefined4 *)(frame + 28))
#define local_898 (*(char (*)[4])(frame + 24))
#define local_a8 (*(char (*)[104])(frame + 2056))
#define str_020a2ead (*(char (*)[1])(0x20ecff6U))
#define str_020a8c3b (*(char (*)[1])(0x20fa5abU))
#define str_020a8c4f (*(char (*)[1])(0x20fa5bfU))
#define str_020a8c6f (*(char (*)[1])(0x20fa5dfU))
#define str_020a8c84 (*(char (*)[1])(0x20fa5f4U))
#define str_020a8c93 (*(char (*)[1])(0x20fa603U))
#define str_020a8cab (*(char (*)[1])(0x20fa61bU))
#define str_020a8ccd (*(char (*)[1])(0x20fa63dU))
#define str_020a8cf3 (*(char (*)[1])(0x20fa663U))
#define str_020a8d10 (*(char (*)[1])(0x20fa680U))
uchar recovered_20d8940(long param_1,undefined1 *param_2,char *param_3,long param_4,
                       undefined1 *param_5)

{
  unsigned char frame[2256] __attribute__((aligned(16))) = {0};

  char cVar1;
  long lVar2;
  undefined8 uVar3;
  uchar uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulonglong uVar11;
  undefined1 *vararg0;
  void *out;
  char cVar12;
  undefined8 in_R9;
  char *pcVar13;

  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  if ((param_1 == 0) || (recovered_20411d0(param_1,local_898), local_898[0] == '\0')) {
    if (param_4 == 0) {
      return '\0';
    }
    pcVar13 = str_020a8c3b;
    goto LAB_02094808;
  }
  local_40 = param_3;
  pf_varargs_20039e0__8_(local_1a8,0xf2,&DAT_020a5d98,(ulonglong)local_898);
  uVar8 = recovered_2002e80(local_1a8);
  pcVar13 = &DAT_020a35bc;
  uVar9 = recovered_2002e80(&DAT_020a35bc);
  if (uVar9 <= uVar8) {
    cVar1 = local_1a8[uVar8 - uVar9];
    if (cVar1 != '\0') {
      cVar12 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar12 = cVar1;
      }
      if (cVar12 != '.') goto LAB_020947f1;
      lVar10 = -uVar9;
      cVar1 = local_1a8[lVar10 + uVar8 + 1];
      if (cVar1 == '\0') {
        pcVar13 = &DAT_020a35bd;
      }
      else {
        cVar12 = cVar1 + -0x20;
        if (0x19 < (byte)(cVar1 + 0x9fU)) {
          cVar12 = cVar1;
        }
        if (cVar12 != 'K') goto LAB_020947f1;
        cVar1 = local_1a8[lVar10 + uVar8 + 2];
        if (cVar1 == '\0') {
          pcVar13 = &DAT_020a35be;
        }
        else {
          cVar12 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar12 = cVar1;
          }
          if (cVar12 != 'E') goto LAB_020947f1;
          cVar1 = local_1a8[lVar10 + uVar8 + 3];
          if (cVar1 == '\0') {
            pcVar13 = &DAT_020a35bf;
          }
          else {
            cVar12 = cVar1 + -0x20;
            if (0x19 < (byte)(cVar1 + 0x9fU)) {
              cVar12 = cVar1;
            }
            if (cVar12 != 'X') goto LAB_020947f1;
            cVar1 = local_1a8[lVar10 + uVar8 + 4];
            if (cVar1 == '\0') {
              pcVar13 = &DAT_020a35c0;
            }
            else {
              cVar12 = cVar1 + -0x20;
              if (0x19 < (byte)(cVar1 + 0x9fU)) {
                cVar12 = cVar1;
              }
              if ((cVar12 != 'T') || (local_1a8[lVar10 + uVar8 + 5] != '\0')) goto LAB_020947f1;
              pcVar13 = &DAT_020a35c1;
            }
          }
        }
      }
    }
    if (*pcVar13 == '\0') {
      uVar4 = recovered_207a120(local_1a8,0x1000007,1,param_4);
      if (uVar4 == '\0') {
        return '\0';
      }
      local_38 = 0;
      local_34 = 0;
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = 0;
      }
      if (local_1a8[0] == '\0') {
        if (param_4 == 0) {
          return '\0';
        }
        pcVar13 = str_020a8c6f;
        goto LAB_02094808;
      }
      lVar10 = DAT_020e38c0;
      if (lVar10 != 0) {
        lVar10 = 0x48;
        uVar8 = 0;
        do {
          lVar2 = DAT_020e38c8;
          iVar6 = recovered_2002eb0((char *)(lVar2 + lVar10),local_1a8);
          if (iVar6 == 0) {
            if (-1 < (int)(uint)uVar8) {
              uVar3 = DAT_020e38c8;
              uVar3 = DAT_020e38c8;
              lVar10 = DAT_020e38c8;
              recovered_20db970((ulong)((uint)uVar8 & 0x7fffffff) * 0x6f0 + lVar10,str_020a8c84,
                                in_R9);
              return '\x01';
            }
            uVar9 = DAT_020e38c0;
            break;
          }
          uVar8 = uVar8 + 1;
          uVar9 = DAT_020e38c0;
          lVar10 = lVar10 + 0x6f0;
        } while (uVar8 < uVar9);
        if (0x3f < uVar9) {
          if (param_4 == 0) {
            return '\0';
          }
          pcVar13 = str_020a8c93;
          goto LAB_02094808;
        }
      }
      uVar11 = recovered_207a600((long)local_1a8);
      if (uVar11 == 0) {
        if (param_4 == 0) {
          return '\0';
        }
        pcVar13 = str_020a8cab;
        goto LAB_02094808;
      }
      recovered_2002110(local_898,0,0x6f0);
      local_898[0] = '\x01';
      local_894 = DAT_020adde0;
      vararg0 = &DAT_020a259c;
      if (param_2 != (undefined1 *)0x0) {
        vararg0 = param_2;
      }
      pf_varargs_20039e0__8_(local_890,0x40,&DAT_020a25e3,(ulonglong)vararg0);
      pf_varargs_20039e0__8_(local_850,0xf1,&DAT_020a25e3,(ulonglong)local_1a8);
      if ((local_40 == (char *)0x0) || (*local_40 == '\0')) {
        uVar4 = recovered_20dbad0((long)local_1a8,local_75f);
        if (uVar4 == '\0') {
          iVar6 = PF_PART4(DAT_020e38c0, 0);
          pf_varargs_20039e0__4_(local_75f,0xf1,str_020a8ccd,iVar6 + 1);
        }
      }
      else {
        if (*local_40 == '/') {
          pcVar13 = &DAT_020a25e3;
        }
        else {
          pcVar13 = &DAT_020a5d98;
        }
        pf_varargs_20039e0__8_(local_75f,0xf1,pcVar13,(ulonglong)local_40);
      }
      uVar7 = recovered_207baa0(uVar11,0x20fa648U,&local_38);
      bVar5 = 1;
      if ((char)uVar7 == '\0') {
        iVar6 = pf_varargs_20039e0__8_(local_a8,0x60,&DAT_020a8d56,0x20fa648U);
        if (0 < iVar6) {
          uVar7 = recovered_207baa0(uVar11,(long)local_a8,&local_38);
          bVar5 = (byte)uVar7;
          goto LAB_02094a83;
        }
LAB_02094ae6:
        lVar10 = 0;
      }
      else {
LAB_02094a83:
        if (((local_38 != 0 & bVar5) != 1) || (lVar10 = (*(code *)(ulong)local_38)(), lVar10 == 0))
        goto LAB_02094ae6;
        if (*(ulonglong *)(lVar10 + 0x10) != 0) {
          pf_varargs_20039e0__8_(local_20e,0x20,&DAT_020a25e3,*(ulonglong *)(lVar10 + 0x10));
        }
        if (*(ulonglong *)(lVar10 + 0x18) != 0) {
          pf_varargs_20039e0__8_(local_1ee,0x40,&DAT_020a25e3,*(ulonglong *)(lVar10 + 0x18));
        }
      }
      if (local_20e[0] == '\0') {
        pf_varargs_20039e0___(local_20e,0x20,str_020a8cf3);
      }
      if (local_1ee[0] == '\0') {
        pf_varargs_20039e0___(local_1ee,0x40,str_020a2ead);
      }
      uVar7 = recovered_207baa0(uVar11,0x20fa66bU,&local_34);
      bVar5 = 1;
      if ((char)uVar7 == '\0') {
        iVar6 = pf_varargs_20039e0__8_(local_a8,0x60,&DAT_020a8d56,0x20fa66bU);
        if (iVar6 < 1) goto LAB_02094bc9;
        uVar7 = recovered_207baa0(uVar11,(long)local_a8,&local_34);
        bVar5 = (byte)uVar7;
      }
      if ((local_34 != 0 & bVar5) != 1) {
LAB_02094bc9:
        lVar10 = DAT_020e38c0;
        DAT_020e38c0 = lVar10 + 1;
        uVar3 = DAT_020e38c8;
        uVar3 = DAT_020e38c8;
        lVar2 = DAT_020e38c8;
        out = (void *)(lVar10 * 0x6f0 + lVar2);
        recovered_2001410(out,local_898,0x6f0);
        recovered_20db970((long)out,&DAT_020a26f3,in_R9);
        if (param_5 == (undefined1 *)0x0) {
          return '\x01';
        }
        *param_5 = 1;
        return '\x01';
      }
      DAT_020e38e0 = local_898;
      local_1ad = 1;
      local_1ac = (*(code *)(ulong)local_34)(&DAT_020adf04,lVar10,1,local_898);
      DAT_020e38e0 = 0;
      if (local_1ac != 0) goto LAB_02094bc9;
      if (param_4 == 0) {
        return '\0';
      }
      pcVar13 = str_020a8d10;
      local_1ac = 0;
      goto LAB_02094808;
    }
  }
LAB_020947f1:
  if (param_4 == 0) {
    return '\0';
  }
  pcVar13 = str_020a8c4f;
LAB_02094808:
  pf_varargs_20039e0__8_((char *)param_4,0xa0,&DAT_020a25e3,(ulonglong)pcVar13);
  return '\0';
}
