/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c6d7b (*(uint8_t *)(0x20c6d7bU))
#define DAT_021ec4dc (*(uint32_t volatile *)(0x21ec4dcU))
#define str_020c6d29 (*(char (*)[1])(0x20c6d29U))
#define str_020c6d4b (*(char (*)[1])(0x20c6d4bU))
#define str_020c6d5e (*(char (*)[1])(0x20c6d5eU))
#define str_020c6d65 (*(char (*)[1])(0x20c6d65U))
#define str_020c6d6d (*(char (*)[1])(0x20c6d6dU))
#define str_020c6d74 (*(char (*)[1])(0x20c6d74U))
#define str_020c6d7d (*(char (*)[1])(0x20c6d7dU))
#define local_b41 (*(char *)(frame + 31))
#define local_b40 (*(char (*)[2047])(frame + 32))
#define local_341 (*(char (*)[241])(frame + 2079))
#define local_250 (*(char (*)[31])(frame + 2320))
#define abStack_231 (*(byte (*)[513])(frame + 2351))
#define local_30 (*(int *)(frame + 2864))
#define local_2c (*(uint *)(frame + 2868))
#define local_24 (*(byte * *)(frame + 2876))
#define local_20 (*(uint *)(frame + 2880))
#define local_1c (*(byte * *)(frame + 2884))
#define local_15 (*(bool *)(frame + 2891))
#define local_14 (*(char * *)(frame + 2892))


undefined4 recovered_205db60(undefined1 *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[2944] __attribute__((aligned(16))) = {0};

  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined1 *vararg0;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  ulong uVar10;
  char cVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;

  uVar12 = DAT_021ec4dc;
  if (uVar12 < 8) {
    uVar5 = recovered_205dfd0(in_ECX,local_341,&local_30);
    if ((char)uVar5 == '\0') {
      vararg0 = &DAT_020c5084;
      if (in_ECX != (undefined1 *)0x0) {
        vararg0 = in_ECX;
      }
      pf_varargs_202ecc0__4_(in_EDX,param_3,str_020c6d4b,(uint)vararg0);
      uVar5 = 0;
    }
    else {
      local_14 = in_EDX;
      uVar5 = 1;
      if (local_30 != 0 && local_2c != 0) {
        uVar5 = DAT_021ec4dc;
        iVar8 = DAT_021ec4dc;
        DAT_021ec4dc = iVar8 + 1;
        uVar5 = DAT_021ec4dc;
        uVar5 = DAT_021ec4dc;
        uVar5 = DAT_021ec4dc;
        local_15 = param_3 != 0 && in_EDX != (char *)0x0;
        local_20 = 0;
        uVar12 = 0;
        do {
          abStack_231[1] = '\0';
          uVar7 = 0;
          do {
            uVar14 = uVar12;
            bVar2 = *(byte *)(local_30 + uVar14);
            if (bVar2 != 0xd) {
              if (bVar2 == 10) break;
              if (uVar7 + 1 < 0x200) {
                abStack_231[uVar7 + 1] = bVar2;
                uVar7 = uVar7 + 1;
              }
            }
            uVar12 = uVar14 + 1;
          } while (uVar14 + 1 < local_2c);
          uVar12 = uVar14 + 1;
          abStack_231[uVar7 + 1] = 0;
          iVar8 = 0;
          while (((uint)(abStack_231[iVar8 + 1]) - 9U < 5U || (abStack_231[iVar8 + 1] == 0x20))) {
            iVar8 = iVar8 + 1;
          }
          if (iVar8 != 0) {
            local_1c = abStack_231 + iVar8 + 1;
            uVar6 = recovered_2002270((char *)local_1c);
            recovered_2001c30(abStack_231 + 1,local_1c,uVar6 + 1);
          }
          for (uVar6 = recovered_2002270((char *)(abStack_231 + 1));
              (uVar6 != 0 && (((uint)(abStack_231[uVar6]) - 9 < 5 || (abStack_231[uVar6] == 0x20))));
              uVar6 = uVar6 - 1) {
            abStack_231[uVar6] = 0;
          }
          local_20 = local_20 + 1;
          if ((abStack_231[1] != '\0') && (abStack_231[1] != '#')) {
            iVar8 = recovered_20022a0((char *)(abStack_231 + 1),str_020c6d5e);
            if (iVar8 != 0) {
              iVar8 = recovered_20022a0((char *)(abStack_231 + 1),str_020c6d65);
              if (iVar8 != 0) {
                iVar8 = recovered_20022a0((char *)(abStack_231 + 1),str_020c6d6d);
                if (iVar8 != 0) {
                  iVar8 = recovered_20022a0((char *)(abStack_231 + 1),str_020c6d74);
                  if (iVar8 != 0) {
                    if ((((abStack_231[1] == 'e') && (abStack_231[2] == 'x')) &&
                        (abStack_231[3] == 'i')) && (abStack_231[4] == 't')) {
                      local_24 = abStack_231 + 5;
                      while( true ) {
                        bVar2 = *local_24;
                        if ((4 < (uint)(bVar2) - 9) && (bVar2 != 0x20)) break;
                        local_24 = local_24 + 1;
                      }
                      uVar5 = 1;
                      if (bVar2 != 0) {
                        bVar4 = recovered_202ddc0(&local_24,local_250,0x20);
                        if (bVar4) {
                          iVar8 = recovered_20022a0(local_250,&DAT_020c6d7b);
                          uVar5 = 1;
                          if (iVar8 == 0) goto LAB_0205df19;
                        }
                        uVar5 = 0;
                      }
                      goto LAB_0205df19;
                    }
                    local_b41 = '\0';
                    pbVar9 = (byte *)recovered_202ed80(abStack_231 + 1,&local_b41,0x800);
                    if (local_b41 != '\0') {
                      if (local_15 == false) {
                        if (local_14 == (char *)0x0) goto LAB_0205dc93;
                      }
                      else if ((*local_14 != '\0') &&
                              (uVar6 = recovered_2002270(local_14), uVar6 + 1 < param_3)) {
                        (local_14 + uVar6)[0] = '\n';
                        (local_14 + uVar6)[1] = '\0';
                      }
                      uVar6 = recovered_2002270(local_14);
                      if ((uVar6 + 1 < param_3 & local_15) == 1) {
                        local_1c = pbVar9;
                        if (local_b41 != '\0') {
                          pcVar13 = local_b40;
                          uVar10 = uVar6;
                          cVar11 = local_b41;
                          do {
                            local_14[uVar10] = cVar11;
                            cVar11 = *pcVar13;
                            uVar6 = uVar10 + 1;
                            if (cVar11 == '\0') break;
                            uVar7 = uVar10 + 2;
                            pcVar13 = pcVar13 + 1;
                            uVar10 = uVar6;
                          } while (uVar7 < param_3);
                        }
                        local_14[uVar6] = '\0';
                        pbVar9 = local_1c;
                      }
                    }
LAB_0205dc93:
                    if (pbVar9 == (byte *)0x0) {
                      pf_varargs_202ecc0__4__4_
                                (local_14,param_3,str_020c6d7d,(uint)local_341,local_20);
                      uVar5 = 0;
                      goto LAB_0205df19;
                    }
                  }
                }
              }
            }
          }
          if (local_2c <= uVar12) {
            uVar5 = 1;
LAB_0205df19:
            uVar3 = DAT_021ec4dc;
            iVar8 = DAT_021ec4dc;
            DAT_021ec4dc = iVar8 + -1;
            uVar3 = DAT_021ec4dc;
            uVar3 = DAT_021ec4dc;
            uVar3 = DAT_021ec4dc;
            return uVar5;
          }
        } while( true );
      }
    }
  }
  else {
    uVar5 = 0;
    if (param_3 != 0 && in_EDX != (char *)0x0) {
      if ((*in_EDX != '\0') && (uVar6 = recovered_2002270(in_EDX), uVar6 + 1 < param_3)) {
        (in_EDX + uVar6)[0] = '\n';
        (in_EDX + uVar6)[1] = '\0';
      }
      local_14 = in_EDX;
      uVar6 = recovered_2002270(in_EDX);
      uVar5 = 0;
      if (uVar6 + 1 < param_3) {
        cVar11 = 's';
        iVar8 = 0;
        do {
          local_14[iVar8 + uVar6] = cVar11;
          cVar11 = str_020c6d29[iVar8 + 1];
          iVar1 = iVar8 + 1;
          if (cVar11 == '\0') break;
          uVar12 = iVar8 + uVar6 + 2;
          iVar8 = iVar1;
        } while (uVar12 < param_3);
        local_14[iVar1 + uVar6] = '\0';
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}
#undef DAT_020c5084
#undef DAT_020c6d7b
#undef DAT_021ec4dc
#undef str_020c6d29
#undef str_020c6d4b
#undef str_020c6d5e
#undef str_020c6d65
#undef str_020c6d6d
#undef str_020c6d74
#undef str_020c6d7d
#undef local_b41
#undef local_b40
#undef local_341
#undef local_250
#undef abStack_231
#undef local_30
#undef local_2c
#undef local_24
#undef local_20
#undef local_1c
#undef local_15
#undef local_14
