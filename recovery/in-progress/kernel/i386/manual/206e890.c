/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5f80 (*(uint8_t *)(0x20c5f80U))
#define DAT_020c5f8c (*(uint8_t *)(0x20c5f8cU))
#define DAT_020c5fa8 (*(uint8_t *)(0x20c5fa8U))
#define DAT_020c69e5 (*(uint8_t *)(0x20c69e5U))
#define DAT_021ec4f0 (*(uint32_t volatile *)(0x21ec4f0U))
#define DAT_021ec4fc (*(uint32_t volatile *)(0x21ec4fcU))
#define DAT_021ec508 (*(uint8_t volatile *)(0x21ec508U))
#define DAT_021ec514 (*(uint8_t volatile *)(0x21ec514U))
#define DAT_021ec518 (*(uint8_t volatile *)(0x21ec518U))
#define DAT_021ec51c (*(uint8_t volatile *)(0x21ec51cU))
#define DAT_021ec520 (*(uint8_t volatile *)(0x21ec520U))
#define DAT_021ec524 (*(uint8_t volatile *)(0x21ec524U))
#define DAT_021ec528 (*(uint8_t volatile *)(0x21ec528U))
#define DAT_021ec52c (*(uint32_t volatile *)(0x21ec52cU))
#define DAT_021ec530 (*(uint8_t volatile *)(0x21ec530U))
#define DAT_021ec531 (*(uint8_t volatile *)(0x21ec531U))
#define DAT_021ec532 (*(uint8_t volatile *)(0x21ec532U))
#define DAT_021ec533 (*(uint8_t volatile *)(0x21ec533U))
#define DAT_021ec534 (*(uint8_t volatile *)(0x21ec534U))
#define DAT_021ec624 (*(uint8_t volatile *)(0x21ec624U))
#define DAT_021ec9c4 (*(uint8_t volatile *)(0x21ec9c4U))
#define DAT_021ecbc4 (*(uint8_t volatile *)(0x21ecbc4U))
#define str_020c5bb8 (*(char (*)[1])(0x20c5bb8U))
#define str_020c5f85 (*(char (*)[1])(0x20c5f85U))
#define str_020c70d7 (*(char (*)[1])(0x20c70d7U))
#define str_020c7875 (*(char (*)[1])(0x20c7875U))
#define str_020c787d (*(char (*)[1])(0x20c787dU))
#define str_020c7887 (*(char (*)[1])(0x20c7887U))
#define str_020c7d21 (*(char (*)[1])(0x20c7d21U))
#define str_020c7d29 (*(char (*)[1])(0x20c7d29U))
#define str_020cadcd (*(char (*)[1])(0x20cadcdU))
#define str_020cadd4 (*(char (*)[1])(0x20cadd4U))
#define str_020cade2 (*(char (*)[1])(0x20cade2U))
#define str_020cb0a3 (*(char (*)[1])(0x20cb0a3U))
#define str_020cb12e (*(char (*)[1])(0x20cb12eU))
#define str_020cb15c (*(char (*)[1])(0x20cb15cU))
#define str_020cb1bc (*(char (*)[1])(0x20cb1bcU))
#define str_020cb246 (*(char (*)[1])(0x20cb246U))
#define str_020cb274 (*(char (*)[1])(0x20cb274U))
#define str_020cb2d3 (*(char (*)[1])(0x20cb2d3U))
#define str_020cb324 (*(char (*)[1])(0x20cb324U))
#define str_020cb370 (*(char (*)[1])(0x20cb370U))
#define str_020cb393 (*(char (*)[1])(0x20cb393U))
#define local_18 (*(char * *)(frame + 280))
#define local_14 (*(char * *)(frame + 284))
#define local_11d (*(char (*)[241])(frame + 19))
#define local_2c (*(char * *)(frame + 260))
#define local_28 (*(uint *)(frame + 264))
#define local_24 (*(uint *)(frame + 268))
#define local_20 (*(char * *)(frame + 272))
#define local_1c (*(char * *)(frame + 276))


undefined4 recovered_206e890(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[336] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  undefined1 *vararg0;
  ulong uVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  undefined1 *puVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  char *vararg6;
  int iVar12;

  if (in_ECX == (byte *)0x0) goto LAB_0206e9ae;
  do {
    do {
      pbVar5 = in_ECX;
      in_ECX = pbVar5 + 1;
      uVar11 = (uint)*pbVar5;
    } while (uVar11 - 9 < 5);
  } while (uVar11 == 0x20);
  local_11d[0] = '\0';
  if (uVar11 == 0) goto LAB_0206e9ae;
  if ((uVar11 == 0x22) || (uVar11 == 0x27)) {
    uVar2 = uVar11;
    pbVar5 = in_ECX;
    uVar11 = (uint)*in_ECX;
    if (*in_ECX == 0) goto LAB_0206e950;
LAB_0206e8e5:
    pbVar5 = pbVar5 + 1;
    uVar9 = 0;
    local_2c = in_EDX;
    do {
      if (uVar2 == 0) {
        if ((uVar11 - 9 < 0x18) && (in_EDX = local_2c, (0x80001fU >> (uVar11 - 9 & 0x1f) & 1) != 0))
        break;
      }
      else if (uVar2 == (int)(char)uVar11) goto LAB_0206e952;
      if (uVar9 + 1 < 0xf1) {
        local_11d[uVar9] = (char)uVar11;
        uVar9 = uVar9 + 1;
      }
      bVar1 = *pbVar5;
      uVar11 = (uint)bVar1;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    pbVar5 = pbVar5 + -1;
  }
  else {
    uVar2 = 0;
    if (*pbVar5 != 0) goto LAB_0206e8e5;
LAB_0206e950:
    uVar9 = 0;
  }
LAB_0206e952:
  local_11d[uVar9] = '\0';
  for (; ((uint)(*pbVar5) - 9U < 5U || (*pbVar5 == 0x20)); pbVar5 = pbVar5 + 1) {
  }
  if (uVar9 == 0) {
LAB_0206e9ae:
    if (param_3 != 0 && in_EDX != (char *)0x0) {
      if ((*in_EDX != '\0') && (uVar3 = recovered_2002270(in_EDX), uVar3 + 1 < param_3)) {
        (in_EDX + uVar3)[0] = '\n';
        (in_EDX + uVar3)[1] = '\0';
      }
      uVar3 = recovered_2002270(in_EDX);
      if (uVar3 + 1 < param_3) {
        cVar4 = 'u';
        iVar6 = 0;
        do {
          in_EDX[iVar6 + uVar3] = cVar4;
          cVar4 = str_020cb12e[iVar6 + 1];
          iVar12 = iVar6 + 1;
          if (cVar4 == '\0') break;
          uVar11 = iVar6 + uVar3 + 2;
          iVar6 = iVar12;
        } while (uVar11 < param_3);
        in_EDX[iVar12 + uVar3] = '\0';
      }
    }
    return 0;
  }
  uVar11 = recovered_206e5a0(local_11d);
  if ((int)uVar11 < 0) {
    pf_varargs_202ecc0__4_(in_EDX,param_3,str_020cb0a3,(uint)local_11d);
    return 0;
  }
  iVar6 = uVar11 * 0x1328;
  if ((&DAT_021ec624)[iVar6] == '\0') {
    vararg0 = &DAT_021ec533 + iVar6;
    puVar7 = &DAT_021ec534 + iVar6;
    do {
      cVar4 = puVar7[-1];
      if ((cVar4 == '/') || (cVar4 == '\\')) {
        vararg0 = puVar7;
      }
      else if (cVar4 == '\0') goto LAB_0206ea75;
      puVar7 = puVar7 + 1;
    } while( true );
  }
  vararg0 = &DAT_021ec624 + iVar6;
LAB_0206ea75:
  local_14 = (char *)(&DAT_021ec4f0)[uVar11 * 0x4ca];
  if ((&DAT_021ec530)[iVar6] == '\x01') {
    if (((&DAT_021ec531)[iVar6] & 1) == 0) {
      pcVar10 = &DAT_020c69e5;
      local_20 = str_020c70d7;
      local_18 = &DAT_020c69e5;
      if ((&DAT_021ec532)[iVar6] == '\0') {
        local_18 = str_020c70d7;
      }
      local_1c = str_020cadcd;
      vararg6 = str_020c70d7;
    }
    else {
      local_20 = &DAT_020c69e5;
      if ((&DAT_021ec52c)[uVar11 * 0x4ca] != 0) {
        local_20 = str_020c70d7;
      }
      local_18 = &DAT_020c69e5;
      if ((&DAT_021ec532)[iVar6] == '\0') {
        local_18 = str_020c70d7;
      }
      local_1c = str_020cadcd;
      pcVar8 = &DAT_020c69e5;
LAB_0206eaf3:
      vararg6 = &DAT_020c69e5;
      pcVar10 = pcVar8;
    }
  }
  else {
    local_18 = &DAT_020c69e5;
    local_20 = str_020c70d7;
    if ((&DAT_021ec532)[iVar6] == '\0') {
      local_18 = str_020c70d7;
    }
    local_1c = str_020cadd4;
    pcVar8 = str_020c70d7;
    pcVar10 = str_020c70d7;
    vararg6 = str_020c70d7;
    if (((&DAT_021ec531)[iVar6] & 1) != 0) goto LAB_0206eaf3;
  }
  pf_varargs_202ecc0__4__4__4__4__4__4__4_
            (in_EDX,param_3,str_020cb15c,(uint)vararg0,(uint)local_14,(uint)local_20,(uint)local_1c,
             (uint)local_18,(uint)pcVar10,(uint)vararg6);
  iVar12 = *(int *)(&DAT_021ec508 + iVar6);
  if (iVar12 < 0xb7) {
    switch((uintptr_t)(iVar12)) {
    case 3:
      local_14 = &DAT_020c5f80;
      break;
    default:
      goto switchD_0206eb69_caseD_4;
    case 8:
      local_14 = &DAT_020c5f8c;
      break;
    case 0x14:
      local_14 = str_020c7875;
      break;
    case 0x15:
      local_14 = str_020c787d;
      break;
    case 0x28:
      local_14 = &DAT_020c5fa8;
      break;
    case 0x3e:
      local_14 = str_020c5f85;
    }
  }
  else {
    if (iVar12 == 0xb7) {
      local_14 = str_020c7d21;
      goto LAB_0206ebe0;
    }
    if (iVar12 == 0xf3) {
      local_14 = str_020c7d29;
      goto LAB_0206ebe0;
    }
    if (iVar12 == 0x102) {
      local_14 = str_020c7887;
      goto LAB_0206ebe0;
    }
switchD_0206eb69_caseD_4:
    local_14 = str_020c5bb8;
  }
LAB_0206ebe0:
  local_20 = *(char **)(&DAT_021ec514 + iVar6);
  local_1c = *(char **)(&DAT_021ec518 + iVar6);
  local_18 = *(char **)(&DAT_021ec520 + iVar6);
  local_28 = *(uint *)(&DAT_021ec524 + iVar6);
  local_24 = *(uint *)(&DAT_021ec51c + iVar6);
  pcVar10 = str_020cade2;
  if ((&DAT_021ecbc4)[iVar6] != '\0') {
    pcVar10 = &DAT_021ecbc4 + iVar6;
  }
  pf_varargs_202ecc0__4__4__4__4__4__4__4__4__4__4_
            (in_EDX,param_3,str_020cb1bc,(uint)((&DAT_021ec4fc)[uVar11 * 0x4ca] == 2) * 0x20 + 0x20,
             (uint)local_14,(uint)local_1c,(uint)local_20,(uint)local_18,local_28,local_24,
             *(uint *)(&DAT_021ec528 + iVar6),(&DAT_021ec52c)[uVar11 * 0x4ca],(uint)pcVar10);
  if (*(int *)(&DAT_021ec524 + iVar6) == 0) {
    if ((&DAT_021ec530)[iVar6] == '\0') {
      if (param_3 == 0 || in_EDX == (char *)0x0) {
        return 1;
      }
      if ((*in_EDX != '\0') && (uVar3 = recovered_2002270(in_EDX), uVar3 + 1 < param_3)) {
        (in_EDX + uVar3)[0] = '\n';
        (in_EDX + uVar3)[1] = '\0';
      }
      uVar3 = recovered_2002270(in_EDX);
      if (param_3 <= uVar3 + 1) {
        return 1;
      }
      pcVar10 = in_EDX + uVar3;
      cVar4 = 'r';
      iVar6 = 0;
      do {
        pcVar10[iVar6] = cVar4;
        cVar4 = str_020cb2d3[iVar6 + 1];
        iVar12 = iVar6 + 1;
        if (cVar4 == '\0') break;
        uVar11 = iVar6 + uVar3 + 2;
        iVar6 = iVar12;
      } while (uVar11 < param_3);
    }
    else {
      if ((&DAT_021ec531)[iVar6] != '\0') {
        if ((&DAT_021ec52c)[uVar11 * 0x4ca] == 0) {
          pcVar10 = str_020cb393;
        }
        else {
          pcVar10 = str_020cb370;
        }
        recovered_202dd30(in_EDX,param_3,pcVar10);
        return 1;
      }
      if (param_3 == 0 || in_EDX == (char *)0x0) {
        return 1;
      }
      if ((*in_EDX != '\0') && (uVar3 = recovered_2002270(in_EDX), uVar3 + 1 < param_3)) {
        (in_EDX + uVar3)[0] = '\n';
        (in_EDX + uVar3)[1] = '\0';
      }
      uVar3 = recovered_2002270(in_EDX);
      if (param_3 <= uVar3 + 1) {
        return 1;
      }
      pcVar10 = in_EDX + uVar3;
      cVar4 = 'r';
      iVar6 = 0;
      do {
        pcVar10[iVar6] = cVar4;
        cVar4 = str_020cb324[iVar6 + 1];
        iVar12 = iVar6 + 1;
        if (cVar4 == '\0') break;
        uVar11 = iVar6 + uVar3 + 2;
        iVar6 = iVar12;
      } while (uVar11 < param_3);
    }
  }
  else {
    pcVar10 = str_020c5bb8;
    if ((&DAT_021ec9c4)[iVar6] != '\0') {
      pcVar10 = &DAT_021ec9c4 + iVar6;
    }
    pf_varargs_202ecc0__4_(in_EDX,param_3,str_020cb246,(uint)pcVar10);
    if (param_3 == 0 || in_EDX == (char *)0x0) {
      return 1;
    }
    if ((*in_EDX != '\0') && (uVar3 = recovered_2002270(in_EDX), uVar3 + 1 < param_3)) {
      (in_EDX + uVar3)[0] = '\n';
      (in_EDX + uVar3)[1] = '\0';
    }
    uVar3 = recovered_2002270(in_EDX);
    if (param_3 <= uVar3 + 1) {
      return 1;
    }
    pcVar10 = in_EDX + uVar3;
    cVar4 = 'n';
    iVar6 = 0;
    do {
      pcVar10[iVar6] = cVar4;
      cVar4 = str_020cb274[iVar6 + 1];
      iVar12 = iVar6 + 1;
      if (cVar4 == '\0') break;
      uVar11 = iVar6 + uVar3 + 2;
      iVar6 = iVar12;
    } while (uVar11 < param_3);
  }
  pcVar10[iVar12] = '\0';
  return 1;
}
#undef DAT_020c5f80
#undef DAT_020c5f8c
#undef DAT_020c5fa8
#undef DAT_020c69e5
#undef DAT_021ec4f0
#undef DAT_021ec4fc
#undef DAT_021ec508
#undef DAT_021ec514
#undef DAT_021ec518
#undef DAT_021ec51c
#undef DAT_021ec520
#undef DAT_021ec524
#undef DAT_021ec528
#undef DAT_021ec52c
#undef DAT_021ec530
#undef DAT_021ec531
#undef DAT_021ec532
#undef DAT_021ec533
#undef DAT_021ec534
#undef DAT_021ec624
#undef DAT_021ec9c4
#undef DAT_021ecbc4
#undef str_020c5bb8
#undef str_020c5f85
#undef str_020c70d7
#undef str_020c7875
#undef str_020c787d
#undef str_020c7887
#undef str_020c7d21
#undef str_020c7d29
#undef str_020cadcd
#undef str_020cadd4
#undef str_020cade2
#undef str_020cb0a3
#undef str_020cb12e
#undef str_020cb15c
#undef str_020cb1bc
#undef str_020cb246
#undef str_020cb274
#undef str_020cb2d3
#undef str_020cb324
#undef str_020cb370
#undef str_020cb393
#undef local_18
#undef local_14
#undef local_11d
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
