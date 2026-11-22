/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_02130728 (*(uint32_t volatile *)(0x2130728U))
#define DAT_02130758 (*(uint32_t volatile *)(0x2130758U))
#define DAT_0213075c (*(uint32_t volatile *)(0x213075cU))
#define DAT_02130778 (*(uint32_t volatile *)(0x2130778U))
#define DAT_0213077c (*(uint32_t volatile *)(0x213077cU))
#define DAT_02130780 (*(uint32_t volatile *)(0x2130780U))
#define DAT_02130784 (*(uint32_t volatile *)(0x2130784U))
#define DAT_02130788 (*(uint32_t volatile *)(0x2130788U))
#define DAT_0213078c (*(uint8_t volatile *)(0x213078cU))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))
#define DAT_02130860 (*(uint8_t volatile *)(0x2130860U))
#define str_020c518b (*(char (*)[1])(0x20c518bU))
#define str_020c52a9 (*(char (*)[1])(0x20c52a9U))
#define str_020c59f6 (*(char (*)[1])(0x20c59f6U))
#define str_020c5a35 (*(char (*)[1])(0x20c5a35U))
#define str_020c5adb (*(char (*)[1])(0x20c5adbU))
#define str_020c5af2 (*(char (*)[1])(0x20c5af2U))
#define str_020c5b01 (*(char (*)[1])(0x20c5b01U))
#define str_020c5b3d (*(char (*)[1])(0x20c5b3dU))
#define local_24 (*(uint *)(frame + 268))
#define local_20 (*(int *)(frame + 272))
#define local_1c (*(char * *)(frame + 276))
#define local_18 (*(ulong *)(frame + 280))
#define local_14 (*(char * *)(frame + 284))
#define local_11d (*(uchar (*)[241])(frame + 19))
#define local_2c (*(ulong *)(frame + 260))
#define local_28 (*(int *)(frame + 264))


uint recovered_2028910(int incoming_ecx,uint incoming_edx)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  uint uVar1;
  void *pvVar2;
  byte bVar3;
  uint uVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined4 extraout_EAX = 0;
  undefined4 uVar13;
  uint incoming_edx_00;
  uint in_EDX;
  int iVar14;
  char *pcVar15;
  uint uVar16;
  bool bVar17;

  DAT_02130860 = 0;
  if ((incoming_ecx == 0) || (cVar6 = DAT_021307dc, cVar6 == '\0')) {
    pcVar11 = str_020c5adb;
    goto LAB_02028def;
  }
  bVar3 = PF_PART1(DAT_02130758, 0);
  if ((bVar3 & 1) != 0) {
    pcVar11 = str_020c59f6;
    goto LAB_02028def;
  }
  recovered_202a060(incoming_ecx,local_11d);
  if (local_11d[0] == '\0') {
    pcVar11 = str_020c52a9;
    goto LAB_02028def;
  }
  uVar7 = recovered_202af10(local_11d,incoming_edx_00);
  if (uVar7 == 0xffffffff) {
    pcVar11 = str_020c5af2;
    goto LAB_02028def;
  }
  iVar14 = DAT_02130724;
  if (iVar14 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = (uint)((*(byte *)(iVar14 + 0xfc + uVar7 * 0x110) & 2) >> 1);
  }
  local_2c = recovered_2002270((char *)local_11d);
  local_20 = DAT_02130728;
  if (local_20 != 0) {
    iVar14 = 0;
    local_1c = (char *)(CONCAT31(PF_PART3(local_1c, 1),(char)local_24) ^ 1);
    uVar7 = 0;
    do {
      iVar10 = DAT_02130724;
      local_14 = (char *)(iVar10 + iVar14);
      uVar8 = recovered_20022a0(local_14,(char *)local_11d);
      local_28 = iVar10;
      if (iVar10 == 0 || (char)local_1c != '\0') {
        bVar17 = false;
        if (uVar8 != 0) goto LAB_02028a9a;
LAB_020289e0:
        if ((*(byte *)(local_28 + 0xfc + iVar14) & 1) != 0) {
          pcVar11 = str_020c5a35;
          goto LAB_02028def;
        }
      }
      else {
        local_18 = uVar8;
        uVar8 = recovered_2002270((char *)local_11d);
        uVar9 = recovered_2002270(local_14);
        if ((uVar9 < uVar8) || (iVar10 = recovered_2001ff0(local_14,local_11d,uVar8), iVar10 != 0))
        {
          bVar17 = false;
        }
        else {
          bVar17 = *(char *)(iVar14 + local_2c + local_28) == '/';
        }
        if (local_18 == 0) goto LAB_020289e0;
LAB_02028a9a:
        if (bVar17) goto LAB_020289e0;
      }
      uVar7 = uVar7 + 1;
      iVar14 = iVar14 + 0x110;
      uVar16 = DAT_02130728;
    } while (uVar7 < uVar16);
  }
  iVar14 = local_20;
  uVar8 = local_20 * 0x110;
  pcVar11 = recovered_2001650(uVar8);
  if (pcVar11 == (char *)0x0) {
    pcVar11 = str_020c518b;
    goto LAB_02028def;
  }
  pvVar2 = (void *)DAT_02130724;
  local_18 = uVar8;
  recovered_2001b70(pcVar11,pvVar2,uVar8);
  local_1c = pcVar11;
  if (iVar14 == 0) {
    local_14 = (char *)0x0;
  }
  else {
    local_14 = (char *)0x0;
    do {
      iVar10 = recovered_20022a0(pcVar11,(char *)local_11d);
      if ((char)local_24 == '\0') {
        bVar17 = false;
      }
      else {
        local_28 = iVar10;
        uVar8 = recovered_2002270((char *)local_11d);
        uVar9 = recovered_2002270(pcVar11);
        if (uVar9 < uVar8) {
          bVar17 = false;
          iVar10 = local_28;
        }
        else {
          iVar12 = recovered_2001ff0(pcVar11,local_11d,uVar8);
          iVar10 = local_28;
          if (iVar12 == 0) {
            bVar17 = pcVar11[local_2c] == '/';
          }
          else {
            bVar17 = false;
          }
        }
      }
      if ((iVar10 != 0) && (!bVar17)) {
        iVar12 = (int)local_14 * 0x110;
        local_14 = local_14 + 1;
        uVar13 = DAT_02130724;
        uVar13 = DAT_02130724;
        iVar10 = DAT_02130724;
        recovered_2001b70((void *)(iVar12 + iVar10),pcVar11,0x110);
      }
      pcVar11 = pcVar11 + 0x110;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  pcVar11 = local_14;
  iVar10 = local_20;
  uVar13 = DAT_02130724;
  uVar13 = DAT_02130724;
  iVar14 = DAT_02130724;
  recovered_2001e00((void *)((int)local_14 * 0x110 + iVar14),0,(local_20 - (int)local_14) * 0x110);
  DAT_02130728 = pcVar11;
  uVar7 = recovered_204d520();
  pcVar11 = local_1c;
  if ((char)uVar7 == '\0') {
    pvVar2 = (void *)DAT_02130724;
    recovered_2001b70(pvVar2,local_1c,local_18);
    DAT_02130728 = iVar10;
    recovered_204d520();
    recovered_2001710(pcVar11);
    pcVar11 = str_020c5b01;
    goto LAB_02028def;
  }
  iVar14 = DAT_0213075c;
  if (iVar14 == 2) {
    if (iVar10 != 0) {
      iVar14 = 0;
      do {
        pcVar15 = local_1c + iVar14 * 0x110;
        pcVar11 = (char *)recovered_20022a0(pcVar15,(char *)local_11d);
        if ((char)local_24 == '\0') {
          bVar17 = false;
          if (pcVar11 != (char *)0x0) goto LAB_02028cda;
LAB_02028cde:
          iVar10 = DAT_02130778;
          if (iVar10 != 0) {
            uVar5 = DAT_0213078c;
            local_14 = (char *)CONCAT31(PF_PART3(local_14, 1),uVar5);
            uVar7 = DAT_0213077c;
            uVar16 = *(uint *)(pcVar15 + 0x104);
            do {
              if ((uVar16 < 2) || (uVar7 <= uVar16)) break;
              uVar1 = *(uint *)(iVar10 + uVar16 * 4);
              if (uVar1 != 0) {
                *(undefined4 *)(iVar10 + uVar16 * 4) = 0;
                uVar7 = DAT_0213077c;
                if (uVar16 < uVar7) {
                  if (((uint)local_14 & 1) == 0) {
                    DAT_02130784 = uVar16;
                    DAT_02130788 = uVar16;
                    DAT_0213078c = 1;
                    local_14 = (char *)CONCAT31(PF_PART3(local_14, 1),1);
                  }
                  else {
                    uVar4 = DAT_02130784;
                    if (uVar16 < uVar4) {
                      DAT_02130784 = uVar16;
                    }
                    uVar4 = DAT_02130788;
                    if (uVar4 < uVar16) {
                      DAT_02130788 = uVar16;
                    }
                  }
                }
              }
              uVar4 = DAT_02130780;
              if ((uVar4 < 2) || (uVar16 < uVar4)) {
                DAT_02130780 = uVar16;
              }
              uVar16 = uVar1;
            } while (1 < uVar1 + 1);
          }
        }
        else {
          local_14 = pcVar11;
          uVar8 = recovered_2002270((char *)local_11d);
          uVar9 = recovered_2002270(pcVar15);
          if ((uVar9 < uVar8) || (iVar10 = recovered_2001ff0(pcVar15,local_11d,uVar8), iVar10 != 0))
          {
            bVar17 = false;
          }
          else {
            bVar17 = pcVar15[local_2c] == '/';
          }
          if (local_14 == (char *)0x0) goto LAB_02028cde;
LAB_02028cda:
          if (bVar17) goto LAB_02028cde;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != local_20);
    }
    uVar7 = recovered_2052bd0();
    cVar6 = (char)uVar7;
    iVar10 = local_20;
    pcVar11 = local_1c;
    uVar8 = local_18;
joined_r0x02028f13:
    local_1c = pcVar11;
    if (cVar6 != '\0') {
      if (iVar10 != 0) {
        do {
          iVar14 = recovered_20022a0(pcVar11,(char *)local_11d);
          if ((char)local_24 == '\0') {
LAB_02028f98:
            bVar17 = false;
            if (iVar14 != 0) goto LAB_02028f9e;
LAB_02028fa2:
            if (*(void **)(pcVar11 + 0xf4) != (void *)0x0) {
              recovered_2001710(*(void **)(pcVar11 + 0xf4));
            }
          }
          else {
            uVar8 = recovered_2002270((char *)local_11d);
            uVar9 = recovered_2002270(pcVar11);
            if (uVar9 < uVar8) {
              bVar17 = false;
            }
            else {
              iVar10 = recovered_2001ff0(pcVar11,local_11d,uVar8);
              if (iVar10 != 0) goto LAB_02028f98;
              bVar17 = pcVar11[local_2c] == '/';
            }
            if (iVar14 == 0) goto LAB_02028fa2;
LAB_02028f9e:
            if (bVar17) goto LAB_02028fa2;
          }
          pcVar11 = pcVar11 + 0x110;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
      recovered_2001710(local_1c);
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
  }
  else {
    bVar17 = recovered_204cfa0();
    uVar8 = local_18;
    if (!bVar17) {
      uVar7 = recovered_203e3a0(in_EDX);
      cVar6 = (char)uVar7;
      pcVar11 = local_1c;
      goto joined_r0x02028f13;
    }
    uVar7 = recovered_2052ff0((char *)local_11d);
    if ((char)uVar7 != '\0') {
      if (iVar10 != 0) {
        pcVar11 = local_1c;
        iVar14 = local_20;
        do {
          pcVar15 = (char *)recovered_20022a0(pcVar11,(char *)local_11d);
          if ((char)local_24 == '\0') {
            bVar17 = false;
          }
          else {
            local_14 = pcVar15;
            uVar8 = recovered_2002270((char *)local_11d);
            uVar9 = recovered_2002270(pcVar11);
            if ((uVar9 < uVar8) ||
               (iVar10 = recovered_2001ff0(pcVar11,local_11d,uVar8), iVar10 != 0)) {
              bVar17 = false;
            }
            else {
              bVar17 = pcVar11[local_2c] == '/';
            }
            pcVar15 = local_14;
          }
          if ((pcVar15 == (char *)0x0) || (bVar17)) {
            recovered_204dbc0(*(uint *)(pcVar11 + 0x104));
          }
          pcVar11 = pcVar11 + 0x110;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      uVar13 = recovered_204e8f0();
      cVar6 = (char)uVar13;
      iVar10 = local_20;
      pcVar11 = local_1c;
      uVar8 = local_18;
      goto joined_r0x02028f13;
    }
    pf_varargs_20044f0__4_(&DAT_02130860,0x80,&DAT_020c5119,0x20c5b1b);
  }
  pcVar11 = local_1c;
  pvVar2 = (void *)DAT_02130724;
  recovered_2001b70(pvVar2,local_1c,uVar8);
  DAT_02130728 = iVar10;
  recovered_204d520();
  recovered_2001710(pcVar11);
  cVar6 = DAT_02130860;
  if (cVar6 != '\0') {
    return 0;
  }
  pcVar11 = str_020c5b3d;
LAB_02028def:
  pf_varargs_20044f0__4_(&DAT_02130860,0x80,&DAT_020c5119,(uint)pcVar11);
  return 0;
}
#undef DAT_020c5119
#undef DAT_02130724
#undef DAT_02130728
#undef DAT_02130758
#undef DAT_0213075c
#undef DAT_02130778
#undef DAT_0213077c
#undef DAT_02130780
#undef DAT_02130784
#undef DAT_02130788
#undef DAT_0213078c
#undef DAT_021307dc
#undef DAT_02130860
#undef str_020c518b
#undef str_020c52a9
#undef str_020c59f6
#undef str_020c5a35
#undef str_020c5adb
#undef str_020c5af2
#undef str_020c5b01
#undef str_020c5b3d
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_11d
#undef local_2c
#undef local_28
