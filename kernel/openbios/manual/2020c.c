/* Permafrost 0.6; Pooka's Free Software License.
 * Initialize the heap from usable BIOS memory while retaining the OpenBIOS
 * firmware, its RAM disk, and the relocated C kernel.
 */
#include "functions.h"
struct heap_range { uint32_t first, last; };
static void heap_range_add(struct heap_range *ranges, uint32_t *count,
                           uint32_t first, uint32_t last) {
    if (first < last && *count < 32) ranges[(*count)++] = (struct heap_range){first,last};
}
uint recovered_2020c(void) {
    volatile uint8_t *initialized = (volatile uint8_t *)0x5d7c8;
    uint32_t *head = (uint32_t *)0x5d7cc;
    if (*initialized) return 0;
    *head = 0;
    const uint32_t *map = (const uint32_t *)0x6090;
    uint32_t records = *(const uint32_t *)0x608c;
    if (records > 16) records = 16;
    uint32_t top = 0;
    for (uint32_t i=0;i<records;++i) {
        uint32_t end = map[2*i] + map[2*i+1];
        if (end >= map[2*i] && end > top) top=end;
    }
    if (top <= 0x600000) top=*(const uint32_t *)0x6088;
    if (top <= 0x600000) top=0x4000000;
    /* The firmware packager bounds the resident firmware to one MiB. */
    uint32_t ceiling = top - 0x100000;
    uint32_t disk = *(const uint32_t *)0x201c8;
    uint32_t disk_end = disk + *(const uint32_t *)0x201cc;
    struct heap_range ranges[32];
    uint32_t count=0;
    for (uint32_t i=0;i<(records?records:1);++i) {
        uint32_t first=records?map[2*i]:0x600000;
        uint32_t last=records?first+map[2*i+1]:ceiling;
        if (last<first) last=ceiling;
        if (first<0x600000) first=0x600000;
        if (last>ceiling) last=ceiling;
        if (first>=last) continue;
        if (disk && disk_end>disk && first<disk_end && last>disk) {
            if(first<disk) heap_range_add(ranges,&count,first,disk);
            if(last>disk_end) heap_range_add(ranges,&count,disk_end,last);
        } else heap_range_add(ranges,&count,first,last);
    }
    for (uint32_t i=1;i<count;++i) {
        struct heap_range value=ranges[i];uint32_t j=i;
        while(j && ranges[j-1].first>value.first){ranges[j]=ranges[j-1];--j;}
        ranges[j]=value;
    }
    uint32_t tail=0;
    for(uint32_t i=0;i<count;++i) {
        uint32_t first=ranges[i].first,last=ranges[i].last;
        while(i+1<count && ranges[i+1].first<=last) {
            if(ranges[i+1].last>last)last=ranges[i+1].last;
            ++i;
        }
        recovered_218fd(first,last-first,&tail);
    }
    *initialized=1;
    return 0;
}
