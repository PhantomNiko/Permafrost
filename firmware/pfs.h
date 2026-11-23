/* Read-only PolynyaFS 0.3 boot access. Pooka's Free Software License. */
#pragma once
#include <stddef.h>
#include <stdint.h>

#define PF_PFS_BLOCK_SIZE 131072U
typedef int (*pf_pfs_read)(void *context, uint64_t offset, void *destination, size_t count);
struct pf_pfs {
    pf_pfs_read read;
    void *context;
    uint8_t *scratch;
    uint64_t base, total, table_first, table_count, root, cached_table;
};
struct pf_pfs_entry {
    uint8_t kind;
    uint16_t flags;
    uint64_t first, size;
    char name[256];
};
enum pf_pfs_result {
    PF_PFS_OK, PF_PFS_INPUT, PF_PFS_HEADER, PF_PFS_UNSUPPORTED,
    PF_PFS_ALLOCATION, PF_PFS_RECORD, PF_PFS_NOT_FOUND, PF_PFS_PATH
};

/* Caller supplies one block of scratch space. Mount links are returned as
 * records; firmware does not implicitly traverse external mounted volumes. */
int pf_pfs_open(struct pf_pfs *volume, pf_pfs_read read, void *context,
                uint64_t header_offset, void *scratch);
int pf_pfs_lookup(struct pf_pfs *volume, const char *path, struct pf_pfs_entry *result);
int pf_pfs_read_file(struct pf_pfs *volume, const struct pf_pfs_entry *entry,
                     uint64_t offset, void *destination, size_t count);
