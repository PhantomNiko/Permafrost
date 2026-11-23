#include "functions.h"
#undef DAT_025ebb48
#define DAT_025ebb48 (*(uint32_t volatile *)(0x25ebb48U))
#undef DAT_025ebb70
#define DAT_025ebb70 (*(uint32_t volatile *)(0x25ebb70U))
#undef DAT_025ebb74
#define DAT_025ebb74 (*(uint32_t volatile *)(0x25ebb74U))
#undef DAT_025ebb78
#define DAT_025ebb78 (*(uint32_t volatile *)(0x25ebb78U))
#undef DAT_025ebb7c
#define DAT_025ebb7c (*(uint32_t volatile *)(0x25ebb7cU))
#undef DAT_025ebb80
#define DAT_025ebb80 (*(uint32_t volatile *)(0x25ebb80U))
#undef DAT_025ebb90
#define DAT_025ebb90 (*(uint32_t volatile *)(0x25ebb90U))
#undef DAT_025ebc90
#define DAT_025ebc90 (*(uint32_t volatile *)(0x25ebc90U))
#undef DAT_025fbec0
#define DAT_025fbec0 (*(uint8_t volatile *)(0x25fbec0U))
#undef DAT_025fbec1
#define DAT_025fbec1 (*(uint8_t volatile *)(0x25fbec1U))
#undef DAT_025fbf0c
#define DAT_025fbf0c (*(uint32_t volatile *)(0x25fbf0cU))
#undef DAT_025fc418
#define DAT_025fc418 (*(uint64_t volatile *)(0x25fc418U))
#undef DAT_025fc420
#define DAT_025fc420 (*(uint64_t volatile *)(0x25fc420U))
#undef DAT_025feb10
#define DAT_025feb10 (*(uint8_t volatile *)(0x25feb10U))
#undef DAT_025feb98
#define DAT_025feb98 (*(uint32_t volatile *)(0x25feb98U))
#undef DAT_026001f0
#define DAT_026001f0 (*(uint32_t volatile *)(0x26001f0U))
#undef DAT_026001f4
#define DAT_026001f4 (*(uint32_t volatile *)(0x26001f4U))
#undef DAT_026001f8
#define DAT_026001f8 (*(uint8_t volatile *)(0x26001f8U))
#undef DAT_02610280
#define DAT_02610280 (*(uint8_t volatile *)(0x2610280U))
#define local_50 (*(byte *)(pf_stack_frame + 16))
#define local_48 (*(undefined8 * *)(pf_stack_frame + 24))
#define uStack_4f (*(undefined7 *)(pf_stack_frame + 17))
#define local_40 (*(int *)(pf_stack_frame + 32))
#define local_38 (*(int *)(pf_stack_frame + 40))
#define local_32 (*(byte *)(pf_stack_frame + 46))
#define local_31 (*(char *)(pf_stack_frame + 47))
#define unaff_retaddr (*(void * *)(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2096660
 */

/* WARNING: Type propagation algorithm not settling */

uint recovered_2096660(void)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  long lVar1;
  byte *pbVar2;
  int iVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  int iVar12;
  long lVar13;
  byte *pbVar14;
  int *piVar15;
  ulong uVar16;
  char cVar17;
  bool bVar18;
  bool bVar19;
  undefined8 extraout_XMM0_Qa = 0;
  undefined8 extraout_XMM0_Qa_00 = 0;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;

  recovered_2094ab0(unaff_retaddr);
  local_31 = '\0';
  lVar9 = recovered_2095700((undefined8 *)&local_50,(long)&local_31);
  iVar12 = local_40;
  uVar6 = recovered_200ab60();
  cVar17 = local_31;
  if (uVar6 < 0x20) {
    local_38 = iVar12;
    (&DAT_025feb98)[(ulong)uVar6 * 0x2e] = uVar6;
    if (lVar9 != 0) {
      lVar13 = *(long *)(&DAT_025feb10 + (ulong)uVar6 * 0xb8);
      cVar17 = '\0';
      if (lVar13 != 0) {
        uVar6 = recovered_200ab60();
        iVar12 = local_38;
        if (uVar6 < 0x20) {
          (&DAT_025feb98)[(ulong)uVar6 * 0x2e] = uVar6;
          lVar1 = *(long *)(&DAT_025feb10 + (ulong)uVar6 * 0xb8);
          if ((lVar1 != 0) &&
             (((*(long *)(lVar1 + 0x110) != 0 &&
               (iVar7 = *(int *)(*(long *)(lVar1 + 0x110) + 0x48), iVar7 != 0)) ||
              (iVar7 = *(int *)(lVar1 + 0x30), iVar7 != 0)))) {
            cVar17 = DAT_025fbec1;
            if (cVar17 == '\x01') {
              while( true ) {
                iVar3 = __atomic_exchange_n(&(DAT_026001f0),1,__ATOMIC_SEQ_CST);
                if (iVar3 == 0) break;
                do {
                  iVar3 = DAT_026001f0;
                } while (iVar3 != 0);
              }
              iVar3 = DAT_026001f4;
              cVar17 = DAT_026001f8;
              DAT_026001f0 = 0;
              if ((cVar17 == '\0') && (iVar3 == iVar7)) goto LAB_02096862;
            }
            while( true ) {
              iVar3 = __atomic_exchange_n(&(DAT_025fbf0c),1,__ATOMIC_SEQ_CST);
              if (iVar3 == 0) break;
              iVar3 = DAT_025fbf0c;
              while (iVar3 != 0) {
                iVar3 = DAT_025fbf0c;
              }
            }
            uVar4 = DAT_025fc418;
            if (uVar4 == 0) {
              DAT_025fbf0c = 0;
            }
            else {
              lVar1 = DAT_025fc420;
              piVar15 = (int *)(lVar1 + 8);
              bVar18 = true;
              uVar16 = 1;
              do {
                if (((char)piVar15[-2] == '\x01') && (*piVar15 == iVar7)) break;
                bVar18 = uVar16 < uVar4;
                piVar15 = piVar15 + 0xaa;
                bVar19 = uVar16 != uVar4;
                uVar16 = uVar16 + 1;
              } while (bVar19);
              DAT_025fbf0c = 0;
              if (bVar18) goto LAB_02096862;
            }
          }
        }
        if ((*(long *)(lVar13 + 0x110) == 0) ||
           (iVar7 = *(int *)(*(long *)(lVar13 + 0x110) + 0x48), iVar7 == 0)) {
          iVar7 = *(int *)(lVar13 + 0x30);
        }
        iVar3 = __atomic_exchange_n(&(DAT_025ebb48),1,__ATOMIC_SEQ_CST);
        while (iVar3 != 0) {
          do {
            iVar3 = DAT_025ebb48;
          } while (iVar3 != 0);
          iVar3 = __atomic_exchange_n(&(DAT_025ebb48),1,__ATOMIC_SEQ_CST);
        }
        if ((*(char *)(lVar9 + 0x10) == '\x01') && (*(int *)(lVar9 + 0x18) == local_38)) {
          if (*(int *)(lVar9 + 0x1c) == iVar7) {
            DAT_025ebb48 = 0;
            cVar17 = '\0';
            goto joined_r0x02096922;
          }
          if (*(char *)(lVar9 + 0x11) == '\x01') goto code_r0x0209690d;
          if (*(int *)(lVar9 + 0x20) == 0) {
            *(int *)(lVar9 + 0x20) = *(int *)(lVar13 + 0x30);
            *(undefined8 *)(lVar9 + 0x24) = 0xffffffff00000000;
            *(undefined1 *)(lVar9 + 0x14) = 1;
            *(undefined8 *)(lVar9 + 0x30) = 0;
            *(undefined2 *)(lVar9 + 0x12) = 1;
LAB_0209696c:
            if (*(char *)(lVar9 + 0x13) == '\x01') {
              bVar5 = *(byte *)(*(long *)(lVar9 + 0x4058) + *(long *)(lVar9 + 0x30));
              if (bVar5 == 0) {
                recovered_2095830(lVar9);
                *(undefined2 *)(lVar9 + 0x12) = 0;
                *(undefined1 *)(lVar9 + 0x14) = 0;
                *(undefined4 *)(lVar9 + 0x20) = 0;
                bVar5 = 0xd;
                lVar13 = 0;
                uVar10 = extraout_XMM0_Qa_00;
              }
              else {
                lVar13 = *(long *)(lVar9 + 0x30) + 1;
                uVar10 = extraout_XMM0_Qa;
              }
              *(long *)(lVar9 + 0x30) = lVar13;
              DAT_025ebb48 = 0;
              local_32 = 10;
              if (bVar5 != 0xd) {
                local_32 = bVar5;
              }
              uVar6 = 0x1c0d;
              if (bVar5 != 0xd) {
                uVar6 = (uint)bVar5;
              }
              recovered_20c6d40(lVar9,iVar12,(long)&local_32,1);
              cVar17 = '\x01';
              goto joined_r0x02096922;
            }
          }
          else if ((*(int *)(lVar9 + 0x20) == *(int *)(lVar13 + 0x30)) &&
                  ((*(byte *)(lVar9 + 0x14) & 1) != 0)) goto LAB_0209696c;
          DAT_025ebb48 = 0;
          recovered_20a7410();
        }
        else {
code_r0x0209690d:
          DAT_025ebb48 = 0;
        }
        cVar17 = '\x01';
      }
    }
    uVar6 = 0;
  }
  else {
    if (lVar9 == 0) {uVar6=0;goto joined_r0x02096922;}
LAB_02096862:
    cVar17 = '\0';
    uVar6 = 0;
  }
joined_r0x02096922:
  if (local_48 != (undefined8 *)0x0) {
    while( true ) {
      iVar12 = __atomic_exchange_n(&(DAT_025ebb48),1,__ATOMIC_SEQ_CST);
      if (iVar12 == 0) break;
      do {
        iVar12 = DAT_025ebb48;
      } while (iVar12 != 0);
    }
    uVar8 = recovered_200ab60();
    if (uVar8 < 0x20) {
      (&DAT_025feb98)[(ulong)uVar8 * 0x2e] = uVar8;
      pbVar2 = *(byte **)(&DAT_025feb10 + (ulong)uVar8 * 0xb8);
    }
    else {
      pbVar2 = (byte *)0x0;
    }
    do {
      pbVar14 = pbVar2;
      if (pbVar14 == (byte *)0x0) goto code_r0x02096a9d;
      pbVar2 = *(byte **)pbVar14;
    } while ((pbVar2 != (byte *)0x0) && (pbVar2 != &local_50));
    if (pbVar2 == &local_50) {
      *(ulong *)pbVar14 = CONCAT71(uStack_4f,local_50);
      recovered_2094c90(local_48,local_40);
      local_48 = (undefined8 *)0x0;
    }
code_r0x02096a9d:
    DAT_025ebb48 = 0;
  }
  if (cVar17 != '\0') {
    return uVar6;
  }
  local_50 = 0;
  uVar10 = recovered_2096d80();
  if ((char)uVar10 == '\0') {
    return 0;
  }
  while( true ) {
    iVar12 = __atomic_exchange_n(&(DAT_025ebb70),1,__ATOMIC_SEQ_CST);
    if (iVar12 == 0) break;
    iVar12 = DAT_025ebb70;
    while (iVar12 != 0) {
      iVar12 = DAT_025ebb70;
    }
  }
  DAT_025ebb70 = 0;
  cVar17 = DAT_025fbec0;
  if (cVar17 != '\x01') {
LAB_02096b3d:
    uVar6 = recovered_200ab60();
    iVar12 = 0;
    if (uVar6 < 0x20) {
      (&DAT_025feb98)[(ulong)uVar6 * 0x2e] = uVar6;
      lVar9 = *(long *)(&DAT_025feb10 + (ulong)uVar6 * 0xb8);
      if ((lVar9 != 0) &&
         ((*(long *)(lVar9 + 0x110) == 0 ||
          (iVar12 = *(int *)(*(long *)(lVar9 + 0x110) + 0x48), iVar12 == 0)))) {
        iVar12 = *(int *)(lVar9 + 0x30);
      }
    }
    while( true ) {
      iVar7 = __atomic_exchange_n(&(DAT_025ebb74),1,__ATOMIC_SEQ_CST);
      if (iVar7 == 0) break;
      iVar7 = DAT_025ebb74;
      while (iVar7 != 0) {
        iVar7 = DAT_025ebb74;
      }
    }
    uVar6 = DAT_025ebb78;
    uVar8 = DAT_025ebb7c;
    if ((uVar6 == uVar8) || (iVar7 = DAT_025ebb80, iVar12 != iVar7)) {
      DAT_025ebb74 = 0;
    }
    else {
      DAT_025ebb78 = uVar6 + 1 & 0x3f;
      DAT_025ebb74 = 0;
      if ((&DAT_025ebb90)[uVar6] != 0) {
        return (&DAT_025ebb90)[uVar6];
      }
    }
    uVar6 = recovered_2096e90();
    uVar8 = recovered_200ab60();
    iVar12 = 0;
    if (uVar8 < 0x20) {
      (&DAT_025feb98)[(ulong)uVar8 * 0x2e] = uVar8;
      lVar9 = *(long *)(&DAT_025feb10 + (ulong)uVar8 * 0xb8);
      if ((lVar9 != 0) &&
         ((*(long *)(lVar9 + 0x110) == 0 ||
          (iVar12 = *(int *)(*(long *)(lVar9 + 0x110) + 0x48), iVar12 == 0)))) {
        iVar12 = *(int *)(lVar9 + 0x30);
      }
    }
    while( true ) {
      iVar7 = __atomic_exchange_n(&(DAT_025ebb74),1,__ATOMIC_SEQ_CST);
      if (iVar7 == 0) break;
      do {
        iVar7 = DAT_025ebb74;
      } while (iVar7 != 0);
    }
    iVar3 = DAT_025ebc90;
    iVar7 = DAT_025ebb80;
    DAT_025ebb74 = 0;
    if (((uVar6 & 0x4ff00) != 0x41000 || iVar7 != iVar12) || iVar3 == 0) {
      return uVar6;
    }
    uVar10 = recovered_20970c0(iVar12);
    if ((char)uVar10 == '\0') {
      return 0;
    }
    recovered_20974b0(iVar12);
    return 0;
  }
  do {
    pcVar11 = recovered_2024fc0((char *)&local_50);
    if ((char)pcVar11 == '\0') goto LAB_02096b3d;
    cVar17 = DAT_02610280;
  } while ((cVar17 == '\x01') && (DAT_02610280 = 0, local_50 == 10));
  uVar6 = 0x1c0d;
  switch((uintptr_t)(local_50)) {
  case 9:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
switchD_02096cef_caseD_9:
    uVar6 = 0;
    if ((byte)(local_50 - 0x20) < 0x5f) {
      uVar6 = (uint)local_50;
    }
    break;
  case 10:
  case 0xd:
    break;
  case 0x1b:
    uVar6 = 0x11b;
    break;
  default:
    if (local_50 != 0x7f) goto switchD_02096cef_caseD_9;
  case 8:
    uVar6 = 0xe08;
  }
  return uVar6;
}
