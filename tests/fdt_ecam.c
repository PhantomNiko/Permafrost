/* Pooka's Free Software License. Validate bounded PCI device tree discovery. */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../kernel/fdt_ecam.h"
int main(int argc,char **argv){
    assert(argc==2);FILE *f=fopen(argv[1],"rb");assert(f);assert(!fseek(f,0,SEEK_END));long n=ftell(f);assert(n>40);rewind(f);
    uint8_t *data=malloc((size_t)n),*copy=malloc((size_t)n);assert(data && copy);assert(fread(data,1,(size_t)n,f)==(size_t)n);fclose(f);
    pf_ecam_region r[8];assert(pf_fdt_ecam_regions(data,(size_t)n,r,8)==1);assert(r[0].base==0x3f000000 && r[0].first==0 && r[0].last==15);
    assert(!pf_fdt_ecam_regions(data,39,r,8));assert(!pf_fdt_ecam_regions(data,(size_t)n,r,0));assert(!pf_fdt_ecam_regions(0,(size_t)n,r,8));
    memcpy(copy,data,(size_t)n);copy[0]^=1;assert(!pf_fdt_ecam_regions(copy,(size_t)n,r,8));
    memcpy(copy,data,(size_t)n);memset(copy+8,0xff,4);assert(!pf_fdt_ecam_regions(copy,(size_t)n,r,8));
    memcpy(copy,data,(size_t)n);memset(copy+32,0xff,4);assert(!pf_fdt_ecam_regions(copy,(size_t)n,r,8));
    uint32_t total=pf_dt_u32(data+4);assert(total>40);assert(!pf_fdt_ecam_regions(data,total-1,r,8));
    free(copy);free(data);puts("Device tree ECAM: QEMU PCI region and malformed-header/bounds checks passed.");return 0;
}
