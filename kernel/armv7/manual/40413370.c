/* Pooka's Free Software License. PCI ECAM access with firmware device tree fallback. */
#include "fdt_ecam.h"
uchar recovered_40413370(uint bus,uint slot,uint function,uint offset,uint width,uint *out)
{
    volatile uint32_t *count=(volatile uint32_t *)(uintptr_t)0x40505a78;
    pf_ecam_region *regions=(pf_ecam_region *)(uintptr_t)0x40505a7c;
    volatile uint8_t *attempted=(volatile uint8_t *)(uintptr_t)0x40505afc,*ready=(volatile uint8_t *)(uintptr_t)0x40505afd;
    if(!out || slot>31 || function>7 || offset>4095 || (width!=1 && width!=2 && width!=4) || (offset&(width-1)))return 0;
    if(!*attempted){
        *attempted=1;*count=0;
        uint8_t *mcfg=(uint8_t *)(uintptr_t)recovered_4041255c(0x404e4637);
        if(mcfg){
            uint32_t size;__builtin_memcpy(&size,mcfg+4,4);
            unsigned logical=0;
            if(size>=60)for(unsigned i=0;i<(size-44)/16 && *count<8;i++){
                pf_ecam_region region;__builtin_memcpy(&region,mcfg+44+i*16,16);
                if(!region.base || region.base>UINT32_MAX || region.first>region.last)continue;
                unsigned start=*count?logical:region.first,next=start+region.last-region.first+1;
                if(next>256)continue;
                region.logical=(uint8_t)start;regions[*count]=region;++*count;logical=next;
            }
        }else{
            uint32_t context=*(volatile uint32_t *)(uintptr_t)0x40500004;
            uint32_t system=context?*(uint32_t *)(uintptr_t)(context+12):0;
            *count=pf_fdt_ecam_system32(system,regions,8);
        }
        *ready=*count!=0;
    }
    if(!*ready)return 0;
    for(unsigned i=0;i<*count;i++){
        pf_ecam_region *r=regions+i;
        if(bus<r->logical || bus>r->logical+r->last-r->first)continue;
        uint64_t address=r->base+((uint64_t)(bus-r->logical+r->first)<<20)+((uint64_t)slot<<15)+((uint64_t)function<<12)+offset;
        if(!r->base || address>UINT32_MAX)return 0;
        *out=(uint32_t)address;return 1;
    }
    return 0;
}
