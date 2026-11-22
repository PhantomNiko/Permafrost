/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define local_134 (*(char *)(frame + 348))
#define local_133 (*(undefined1 (*)[95])(frame + 349))
#define local_d4 (*(char *)(frame + 444))
#define local_d3 (*(undefined1 (*)[191])(frame + 445))
#define local_14 (*(char * *)(frame + 636))
#define local_278 (*(int (*)[9])(frame + 24))
#define local_254 (*(char *)(frame + 60))
#define local_253 (*(undefined1 (*)[159])(frame + 61))
#define local_1b4 (*(char *)(frame + 220))
#define local_1b3 (*(char (*)[63])(frame + 221))
#define local_174 (*(char (*)[64])(frame + 284))


undefined4 recovered_20b5370(char *in_ECX)

{
  unsigned char frame[688] __attribute__((aligned(16))) = {0};

  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;

  uVar1 = recovered_20046b0();
  if (((in_ECX == (char *)0x0) || (uVar1 == 0 || *in_ECX == '\0')) ||
     (pcVar2 = (char *)recovered_20b55d0(uVar1,local_278), pcVar2 == (char *)0x0)) {
    return 0;
  }
  if (*in_ECX != '\0') {
    if (local_254 != '\0') {
      pcVar2 = &local_254;
      puVar5 = local_253;
      do {
        local_14 = pcVar2;
        iVar7 = 0;
        pcVar4 = pcVar2;
        do {
          cVar6 = in_ECX[iVar7];
          pcVar4 = (char *)CONCAT31((int3)((uint)pcVar4 >> 8),1);
          if (cVar6 == '\0') {
            return pcVar4;
          }
          if ((byte)(local_254 + 0x9fU) < 0x1a) {
            local_254 = local_254 + -0x20;
          }
          if ((byte)(cVar6 + 0x9fU) < 0x1a) {
            cVar6 = cVar6 + -0x20;
          }
          if (local_254 != cVar6) goto LAB_020b541e;
          local_254 = puVar5[iVar7];
          iVar7 = iVar7 + 1;
        } while (local_254 != '\0');
        if (in_ECX[iVar7] == '\0') {
          return pcVar4;
        }
LAB_020b541e:
        local_254 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (local_254 != '\0');
      if (*in_ECX == '\0') goto LAB_020b5529;
    }
    pcVar4 = &local_1b4;
    if (local_1b4 != '\0') {
      do {
        iVar7 = 0;
        do {
          cVar6 = in_ECX[iVar7];
          pcVar2 = (char *)CONCAT31((int3)((uint)pcVar2 >> 8),1);
          if (cVar6 == '\0') {
            return pcVar2;
          }
          if ((byte)(local_1b4 + 0x9fU) < 0x1a) {
            local_1b4 = local_1b4 + -0x20;
          }
          if ((byte)(cVar6 + 0x9fU) < 0x1a) {
            cVar6 = cVar6 + -0x20;
          }
          if (local_1b4 != cVar6) goto LAB_020b548f;
          local_1b4 = pcVar4[iVar7 + 1];
          iVar7 = iVar7 + 1;
        } while (local_1b4 != '\0');
        if (in_ECX[iVar7] == '\0') {
          return pcVar2;
        }
LAB_020b548f:
        local_1b4 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
      } while (local_1b4 != '\0');
      if (*in_ECX == '\0') goto LAB_020b5529;
    }
    if (local_134 == '\0') {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = &local_134;
      puVar5 = local_133;
      do {
        local_14 = pcVar2;
        iVar7 = 0;
        pcVar4 = pcVar2;
        do {
          cVar6 = in_ECX[iVar7];
          pcVar4 = (char *)CONCAT31((int3)((uint)pcVar4 >> 8),1);
          if (cVar6 == '\0') {
            return pcVar4;
          }
          if ((byte)(local_134 + 0x9fU) < 0x1a) {
            local_134 = local_134 + -0x20;
          }
          if ((byte)(cVar6 + 0x9fU) < 0x1a) {
            cVar6 = cVar6 + -0x20;
          }
          if (local_134 != cVar6) goto LAB_020b54f6;
          local_134 = puVar5[iVar7];
          iVar7 = iVar7 + 1;
        } while (local_134 != '\0');
        if (in_ECX[iVar7] == '\0') {
          return pcVar4;
        }
LAB_020b54f6:
        local_134 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (local_134 != '\0');
      pcVar2 = (char *)CONCAT31((int3)((uint)pcVar2 >> 8),*in_ECX == '\0');
    }
    if (local_d4 != '\0' && (char)pcVar2 == '\0') {
      pcVar2 = &local_d4;
      puVar5 = local_d3;
      do {
        local_14 = pcVar2;
        iVar7 = 0;
        pcVar4 = pcVar2;
        do {
          cVar6 = in_ECX[iVar7];
          pcVar4 = (char *)CONCAT31((int3)((uint)pcVar4 >> 8),1);
          if (cVar6 == '\0') {
            return pcVar4;
          }
          if ((byte)(local_d4 + 0x9fU) < 0x1a) {
            local_d4 = local_d4 + -0x20;
          }
          if ((byte)(cVar6 + 0x9fU) < 0x1a) {
            cVar6 = cVar6 + -0x20;
          }
          if (local_d4 != cVar6) goto LAB_020b557e;
          local_d4 = puVar5[iVar7];
          iVar7 = iVar7 + 1;
        } while (local_d4 != '\0');
        if (in_ECX[iVar7] == '\0') {
          return pcVar4;
        }
LAB_020b557e:
        local_d4 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (local_d4 != '\0');
    }
  }
LAB_020b5529:
  uVar3 = recovered_205a7b0(pcVar2,local_174,in_ECX);
  return uVar3;
}
#undef local_134
#undef local_133
#undef local_d4
#undef local_d3
#undef local_14
#undef local_278
#undef local_254
#undef local_253
#undef local_1b4
#undef local_1b3
#undef local_174
