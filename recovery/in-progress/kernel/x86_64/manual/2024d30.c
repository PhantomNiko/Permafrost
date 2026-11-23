/* Recovered UEFI text-output argument and ABI boundary; Pooka's Free Software License. */
#include "functions.h"
#undef DAT_02132f58
#define DAT_02132f58 (*(uint32_t volatile *)(0x2132f58U))
#undef DAT_02135000
#define DAT_02135000 (*(uint64_t volatile *)(0x2135000U))
#undef DAT_02135008
#define DAT_02135008 (*(uint8_t volatile *)(0x2135008U))
#undef DAT_02135010
#define DAT_02135010 (*(uint64_t volatile *)(0x2135010U))
#undef DAT_0223bae0
#define DAT_0223bae0 (*(uint8_t volatile *)(0x223bae0U))
#undef DAT_0223bae4
#define DAT_0223bae4 (*(uint32_t volatile *)(0x223bae4U))
#undef DAT_0223bb18
#define DAT_0223bb18 (*(uint32_t volatile *)(0x223bb18U))
#undef DAT_0223bb1c
#define DAT_0223bb1c (*(uint32_t volatile *)(0x223bb1cU))
#undef DAT_0223bb20
#define DAT_0223bb20 (*(uint32_t volatile *)(0x223bb20U))
#undef DAT_0223bb2c
#define DAT_0223bb2c (*(uint32_t volatile *)(0x223bb2cU))
#undef DAT_0223bd48
#define DAT_0223bd48 (*(uint32_t volatile *)(0x223bd48U))
#undef DAT_0223c178
#define DAT_0223c178 (*(uint64_t volatile *)(0x223c178U))
#undef DAT_025eb404
#define DAT_025eb404 (*(uint32_t volatile *)(0x25eb404U))
#undef DAT_025eb408
#define DAT_025eb408 (*(uint64_t volatile *)(0x25eb408U))
#undef str_02127738
#define str_02127738 (*(char volatile (*)[1])(0x2127738U))
#define local_b0 (*(char * *)(pf_stack_frame + 16))
#define local_a8 (*(undefined8 *)(pf_stack_frame + 24))
#define local_a0 (*(ulong *)(pf_stack_frame + 32))
#define local_98 (*(byte * *)(pf_stack_frame + 40))
#define local_90 (*(undefined8 *)(pf_stack_frame + 48))
#define local_19 (*(byte *)(pf_stack_frame + 167))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2024d30
 */

void recovered_2024d30(byte param_1)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  undefined2 uVar1;
  undefined4 uVar2;
  long lVar3;
  char cVar4;
  code *pcVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;

  cVar4 = DAT_0223bae0;
  if (cVar4 != '\x01') {
    return;
  }
  local_19 = param_1;
  if (param_1 == 10) {
    recovered_2024d30(0xd);
  }
  lVar3 = DAT_02135000;
  if ((lVar3 == 0) || (iVar11 = DAT_0223bb18, iVar11 != 0x33454657)) {
    lVar3 = DAT_02135010;
    if (lVar3 == 0) {
      return;
    }
  }
  else {
    iVar11 = DAT_0223bb1c;
    if ((((iVar11 == 0xb) && (uVar6 = DAT_0223bb20, 0x21f7 < uVar6)) &&
        (uVar6 = DAT_0223bd48, (uVar6 & 4) == 0)) && ((uVar6 & 0x1000) != 0)) {
      PF_PART4(local_b0, 0) = (uint)param_1;
      cVar4 = DAT_02135008;
      if (cVar4 != '\0') {
        return;
      }
      uVar6 = DAT_0223bb2c;
      uVar7 = DAT_0223c178;
      uVar12 = (ulong)uVar6;
      if (uVar7 != 0) {
        uVar12 = uVar7;
      }
      if (uVar12 == 0) {
        return;
      }
      if (*(code **)(uVar12 + 8) == (code *)0x0) {
        return;
      }
      /* UEFI SIMPLE_TEXT_OUTPUT.OutputString uses the Microsoft x64 ABI. */
      typedef unsigned long (__attribute__((ms_abi)) *PfOutputString)(uintptr_t,const uint16_t *);
      uint16_t text[2]={param_1,0};
      ((PfOutputString)*(uintptr_t *)(uVar12+8))(uVar12,text);
      return;
    }
    lVar3 = DAT_02135010;
    if (lVar3 == 0) {
      iVar11 = DAT_0223bb1c;
      if (iVar11 != 0xb) {
        return;
      }
      uVar6 = DAT_0223bb20;
      if (uVar6 < 0x21f8) {
        return;
      }
      iVar11 = 0xf4241;
      while( true ) {
        iVar10 = DAT_025eb404;
        if (iVar10 == 1) {
          uVar2 = DAT_02132f58;
          bVar9 = in((short)uVar2 + 5);
        }
        else {
          if (iVar10 != 2) goto LAB_02024f00;
          lVar3 = DAT_025eb408;
          bVar9 = *(byte *)(lVar3 + 5);
        }
        if ((bVar9 & 0x20) != 0) break;
        iVar11 = iVar11 + -1;
        if (iVar11 == 0) {
          return;
        }
      }
      iVar10 = DAT_025eb404;
LAB_02024f00:
      if (iVar10 == 1) {
        uVar1 = PF_PART2(DAT_02132f58, 0);
        out(uVar1,param_1);
        return;
      }
      if (iVar10 == 2) {
        pbVar8 = (byte *)DAT_025eb408;
        *pbVar8 = param_1;
        return;
      }
      return;
    }
  }
  uVar6 = DAT_0223bae4;
  if (((ulong)uVar6 != 0) && (cVar4 = DAT_02135008, cVar4 == '\0')) {
    recovered_2002570(&local_b0,0,0x90);
    local_b0 = str_02127738;
    local_a8 = 0x100000003;
    local_98 = &local_19;
    local_90 = 1;
    pcVar5 = (code *)DAT_02135010;
    local_a0 = (ulong)uVar6;
    (*pcVar5)(&local_b0);
  }
  return;
}
