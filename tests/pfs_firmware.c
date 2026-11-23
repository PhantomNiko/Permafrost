/* CPU fixture for the read-only boot filesystem. Pooka's Free Software License. */
#include "pfs.h"
static struct pf_pfs volume;
static struct pf_pfs_entry entry;
static uint8_t scratch[PF_PFS_BLOCK_SIZE];
static const uint8_t *input;
static size_t input_size;
static unsigned read_count, fail_after;
static int memory_read(void *context, uint64_t offset, void *out, size_t count) {
    (void)context;
    if ((fail_after && ++read_count>=fail_after) || offset>input_size || count>input_size-offset) return 0;
    uint8_t *destination=out;
    for (size_t i=0;i<count;i++) destination[i]=input[(size_t)offset+i];
    return 1;
}
int pf_test_pfs_open(const void *bytes, size_t size, unsigned base) {
    input=bytes; input_size=size; read_count=fail_after=0;
    return pf_pfs_open(&volume,memory_read,0,base,scratch);
}
int pf_test_pfs_open_reader(pf_pfs_read read, unsigned base) {
    return pf_pfs_open(&volume,read,0,base,scratch);
}
void pf_test_pfs_fail(unsigned after) { read_count=0; fail_after=after; }
int pf_test_pfs_lookup(const char *path) { return pf_pfs_lookup(&volume,path,&entry); }
unsigned pf_test_pfs_kind(void) { return entry.kind; }
unsigned pf_test_pfs_size(void) { return (unsigned)entry.size; }
int pf_test_pfs_read(unsigned offset, void *destination, size_t count) {
    return pf_pfs_read_file(&volume,&entry,offset,destination,count);
}
