/* Pooka's Free Software License. */
static int pf_fat_reserve_x64(void **nodes,uint64_t *capacity,uint64_t needed)
{
    if (!nodes || !capacity) return 0;
    if (*capacity>=needed) return 1;
    uint64_t next=*capacity?*capacity:16;
    while (next<needed) next*=2;
    if (next>0x7a44c6afc2dd9cULL) return 0;
    void *storage=recovered_2000d40(*nodes,next*0x218);
    if (!storage) return 0;
    recovered_2002110((unsigned char *)storage+*capacity*0x218,0,(next-*capacity)*0x218);
    *nodes=storage;
    *capacity=next;
    return 1;
}
/* Pooka's Free Software License. Recovered FAT tree node contract. */
uchar recovered_206e1c0(void **nodes,uint64_t *count,uint64_t *capacity,
        uint32_t parent,const char *name,const char *path,uint64_t file_index,
        uint32_t directory,uint32_t flags,uint32_t *out_index)
{
    if (!nodes || !count || !capacity || !name || !path) return 0;
    for (uint64_t i=0;*nodes && i<*count;++i) {
        unsigned char *node=(unsigned char *)*nodes+i*0x218;
        if (*(uint32_t *)node!=parent || recovered_2002eb0((char *)node+0x10,(char *)name)) continue;
        if (i>0x7fffffff) break;
        if (node[0x210]!=directory) return 0;
        if (file_index!=UINT64_MAX) {
            __builtin_memcpy(node+8,&file_index,8);
            __builtin_memcpy(node+0x208,&flags,4);
        }
        if (out_index) *out_index=(uint32_t)i;
        return 1;
    }
    if (*count>0x7fffffff || !pf_fat_reserve_x64(nodes,capacity,*count+1)) return 0;
    unsigned char *node=(unsigned char *)*nodes+*count*0x218;
    recovered_2002110(node,0,0x218);
    __builtin_memcpy(node,&parent,4);
    __builtin_memcpy(node+8,&file_index,8);
    node[0x210]=(unsigned char)directory;
    __builtin_memcpy(node+0x208,&flags,4);
    recovered_2005a30((char *)node+0x10,0xf1,"%s",name);
    recovered_2005a30((char *)node+0x101,0xf1,"%s",path);
    if (out_index) *out_index=(uint32_t)*count;
    ++*count;
    return 1;
}
