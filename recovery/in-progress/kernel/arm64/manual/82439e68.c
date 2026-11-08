/* Pooka's Free Software License. Recovered FAT tree node contract. */
uint64_t recovered_82439e68(void **nodes,uint64_t *count,uint64_t *capacity,
        uint32_t parent,const char *name,const char *path,uint64_t file_index,
        uint32_t directory,uint32_t flags,uint32_t *out_index)
{
    if (!nodes || !count || !capacity || !name || !path) return 0;
    for (uint64_t i=0;*nodes && i<*count;++i) {
        unsigned char *node=(unsigned char *)*nodes+i*0x218;
        if (*(uint32_t *)node!=parent || recovered_82400e0c((char *)node+0x10,(char *)name)) continue;
        if (i>0x7fffffff) break;
        if (node[0x210]!=directory) return 0;
        if (file_index!=UINT64_MAX) {
            __builtin_memcpy(node+8,&file_index,8);
            __builtin_memcpy(node+0x208,&flags,4);
        }
        if (out_index) *out_index=(uint32_t)i;
        return 1;
    }
    if (*count>0x7fffffff || !recovered_82439dc0((undefined8 *)nodes,(ulong *)capacity,*count+1)) return 0;
    unsigned char *node=(unsigned char *)*nodes+*count*0x218;
    recovered_82400b14(node,0,0x218);
    __builtin_memcpy(node,&parent,4);
    __builtin_memcpy(node+8,&file_index,8);
    node[0x210]=(unsigned char)directory;
    __builtin_memcpy(node+0x208,&flags,4);
    recovered_82401ff0((char *)node+0x10,0xf1,"%s",name);
    recovered_82401ff0((char *)node+0x101,0xf1,"%s",path);
    if (out_index) *out_index=(uint32_t)*count;
    ++*count;
    return 1;
}
