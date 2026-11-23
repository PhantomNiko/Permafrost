/* Native button geometry and tail-forwarded text; Pooka's Free Software License. */
#include "functions.h"
void recovered_10002db0(void *state,ulonglong xy,ulonglong wh,char *label,int selected){
 uint32_t x=(uint32_t)xy,y=(uint32_t)(xy>>32),width=(uint32_t)wh;
 recovered_10002c5c((long)state,xy,wh,recovered_10002d1c(selected?2:59)&0xffffffU);
 recovered_10002e5c((long)state,xy,wh,recovered_10002d1c(3)&0xffffffU);
 uint64_t highlight=(uint64_t)(uint32_t)(x+1)|((uint64_t)(uint32_t)(y+1)<<32);
 recovered_10002c5c((long)state,highlight,(uint64_t)(uint32_t)(width-2)|(1ULL<<32),recovered_10002d1c(31)&0xffffffU);
 recovered_10002ef4(state,(int32_t)(x+9),(int32_t)(y+6),label,recovered_10002d1c(selected?1:50)&0xffffffU,(int32_t)(width-16));
}
