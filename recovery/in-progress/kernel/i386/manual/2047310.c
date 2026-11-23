/* Allocation entry validation, including the native sentinel jump table.
 * Pooka's Free Software License. */
#include "functions.h"
uint32_t recovered_2047310(uint32_t current_low,uint32_t current_high,
                          uint32_t total_low,uint32_t total_high,int entry_address){
 uint64_t current=((uint64_t)current_high<<32)|current_low;
 uint64_t total=((uint64_t)total_high<<32)|total_low;
 if(current>=total || !entry_address)return 1;
 const uint32_t *entry=(const uint32_t *)(uintptr_t)(uint32_t)entry_address;
 uint64_t first=((uint64_t)entry[1]<<32)|entry[0];
 uint64_t next=((uint64_t)entry[3]<<32)|entry[2];
 switch(next){
 case UINT64_MAX-5:return first<current?0:10;
 case UINT64_MAX-3:return first==UINT64_C(0x4b4e494c54414650)?0:10;
 case UINT64_MAX-2:case UINT64_MAX-1:case UINT64_MAX:return 0;
 case 0:return first==0?0:10;
 default:break;
 }
 if(next+UINT64_C(0x1000)<UINT64_C(0xffc))return 10;
 return next==current || next>=total?10:0;
}
