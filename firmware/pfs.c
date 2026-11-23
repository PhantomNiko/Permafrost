/* PolynyaFS geometry, extent and metadata recovery; Pooka's Free Software License. */
#include "pfs.h"

#define END UINT64_MAX
#define CONTINUATION (END - 5)
#define TABLE_ENTRIES 8191U

static uint32_t le32(const uint8_t *p) {
    return (uint32_t)p[0] | (uint32_t)p[1]<<8 | (uint32_t)p[2]<<16 | (uint32_t)p[3]<<24;
}
static uint64_t le64(const uint8_t *p) { return le32(p) | (uint64_t)le32(p+4)<<32; }
static int equal(const void *a, const void *b, size_t count) {
    const uint8_t *x=a, *y=b;
    for (size_t i=0;i<count;i++) if (x[i]!=y[i]) return 0;
    return 1;
}
static int zero(const uint8_t *p, size_t count) {
    for (size_t i=0;i<count;i++) if (p[i]) return 0;
    return 1;
}
static uint32_t metadata_crc(const uint8_t *p, size_t count, size_t checksum) {
    uint32_t value=UINT32_MAX;
    for (size_t i=0;i<count;i++) {
        value ^= i>=checksum && i<checksum+4 ? 0 : p[i];
        for (unsigned bit=0;bit<8;bit++) value=(value>>1)^((value&1)?UINT32_C(0x82f63b78):0);
    }
    return value^UINT32_MAX;
}
static int read_block(struct pf_pfs *v, uint64_t block, size_t offset, void *out, size_t count) {
    if (block>=v->total || offset>PF_PFS_BLOCK_SIZE || count>PF_PFS_BLOCK_SIZE-offset)
        return PF_PFS_ALLOCATION;
    return v->read(v->context,v->base+block*PF_PFS_BLOCK_SIZE+offset,out,count)?0:PF_PFS_INPUT;
}

int pf_pfs_open(struct pf_pfs *v, pf_pfs_read read, void *context, uint64_t base, void *scratch) {
    uint8_t header[4096];
    if (!v || !read || !scratch) return PF_PFS_INPUT;
    if (!read(context,base,header,sizeof(header))) return PF_PFS_INPUT;
    if (!equal(header,"PolynyaFS\0\0\0\0\0\0\0",16) || le32(header+0x10)!=0x30000 ||
        metadata_crc(header,sizeof(header),0x14)!=le32(header+0x14)) return PF_PFS_HEADER;
    uint64_t flags=le64(header+0x18), total=le64(header+0x148);
    uint64_t first=le64(header+0x150), tables=le64(header+0x158), root=le64(header+0x160);
    if (flags>=128 || le32(header+0x20)!=PF_PFS_BLOCK_SIZE || total<12 ||
        total>UINT64_MAX/PF_PFS_BLOCK_SIZE-1 || !first || first>=total || tables<8 ||
        tables>total-first || !root || root>=total || (root>=first && root-first<tables))
        return PF_PFS_HEADER;
    if (le64(header+0x138) || le64(header+0x140)!=total || flags&2) return PF_PFS_UNSUPPORTED;
    if (flags&0x20) {
        if (base<total*PF_PFS_BLOCK_SIZE) return PF_PFS_HEADER;
        base-=total*PF_PFS_BLOCK_SIZE;
    }
    if (base>UINT64_MAX-(total+1)*PF_PFS_BLOCK_SIZE) return PF_PFS_HEADER;
    v->read=read; v->context=context; v->scratch=scratch; v->base=base;
    v->total=total; v->table_first=first; v->table_count=tables; v->root=root;
    v->cached_table=END;
    return 0;
}

static int allocation(struct pf_pfs *v, uint64_t block, uint64_t *logical, uint64_t *next) {
    if (block>=v->total) return PF_PFS_ALLOCATION;
    uint64_t table_index=block/TABLE_ENTRIES, table=v->table_first;
    for (uint64_t index=0;;index++) {
        if (!table || table>=v->total || index>=v->total ||
            (index<v->table_count && table!=v->table_first+index)) return PF_PFS_ALLOCATION;
        if (v->cached_table!=table) {
            v->cached_table=END;
            int status=read_block(v,table,0,v->scratch,PF_PFS_BLOCK_SIZE);
            if (status) return status;
            if (!equal(v->scratch+PF_PFS_BLOCK_SIZE-16,"PFATLINK",8)) return PF_PFS_ALLOCATION;
            v->cached_table=table;
        }
        if (index==table_index) break;
        uint64_t following=le64(v->scratch+PF_PFS_BLOCK_SIZE-8);
        if (following==table || following>=END-4095) return PF_PFS_ALLOCATION;
        table=following;
    }
    const uint8_t *slot=v->scratch+(size_t)(block%TABLE_ENTRIES)*16;
    *logical=le64(slot); *next=le64(slot+8);
    return 0;
}

static int file_block(struct pf_pfs *v, uint64_t first, uint64_t logical, uint64_t *physical) {
    for (uint64_t steps=0;steps<v->total;steps++) {
        uint64_t start,next;
        if (!first || first>=v->total) return PF_PFS_ALLOCATION;
        int status=allocation(v,first,&start,&next);
        if (status) return status;
        if ((next>=END-4095 && next!=END) || start>=v->total) return PF_PFS_ALLOCATION;
        if (logical>=start && logical-start<v->total-first) {
            uint64_t count=logical-start;
            uint64_t index=1;
            for (;index<=count;index++) {
                uint64_t owner,marker;
                status=allocation(v,first+index,&owner,&marker);
                if (status) return status;
                if (owner!=first || marker!=CONTINUATION) break;
            }
            if (index>count) { *physical=first+count; return 0; }
        }
        if (next==END) return PF_PFS_NOT_FOUND;
        if (next==first) return PF_PFS_ALLOCATION;
        first=next;
    }
    return PF_PFS_ALLOCATION;
}

int pf_pfs_read_file(struct pf_pfs *v, const struct pf_pfs_entry *entry,
                     uint64_t offset, void *destination, size_t count) {
    uint8_t *out=destination;
    if (!v || !entry || (!destination && count) || offset>entry->size || count>entry->size-offset)
        return PF_PFS_INPUT;
    while (count) {
        uint64_t block;
        int status=file_block(v,entry->first,offset/PF_PFS_BLOCK_SIZE,&block);
        if (status) return status==PF_PFS_NOT_FOUND ? PF_PFS_ALLOCATION : status;
        size_t within=(size_t)(offset%PF_PFS_BLOCK_SIZE), used=PF_PFS_BLOCK_SIZE-within;
        if (used>count) used=count;
        status=read_block(v,block,within,out,used);
        if (status) return status;
        out+=used; count-=used; offset+=used;
    }
    return 0;
}

static int find(struct pf_pfs *v, uint64_t directory, const char *name, size_t length,
                struct pf_pfs_entry *result) {
    uint8_t record[512];
    for (uint64_t logical=0;logical<v->total;logical++) {
        uint64_t block;
        int status=file_block(v,directory,logical,&block);
        if (status) return status;
        for (unsigned offset=0;offset<PF_PFS_BLOCK_SIZE;offset+=sizeof(record)) {
            status=read_block(v,block,offset,record,sizeof(record));
            if (status) return status;
            if (!record[0]) return PF_PFS_NOT_FOUND;
            if (record[0]>6 || record[2]>7 || record[3] || record[0x13f] ||
                !zero(record+0x30,16) || !zero(record+0x140,192) ||
                metadata_crc(record,sizeof(record),4)!=le32(record+4)) return PF_PFS_RECORD;
            if (record[0]==3 || record[1]!=length || !equal(record+0x40,name,length)) continue;
            result->kind=record[0]; result->flags=record[2];
            result->first=le64(record+8); result->size=le64(record+16);
            for (size_t i=0;i<length;i++) result->name[i]=name[i];
            result->name[length]=0;
            return 0;
        }
    }
    return PF_PFS_ALLOCATION;
}

static int separator(char c) { return c=='/' || c=='\\'; }
int pf_pfs_lookup(struct pf_pfs *v, const char *path, struct pf_pfs_entry *result) {
    uint64_t parents[64];
    unsigned depth=0;
    if (!v || !path || !result) return PF_PFS_INPUT;
    parents[0]=v->root;
    result->kind=2; result->flags=0; result->first=v->root; result->size=0; result->name[0]=0;
    if (separator(*path)) path++;
    while (*path) {
        const char *name=path;
        size_t length=0;
        while (*path && !separator(*path)) { if (++length>255) return PF_PFS_PATH; path++; }
        if (!length) return PF_PFS_PATH;
        if (length==1 && name[0]=='.') { /* retain current directory */ }
        else if (length==2 && name[0]=='.' && name[1]=='.') {
            if (depth) depth--;
            result->kind=2; result->flags=0; result->first=parents[depth]; result->size=0; result->name[0]=0;
        } else {
            int status=find(v,parents[depth],name,length,result);
            if (status) return status;
            if (*path) {
                if (result->kind!=2) return result->kind==6 ? PF_PFS_UNSUPPORTED : PF_PFS_NOT_FOUND;
                if (depth==63) return PF_PFS_PATH;
                parents[++depth]=result->first;
            }
        }
        if (*path && !*++path) return PF_PFS_PATH;
    }
    return 0;
}
