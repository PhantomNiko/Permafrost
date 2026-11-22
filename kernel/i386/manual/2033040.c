/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c547f (*(uint8_t *)(0x20c547fU))
#define DAT_020ca0c6 (*(uint8_t *)(0x20ca0c6U))
#define DAT_020cb03d (*(uint8_t *)(0x20cb03dU))
#define DAT_020cb042 (*(uint8_t *)(0x20cb042U))
#define DAT_020cb05e (*(uint8_t *)(0x20cb05eU))
#define DAT_020cb0c2 (*(uint8_t *)(0x20cb0c2U))
#define DAT_021ec4ec (*(uint8_t volatile *)(0x21ec4ecU))
#define DAT_021ec531 (*(uint8_t volatile *)(0x21ec531U))
#define DAT_02238eec (*(uint32_t volatile *)(0x2238eecU))
#define DAT_0223936c (*(uint32_t volatile *)(0x223936cU))
#define DAT_0223b6f8 (*(uint32_t volatile *)(0x223b6f8U))
#define DAT_0223b708 (*(uint8_t volatile *)(0x223b708U))
#define str_020c7213 (*(char (*)[1])(0x20c7213U))
#define str_020caf1d (*(char (*)[1])(0x20caf1dU))
#define str_020caf6f (*(char (*)[1])(0x20caf6fU))
#define str_020cafda (*(char (*)[1])(0x20cafdaU))
#define str_020cafe1 (*(char (*)[1])(0x20cafe1U))
#define str_020cb047 (*(char (*)[1])(0x20cb047U))
#define str_020cb04e (*(char (*)[1])(0x20cb04eU))
#define str_020cb057 (*(char (*)[1])(0x20cb057U))
#define str_020cb063 (*(char (*)[1])(0x20cb063U))
#define str_020cb06c (*(char (*)[1])(0x20cb06cU))
#define str_020cb072 (*(char (*)[1])(0x20cb072U))
#define str_020cb078 (*(char (*)[1])(0x20cb078U))
#define str_020cb0a3 (*(char (*)[1])(0x20cb0a3U))
#define str_020cb0c7 (*(char (*)[1])(0x20cb0c7U))
#define str_020cb0ce (*(char (*)[1])(0x20cb0ceU))
#define str_020cb0d4 (*(char (*)[1])(0x20cb0d4U))
#define str_020cb10b (*(char (*)[1])(0x20cb10bU))
#define str_020cc118 (*(char (*)[1])(0x20cc118U))
#define local_151 (*(byte (*)[241])(frame + 47))
#define local_60 (*(byte (*)[64])(frame + 288))
#define local_20 (*(char * *)(frame + 352))
#define local_1c (*(byte * *)(frame + 356))
#define local_18 (*(uint *)(frame + 360))
#define local_14 (*(uint *)(frame + 364))
#define format (*(char * *)(frame + 28))


uint recovered_2033040(byte *in_ECX,byte *in_ECX_00,char *in_EDX,uint param_4)

{
  unsigned char frame[416] __attribute__((aligned(16))) = {0};

  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint vararg0;
  undefined3 extraout_var = 0;
  uint uVar5;
  byte bVar6;
  char cVar7;
  char *in_EDX_00;
  uint vararg1;
  undefined1 *vararg1_00;
  byte *pbVar8;
  byte *in_ECX_01;
  int iVar9;

  if (in_ECX == (byte *)0x0) {
    local_60[0] = 0;
    local_1c = in_ECX;
    goto LAB_020332b1;
  }
  pbVar8 = in_ECX;
  do {
    do {
      in_ECX_01 = pbVar8;
      pbVar8 = in_ECX_01 + 1;
      bVar6 = *in_ECX_01;
      uVar2 = (uint)bVar6;
    } while (uVar2 - 9 < 5);
  } while (uVar2 == 0x20);
  local_60[0] = 0;
  local_1c = in_ECX;
  if (uVar2 == 0) goto LAB_020332b1;
  if ((uVar2 == 0x22) || (uVar2 == 0x27)) {
    bVar6 = *pbVar8;
    in_ECX_01 = pbVar8;
    if (bVar6 == 0) goto LAB_02033103;
LAB_02033092:
    in_ECX_01 = in_ECX_01 + 1;
    uVar5 = 0;
    local_20 = in_EDX_00;
    do {
      if (uVar2 == 0) {
        if ((bVar6 - 9 < 0x18) && (in_EDX_00 = local_20, (0x80001fU >> (bVar6 - 9 & 0x1f) & 1) != 0)
           ) break;
      }
      else if (uVar2 == (int)(char)bVar6) goto LAB_02033105;
      if (uVar5 + 1 < 0x40) {
        local_60[uVar5] = bVar6;
        uVar5 = uVar5 + 1;
      }
      bVar6 = *in_ECX_01;
      in_ECX_01 = in_ECX_01 + 1;
    } while (bVar6 != 0);
    in_ECX_01 = in_ECX_01 + -1;
  }
  else {
    uVar2 = 0;
    if (bVar6 != 0) goto LAB_02033092;
LAB_02033103:
    uVar5 = 0;
  }
LAB_02033105:
  local_60[uVar5] = 0;
  for (; ((uint)(*in_ECX_01) - 9U < 5U || (*in_ECX_01 == 0x20)); in_ECX_01 = in_ECX_01 + 1) {
  }
  local_1c = in_ECX_01;
  if (uVar5 != 0) {
    pbVar8 = local_60;
    iVar3 = recovered_20022a0((char *)pbVar8,&DAT_020c547f);
    if ((iVar3 != 0) && (iVar3 = recovered_20022a0((char *)pbVar8,str_020c7213), iVar3 != 0)) {
      iVar3 = recovered_20022a0((char *)pbVar8,str_020cafda);
      if (iVar3 == 0) {
        iVar3 = DAT_02238eec;
        if (iVar3 == 0) {
          uVar2 = 0;
          uVar5 = 0;
          vararg1 = 0;
          vararg0 = 0;
        }
        else {
          local_14 = 0;
          pbVar8 = &DAT_021ec531;
          local_18 = 0;
          vararg1 = 0;
          iVar9 = iVar3;
          do {
            if (pbVar8[-0x45] == 1) {
              vararg1 = vararg1 + pbVar8[-1];
              local_18 = local_18 + *pbVar8;
              if (*pbVar8 == 1) {
                local_14 = local_14 + (*(int *)(pbVar8 + -5) == 0);
              }
            }
            pbVar8 = pbVar8 + 0x1328;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          vararg0 = 0;
          pbVar8 = &DAT_021ec4ec;
          do {
            vararg0 = vararg0 + *pbVar8;
            pbVar8 = pbVar8 + 0x1328;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          uVar2 = local_14;
          uVar5 = local_18;
        }
        pf_varargs_202ecc0__4__4__4__4_
                  (in_EDX_00,(uint)in_ECX_00,str_020cafe1,vararg0,vararg1,uVar5,uVar2);
        return 1;
      }
      iVar3 = recovered_20022a0((char *)pbVar8,&DAT_020cb03d);
      if (iVar3 == 0) {
        uVar2 = recovered_2032470(in_ECX_01,in_EDX_00,(uint)in_ECX_00);
        return uVar2;
      }
      iVar3 = recovered_20022a0((char *)pbVar8,&DAT_020cb042);
      if (iVar3 == 0) {
        uVar2 = recovered_20328a0(in_ECX_01,in_EDX_00,(uint)in_ECX_00);
        return uVar2;
      }
      iVar3 = recovered_20022a0((char *)pbVar8,str_020cb047);
      if (iVar3 == 0) {
        uVar2 = recovered_2032c00(in_ECX_01,in_EDX_00,(uint)in_ECX_00);
        return uVar2;
      }
      iVar3 = recovered_20022a0((char *)pbVar8,str_020cb04e);
      if ((iVar3 == 0) || (iVar3 = recovered_20022a0((char *)pbVar8,str_020cb057), iVar3 == 0)) {
        uVar2 = recovered_206e890(in_ECX_01,in_EDX_00,(uint)in_ECX_00);
        return uVar2;
      }
      iVar3 = recovered_20022a0((char *)pbVar8,&DAT_020cb05e);
      if ((iVar3 == 0) || (iVar3 = recovered_20022a0((char *)pbVar8,str_020cb063), iVar3 == 0)) {
        uVar2 = recovered_206ee40(in_ECX_01,in_EDX_00,(uint)in_ECX_00);
        return uVar2;
      }
      iVar3 = recovered_20022a0((char *)pbVar8,str_020cb06c);
      if ((iVar3 == 0) || (iVar3 = recovered_20022a0((char *)pbVar8,str_020cb072), iVar3 == 0)) {
        bVar1 = recovered_202ddc0(&local_1c,local_151,0xf1);
        if (!bVar1) {
          recovered_202dd30(in_EDX_00,(uint)in_ECX_00,str_020cb078);
          return 0;
        }
        pbVar8 = local_151;
        uVar2 = recovered_206e5a0((char *)pbVar8);
        if (-1 < (int)uVar2) {
          bVar1 = recovered_206f110((int)(&DAT_021ec4ec + uVar2 * 0x1328),in_EDX_00,(uint)in_ECX_00)
          ;
          return CONCAT31(extraout_var,bVar1);
        }
        format = str_020cb0a3;
      }
      else {
        iVar3 = recovered_20022a0((char *)pbVar8,&DAT_020cb0c2);
        if (iVar3 == 0) {
          uVar2 = recovered_206f920(in_ECX_01,in_EDX_00,(uint)in_ECX_00);
          return uVar2;
        }
        iVar3 = recovered_20022a0((char *)pbVar8,str_020cb0c7);
        if ((iVar3 == 0) || (iVar3 = recovered_20022a0((char *)pbVar8,str_020cb0ce), iVar3 == 0)) {
          iVar3 = DAT_0223936c;
          DAT_0223b708 = 1;
          recovered_206df80();
          uVar2 = DAT_0223936c;
          iVar9 = DAT_0223b6f8;
          vararg1_00 = &DAT_020ca0c6;
          if (iVar9 != 0) {
            vararg1_00 = (undefined1 *)(iVar9 + 0x14);
          }
          pf_varargs_20044f0__4__4_((char *)local_151,0xc0,str_020cc118,uVar2,(uint)vararg1_00);
          recovered_2070260();
          iVar9 = DAT_0223936c;
          pf_varargs_202ecc0__4__4_
                    (in_EDX_00,(uint)in_ECX_00,str_020cb0d4,iVar9 - iVar3,(uint)local_151);
          iVar3 = DAT_0223936c;
          return (uint)(iVar3 != 0);
        }
        format = str_020cb10b;
      }
      pf_varargs_202ecc0__4_(in_EDX_00,(uint)in_ECX_00,format,(uint)pbVar8);
      return 0;
    }
  }
LAB_020332b1:
  if (in_ECX_00 == (byte *)0x0 || in_EDX_00 == (char *)0x0) {
    return 1;
  }
  if ((*in_EDX_00 != '\0') &&
     (uVar4 = recovered_2002270(in_EDX_00), (byte *)(uVar4 + 1) < in_ECX_00)) {
    (in_EDX_00 + uVar4)[0] = '\n';
    (in_EDX_00 + uVar4)[1] = '\0';
  }
  uVar4 = recovered_2002270(in_EDX_00);
  if ((byte *)(uVar4 + 1) < in_ECX_00) {
    cVar7 = 'u';
    iVar3 = 0;
    do {
      in_EDX_00[iVar3 + uVar4] = cVar7;
      cVar7 = str_020caf1d[iVar3 + 1];
      iVar9 = iVar3 + 1;
      if (cVar7 == '\0') break;
      pbVar8 = (byte *)(iVar3 + uVar4 + 2);
      iVar3 = iVar9;
    } while (pbVar8 < in_ECX_00);
    in_EDX_00[iVar9 + uVar4] = '\0';
  }
  if ((*in_EDX_00 != '\0') &&
     (uVar4 = recovered_2002270(in_EDX_00), (byte *)(uVar4 + 1) < in_ECX_00)) {
    (in_EDX_00 + uVar4)[0] = '\n';
    (in_EDX_00 + uVar4)[1] = '\0';
  }
  uVar4 = recovered_2002270(in_EDX_00);
  if ((byte *)(uVar4 + 1) < in_ECX_00) {
    cVar7 = 's';
    iVar3 = 0;
    do {
      in_EDX_00[iVar3 + uVar4] = cVar7;
      cVar7 = str_020caf6f[iVar3 + 1];
      iVar9 = iVar3 + 1;
      if (cVar7 == '\0') break;
      pbVar8 = (byte *)(iVar3 + uVar4 + 2);
      iVar3 = iVar9;
    } while (pbVar8 < in_ECX_00);
    in_EDX_00[iVar9 + uVar4] = '\0';
  }
  return 1;
}
#undef DAT_020c547f
#undef DAT_020ca0c6
#undef DAT_020cb03d
#undef DAT_020cb042
#undef DAT_020cb05e
#undef DAT_020cb0c2
#undef DAT_021ec4ec
#undef DAT_021ec531
#undef DAT_02238eec
#undef DAT_0223936c
#undef DAT_0223b6f8
#undef DAT_0223b708
#undef str_020c7213
#undef str_020caf1d
#undef str_020caf6f
#undef str_020cafda
#undef str_020cafe1
#undef str_020cb047
#undef str_020cb04e
#undef str_020cb057
#undef str_020cb063
#undef str_020cb06c
#undef str_020cb072
#undef str_020cb078
#undef str_020cb0a3
#undef str_020cb0c7
#undef str_020cb0ce
#undef str_020cb0d4
#undef str_020cb10b
#undef str_020cc118
#undef local_151
#undef local_60
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef format
