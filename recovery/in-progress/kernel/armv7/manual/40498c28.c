/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

float recovered_40498c28(uint32_t *value){if(!value)return 0;uint32_t tag=value[0];if(tag==1||tag==5||tag==6)return(float)(int32_t)value[1];if(tag==2)return pf_bits_float(value[2]);return 0;}
