/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5864 (*(uint8_t *)(0x20c5864U))
#define DAT_020c5865 (*(uint8_t *)(0x20c5865U))
#define DAT_020c5866 (*(uint8_t *)(0x20c5866U))
#define DAT_020c5867 (*(uint8_t *)(0x20c5867U))
#define DAT_020c5868 (*(uint8_t *)(0x20c5868U))
#define DAT_020c5e7e (*(uint8_t *)(0x20c5e7eU))
#define DAT_020c5e83 (*(uint8_t *)(0x20c5e83U))
#define DAT_020c5e87 (*(uint8_t *)(0x20c5e87U))
#define DAT_020d9d44 (*(uint32_t volatile *)(0x20d9d44U))
#define DAT_02130724 (*(uint32_t volatile *)(0x2130724U))
#define DAT_0213073c (*(uint8_t volatile *)(0x213073cU))
#define DAT_0213074c (*(uint32_t volatile *)(0x213074cU))
#define DAT_02130750 (*(uint32_t volatile *)(0x2130750U))
#define DAT_0213075c (*(uint32_t volatile *)(0x213075cU))
#define DAT_021307dc (*(uint8_t volatile *)(0x21307dcU))
#define DAT_021408ec (*(uint32_t volatile *)(0x21408ecU))
#define DAT_021408f0 (*(uint32_t volatile *)(0x21408f0U))
#define str_020c5d12 (*(char (*)[1])(0x20c5d12U))
#define str_020c5d2a (*(char (*)[1])(0x20c5d2aU))
#define str_020c5d41 (*(char (*)[1])(0x20c5d41U))
#define str_020c5d75 (*(char (*)[1])(0x20c5d75U))
#define str_020c5d90 (*(char (*)[1])(0x20c5d90U))
#define str_020c5dab (*(char (*)[1])(0x20c5dabU))
#define str_020c5db5 (*(char (*)[1])(0x20c5db5U))
#define str_020c5dc0 (*(char (*)[1])(0x20c5dc0U))
#define str_020c5dcb (*(char (*)[1])(0x20c5dcbU))
#define str_020c5de5 (*(char (*)[1])(0x20c5de5U))
#define str_020c5e59 (*(char (*)[1])(0x20c5e59U))
#define str_020c5e6c (*(char (*)[1])(0x20c5e6cU))
#define str_020c5e74 (*(char (*)[1])(0x20c5e74U))
#define str_020c5e8b (*(char (*)[1])(0x20c5e8bU))
#define str_020c5e91 (*(char (*)[1])(0x20c5e91U))
#define local_3f4 (*(char (*)[241])(frame + 28))
#define local_303 (*(char (*)[241])(frame + 269))
#define local_212 (*(uchar (*)[241])(frame + 510))
#define local_121 (*(uchar (*)[241])(frame + 751))
#define local_30 (*(uint *)(frame + 992))
#define local_2c (*(uchar * *)(frame + 996))
#define local_28 (*(char * *)(frame + 1000))
#define local_24 (*(uint *)(frame + 1004))
#define local_20 (*(uchar * *)(frame + 1008))
#define local_1c (*(uchar * *)(frame + 1012))
#define local_18 (*(void * *)(frame + 1016))
#define local_11 (*(uchar *)(frame + 1023))


uint recovered_2054720(int incoming_ecx,char *incoming_edx,int param_3)

{
  unsigned char frame[1072] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uchar *puVar9;
  uchar *puVar10;
  undefined4 extraout_EAX = 0;
  undefined4 extraout_EAX_00 = 0;
  uchar *left;
  uchar uVar11;
  int iVar12;
  uint incoming_edx_00;
  uint incoming_edx_01;
  uint incoming_edx_02;
  uint incoming_edx_03;
  void *data;
  int *in_ECX;
  int iVar13;
  char *pcVar14;

  local_18 = (void *)0x0;
  local_24 = 0;
  local_11 = '\0';
  if (incoming_ecx == 0 || incoming_edx == (char *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
    pcVar14 = str_020c5d12;
    goto LAB_02054870;
  }
  recovered_202a060(incoming_ecx,local_212);
  *incoming_edx = '\0';
  if (local_212[0] != '\0') {
    uVar2 = recovered_2002270((char *)local_212);
    uVar3 = recovered_2002270(&DAT_020c5864);
    if (uVar3 <= uVar2) {
      uVar11 = local_212[uVar2 - uVar3];
      if (uVar11 == '\0') {
        pcVar14 = &DAT_020c5864;
      }
      else {
        if ((byte)(uVar11 + 0x9f) < 0x1a) {
          uVar11 = uVar11 + 0xe0;
        }
        if (uVar11 != '.') goto LAB_02054859;
        iVar4 = -uVar3;
        uVar11 = local_212[iVar4 + uVar2 + 1];
        if (uVar11 == '\0') {
          pcVar14 = &DAT_020c5865;
        }
        else {
          if ((byte)(uVar11 + 0x9f) < 0x1a) {
            uVar11 = uVar11 + 0xe0;
          }
          if (uVar11 != 'A') goto LAB_02054859;
          uVar11 = local_212[iVar4 + uVar2 + 2];
          if (uVar11 == '\0') {
            pcVar14 = &DAT_020c5866;
          }
          else {
            if ((byte)(uVar11 + 0x9f) < 0x1a) {
              uVar11 = uVar11 + 0xe0;
            }
            if (uVar11 != 'P') goto LAB_02054859;
            uVar11 = local_212[iVar4 + uVar2 + 3];
            if (uVar11 == '\0') {
              pcVar14 = &DAT_020c5867;
            }
            else {
              if ((byte)(uVar11 + 0x9f) < 0x1a) {
                uVar11 = uVar11 + 0xe0;
              }
              if ((uVar11 != 'P') || (local_212[iVar4 + uVar2 + 4] != '\0')) goto LAB_02054859;
              pcVar14 = &DAT_020c5868;
            }
          }
        }
      }
      if (*pcVar14 == '\0') {
        cVar1 = DAT_021307dc;
        if (((cVar1 == '\x01') && (iVar4 = DAT_020d9d44, -1 < iVar4)) &&
           (iVar13 = DAT_021408ec, iVar13 != 0)) {
          iVar12 = 0;
          in_ECX = &DAT_021408f0;
          do {
            if (*in_ECX == iVar4) {
              if ((((-1 < iVar12) && (uVar5 = recovered_20bdc00((int)in_ECX), (char)uVar5 != '\0'))
                  && (((char)in_ECX[8] == '\0' &&
                      ((in_ECX[0x17] - 3U < 3 && (iVar4 = DAT_0213075c, iVar4 - 3U < 3)))))) &&
                 ((cVar1 = DAT_0213073c, cVar1 == (char)in_ECX[1] &&
                  ((iVar4 = DAT_0213074c, iVar4 == in_ECX[2] &&
                   (iVar4 = DAT_02130750, iVar4 == in_ECX[3])))))) {
                uVar6 = recovered_20559e0((char *)local_212,(char *)local_121);
                if ((char)uVar6 != '\0') {
                  pf_varargs_20044f0__4_((char *)local_212,0xf1,&DAT_020c5119,(uint)local_121);
                }
              }
              break;
            }
            iVar12 = iVar12 + 1;
            in_ECX = in_ECX + 0x18;
          } while (iVar13 != iVar12);
        }
        uVar6 = pf_varargs_20044f0__4_(local_303,0xf1,str_020c5d2a,(uint)local_212);
        if (0xf0 < uVar6) {
          if (param_3 == 0) {
            return 0;
          }
          pcVar14 = str_020c5d41;
          goto LAB_02054870;
        }
        local_18 = (void *)0x0;
        local_24 = 0;
        local_11 = '\0';
        cVar1 = DAT_021307dc;
        if (cVar1 == '\x01') {
          recovered_202a060((int)local_303,local_121);
          uVar6 = recovered_202af10(local_121,incoming_edx_00);
          if ((uVar6 == 0xffffffff) ||
             (((iVar4 = DAT_02130724, iVar4 != 0 &&
               ((*(byte *)(iVar4 + 0xfc + uVar6 * 0x110) & 2) != 0)) ||
              (uVar7 = recovered_202b020(uVar6,incoming_edx_01), (char)uVar7 == '\0'))))
          goto LAB_02054a02;
LAB_020549e1:
          iVar4 = DAT_02130724;
          local_24 = *(ulong *)(iVar4 + 0xf8 + uVar6 * 0x110);
          data = *(void **)(iVar4 + 0xf4 + uVar6 * 0x110);
        }
        else {
LAB_02054a02:
          cVar1 = DAT_021307dc;
          if (((cVar1 == '\x01') &&
              (uVar6 = recovered_20559e0(local_303,local_3f4), (char)uVar6 != '\0')) &&
             (cVar1 = DAT_021307dc, cVar1 == '\x01')) {
            recovered_202a060((int)local_3f4,local_121);
            uVar6 = recovered_202af10(local_121,incoming_edx_02);
            if (((uVar6 != 0xffffffff) &&
                ((iVar4 = DAT_02130724, iVar4 == 0 ||
                 ((*(byte *)(iVar4 + 0xfc + uVar6 * 0x110) & 2) == 0)))) &&
               (uVar7 = recovered_202b020(uVar6,incoming_edx_03), (char)uVar7 != '\0'))
            goto LAB_020549e1;
          }
          uVar6 = recovered_2055f10((int)local_303,(uint *)&local_18,&local_24,'\0',&local_11,
                                    param_3);
          if ((char)uVar6 == '\0') {
            if ((param_3 != 0) && (local_11 == '\0')) {
              pf_varargs_20044f0__4_((char *)param_3,0xa0,&DAT_020c5119,0x20c5d5e);
            }
            recovered_2001710(local_18);
            return 0;
          }
          data = local_18;
        }
        uVar6 = local_24;
        if (((data != (void *)0x0) && (local_24 != 0)) &&
           (pcVar14 = recovered_2001650(local_24 + 1), pcVar14 != (char *)0x0)) {
          recovered_2001b70(pcVar14,data,uVar6);
          pcVar14[uVar6] = '\0';
          pcVar8 = recovered_20025d0(pcVar14,str_020c5e59);
          local_28 = pcVar14;
          if (pcVar8 != (char *)0x0) {
            pcVar14 = recovered_20025d0(pcVar8,str_020c5e6c);
            if (pcVar14 != (char *)0x0) {
              pcVar14 = recovered_20024f0(pcVar14,'>');
              if (pcVar14 != (char *)0x0) {
                puVar9 = (uchar *)(pcVar14 + 1);
                puVar10 = (uchar *)recovered_20025d0((char *)puVar9,str_020c5e74);
                if (puVar9 <= puVar10) {
                  local_121[0] = '\0';
                  if (puVar9 < puVar10) {
                    iVar4 = -0xf0;
                    local_1c = puVar10;
                    do {
                      iVar13 = iVar4;
                      left = puVar9 + 1;
                      uVar11 = *puVar9;
                      if (uVar11 == '&') {
                        local_30 = (int)puVar10 - (int)left;
                        local_20 = puVar9;
                        if (local_30 < 4) {
                          if (local_30 != 3) goto LAB_02054d59;
                        }
                        else {
                          iVar4 = recovered_2001ff0(left,&DAT_020c5e7e,4);
                          if (iVar4 == 0) {
                            left = local_20 + 5;
                            uVar11 = '&';
                            puVar10 = local_1c;
                            goto LAB_02054c4b;
                          }
                        }
                        iVar4 = recovered_2001ff0(left,&DAT_020c5e83,3);
                        if (iVar4 == 0) {
                          left = local_20 + 4;
                          uVar11 = '<';
                        }
                        else {
                          local_2c = left;
                          iVar4 = recovered_2001ff0(left,&DAT_020c5e87,3);
                          puVar9 = local_2c;
                          if (iVar4 == 0) {
                            left = local_20 + 4;
                            uVar11 = '>';
                          }
                          else {
                            if (local_30 < 5) goto LAB_02054d59;
                            iVar4 = recovered_2001ff0(local_2c,str_020c5e8b,5);
                            if (iVar4 != 0) {
                              iVar4 = recovered_2001ff0(puVar9,str_020c5e91,5);
                              if (iVar4 == 0) {
                                left = local_20 + 6;
                                uVar11 = '\'';
                                puVar10 = local_1c;
                                goto LAB_02054c4b;
                              }
                              goto LAB_02054d59;
                            }
                            left = local_20 + 6;
                            uVar11 = '\"';
                          }
                        }
                        puVar10 = local_1c;
                      }
LAB_02054c4b:
                      if (iVar13 == 0) goto LAB_02054d59;
                      local_121[iVar13 + 0xf0] = uVar11;
                      puVar9 = left;
                      iVar4 = iVar13 + 1;
                    } while (left < puVar10);
                    local_121[iVar13 + 0xf1] = '\0';
                    recovered_2001710(local_28);
                    if (local_121[0] != '\0') {
                      puVar9 = local_121;
                      uVar11 = local_121[0];
                      while (puVar9 = puVar9 + 1, uVar11 != '\0') {
                        if ((uVar11 == '/') || (uVar11 == '\\')) goto LAB_02054d8a;
                        uVar11 = *puVar9;
                      }
                      uVar6 = recovered_2055b30((char *)local_212,str_020c5dab,(char *)local_121,
                                                incoming_edx,(char *)param_3);
                      if (((char)uVar6 == '\0') &&
                         (uVar6 = recovered_2055b30((char *)local_212,str_020c5db5,(char *)local_121
                                                    ,incoming_edx,(char *)param_3),
                         (char)uVar6 == '\0')) {
                        uVar6 = recovered_2055b30((char *)local_212,str_020c5dc0,(char *)local_121,
                                                  incoming_edx,(char *)param_3);
                        if ((char)uVar6 == '\0') {
                          uVar6 = pf_varargs_20044f0__4__4_
                                            (incoming_edx,0xf1,str_020c5dcb,(uint)local_212,
                                             (uint)local_121);
                          recovered_2001710(local_18);
                          if (uVar6 < 0xf1) {
                            return CONCAT31((int3)((uint)extraout_EAX_00 >> 8),1);
                          }
                          if (param_3 == 0) {
                            return 0;
                          }
                          pcVar14 = str_020c5de5;
                          goto LAB_02054870;
                        }
                      }
                      recovered_2001710(local_18);
                      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
                    }
LAB_02054d8a:
                    recovered_2001710(local_18);
                    if (param_3 == 0) {
                      return 0;
                    }
                    pcVar14 = str_020c5d90;
                    goto LAB_02054870;
                  }
                }
              }
            }
          }
LAB_02054d59:
          recovered_2001710(local_28);
        }
        recovered_2001710(local_18);
        if (param_3 == 0) {
          return 0;
        }
        pcVar14 = str_020c5d75;
        goto LAB_02054870;
      }
    }
  }
LAB_02054859:
  if (param_3 == 0) {
    return 0;
  }
  pcVar14 = str_020c5d12;
LAB_02054870:
  pf_varargs_20044f0__4_((char *)param_3,0xa0,&DAT_020c5119,(uint)pcVar14);
  return 0;
}
#undef DAT_020c5119
#undef DAT_020c5864
#undef DAT_020c5865
#undef DAT_020c5866
#undef DAT_020c5867
#undef DAT_020c5868
#undef DAT_020c5e7e
#undef DAT_020c5e83
#undef DAT_020c5e87
#undef DAT_020d9d44
#undef DAT_02130724
#undef DAT_0213073c
#undef DAT_0213074c
#undef DAT_02130750
#undef DAT_0213075c
#undef DAT_021307dc
#undef DAT_021408ec
#undef DAT_021408f0
#undef str_020c5d12
#undef str_020c5d2a
#undef str_020c5d41
#undef str_020c5d75
#undef str_020c5d90
#undef str_020c5dab
#undef str_020c5db5
#undef str_020c5dc0
#undef str_020c5dcb
#undef str_020c5de5
#undef str_020c5e59
#undef str_020c5e6c
#undef str_020c5e74
#undef str_020c5e8b
#undef str_020c5e91
#undef local_3f4
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
#undef local_11
