/* Pooka's Free Software License. FAT directory planning from normalized paths. */
uint64_t recovered_82439730(void **out_nodes,uint64_t *out_count)
{
    void *nodes=0;
    uint64_t count=0,capacity=0;
    if (!out_nodes || !out_count) return 0;
    *out_nodes=0;
    *out_count=0;
    if (!recovered_82439dc0((undefined8 *)&nodes,(ulong *)&capacity,1)) return 0;
    unsigned char *root=(unsigned char *)nodes;
    *(uint32_t *)root=UINT32_MAX;
    *(uint64_t *)(root+8)=UINT64_MAX;
    root[0x210]=1;
    *(uint32_t *)(root+0x208)=2;
    count=1;
    const unsigned char *files=*(const unsigned char * volatile *)(uintptr_t)0x8266f188U;
    for (uint64_t i=0;i<*(volatile uint64_t *)(uintptr_t)0x8266f190U;++i) {
        const unsigned char *file=files+i*0x118;
        const char *part=(const char *)file;
        uint32_t flags;
        __builtin_memcpy(&flags,file+0x104,4);
        uint32_t parent=0;
        char prefix[241]={0},name[241],path[241];
        for (;;) {
            uint64_t length=0;
            while (part[length] && part[length]!='/') ++length;
            if (!length || length>240) goto failed;
            recovered_82400928(name,(void *)part,length);
            name[length]=0;
            if (prefix[0]) recovered_82401ff0(path,sizeof(path),"%s/%s",prefix,name);
            else recovered_82401ff0(path,sizeof(path),"%s",name);
            if (!path[0]) goto failed;
            if (!part[length] && !(flags&2)) {
                if (!recovered_82439e68(&nodes,&count,&capacity,parent,name,path,i,0,flags&~2U,0)) goto failed;
                break;
            }
            uint32_t index=UINT32_MAX;
            if (!recovered_82439e68(&nodes,&count,&capacity,parent,name,path,
                    part[length]?UINT64_MAX:i,1,part[length]?2:(flags|2),&index)) goto failed;
            parent=index;
            recovered_82401ff0(prefix,sizeof(prefix),"%s",path);
            if (!part[length]) break;
            part+=length+1;
        }
    }
    *out_nodes=nodes;
    *out_count=count;
    return 1;
failed:
    recovered_82400748(nodes);
    return 0;
}
