#pragma once

#ifdef __cplusplus
extern "C" {
#endif

struct utsname {
	char sysname[32];
	char nodename[32];
	char release[32];
	char version[64];
	char machine[32];
};

int uname(struct utsname* name);

#ifdef __cplusplus
}
#endif
