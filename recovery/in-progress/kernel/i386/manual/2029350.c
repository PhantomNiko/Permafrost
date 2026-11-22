#include "functions.h"



#undef DAT_021306f8
#undef DAT_021408e9

#undef DAT_020c4a24
#define DAT_020c4a24 (*(uint8_t *)(0x20c4a24U))
#undef DAT_020c5119
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#undef DAT_020c526d
#define DAT_020c526d (*(uint8_t *)(0x20c526dU))
#undef DAT_020c585f
#define DAT_020c585f (*(uint8_t *)(0x20c585fU))
#undef DAT_020d6b77
#define DAT_020d6b77 (*(uint8_t *)(0x20d6b77U))
#undef DAT_020de164
#define DAT_020de164 (*(uint32_t volatile *)(0x20de164U))
#undef DAT_021408e8
#define DAT_021408e8 (*(uint8_t volatile *)(0x21408e8U))
#undef DAT_0214b114
#define DAT_0214b114 (*(uint8_t volatile *)(0x214b114U))
#undef DAT_0214b11c
#define DAT_0214b11c (*(uint8_t volatile *)(0x214b11cU))
#undef DAT_0214b11d
#define DAT_0214b11d (*(uint8_t volatile *)(0x214b11dU))
#undef DAT_0214b11e
#define DAT_0214b11e (*(uint8_t volatile *)(0x214b11eU))
#undef DAT_0214b320
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#undef DAT_0214b364
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#undef DAT_0215bc54
#define DAT_0215bc54 (*(uint8_t volatile *)(0x215bc54U))
#undef DAT_0215bc7c
#define DAT_0215bc7c (*(uint32_t volatile *)(0x215bc7cU))
#undef DAT_0224b2d8
#define DAT_0224b2d8 (*(uint32_t volatile *)(0x224b2d8U))
#undef DAT_0224b2dc
#define DAT_0224b2dc (*(uint32_t volatile *)(0x224b2dcU))
#undef Ram0214b114
#define Ram0214b114 (*(uint32_t volatile *)(0x214b114U))
#define local_630 (*(uchar (*)[1024])(frame + 48))
#define local_230 (*(uchar (*)[512])(frame + 1072))
#define local_30 (*(uint *)(frame + 1584))
#define local_2c (*(uint *)(frame + 1588))
#define local_28 (*(char * *)(frame + 1592))
#define local_24 (*(char * *)(frame + 1596))
#define local_20 (*(undefined4 *)(frame + 1600))
#define local_1c (*(ulong *)(frame + 1604))
#define local_18 (*(uint *)(frame + 1608))
#define local_12 (*(uchar *)(frame + 1614))
#define local_11 (*(byte *)(frame + 1615))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2029350
 */

uint recovered_2029350(char *incoming_ecx,ulong incoming_edx,char *param_3,uchar param_4,
                      char param_5)

{
  unsigned char frame[1664] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char cVar2;
  uchar uVar3;
  char cVar6;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  bool in_CL;
  uchar extraout_CL;
  uchar extraout_CL_00;
  uchar extraout_CL_01;
  uchar extraout_CL_02;
  uchar extraout_CL_03;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uchar *puVar11;
  uchar *puVar10;
  ulong capacity;
  char *pcVar12;

  if (incoming_edx == 0 || incoming_ecx == (char *)0x0) {
    return 0;
  }
  local_28 = &DAT_020c4a24;
  if (param_3 != (char *)0x0) {
    local_28 = param_3;
  }
  local_2c = incoming_edx - 1;
  if (0x1fe < local_2c) {
    local_2c = 0x1ff;
  }
  local_11 = param_4;
  local_20 = DAT_0215bc7c;
  *incoming_ecx = '\0';
  DAT_0214b11d = 0;
  local_24 = incoming_ecx;
  local_1c = incoming_edx;
  uVar4 = recovered_20081a0();
  pcVar12 = local_28;
  DAT_0215bc7c = local_28;
  recovered_2027720('9');
  cVar2 = DAT_021408e8;
  if ((cVar2 == '\x01') && (*pcVar12 != '\0')) {
    recovered_20122e0(pcVar12);
  }
  local_11 = local_11 ^ 1;
  uVar7 = 0;
  local_18 = uVar4 / 9 ^ 1;
LAB_02029423:
  while( true ) {
    local_12 = '\0';
    cVar2 = DAT_021408e8;
    if (cVar2 != '\x01') break;
    do {
      uVar4 = recovered_2012410(&local_12);
      pcVar12 = local_28;
      if ((char)uVar4 == '\0') goto LAB_020294d0;
      cVar2 = DAT_0215bc54;
    } while ((cVar2 == '\x01') && (DAT_0215bc54 = 0, local_12 == '\n'));
    if (local_12 != '\x1b') {
      if ((local_12 != '\r') && (local_12 != '\n')) {
        if (uVar7 == 0 || local_12 != '\x7f' && local_12 != '\b') goto LAB_0202969d;
        (&DAT_0214b11c)[uVar7] = 0;
        uVar7 = uVar7 - 1;
        recovered_20122e0(&DAT_020d6b77);
        goto LAB_020296da;
      }
      if (local_12 == '\r') {
        DAT_0215bc54 = 1;
      }
      (&DAT_0214b11d)[uVar7] = 0;
      pf_varargs_20044f0__4_((char *)local_230,0x200,&DAT_020c5119,0x214b11d);
      recovered_20122e0(&DAT_020c526d);
      capacity = local_1c;
      uVar3 = extraout_CL;
      if ((param_5 != '\0') && (local_230[0] != '\0')) {
        if (*pcVar12 == '\0') {
          uVar4 = 0;
          puVar11 = local_230;
          while( true ) {
            do {
              puVar10 = puVar11 + 1;
              uVar3 = *puVar11;
              puVar11 = puVar10;
            } while (uVar3 == '\r');
            if (uVar3 == '\0') break;
            if (uVar3 == '\n') {
              recovered_20a11d0(local_630,uVar4,'\x01','\x01');
              uVar4 = 0;
            }
            else if (uVar4 + 1 < 0x400) {
              local_630[uVar4] = uVar3;
              uVar4 = uVar4 + 1;
            }
          }
LAB_020298de:
          recovered_20a11d0(local_630,uVar4,'\x01','\x01');
          capacity = local_1c;
          uVar3 = extraout_CL_03;
        }
        else {
LAB_020297f6:
          capacity = local_1c;
          pf_varargs_202ce90__4__4_(&DAT_020c585f,(uint)pcVar12,(uint)local_230);
          uVar3 = extraout_CL_01;
        }
      }
LAB_020298f6:
      DAT_0214b11d = 0;
      DAT_0215bc7c = local_20;
      recovered_2027720(uVar3);
      iVar5 = pf_varargs_20044f0__4_(local_24,capacity,&DAT_020c5119,(uint)local_230);
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
    if (uVar7 == 0 && local_11 == 0) {
      recovered_20122e0(&DAT_020c526d);
      DAT_0214b11d = 0;
      uVar3 = extraout_CL_02;
LAB_0202981f:
      *local_24 = '\0';
      DAT_0215bc7c = local_20;
      recovered_2027720(uVar3);
      return 0;
    }
    DAT_0214b11d = 0;
    recovered_20122e0(&DAT_020c526d);
    if (*local_28 != '\0') {
      recovered_20122e0(local_28);
    }
LAB_020295c3:
    uVar4 = recovered_20081a0();
    local_18 = uVar4 / 9 ^ 1;
    recovered_2027720('9');
    uVar7 = 0;
  }
LAB_020294d0:
  uVar4 = DAT_0224b2d8;
  uVar9 = uVar7;
  if (uVar4 == 0) {
LAB_0202951d:
    uVar4 = recovered_2009400();
    if (uVar4 != 0) {
LAB_02029577:
      Ram0214b114 = uVar4 & 0x70000;
      if ((short)uVar4 != 0) {
        cVar2 = (char)uVar4;
        if ((cVar2 == '\r') || (cVar6 = (char)(uVar4 >> 8), cVar6 == '\x1c')) {
          (&DAT_0214b11d)[uVar9] = 0;
          pf_varargs_20044f0__4_((char *)local_230,0x200,&DAT_020c5119,0x214b11d);
          capacity = local_1c;
          uVar3 = extraout_CL_00;
          if ((param_5 != '\0') && (local_230[0] != '\0')) {
            if (*local_28 == '\0') {
              uVar4 = 0;
              puVar11 = local_230;
              while( true ) {
                do {
                  puVar10 = puVar11 + 1;
                  uVar3 = *puVar11;
                  puVar11 = puVar10;
                } while (uVar3 == '\r');
                if (uVar3 == '\0') break;
                if (uVar3 == '\n') {
                  recovered_20a11d0(local_630,uVar4,'\x01','\x01');
                  uVar4 = 0;
                }
                else if (uVar4 + 1 < 0x400) {
                  local_630[uVar4] = uVar3;
                  uVar4 = uVar4 + 1;
                }
              }
              goto LAB_020298de;
            }
            pcVar12 = local_28;
            goto LAB_020297f6;
          }
          goto LAB_020298f6;
        }
        uVar3 = cVar2 != '\x1b';
        if (!(bool)uVar3 || cVar6 == '\x01') {
          DAT_0214b11d = 0;
          if (uVar9 != 0 || local_11 != 0) goto LAB_020295c3;
          goto LAB_0202981f;
        }
        if (uVar9 == 0 || cVar6 != '\x0e' && cVar2 != '\b') {
          uVar7 = uVar9;
          if (((byte)(cVar2 - 0x20U) < 0x5f) && (uVar9 < local_2c)) {
            uVar7 = uVar9 + 1;
            (&DAT_0214b11d)[uVar9] = cVar2;
            (&DAT_0214b11e)[uVar9] = 0;
            uVar4 = recovered_20081a0();
            local_18 = uVar4 / 9 ^ 1;
            recovered_2027720('9');
          }
        }
        else {
          (&DAT_0214b11c)[uVar9] = 0;
          uVar4 = recovered_20081a0();
          local_18 = uVar4 / 9 ^ 1;
          recovered_2027720('9');
          uVar7 = uVar9 - 1;
        }
        goto LAB_02029423;
      }
    }
  }
  else {
    uVar9 = 0;
    puVar8 = &DAT_0224b2dc;
    local_30 = uVar7;
    do {
      if ((code *)*puVar8 != (code *)0x0) {
        uVar4 = (*(code *)*puVar8)();
        if (uVar4 != 0) {
          uVar9 = local_30;
          goto LAB_02029577;
        }
        uVar4 = DAT_0224b2d8;
      }
      uVar9 = uVar9 + 1;
      puVar8 = puVar8 + 0x4f;
    } while (uVar9 < uVar4);
    uVar9 = local_30;
    if (uVar4 == 0) goto LAB_0202951d;
  }
  uVar3 = recovered_2006ec0();
  uVar4 = 0;
  if (CONCAT31(extraout_var,uVar3) < 0x20) {
    uVar4 = CONCAT31(extraout_var,uVar3);
  }
  (&DAT_0214b364)[uVar4 * 0x12] = uVar4;
  uVar7 = uVar9;
  if ((&DAT_0214b320)[uVar4 * 0x12] == 0) {
    uVar1 = DAT_020de164;
    uVar4 = recovered_2039a70(DAT_020de164);
    if (uVar4 == 0) {
      uVar4 = recovered_20081a0();
      in_CL = (bool)((byte)local_18 & 1);
      if (in_CL != ((uVar4 / 9 & 1) == 0)) {
        recovered_2027720(in_CL);
        local_18 = uVar4 / 9 ^ 1;
      }
    }
  }
  else {
    recovered_2039960(0);
  }
  goto LAB_02029423;
LAB_0202969d:
  if (((byte)(local_12 - 0x20) < 0x5f) && (uVar7 < local_2c)) {
    (&DAT_0214b11d)[uVar7] = local_12;
    (&DAT_0214b11e)[uVar7] = 0;
    cVar2 = DAT_021408e8;
    if (cVar2 == '\x01') {
      recovered_2012270(local_12);
    }
    uVar7 = uVar7 + 1;
LAB_020296da:
    uVar4 = recovered_20081a0();
    local_18 = uVar4 / 9 ^ 1;
  }
  goto LAB_02029423;
}
