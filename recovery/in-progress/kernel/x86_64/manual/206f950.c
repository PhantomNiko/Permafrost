/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf3a8 (*(uint64_t volatile *)(0x215a7b8U))
#define DAT_020cf3d8 (*(uint32_t volatile *)(0x215a7e8U))
#define DAT_020cf400 (*(uint32_t volatile *)(0x215a810U))
#define DAT_020cf404 (*(uint32_t volatile *)(0x215a814U))
#define local_34 (*(uint *)(frame + 28))
uchar recovered_206f950(void)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uchar uVar6;
  uint uVar7;
  char *out;
  uint uVar8;
  uint uVar9;
  char *out_00;
  ulong uVar10;
  long lVar11;

  local_34 = DAT_020cf400;
  iVar3 = DAT_020cf404;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = DAT_020cf3d8;
    uVar7 = ((iVar3 + uVar7) - 1) / uVar7;
  }
  iVar3 = PF_PART4(DAT_020cf3a8, 0);
  uVar8 = iVar3 * 0x100;
  if (uVar8 == 0) {
    uVar6 = recovered_206f090(&local_34,uVar7,0);
    if (uVar6 == '\0') {
      return '\0';
    }
  }
  else {
    uVar5 = DAT_020cf3d8;
    uVar9 = (uVar8 + uVar5) - 1;
    uVar1 = (ulong)uVar9 / (ulong)uVar5;
    uVar6 = recovered_206f090(&local_34,uVar7,(uint)uVar1);
    if (uVar6 == '\0') {
      return '\0';
    }
    if (uVar5 <= uVar9) {
      uVar7 = DAT_020cf3d8;
      out = recovered_2000ad0(uVar7 * uVar1);
      if (out != (char *)0x0) {
        uVar7 = DAT_020cf3d8;
        recovered_2002110(out,0,uVar7 * uVar1);
        lVar11 = DAT_020cf3a8;
        if (lVar11 != 0) {
          lVar11 = 0;
          uVar10 = 0;
          out_00 = out;
          do {
            recovered_2002110(out_00,0,0x100);
            lVar2 = DAT_020cf3a0;
            pf_varargs_20039e0__8_(out_00,0xf0,&DAT_020a25e3,lVar2 + lVar11);
            lVar2 = DAT_020cf3a0;
            *(undefined4 *)(out_00 + 0xf0) = *(undefined4 *)(lVar2 + 0x10c + lVar11);
            *(undefined8 *)(out_00 + 0xf4) = *(undefined8 *)(lVar2 + 0x100 + lVar11);
            uVar10 = uVar10 + 1;
            out_00 = out_00 + 0x100;
            lVar11 = lVar11 + 0x118;
            uVar4 = DAT_020cf3a8;
          } while (uVar10 < uVar4);
        }
        uVar7 = recovered_206f5c0(local_34,(long)out,uVar8,(uint)uVar1);
        recovered_2000bb0(out);
        if ((char)uVar7 != '\0') goto LAB_0204ccf5;
      }
      return '\0';
    }
  }
LAB_0204ccf5:
  DAT_020cf400 = local_34;
  DAT_020cf404 = uVar8;
  uVar7 = recovered_206fc40();
  return (uchar)uVar7;
}
