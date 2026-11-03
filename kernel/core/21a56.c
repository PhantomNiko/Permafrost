#include "functions.h"
#undef DAT_000445f0
#define DAT_000445f0 (*(uint8_t *)(0x445f0U))
#undef DAT_000445f4
#define DAT_000445f4 (*(uint32_t *)(0x445f4U))
#undef DAT_000445f8
#define DAT_000445f8 (*(uint32_t *)(0x445f8U))
#undef DAT_000445fc
#define DAT_000445fc (*(uint8_t *)(0x445fcU))
#undef DAT_000445fd
#define DAT_000445fd (*(uint8_t *)(0x445fdU))
#undef DAT_000445fe
#define DAT_000445fe (*(uint8_t *)(0x445feU))
#undef DAT_000445ff
#define DAT_000445ff (*(uint8_t *)(0x445ffU))
#undef DAT_00044600
#define DAT_00044600 (*(uint8_t *)(0x44600U))
#undef DAT_00044601
#define DAT_00044601 (*(uint8_t *)(0x44601U))
#undef DAT_00044602
#define DAT_00044602 (*(uint8_t *)(0x44602U))
#undef DAT_00044653
#define DAT_00044653 (*(uint8_t *)(0x44653U))
#undef DAT_00054e2d
#define DAT_00054e2d (*(uint8_t *)(0x54e2dU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21a56
 */

undefined4 FUN_00021a56(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  unsigned char frame[64];

  undefined1 *puVar1;
  int iVar2;
  int iVar3;

  DAT_00054e2d = 0;
  DAT_000445f0 = 1;
  puVar1 = &DAT_000445f0;
  DAT_000445f4 = 0;
  DAT_000445f8 = 0;
  DAT_000445fc = (undefined1)((uint)param_1 >> 0x10);
  DAT_000445fd = (undefined1)((uint)param_1 >> 8);
  DAT_000445fe = (undefined1)param_1;
  DAT_000445ff = (undefined1)((uint)param_2 >> 0x10);
  DAT_00044600 = (undefined1)((uint)param_2 >> 8);
  DAT_00044601 = (undefined1)param_2;
  DAT_00044602 = param_3;
  for (iVar2 = 0; iVar2 != 0x19; iVar2 = iVar2 + 1) {
    for (iVar3 = 0x13; iVar3 != 99; iVar3 = iVar3 + 1) {
      puVar1[iVar3] = 0x20;
    }
    (&DAT_00044653)[iVar2 * 0x51] = 0;
    puVar1 = puVar1 + 0x51;
  }
  recovered_21aed();
  return 1;
}
