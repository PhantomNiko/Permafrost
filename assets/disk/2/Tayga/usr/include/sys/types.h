#pragma once

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t dev_t;
typedef uint32_t ino_t;
typedef uint32_t mode_t;
typedef uint32_t nlink_t;
typedef uint32_t uid_t;
typedef uint32_t gid_t;
typedef int64_t off_t;
typedef int64_t ssize_t;
typedef int32_t pid_t;
typedef int32_t id_t;
typedef uint32_t useconds_t;
typedef int64_t suseconds_t;
typedef int64_t rlim_t;
typedef uint32_t nfds_t;
typedef int32_t clockid_t;
typedef uint32_t socklen_t;
typedef int64_t blkcnt_t;
typedef int32_t blksize_t;

#ifndef _TAYGA_TIME_T_DEFINED
#define _TAYGA_TIME_T_DEFINED
typedef long time_t;
#endif

#ifndef _TAYGA_CLOCK_T_DEFINED
#define _TAYGA_CLOCK_T_DEFINED
typedef long clock_t;
#endif

#ifdef __cplusplus
}
#endif
