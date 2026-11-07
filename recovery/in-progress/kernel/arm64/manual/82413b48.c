/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044d920 (*(uint64_t *)(0x82472cb0U))
#define DAT_4044e419 (*(uint8_t *)(0x82473b1eU))
#define DAT_4044e41e (*(uint8_t *)(0x82473b23U))
#define DAT_4044e454 (*(uint8_t *)(0x82473b53U))
#define pvStack_98 (*(void * *)(frame + 24))
#define uStack_61 (*(undefined1 *)(frame + 79))
#define uStack_70 (*(undefined8 *)(frame + 64))
#define uStack_78 (*(ulong *)(frame + 56))
#define uStack_80 (*(undefined8 *)(frame + 48))
#define uStack_88 (*(undefined8 *)(frame + 40))
#define uStack_90 (*(ulong *)(frame + 32))
undefined4 recovered_82413b48(long param_1,long param_2,ulong param_3,ulong param_4)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  void *data;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;

  uVar10 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (0 < (int)param_3 && 0 < (int)param_4)) {
    puVar11 = recovered_8240ed54(param_1,0x82473b1bU);
    uVar10 = 0;
    if (puVar11 != (uint *)0x0) {
      bVar8 = recovered_82413a58(puVar11,0x82472cf7U,8);
      if (bVar8) {
        uStack_80 = (void *)CONCAT17((char)param_4,
                                     CONCAT16((char)(param_4 >> 8),
                                              CONCAT15((char)(param_4 >> 0x10),
                                                       CONCAT14((char)(param_4 >> 0x18),
                                                                CONCAT13((char)param_3,
                                                                         CONCAT12((char)(param_3 >>
                                                                                        8),CONCAT11(
                                                  (char)(param_3 >> 0x10),(char)(param_3 >> 0x18))))
                                                  ))));
        PF_PART5(uStack_78, 0) = (uint5)(uint)DAT_4044d920;
        uVar12 = recovered_82413a90(puVar11,&DAT_4044e419,(byte *)&uStack_80,0xd);
        if ((int)uVar12 != 0) {
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_80 = (void *)0x0;
          uVar1 = (param_3 & 0xffffffff) << 2 | 1;
          recovered_824143d4(&uStack_80,uVar1 * (param_4 & 0xffffffff));
          uVar14 = (param_3 & 0xffffffff) * 4;
          lVar23 = 1;
          lVar22 = param_2;
          for (uVar12 = 0; uVar12 != (param_4 & 0xffffffff); uVar12 = uVar12 + 1) {
            uVar16 = 0;
            uVar18 = 0;
            uVar17 = 0;
            data = (void *)(param_2 + uVar12 * uVar14);
            pvVar3 = (void *)0x0;
            if (uVar12 != 0) {
              pvVar3 = (void *)((long)data + (param_3 & 0xffffffff) * -4);
            }
            uVar19 = -(ulong)(pvVar3 == (void *)0x0);
            for (; uVar14 != uVar18; uVar18 = uVar18 + 1) {
              bVar4 = *(byte *)(lVar22 + uVar18);
              iVar6 = (int)(char)bVar4;
              uVar9 = 0x100 - bVar4;
              if (-1 < iVar6) {
                uVar9 = (uint)bVar4;
              }
              if (uVar18 < 4) {
                uVar20 = 0;
              }
              else {
                uVar20 = (uint)*(byte *)(lVar22 + uVar18 + -4);
              }
              uVar20 = iVar6 - uVar20;
              uVar2 = 0x100 - (uVar20 & 0xff);
              if (-1 < (char)uVar20) {
                uVar2 = uVar20 & 0xff;
              }
              if (pvVar3 != (void *)0x0) {
                uVar5 = iVar6 - (uint)*(byte *)((long)pvVar3 + uVar18);
                uVar20 = 0x100 - (uVar5 & 0xff);
                if (-1 < (char)uVar5) {
                  uVar20 = uVar5 & 0xff;
                }
                uVar19 = uVar19 + uVar20;
              }
              uVar17 = uVar17 + uVar9;
              uVar16 = uVar16 + uVar2;
            }
            cVar7 = uVar16 < uVar17;
            if (!(bool)cVar7) {
              uVar16 = uVar17;
            }
            if (uVar19 < uVar16 && pvVar3 != (void *)0x0) {
              cVar7 = '\x02';
            }
            pcVar13 = (char *)((long)uStack_80 + uVar12 * uVar1);
            *pcVar13 = cVar7;
            if (cVar7 == '\x02') {
              if (pvVar3 == (void *)0x0) goto LAB_4040c818;
              for (uVar18 = 0; uVar14 != uVar18; uVar18 = uVar18 + 1) {
                *(char *)((long)uStack_80 + uVar18 + lVar23) =
                     *(char *)(lVar22 + uVar18) - *(char *)((long)pvVar3 + uVar18);
              }
            }
            else if (cVar7 == '\x01') {
              for (uVar18 = 0; uVar14 != uVar18; uVar18 = uVar18 + 1) {
                if (uVar18 < 4) {
                  cVar7 = '\0';
                }
                else {
                  cVar7 = *(char *)(lVar22 + uVar18 + -4);
                }
                *(char *)((long)uStack_80 + uVar18 + lVar23) = *(char *)(lVar22 + uVar18) - cVar7;
              }
            }
            else {
LAB_4040c818:
              recovered_82400928(pcVar13 + 1,data,uVar14);
            }
            lVar22 = lVar22 + uVar14;
            lVar23 = lVar23 + uVar1;
          }
          uStack_90 = 0;
          uStack_88 = 0;
          pvStack_98 = (void *)0x0;
          uStack_61 = 0x78;
          recovered_824155d0((long *)&pvStack_98,&uStack_61);
          uStack_61 = 1;
          recovered_824155d0((long *)&pvStack_98,&uStack_61);
          uVar12 = 0;
          while (uVar1 = uStack_78 - uVar12, uVar12 <= uStack_78 && uVar1 != 0) {
            if (0xfffe < uVar1) {
              uVar1 = 0xffff;
            }
            uVar14 = uVar1 + uVar12;
            uStack_61 = uVar14 == uStack_78;
            recovered_824155d0((long *)&pvStack_98,&uStack_61);
            uStack_61 = (undefined1)uVar1;
            recovered_824155d0((long *)&pvStack_98,&uStack_61);
            uStack_61 = (undefined1)(uVar1 >> 8);
            recovered_824155d0((long *)&pvStack_98,&uStack_61);
            uVar9 = (uint)uVar1 ^ 0xffff;
            uStack_61 = (undefined1)uVar9;
            recovered_824155d0((long *)&pvStack_98,&uStack_61);
            uStack_61 = (undefined1)(uVar9 >> 8);
            recovered_824155d0((long *)&pvStack_98,&uStack_61);
            recovered_82414a9c((long *)&pvStack_98,(long)pvStack_98 + uStack_90,
                               (undefined1 *)((long)uStack_80 + uVar12),
                               (undefined1 *)((long)uStack_80 + uVar14));
            uVar12 = uVar14;
          }
          uVar9 = recovered_8241556c((long)uStack_80,uStack_78);
          uVar1 = uStack_90;
          recovered_824143d4((long *)&pvStack_98,uStack_90 + 4);
          uVar12 = 0;
          uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
          *(uint *)((long)pvStack_98 + uVar1) = uVar9 >> 0x10 | uVar9 << 0x10;
          do {
            uVar1 = uStack_90 - uVar12;
            if (uStack_90 < uVar12 || uVar1 == 0) {
              uStack_90 = 0;
              recovered_8240facc(pvStack_98);
              uStack_78 = 0;
              recovered_8240facc(uStack_80);
              uVar12 = recovered_82413a90(puVar11,&DAT_4044e41e,(byte *)0x0,0);
              uVar21 = (undefined4)uVar12;
              goto LAB_4040c94c;
            }
            if (0x3ffff < uVar1) {
              uVar1 = 0x40000;
            }
            uVar14 = recovered_82413a90(puVar11,&DAT_4044e454,(byte *)((long)pvStack_98 + uVar12),
                                        uVar1);
            uVar12 = uVar1 + uVar12;
          } while ((uVar14 & 1) != 0);
          uStack_90 = 0;
          recovered_8240facc(pvStack_98);
          uStack_78 = 0;
          recovered_8240facc(uStack_80);
        }
      }
      uVar21 = 0;
LAB_4040c94c:
      uVar15 = recovered_8240f09c((int *)puVar11);
      uVar10 = 0;
      if ((int)uVar15 == 0) {
        uVar10 = uVar21;
      }
    }
  }
  return uVar10;
}
