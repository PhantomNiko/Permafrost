#pragma once

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

struct group {
	char* gr_name;
	char* gr_passwd;
	gid_t gr_gid;
	char** gr_mem;
};

struct group* getgrgid(gid_t gid);
struct group* getgrnam(const char* name);

#ifdef __cplusplus
}
#endif
