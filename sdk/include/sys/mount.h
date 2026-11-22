#pragma once

#include <stdint.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MNT_LOCAL 0x00001000

typedef struct fsid {
	int32_t val[2];
} fsid_t;

struct statfs {
	uint32_t f_bsize;
	uint32_t f_iosize;
	uint64_t f_blocks;
	uint64_t f_bfree;
	uint64_t f_bavail;
	uint64_t f_files;
	uint64_t f_ffree;
	uint32_t f_fsid;
	uint32_t f_owner;
	uint32_t f_type;
	uint32_t f_flags;
	char f_fstypename[16];
	char f_mntonname[1024];
	char f_mntfromname[1024];
};

int statfs(const char* path, struct statfs* info);
int fstatfs(int fd, struct statfs* info);

#ifdef __cplusplus
}
#endif
