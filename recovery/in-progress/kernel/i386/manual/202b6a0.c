/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c585f (*(uint8_t *)(0x20c585fU))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_02130728 (*(uint32_t volatile *)(0x2130728U))
#define DAT_02130758 (*(uint32_t volatile *)(0x2130758U))
#define DAT_0213075c (*(uint32_t volatile *)(0x213075cU))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))
#define local_303 (*(char (*)[241])(frame + 29))
#define local_212 (*(uchar (*)[241])(frame + 270))
#define local_121 (*(uchar (*)[241])(frame + 511))
#define local_30 (*(uint *)(frame + 752))
#define local_2c (*(uint *)(frame + 756))
#define local_28 (*(uint *)(frame + 760))
#define local_24 (*(ulong *)(frame + 764))
#define local_20 (*(char * *)(frame + 768))
#define local_1c (*(char * *)(frame + 772))
#define local_18 (*(char * *)(frame + 776))
#define local_14 (*(char * *)(frame + 780))


uint recovered_202b6a0(int incoming_ecx,int incoming_edx)

{
  unsigned char frame[832] __attribute__((aligned(16))) = {0};

  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined4 extraout_EAX = 0;
  void *pvVar13;
  uint incoming_edx_00;
  uint incoming_edx_01;
  uint in_EDX;
  ulong uVar14;

  if ((((incoming_edx == 0) || (incoming_ecx == 0)) || (cVar2 = DAT_021307dc, cVar2 == '\0')) ||
     (bVar1 = PF_PART1(DAT_02130758, 0), (bVar1 & 1) != 0)) {
    return 0;
  }
  recovered_202a060(incoming_ecx,local_121);
  recovered_202a060(incoming_edx,local_212);
  if (((local_121[0] != '\0') && (local_212[0] != '\0')) &&
     (iVar4 = recovered_20022a0((char *)local_121,(char *)local_212), iVar4 != 0)) {
    uVar5 = recovered_202af10(local_121,incoming_edx_00);
    if ((uVar5 != 0xffffffff) &&
       (uVar6 = recovered_202af10(local_212,incoming_edx_01), uVar6 == 0xffffffff)) {
      iVar4 = DAT_02130724;
      uVar14 = 0;
      if (iVar4 == 0) {
        local_28 = 0;
      }
      else {
        local_28 = (uint)((*(byte *)(iVar4 + 0xfc + uVar5 * 0x110) & 2) >> 1);
      }
      local_24 = recovered_2002270((char *)local_121);
      local_18 = (char *)recovered_2002270((char *)local_212);
      iVar4 = DAT_02130728;
      if (iVar4 != 0) {
        iVar4 = 0;
        local_2c = CONCAT31(PF_PART3(local_2c, 1),(char)local_28) ^ 1;
        uVar5 = 0;
        do {
          pcVar10 = (char *)DAT_02130724;
          local_1c = pcVar10 + iVar4;
          pcVar7 = (char *)recovered_20022a0(local_1c,(char *)local_121);
          local_20 = pcVar10;
          if (pcVar10 == (char *)0x0 || (char)local_2c != '\0') {
            bVar3 = false;
            if (pcVar7 != (char *)0x0) goto LAB_0202b851;
LAB_0202b859:
            if ((local_20[iVar4 + 0xfc] & 1U) != 0) {
              return 0;
            }
            pcVar10 = &DAT_020c5084;
            if (pcVar7 != (char *)0x0) {
              pcVar10 = local_20 + iVar4 + local_24;
            }
            uVar14 = recovered_2002270(pcVar10);
            if ((char *)0xf0 < local_18 + uVar14) {
              return 0;
            }
          }
          else {
            local_14 = pcVar7;
            uVar14 = recovered_2002270((char *)local_121);
            uVar8 = recovered_2002270(local_1c);
            if ((uVar8 < uVar14) ||
               (iVar9 = recovered_2001ff0(local_1c,local_121,uVar14), iVar9 != 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = local_20[iVar4 + local_24] == '/';
            }
            pcVar7 = local_14;
            if (local_14 == (char *)0x0) goto LAB_0202b859;
LAB_0202b851:
            if (bVar3) goto LAB_0202b859;
          }
          uVar5 = uVar5 + 1;
          uVar6 = DAT_02130728;
          iVar4 = iVar4 + 0x110;
        } while (uVar5 < uVar6);
        if (uVar6 == 0) {
          uVar14 = 0;
        }
        else {
          uVar5 = 0;
          do {
            iVar4 = DAT_02130724;
            local_18 = (char *)(uVar5 * 0x110 + iVar4);
            local_30 = uVar5;
            iVar9 = recovered_20022a0(local_18,(char *)local_121);
            if ((iVar9 != 0 & (byte)local_28) == 1) {
              if (iVar4 != 0) {
                uVar14 = recovered_2002270((char *)local_121);
                uVar8 = recovered_2002270(local_18);
                if (((uVar14 <= uVar8) &&
                    (iVar4 = recovered_2001ff0(local_18,local_121,uVar14), iVar4 == 0)) &&
                   (local_18[local_24] == '/')) goto LAB_0202b8a7;
              }
LAB_0202b945:
              iVar4 = DAT_02130728;
              if (iVar4 != 0) {
                iVar4 = 0;
                uVar5 = 0;
                do {
                  pcVar10 = (char *)DAT_02130724;
                  local_20 = pcVar10 + iVar4;
                  pcVar7 = (char *)recovered_20022a0(local_20,(char *)local_121);
                  local_1c = pcVar10;
                  if (pcVar10 == (char *)0x0 || (char)local_2c != '\0') {
                    bVar3 = false;
                    if (pcVar7 != (char *)0x0) goto LAB_0202ba29;
LAB_0202ba31:
                    pcVar10 = &DAT_020c5084;
                    if (pcVar7 != (char *)0x0) {
                      pcVar10 = local_1c + iVar4 + local_24;
                    }
                    pf_varargs_20044f0__4__4_
                              (local_303,0xf1,&DAT_020c585f,(uint)local_212,(uint)pcVar10);
                    iVar9 = recovered_20022a0(local_18,local_303);
                    if (iVar9 == 0) {
                      return 0;
                    }
                  }
                  else {
                    local_14 = pcVar7;
                    uVar14 = recovered_2002270((char *)local_121);
                    uVar8 = recovered_2002270(local_20);
                    if ((uVar8 < uVar14) ||
                       (iVar9 = recovered_2001ff0(local_20,local_121,uVar14), iVar9 != 0)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = local_1c[iVar4 + local_24] == '/';
                    }
                    pcVar7 = local_14;
                    if (local_14 == (char *)0x0) goto LAB_0202ba31;
LAB_0202ba29:
                    if (bVar3) goto LAB_0202ba31;
                  }
                  uVar5 = uVar5 + 1;
                  iVar4 = iVar4 + 0x110;
                  uVar6 = DAT_02130728;
                } while (uVar5 < uVar6);
              }
            }
            else if (iVar9 != 0) goto LAB_0202b945;
LAB_0202b8a7:
            uVar5 = local_30 + 1;
            uVar6 = DAT_02130728;
          } while (uVar5 < uVar6);
          uVar14 = uVar6 * 0x110;
        }
      }
      local_18 = recovered_2001650(uVar14);
      if (local_18 != (void *)0x0) {
        pvVar13 = (void *)DAT_02130724;
        iVar4 = DAT_02130728;
        recovered_2001b70(local_18,pvVar13,iVar4 * 0x110);
        iVar4 = DAT_02130728;
        if (iVar4 != 0) {
          iVar4 = 0;
          local_28 = local_28 ^ 1;
          uVar5 = 0;
          do {
            pcVar7 = (char *)DAT_02130724;
            pcVar10 = pcVar7 + iVar4;
            local_2c = uVar5;
            pcVar11 = (char *)recovered_20022a0(pcVar10,(char *)local_121);
            local_20 = pcVar7;
            if (pcVar7 == (char *)0x0 || (byte)local_28 != '\0') {
              bVar3 = false;
            }
            else {
              local_1c = pcVar11;
              uVar14 = recovered_2002270((char *)local_121);
              uVar8 = recovered_2002270(pcVar10);
              if (uVar8 < uVar14) {
                bVar3 = false;
              }
              else {
                local_14 = pcVar10;
                iVar9 = recovered_2001ff0(pcVar10,local_121,uVar14);
                if (iVar9 == 0) {
                  bVar3 = local_20[iVar4 + local_24] == '/';
                }
                else {
                  bVar3 = false;
                }
                pcVar10 = local_14;
              }
              pcVar11 = local_1c;
            }
            if ((pcVar11 == (char *)0x0) || (bVar3)) {
              pcVar7 = &DAT_020c5084;
              if (pcVar11 != (char *)0x0) {
                pcVar7 = local_20 + iVar4 + local_24;
              }
              pf_varargs_20044f0__4__4_(pcVar10,0xf1,&DAT_020c585f,(uint)local_212,(uint)pcVar7);
            }
            uVar5 = local_2c + 1;
            iVar4 = iVar4 + 0x110;
            uVar6 = DAT_02130728;
          } while (uVar5 < uVar6);
        }
        uVar5 = recovered_204d520();
        pcVar10 = local_18;
        if ((char)uVar5 == '\0') {
          pvVar13 = (void *)DAT_02130724;
          iVar4 = DAT_02130728;
        }
        else {
          iVar4 = DAT_0213075c;
          if (iVar4 == 2) {
            uVar5 = recovered_2052bd0();
            cVar2 = (char)uVar5;
          }
          else {
            bVar3 = recovered_204cfa0();
            if (bVar3) {
              pbVar12 = recovered_204dd80(0);
              cVar2 = (char)pbVar12;
            }
            else {
              uVar5 = recovered_203e3a0(in_EDX);
              cVar2 = (char)uVar5;
            }
          }
          if (cVar2 != '\0') {
            recovered_2001710(pcVar10);
            return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
          }
          pvVar13 = (void *)DAT_02130724;
          iVar4 = DAT_02130728;
        }
        recovered_2001b70(pvVar13,pcVar10,iVar4 * 0x110);
        recovered_204d520();
        recovered_2001710(pcVar10);
      }
    }
  }
  return 0;
}
#undef DAT_020c5084
#undef DAT_020c585f
#undef DAT_02130724
#undef DAT_02130728
#undef DAT_02130758
#undef DAT_0213075c
#undef DAT_021307dc
#undef local_303
#undef local_212
#undef local_121
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
