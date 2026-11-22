#pragma once

#include <stddef.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define PROT_NONE 0x00
#define PROT_READ 0x01
#define PROT_WRITE 0x02
#define PROT_EXEC 0x04

#define MAP_SHARED 0x0001
#define MAP_PRIVATE 0x0002
#define MAP_ANON 0x1000
#define MAP_ANONYMOUS MAP_ANON
#define MAP_FAILED ((void*)-1)

#define MS_ASYNC 0x0001
#define MS_SYNC 0x0002
#define MS_INVALIDATE 0x0004

#define MADV_NORMAL 0
#define MADV_RANDOM 1
#define MADV_SEQUENTIAL 2
#define MADV_WILLNEED 3
#define MADV_DONTNEED 4

void* mmap(void* address, size_t length, int protection, int flags, int fd, off_t offset);
int munmap(void* address, size_t length);
int mprotect(void* address, size_t length, int protection);
int msync(void* address, size_t length, int flags);
int madvise(void* address, size_t length, int advice);

#ifdef __cplusplus
}
#endif
