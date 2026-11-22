/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define adStack_100 (*(double (*)[4])(frame + 16))
#define dStack_60 (*(double *)(frame + 176))
#define pvStack_58 (*(void * *)(frame + 184))
#define pvStack_d0 (*(void * *)(frame + 64))
#define uStack_48 (*(undefined8 *)(frame + 200))
#define uStack_50 (*(undefined8 *)(frame + 192))
#define uStack_68 (*(undefined8 *)(frame + 168))
#define uStack_70 (*(undefined8 *)(frame + 160))
#define uStack_78 (*(undefined8 *)(frame + 152))
#define uStack_80 (*(undefined8 *)(frame + 144))
#define uStack_88 (*(undefined8 *)(frame + 136))
#define uStack_90 (*(undefined8 *)(frame + 128))
#define uStack_98 (*(undefined8 *)(frame + 120))
#define uStack_a0 (*(undefined8 *)(frame + 112))
#define uStack_a8 (*(undefined8 *)(frame + 104))
#define uStack_b0 (*(undefined8 *)(frame + 96))
#define uStack_b8 (*(undefined2 *)(frame + 88))
#define uStack_c0 (*(undefined8 *)(frame + 80))
#define uStack_c8 (*(undefined8 *)(frame + 72))
#define uStack_d8 (*(undefined8 *)(frame + 56))
#define uStack_e0 (*(undefined8 *)(frame + 48))
int * recovered_82418298(int *param_1,double param_2,undefined1 *param_3,long param_4,
                        undefined4 param_5)

{
  unsigned char frame[304] __attribute__((aligned(16))) = {0};

  int iVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  long lVar9;
  undefined2 *puVar10;
  int *piVar11;
  undefined8 extraout_x1 = 0;
  double *pdVar12;
  undefined8 *in_x8;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 in_q1 [16];

  pdVar12 = adStack_100;
  uStack_70 = 0;
  uStack_68 = 0;
  dStack_60 = 0.0;
  pvStack_58 = (void *)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  pvStack_d0 = (void *)CONCAT44(PF_PART4(pvStack_d0, 4),(int)param_3);
  lVar9 = recovered_82419534((long *)(param_1 + 0x40),(int *)&pvStack_d0);
  if (lVar9 == *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x42) * 8) {
    if (((uint)pvStack_d0 >> 0x10 == 0) && (*(char *)((long)param_1 + 0xe2) == '\x01')) {
      iVar4 = param_1[0x34];
      iVar15 = 0;
      do {
        iVar1 = iVar15 + 2;
        if ((uint)*(ushort *)(param_1 + 0x35) * 2 + 2 == iVar1) goto LAB_404126ec;
        lVar9 = *(long *)(param_1 + 2);
        uVar6 = *(ushort *)
                 (lVar9 + (ulong)(iVar4 + iVar15 + (uint)*(ushort *)((long)param_1 + 0xd6)));
        iVar15 = iVar1;
      } while (((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8) < ((uint)pvStack_d0 & 0xffff));
      uVar6 = *(ushort *)(lVar9 + (ulong)((iVar4 + iVar1 + (uint)*(ushort *)(param_1 + 0x36)) - 2));
      uVar3 = (uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8;
      if (((uint)pvStack_d0 & 0xffff) < uVar3) goto LAB_404126ec;
      iVar15 = iVar4 + -2 + iVar1;
      uVar6 = *(ushort *)(lVar9 + (ulong)((uint)*(ushort *)((long)param_1 + 0xda) + iVar15));
      uVar5 = *(ushort *)(lVar9 + (ulong)((uint)*(ushort *)(param_1 + 0x37) + iVar15));
      uVar7 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
      uVar17 = (uint)pvStack_d0;
      if (((uVar7 != 0) &&
          ((uVar13 = (ulong)((iVar4 + (uint)pvStack_d0 * 2 + iVar1 +
                             *(ushort *)(param_1 + 0x37) + uVar7 + uVar3 * -2) - 2),
           *(ulong *)(param_1 + 4) < uVar13 || *(ulong *)(param_1 + 4) - uVar13 < 2 ||
           (uVar17 = (uint)(*(ushort *)(lVar9 + uVar13) >> 8) |
                     (*(ushort *)(lVar9 + uVar13) & 0xff00ff) << 8, uVar17 == 0)))) ||
         (uVar17 = ((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8) + uVar17, (uVar17 & 0xffff) == 0))
      goto LAB_404126ec;
    }
    else {
LAB_404126ec:
      if (*(ulong *)(param_1 + 0x3c) != 0) {
        uVar13 = 0;
        uVar14 = *(ulong *)(param_1 + 0x3c);
        while (uVar13 <= uVar14 && uVar14 - uVar13 != 0) {
          uVar2 = uVar13 + (uVar14 - uVar13 >> 1);
          puVar16 = (uint *)(*(long *)(param_1 + 0x3a) + uVar2 * 0xc);
          if ((uint)pvStack_d0 < *puVar16) {
            uVar14 = uVar2;
          }
          else {
            if ((uint)pvStack_d0 <= puVar16[1]) {
              uVar17 = ((uint)pvStack_d0 - *puVar16) + puVar16[2];
              goto LAB_40412748;
            }
            uVar13 = uVar2 + 1;
          }
        }
      }
      uVar17 = 0;
    }
LAB_40412748:
    puVar10 = (undefined2 *)recovered_82419568((long *)(param_1 + 0x40),(undefined4 *)&pvStack_d0);
    *puVar10 = (short)uVar17;
  }
  else {
    uVar17 = (uint)*(ushort *)(lVar9 + 4);
  }
  uVar3 = uVar17;
  if ((uint)*(ushort *)((long)param_1 + 0xb2) <= (uVar17 & 0xffff)) {
    uVar3 = 0;
  }
  uVar5 = *(ushort *)(param_1 + 0x2d);
  uVar6 = (ushort)uVar3;
  if ((uint)uVar5 < (uVar3 & 0xffff) || (uint)uVar5 == (uVar3 & 0xffff)) {
    uVar6 = uVar5 - 1;
  }
  uVar13 = (ulong)(uint)param_1[0x26] + (ulong)uVar6 * 4;
  uVar14 = *(ulong *)(param_1 + 4);
  if (uVar13 <= uVar14 && 3 < uVar14 - uVar13) {
    if (((uint)((ulong)uVar3 & 0xffff) < (uint)uVar5) ||
       (uVar2 = (ulong)(uint)param_1[0x26] + (ulong)uVar5 * 2 + ((ulong)uVar3 & 0xffff) * 2,
       uVar2 <= uVar14 && (uVar14 != uVar2 && uVar14 - uVar2 != 1))) {
      dStack_60 = (double)(ushort)(*(ushort *)(*(long *)(param_1 + 2) + uVar13) >> 8 |
                                  *(ushort *)(*(long *)(param_1 + 2) + uVar13) << 8) * param_2;
      uStack_c8 = 0;
      uStack_c0 = 0;
      pvStack_d0 = (void *)0x0;
      uStack_b8 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      adStack_100[2] = 0.0;
      adStack_100[1] = 0.0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      adStack_100[0] = param_2;
      adStack_100[3] = param_2;
      bVar8 = recovered_82418a28(ZEXT816(0),in_q1,(long)param_1,uVar17 & 0xffff,adStack_100,
                                 (long *)&pvStack_d0,0);
      if (bVar8) {
        recovered_824192e4((int *)&pvStack_d0,extraout_x1,(long *)pdVar12);
        in_x8[2] = dStack_60;
      }
      else {
        recovered_824189f8(in_x8,&uStack_70);
      }
      uStack_c8 = 0;
      recovered_8240facc(pvStack_d0);
      goto LAB_4041284c;
    }
  }
  dStack_60 = pf_bits_double(NEON_ucvtf((ulong)*(ushort *)(param_1 + 0x2a)));
  dStack_60 = dStack_60 * param_2;
  recovered_824189f8(in_x8,&uStack_70);
LAB_4041284c:
  uStack_50 = 0;
  piVar11 = (int *)recovered_8240facc(pvStack_58);
  return piVar11;
}
