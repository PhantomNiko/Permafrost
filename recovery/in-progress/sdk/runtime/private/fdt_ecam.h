/* Pooka's Free Software License. Flattened device tree PCI ECAM discovery. */
#pragma once
#include <stdint.h>
#include <stddef.h>
typedef struct {
    uint64_t base;
    uint16_t segment;
    uint8_t first,last,logical,padding[3];
} pf_ecam_region;
static uint32_t pf_dt_u32(const uint8_t *p){return (uint32_t)p[0]<<24|(uint32_t)p[1]<<16|(uint32_t)p[2]<<8|p[3];}
static int pf_dt_equal(const uint8_t *a,size_t n,const char *b){size_t i=0;while(i<n && b[i] && a[i]==(uint8_t)b[i])++i;return i<n && !a[i] && !b[i];}
static uint64_t pf_dt_cells(const uint8_t *p,unsigned n){return n==2?((uint64_t)pf_dt_u32(p)<<32)|pf_dt_u32(p+4):pf_dt_u32(p);}
static unsigned pf_fdt_ecam_regions(const void *data,size_t bytes,pf_ecam_region *out,unsigned capacity){
    const uint8_t *b=data;
    if(!b || bytes<40 || !out || !capacity || pf_dt_u32(b)!=0xd00dfeed)return 0;
    uint32_t total=pf_dt_u32(b+4),structure=pf_dt_u32(b+8),strings=pf_dt_u32(b+12);
    uint32_t string_bytes=pf_dt_u32(b+32),structure_bytes=pf_dt_u32(b+36);
    if(total>bytes || total<40 || structure>total || structure_bytes>total-structure || strings>total || string_bytes>total-strings)return 0;
    struct node {unsigned address_cells,size_cells,reg_address_cells,reg_size_cells,compatible,first,last;const uint8_t *reg;uint32_t reg_bytes;} nodes[32];
    unsigned depth=0,count=0;size_t p=structure,end=structure+structure_bytes;
    while(p<=end && end-p>=4){
        uint32_t token=pf_dt_u32(b+p);p+=4;
        if(token==1){
            if(depth==32)return 0;
            struct node n={2,1,2,1,0,0,255,0,0};
            if(depth){n.reg_address_cells=nodes[depth-1].address_cells;n.reg_size_cells=nodes[depth-1].size_cells;}
            size_t start=p;while(p<end && b[p])++p;if(p==end || p-start>4096)return 0;
            p=(p+4)&~(size_t)3;if(p>end)return 0;nodes[depth++]=n;
        }else if(token==2){
            if(!depth)return 0;
            struct node *n=&nodes[--depth];
            /* Root host bridges use physical reg addresses; nested buses need ranges translation. */
            if(depth==1 && n->compatible && n->reg && n->first<=n->last && n->last<256 && count<capacity &&
                    n->reg_address_cells>=1 && n->reg_address_cells<=2 && n->reg_size_cells>=1 && n->reg_size_cells<=2 &&
                    n->reg_bytes>=4*(n->reg_address_cells+n->reg_size_cells)){
                uint64_t base=pf_dt_cells(n->reg,n->reg_address_cells),size=pf_dt_cells(n->reg+4*n->reg_address_cells,n->reg_size_cells);
                if(base && size>=((uint64_t)(n->last-n->first+1)<<20) && base<=UINT64_MAX-size){
                    pf_ecam_region r={base,0,(uint8_t)n->first,(uint8_t)n->last,(uint8_t)n->first,{0,0,0}};out[count++]=r;
                }
            }
        }else if(token==3){
            if(!depth || end-p<8)return 0;
            uint32_t n=pf_dt_u32(b+p),key=pf_dt_u32(b+p+4);p+=8;
            if(n>end-p || key>=string_bytes)return 0;
            const uint8_t *name=b+strings+key,*v=b+p;size_t available=string_bytes-key;
            size_t name_length=0;while(name_length<available && name[name_length])++name_length;if(name_length==available)return 0;
            struct node *node=&nodes[depth-1];
            if(pf_dt_equal(name,available,"#address-cells") && n==4)node->address_cells=pf_dt_u32(v);
            else if(pf_dt_equal(name,available,"#size-cells") && n==4)node->size_cells=pf_dt_u32(v);
            else if(pf_dt_equal(name,available,"reg")){node->reg=v;node->reg_bytes=n;}
            else if(pf_dt_equal(name,available,"bus-range") && n==8){node->first=pf_dt_u32(v);node->last=pf_dt_u32(v+4);}
            else if(pf_dt_equal(name,available,"compatible")){
                size_t i=0;while(i<n){if(pf_dt_equal(v+i,n-i,"pci-host-ecam-generic"))node->compatible=1;while(i<n && v[i])++i;++i;}
            }
            p=(p+n+3)&~(size_t)3;if(p>end)return 0;
        }else if(token==9)return depth?0:count;
        else if(token!=4)return 0;
    }
    return 0;
}
static unsigned pf_fdt_ecam_system32(uint32_t system,pf_ecam_region *out,unsigned capacity){
    static const uint8_t guid[16]={0xd5,0x21,0xb6,0xb1,0x9c,0xf1,0xa5,0x41,0x83,0x0b,0xd9,0x15,0x2c,0x69,0xaa,0xe0};
    if(!system)return 0;
    const uint32_t *s=(const uint32_t *)(uintptr_t)system;uint32_t count=s[16];
    if(count>256 || !s[17])return 0;
    const uint8_t *tables=(const uint8_t *)(uintptr_t)s[17];
    for(uint32_t i=0;i<count;i++,tables+=20){
        unsigned j=0;while(j<16 && tables[j]==guid[j])++j;
        if(j==16){uint32_t address;__builtin_memcpy(&address,tables+16,4);if(!address)return 0;
            const uint8_t *blob=(const uint8_t *)(uintptr_t)address;uint32_t bytes=pf_dt_u32(blob+4);
            return bytes<=0x1000000?pf_fdt_ecam_regions(blob,bytes,out,capacity):0;
        }
    }
    return 0;
}
