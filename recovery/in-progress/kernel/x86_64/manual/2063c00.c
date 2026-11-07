/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020de620 (*(uint64_t volatile *)(0x226c270U))
#define DAT_020de628 (*(uint64_t volatile *)(0x226c278U))
#define DAT_020de630 (*(uint64_t volatile *)(0x226c280U))
#define local_168 (*(byte (*)[328])(frame + 1048))
#define local_568 (*(char (*)[1024])(frame + 24))
#define str_020ab778 (*(char (*)[1])(0x20fe2e2U))
#define str_020ab792 (*(char (*)[1])(0x20fe2fcU))
#define str_020ab7b9 (*(char (*)[1])(0x20fe323U))
#define str_020ab7df (*(char (*)[1])(0x20fe349U))
#define str_020ab7ff (*(char (*)[1])(0x20fe369U))
#define str_020ab822 (*(char (*)[1])(0x20fe38cU))
uchar recovered_2063c00(long param_1)

{
  unsigned char frame[1440] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  uchar uVar4;
  ulong uVar5;
  void *out;
  void *pvVar6;
  byte bVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  char *pcVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcVar17;

  if (param_1 == 0) {
    return '\0';
  }
  pf_varargs_20039e0__8_((char *)local_168,0x140,&DAT_020a25e3,param_1);
  pbVar11 = local_168;
  do {
    do {
      pbVar11 = pbVar11 + 1;
      bVar2 = pbVar11[-1];
    } while (bVar2 - 9 < 5);
  } while (bVar2 == 0x20);
  if (bVar2 != 0x3e) {
    bVar7 = bVar2 | 0x20;
    if (0x19 < (byte)(bVar2 + 0xbf)) {
      bVar7 = bVar2;
    }
    uVar5 = (ulong)(bVar7 == 0x69);
    bVar2 = pbVar11[uVar5 - 1];
    if (9 < (byte)(bVar2 - 0x30U)) {
      return '\0';
    }
    pbVar14 = pbVar11 + uVar5;
    pbVar11 = pbVar11 + uVar5 + 1;
    uVar5 = 0;
LAB_02042920:
    if (uVar5 <= (0x2f - (ulong)bVar2) / 10) goto code_r0x02042938;
    uVar5 = 0;
    pcVar13 = str_020ab792;
    while( true ) {
      do {
        pcVar17 = pcVar13 + 1;
        cVar3 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar3 == '\r');
      if (cVar3 == '\0') break;
      if (cVar3 == '\n') {
        recovered_20c6270(local_568,uVar5,1,'\x01');
        uVar5 = 0;
      }
      else if (uVar5 + 1 < 0x400) {
        local_568[uVar5] = cVar3;
        uVar5 = uVar5 + 1;
      }
    }
    goto LAB_02042b15;
  }
  pbVar14 = pbVar11 + 1;
  if (*pbVar11 != 0x20) {
    pbVar14 = pbVar11;
  }
  uVar5 = recovered_2002e80((char *)pbVar14);
  out = recovered_2000ad0(uVar5 + 1);
  if (out != (void *)0x0) {
    if (uVar5 != 0) {
      recovered_2001410(out,pbVar14,uVar5);
    }
    *(undefined1 *)((long)out + uVar5) = 0;
    lVar10 = DAT_020de628;
    uVar5 = lVar10 + 1;
    uVar9 = DAT_020de630;
    if (uVar5 <= uVar9) {
      pvVar6 = (void *)DAT_020de620;
      goto LAB_02042aa9;
    }
    uVar16 = 0x10;
    if (uVar9 != 0) {
      uVar16 = uVar9;
    }
    for (; uVar16 < uVar5; uVar16 = uVar16 * 2) {
      if ((long)uVar16 < 0) {
        uVar16 = uVar5;
        break;
      }
    }
    pvVar6 = (void *)DAT_020de620;
    pvVar6 = recovered_2000d40(pvVar6,uVar16 * 8);
    if (pvVar6 != (void *)0x0) {
      uVar5 = DAT_020de630;
      uVar9 = uVar16 - uVar5;
      if (uVar5 <= uVar16 && uVar9 != 0) {
        uVar8 = uVar5;
        if (3 < uVar9) {
          uVar12 = uVar9 & 0xfffffffffffffffc;
          uVar8 = uVar5 + uVar12;
          uVar15 = 0;
          do {
            puVar1 = (undefined8 *)((long)pvVar6 + uVar15 * 8 + uVar5 * 8);
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1 = (undefined8 *)((long)pvVar6 + uVar15 * 8 + uVar5 * 8 + 0x10);
            *puVar1 = 0;
            puVar1[1] = 0;
            uVar15 = uVar15 + 4;
          } while (uVar12 != uVar15);
          if (uVar9 == uVar12) goto LAB_02042a90;
        }
        do {
          *(undefined8 *)((long)pvVar6 + uVar8 * 8) = 0;
          uVar8 = uVar8 + 1;
        } while (uVar16 != uVar8);
      }
LAB_02042a90:
      DAT_020de620 = pvVar6;
      DAT_020de630 = uVar16;
      lVar10 = DAT_020de628;
      uVar5 = lVar10 + 1;
LAB_02042aa9:
      *(void **)((long)pvVar6 + lVar10 * 8) = out;
      DAT_020de628 = uVar5;
      return '\x01';
    }
    recovered_2000bb0(out);
  }
  uVar5 = 0;
  pcVar13 = str_020ab778;
  while( true ) {
    do {
      pcVar17 = pcVar13 + 1;
      cVar3 = *pcVar13;
      pcVar13 = pcVar17;
    } while (cVar3 == '\r');
    if (cVar3 == '\0') break;
    if (cVar3 == '\n') {
      recovered_20c6270(local_568,uVar5,1,'\x01');
      uVar5 = 0;
    }
    else if (uVar5 + 1 < 0x400) {
      local_568[uVar5] = cVar3;
      uVar5 = uVar5 + 1;
    }
  }
LAB_02042b15:
  recovered_20c6270(local_568,uVar5,1,'\x01');
LAB_02042b2b:
  recovered_203e680();
  return '\x01';
code_r0x02042938:
  lVar10 = (ulong)bVar2 + uVar5 * 10;
  uVar5 = lVar10 - 0x30;
  bVar2 = *pbVar14;
  pbVar11 = pbVar11 + 1;
  pbVar14 = pbVar14 + 1;
  if (9 < (byte)(bVar2 - 0x30U)) goto code_r0x02042955;
  goto LAB_02042920;
code_r0x02042955:
  if (bVar2 != 0x3e) {
    return '\0';
  }
  if (uVar5 == 0) {
    pcVar13 = str_020ab7b9;
  }
  else {
    if (*pbVar14 != 0x20) {
      pbVar11 = pbVar14;
    }
    uVar9 = DAT_020de628;
    if (bVar7 == 0x69) {
      if (uVar5 <= uVar9 + 1) {
        uVar4 = recovered_20e72a0(lVar10 - 0x31,pbVar11);
        if (uVar4 != '\0') {
          return '\x01';
        }
        pcVar13 = str_020ab778;
LAB_02042b8a:
        recovered_2057db0(pcVar13);
        recovered_203e680();
        return '\x01';
      }
      pcVar13 = str_020ab7df;
    }
    else {
      if (uVar5 <= uVar9) {
        uVar4 = recovered_20e7440(lVar10 - 0x31,pbVar11);
        if (uVar4 != '\0') {
          return '\x01';
        }
        pcVar13 = str_020ab822;
        goto LAB_02042b8a;
      }
      pcVar13 = str_020ab7ff;
    }
  }
  recovered_2057db0(pcVar13);
  goto LAB_02042b2b;
}
