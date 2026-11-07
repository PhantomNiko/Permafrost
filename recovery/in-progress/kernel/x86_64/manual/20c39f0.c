/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1570 (*(float *)(0x20eaf50U))
#define DAT_020a23c8 (*(float *)(0x20ebb68U))
#define DAT_020a23d8 (*(float *)(0x20ebb78U))
#define DAT_020a23dc (*(float *)(0x20ebb7cU))
#define DAT_020a23e0 (*(float *)(0x20ebb80U))
#define DAT_020a23e8 (*(float *)(0x20ebb88U))
#define _DAT_020a2260 (*(uint128 *)(0x20eb9c0U))
float recovered_20c39f0(float value) {
  while(value>DAT_020a23c8)value+=DAT_020a23d8;
  while(value<DAT_020a23dc)value+=DAT_020a23e0;
  float square=value*value,fourth=square*square,sixth=square*fourth;
  return (DAT_020a23e8*square+DAT_020a1570+fourth/pf_bits_float(PF_PART4(_DAT_020a2260,0)))-sixth/pf_bits_float(PF_PART4(_DAT_020a2260,4));
}
