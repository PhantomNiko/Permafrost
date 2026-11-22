#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define DT_UNKNOWN 0
#define DT_REG 8
#define DT_DIR 4

typedef struct DIR DIR;

struct dirent {
	uint32_t d_ino;
	uint8_t d_type;
	char d_name[256];
};

DIR* opendir(const char* path);
struct dirent* readdir(DIR* directory);
int closedir(DIR* directory);
void rewinddir(DIR* directory);

#ifdef __cplusplus
}
#endif
