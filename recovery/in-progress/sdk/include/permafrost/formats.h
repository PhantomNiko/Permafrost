/* Pooka's Free Software License. Public declarations recovered from the reference distribution. */
#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define WM_BAREMETAL_IMAGE_MAGIC 0x31474d57u
#define WM_BAREMETAL_AUDIO_MAGIC 0x31505357u
#define WM_BAREMETAL_STARTUP_MAGIC 0x31545357u
#define WM_BAREMETAL_STARTUP_BUNDLE_MAGIC 0x31425457u
#define WBPT_MAGIC 0x54504257u
#define WBPT_VERSION 1u
#define WBPT_TABLE_LBA 65u
#define WBPT_MAX_PARTITIONS 4u
#define WINTERSWAP_MAGIC 0x50575357u
#define WINTERSWAP_HEADER_BYTES 512u
#define WMFS32_IMAGE_MAGIC_BYTES "WMFS32\0"
#define WMFS64_IMAGE_MAGIC_BYTES "WMFS64\0"
#define WMFS_IMAGE_MAGIC_BYTES WMFS32_IMAGE_MAGIC_BYTES
#define WMFS_VERSION 1u
#define WMFS_PATH_MAX 240
#define WMFS32_FILE_LIMIT 256u
#define WMFS64_FILE_LIMIT 65535u
#define WM_BAREMETAL_STARTUP_DEPENDENCY_MAX 128u

enum WmBaremetalImageFormat {
	WM_BAREMETAL_IMAGE_INDEXED8 = 1u,
	WM_BAREMETAL_IMAGE_RGBA32 = 2u
};

enum WmBaremetalImageFileFormat {
	WM_BAREMETAL_IMAGE_FILE_FORMAT_PNG = 1u,
	WM_BAREMETAL_IMAGE_FILE_FORMAT_BMP = 2u,
	WM_BAREMETAL_IMAGE_FILE_FORMAT_TGA = 3u,
	WM_BAREMETAL_IMAGE_FILE_FORMAT_XCF = 5u
};

typedef struct WmBaremetalImageHeader {
	uint32_t magic;
	uint16_t width;
	uint16_t height;
	uint8_t format;
	uint8_t reserved0;
	uint16_t reserved1;
	uint32_t dataSize;
} WmBaremetalImageHeader;

typedef struct WmBaremetalAudioHeader {
	uint32_t magic;
	uint16_t ticksPerSecond;
	uint16_t reserved;
	uint32_t tickCount;
	uint32_t loopStartTick;
} WmBaremetalAudioHeader;

typedef struct WmBaremetalStartupManifest {
	uint32_t magic;
	uint32_t version;
	uint32_t flags;
	uint32_t startupDependencyCount;
	char startupScriptPath[WMFS_PATH_MAX];
	char startupLuaRelativePath[WMFS_PATH_MAX];
	char startupLuaFullPath[WMFS_PATH_MAX];
	char launcherBytecodePath[WMFS_PATH_MAX];
	char startupLuaDependencies[WM_BAREMETAL_STARTUP_DEPENDENCY_MAX][WMFS_PATH_MAX];
} WmBaremetalStartupManifest;

typedef struct WmBaremetalStartupBundleHeader {
	uint32_t magic;
	uint32_t version;
	uint32_t flags;
	uint32_t entryCount;
	uint32_t dataOffset;
	uint32_t totalSize;
} WmBaremetalStartupBundleHeader;

typedef struct WmBaremetalStartupBundleEntry {
	uint32_t kind;
	uint32_t reserved;
	uint32_t dataOffset;
	uint32_t dataSize;
	char path[WMFS_PATH_MAX];
} WmBaremetalStartupBundleEntry;

enum WmBaremetalStartupBundleKind {
	WM_BAREMETAL_STARTUP_BUNDLE_SCRIPT = 1u,
	WM_BAREMETAL_STARTUP_BUNDLE_ENTRY_LUA = 2u,
	WM_BAREMETAL_STARTUP_BUNDLE_DEPENDENCY = 3u,
	WM_BAREMETAL_STARTUP_BUNDLE_MANIFEST = 4u,
	WM_BAREMETAL_STARTUP_BUNDLE_LAUNCHER_BYTECODE = 5u
};

typedef struct WmFsSuperblock {
	char magic[8];
	uint32_t version;
	uint32_t bytesPerSector;
	uint32_t sectorsPerCluster;
	uint32_t fatSector;
	uint32_t fatSectorCount;
	uint32_t directorySector;
	uint32_t directorySectorCount;
	uint32_t dataSector;
	uint32_t clusterCount;
	uint32_t fileCount;
	uint32_t reserved[5];
} WmFsSuperblock;

typedef struct WmFs64Superblock {
	char magic[8];
	uint32_t version;
	uint32_t bytesPerSector;
	uint32_t sectorsPerCluster;
	uint32_t fatSector;
	uint32_t fatSectorCount;
	uint32_t dataSector;
	uint32_t clusterCount;
	uint32_t directoryFirstCluster;
	uint32_t directorySizeBytes;
	uint32_t fileCount;
	uint32_t totalSectors;
	uint32_t reserved[4];
} WmFs64Superblock;

typedef struct WmFsDirectoryEntry {
	char path[WMFS_PATH_MAX];
	uint32_t firstCluster;
	uint32_t sizeBytes;
	uint32_t flags;
	uint32_t reserved;
} WmFsDirectoryEntry;

typedef struct WbptHeader {
	uint32_t magic;
	uint16_t version;
	uint16_t entryCount;
	char name[12];
	uint32_t reserved[3];
} WbptHeader;

typedef struct WbptEntry {
	uint32_t type;
	uint32_t startLba;
	uint32_t sectorCount;
	uint32_t flags;
	char name[12];
	uint32_t reserved;
} WbptEntry;

enum WmFsFlags {
	WMFS_FLAG_NONE = 0u,
	WMFS_FLAG_READONLY = 1u << 0,
	WMFS_FLAG_DIRECTORY = 1u << 1
};

enum WbptPartitionType {
	WBPT_PARTITION_NONE = 0u,
	WBPT_PARTITION_WMFS32 = 1u,
	WBPT_PARTITION_WMFS64 = 2u,
	WBPT_PARTITION_FAT12 = 3u,
	WBPT_PARTITION_FAT16 = 4u,
	WBPT_PARTITION_FAT32 = 5u,
	WBPT_PARTITION_WMFS32L = 6u,
	WBPT_PARTITION_EXFAT = 7u,
	WBPT_PARTITION_HFS = 8u,
	WBPT_PARTITION_EXT2 = 9u,
	WBPT_PARTITION_EXT4 = 10u,
	WBPT_PARTITION_WINTERSWAP = WINTERSWAP_MAGIC,
	WBPT_PARTITION_WSHM = 0x4d485357u
};

enum WmFsConstants {
	WMFS_CLUSTER_FREE = 0u,
	WMFS_CLUSTER_END = 0xffffffffu,
	WMFS_DEFAULT_BYTES_PER_SECTOR = 512u,
	WMFS_DEFAULT_SECTORS_PER_CLUSTER = 8u
};

#ifdef __cplusplus
}
#endif
