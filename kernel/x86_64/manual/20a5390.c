/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a4156 (*(uint8_t *)(0x20f4911U))
uint recovered_20a5390(long table) {
    if(!table)return 0;
    for(uint count=0;count<0x7fffffffU;count++) {
        char key[32];
        recovered_2005a30(key,sizeof(key),(char *)&DAT_020a4156,count+1);
        if((int32_t)recovered_20a5450(table,(long)key)<0)return count;
    }
    return 0x7fffffffU;
}
