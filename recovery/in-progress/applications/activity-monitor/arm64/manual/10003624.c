/* Native selector geometry and tail-forwarded text; Pooka's Free Software License. */
#include "functions.h"
void recovered_10003624(long state,ulong xy){
 uint32_t x=(uint32_t)xy,y=(uint32_t)(xy>>32);
 uint64_t box=(uint64_t)(uint32_t)(x+54)|((uint64_t)(uint32_t)(y+14)<<32);
 const char *name=*(unsigned char *)(state+0x448)?(char *)(state+0x448):(char *)(pf_module_state+0x477);
 recovered_10002c5c(state,box,250ULL|(22ULL<<32),recovered_10002d1c(2)&0xffffffU);
 recovered_10002e5c(state,box,250ULL|(22ULL<<32),recovered_10002d1c(3)&0xffffffU);
 recovered_10002ef4((void *)state,(int32_t)(x+63),(int32_t)(y+21),(char *)name,recovered_10002d1c(1)&0xffffffU,216);
 box=(uint64_t)(uint32_t)(x+286)|((uint64_t)(uint32_t)(y+15)<<32);
 recovered_10002c5c(state,box,17ULL|(20ULL<<32),recovered_10002d1c(4)&0xffffffU);
 recovered_10002ef4((void *)state,(int32_t)(x+291),(int32_t)(y+21),(char *)(pf_module_state+0x48d),recovered_10002d1c(1)&0xffffffU,8);
}
