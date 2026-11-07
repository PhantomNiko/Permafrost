/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define DAT_020a99fe (*(uint8_t *)(0x20faf75U))
#define DAT_020a9a00 (*(uint8_t *)(0x20faf77U))
#define DAT_020a9a03 (*(uint8_t *)(0x20faf7aU))
#define DAT_020a9a06 (*(uint8_t *)(0x20faf7dU))
#define DAT_020a9a09 (*(uint8_t *)(0x20faf80U))
#define DAT_020a9a0c (*(uint8_t *)(0x20faf83U))
#define uStack_38 (*(undefined8 *)(frame + 24))
uchar recovered_20bf4a0(long *param_1,char *param_2)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char cVar2;
  uchar uVar3;
  uint uVar4;
  undefined8 in_RAX;
  void *pvVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong size;
  char *pcVar9;

  pcVar9 = &DAT_020a259c;
  if (param_2 != (char *)0x0) {
    pcVar9 = param_2;
  }
  if ((param_1 == (long *)0x0) ||
     (uStack_38 = in_RAX, uVar4 = recovered_20a93d0(param_1,&DAT_020a99fe), (char)uVar4 == '\0')) {
LAB_020812ce:
    uVar3 = '\0';
  }
  else {
    cVar2 = *pcVar9;
    if (cVar2 != '\0') {
      lVar8 = 0;
      do {
        uStack_38 = CONCAT17(cVar2,(undefined7)uStack_38);
        switch((uintptr_t)(cVar2)) {
        case '\t':
          puVar7 = &DAT_020a9a0c;
          break;
        case '\n':
          puVar7 = &DAT_020a9a06;
          break;
        case '\v':
        case '\f':
        case '\x0e':
        case '\x0f':
        case '\x10':
        case '\x11':
        case '\x12':
        case '\x13':
        case '\x14':
        case '\x15':
        case '\x16':
        case '\x17':
        case '\x18':
        case '\x19':
        case '\x1a':
        case '\x1b':
        case '\x1c':
        case '\x1d':
        case '\x1e':
        case '\x1f':
        case ' ':
        case '!':
switchD_02081201_caseD_b:
          lVar6 = *param_1;
          size = param_1[1];
          uVar1 = lVar6 + 2;
          if (size < uVar1) {
            if (size == 0) {
              size = 0x20;
            }
            for (; size < uVar1; size = size * 2) {
              if ((long)size < 0) {
                size = uVar1;
                break;
              }
            }
            pvVar5 = recovered_2000d40((void *)param_1[2],size);
            if (pvVar5 == (void *)0x0) goto LAB_020812ce;
            param_1[2] = (long)pvVar5;
            param_1[1] = size;
            lVar6 = *param_1;
          }
          else {
            pvVar5 = (void *)param_1[2];
          }
          recovered_2001410((void *)((long)pvVar5 + lVar6),(void *)((long)&uStack_38 + 7),1);
          lVar6 = *param_1;
          *param_1 = lVar6 + 1;
          *(undefined1 *)(param_1[2] + 1 + lVar6) = 0;
          goto LAB_020811db;
        case '\r':
          puVar7 = &DAT_020a9a09;
          break;
        case '\"':
          puVar7 = &DAT_020a9a03;
          break;
        default:
          if (cVar2 != '\\') goto switchD_02081201_caseD_b;
          puVar7 = &DAT_020a9a00;
        }
        uVar4 = recovered_20a93d0(param_1,puVar7);
        if ((char)uVar4 == '\0') goto LAB_020812ce;
LAB_020811db:
        cVar2 = pcVar9[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (cVar2 != '\0');
    }
    uVar4 = recovered_20a93d0(param_1,&DAT_020a99fe);
    uVar3 = (uchar)uVar4;
  }
  return uVar3;
}
