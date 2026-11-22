/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_0213073c (*(uint8_t volatile *)(0x213073cU))
#define DAT_02130740 (*(uint32_t volatile *)(0x2130740U))
#define DAT_02130744 (*(uint32_t volatile *)(0x2130744U))
#define DAT_02130748 (*(uint32_t volatile *)(0x2130748U))
#define DAT_0213074c (*(uint32_t volatile *)(0x213074cU))
#define DAT_0213075c (*(uint32_t volatile *)(0x213075cU))
#define DAT_02130790 (*(uint32_t volatile *)(0x2130790U))
#define DAT_02130794 (*(uint32_t volatile *)(0x2130794U))
#define DAT_02130798 (*(uint32_t volatile *)(0x2130798U))
#define DAT_0213079c (*(uint32_t volatile *)(0x213079cU))
#define DAT_021307a0 (*(uint32_t volatile *)(0x21307a0U))
#define DAT_021307a4 (*(uint32_t volatile *)(0x21307a4U))
#define DAT_021307ac (*(uint32_t volatile *)(0x21307acU))
#define DAT_021307b0 (*(uint32_t volatile *)(0x21307b0U))
#define local_28 (*(uint *)(frame + 1096))
#define local_24 (*(uint *)(frame + 1100))
#define local_20 (*(void * *)(frame + 1104))
#define local_1c (*(void * *)(frame + 1108))
#define local_18 (*(uint *)(frame + 1112))
#define local_14 (*(uint *)(frame + 1116))
#define local_457 (*(uchar (*)[723])(frame + 25))
#define local_184 (*(undefined1 (*)[4])(frame + 748))
#define local_180 (*(undefined1 *)(frame + 752))
#define local_121 (*(uchar (*)[241])(frame + 847))
#define local_30 (*(uint *)(frame + 1088))
#define local_2c (*(uint *)(frame + 1092))


uint recovered_2052ff0(char *in_ECX)

{
  unsigned char frame[1168] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char *pcVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uchar *puVar11;
  uchar uVar12;
  void *pvVar13;
  uchar uVar14;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  uchar *incoming_edx;
  uint uVar18;
  uint uVar19;

  local_1c = (void *)0x0;
  local_14 = 0;
  bVar6 = recovered_204cfa0();
  pcVar16 = (char *)0x0;
  if (in_ECX == (char *)0x0 || !bVar6) {
    return 0;
  }
  local_457[0xf1] = '\0';
  local_121[0] = '\0';
  pcVar7 = in_ECX;
  do {
    if (*pcVar7 == '/') {
      pcVar16 = pcVar7;
    }
    else if (*pcVar7 == '\0') break;
    pcVar7 = pcVar7 + 1;
  } while( true );
  if (pcVar16 == (char *)0x0) {
    pf_varargs_20044f0__4_((char *)local_121,0xf1,&DAT_020c5119,(uint)in_ECX);
    if (local_121[0] == '\0') {
      return 0;
    }
    uVar19 = extraout_EDX_00;
    if (local_457[0xf1] != '\0') goto LAB_020530ed;
    puVar8 = &DAT_021307a0;
    iVar10 = DAT_0213075c;
    if (iVar10 == 5) goto LAB_0205313e;
    iVar10 = DAT_0213079c;
    uVar19 = DAT_02130740;
    uVar17 = 0;
    if (uVar19 != 0 && iVar10 != 0) {
      uVar17 = ((uVar19 - 1) + iVar10 * 0x20) / uVar19;
    }
    local_14 = uVar17 * uVar19;
    if (local_14 == 0) {
      return 0;
    }
    local_1c = recovered_2001650(local_14);
    if (local_1c == (void *)0x0) {
      return 0;
    }
    bVar1 = DAT_0213073c;
    iVar3 = DAT_02130790;
    uVar2 = DAT_0213074c;
    uVar2 = DAT_0213074c;
    iVar10 = DAT_0213074c;
    iVar5 = DAT_02130798;
    iVar4 = DAT_02130794;
    uVar19 = recovered_204ed30((uint)bVar1,iVar5 * iVar4 + iVar3 + iVar10,(int)local_1c,local_14);
    local_28 = 0;
    uVar17 = 0;
    if ((char)uVar19 == '\0') goto LAB_0205329e;
    uVar17 = 1;
    uVar19 = 0;
LAB_0205327d:
    local_30 = uVar19;
    if (((local_1c != (void *)0x0) && (local_121[0] != '\0')) &&
       (local_457[0x1e2] = '\0', 0x1f < local_14)) {
      uVar15 = 0;
      local_18 = 0xffffffff;
      uVar19 = 0x20;
      local_20 = local_1c;
      pvVar13 = local_1c;
      uVar18 = local_14;
      local_2c = local_14;
      do {
        if (*(char *)((int)pvVar13 + uVar15) == -0x1b) {
          local_457[0x1e2] = '\0';
          local_18 = 0xffffffff;
          uVar15 = uVar19;
        }
        else {
          if (*(char *)((int)pvVar13 + uVar15) == '\0') break;
          bVar1 = *(byte *)((int)pvVar13 + uVar15 + 0xb);
          local_24 = uVar19;
          if (bVar1 == 0xf) {
            uVar19 = uVar15;
            if (local_18 != 0xffffffff) {
              uVar19 = local_18;
            }
            uVar9 = recovered_20537a0((char *)(local_457 + 0x1e2),(char *)((int)pvVar13 + uVar15));
            pvVar13 = local_20;
            uVar15 = local_24;
            local_18 = uVar19;
            if ((char)uVar9 == '\0') break;
          }
          else {
            if ((bVar1 & 8) == 0) {
              incoming_edx = local_457;
              recovered_2051d70((char *)((int)pvVar13 + uVar15),incoming_edx);
              if (local_457[0x1e2] != '\0') {
                incoming_edx = local_457 + 0x1e2;
              }
              iVar10 = recovered_20022a0((char *)incoming_edx,(char *)local_121);
              if (iVar10 != 0) {
                puVar11 = local_121;
                uVar12 = *incoming_edx;
                while (uVar12 != '\0') {
                  incoming_edx = incoming_edx + 1;
                  uVar14 = *puVar11;
                  if (uVar14 == '\0') goto LAB_020533af;
                  if ((byte)(uVar12 + 0x9f) < 0x1a) {
                    uVar12 = uVar12 + 0xe0;
                  }
                  if ((byte)(uVar14 + 0x9f) < 0x1a) {
                    uVar14 = uVar14 + 0xe0;
                  }
                  if (uVar12 != uVar14) goto LAB_020533af;
                  puVar11 = puVar11 + 1;
                  uVar12 = *incoming_edx;
                }
                if (*puVar11 != '\0') {
LAB_020533af:
                  pvVar13 = local_20;
                  uVar18 = local_2c;
                  goto LAB_020533d3;
                }
              }
              uVar19 = uVar15;
              if (local_18 != 0xffffffff) {
                uVar19 = local_18;
              }
              for (; uVar19 <= uVar15; uVar19 = uVar19 + 0x20) {
                *(undefined1 *)((int)local_20 + uVar19) = 0xe5;
              }
              if ((char)uVar17 == '\0') {
                uVar17 = recovered_204d8e0(local_28,local_1c,local_14,local_30);
              }
              else {
                bVar1 = DAT_0213073c;
                iVar3 = DAT_02130790;
                uVar2 = DAT_0213074c;
                uVar2 = DAT_0213074c;
                iVar10 = DAT_0213074c;
                iVar5 = DAT_02130798;
                iVar4 = DAT_02130794;
                uVar17 = recovered_2050b00((uint)bVar1,iVar5 * iVar4 + iVar3 + iVar10,(int)local_1c,
                                           local_14);
              }
              goto LAB_0205329e;
            }
LAB_020533d3:
            local_18 = 0xffffffff;
            local_457[0x1e2] = '\0';
            uVar15 = local_24;
          }
        }
        uVar19 = uVar15 + 0x20;
      } while (uVar19 <= uVar18);
    }
  }
  else {
    uVar19 = (int)pcVar16 - (int)in_ECX;
    if (uVar19 == 0) {
      return 0;
    }
    if (0xf0 < uVar19) {
      return 0;
    }
    recovered_2001b70(local_457 + 0xf1,in_ECX,uVar19);
    local_457[uVar19 + 0xf1] = '\0';
    pf_varargs_20044f0__4_((char *)local_121,0xf1,&DAT_020c5119,(uint)(pcVar16 + 1));
    if (local_457[0xf1] == '\0') {
      return 0;
    }
    uVar19 = extraout_EDX;
    if (local_121[0] == '\0') {
      return 0;
    }
LAB_020530ed:
    uVar19 = recovered_202af10(local_457 + 0xf1,uVar19);
    if (((uVar19 == 0xffffffff) || (iVar10 = DAT_02130724, iVar10 == 0)) ||
       ((*(byte *)(iVar10 + 0xfc + uVar19 * 0x110) & 2) == 0)) {
      return 0;
    }
    puVar8 = (uint *)(iVar10 + 0x104 + uVar19 * 0x110);
LAB_0205313e:
    uVar15 = *puVar8;
    recovered_2001e00(local_184,0,0x60);
    local_180 = DAT_0213073c;
    uVar19 = DAT_021307ac;
    if (uVar15 < uVar19 + 2 && 1 < uVar15) {
      iVar3 = DAT_0213075c;
      uVar17 = DAT_02130748;
      iVar10 = DAT_02130744;
      iVar5 = DAT_021307b0;
      iVar4 = DAT_021307a4;
      uVar19 = recovered_2053450((int)local_184,iVar3,iVar4,uVar19,iVar5,iVar10,uVar17,uVar15,
                                 (int *)&local_1c,&local_14);
      if (((char)uVar19 != '\0') && (uVar18 = DAT_02130748, uVar18 <= local_14)) {
        uVar17 = 0;
        uVar19 = local_14 / uVar18;
        local_28 = uVar15;
        if (uVar19 * uVar18 != local_14) goto LAB_0205329e;
        goto LAB_0205327d;
      }
    }
  }
  uVar17 = 0;
LAB_0205329e:
  recovered_2001710(local_1c);
  return uVar17;
}
#undef DAT_020c5119
#undef DAT_02130724
#undef DAT_0213073c
#undef DAT_02130740
#undef DAT_02130744
#undef DAT_02130748
#undef DAT_0213074c
#undef DAT_0213075c
#undef DAT_02130790
#undef DAT_02130794
#undef DAT_02130798
#undef DAT_0213079c
#undef DAT_021307a0
#undef DAT_021307a4
#undef DAT_021307ac
#undef DAT_021307b0
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_457
#undef local_184
#undef local_180
#undef local_121
#undef local_30
#undef local_2c
