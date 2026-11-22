/* Pooka's Free Software License. Public declarations recovered from the reference distribution. */
#pragma once

#ifndef WM_BAREMETAL_PROGRAM_API_PHYSICAL
#if defined(__aarch64__)
#define WM_BAREMETAL_PROGRAM_API_PHYSICAL 0x82010800u
#elif defined(__arm__)
#define WM_BAREMETAL_PROGRAM_API_PHYSICAL 0x40010800u
#else
#define WM_BAREMETAL_PROGRAM_API_PHYSICAL 0x00006800u
#endif
#endif
#define WM_BAREMETAL_PROGRAM_API_MAGIC 0x50414d57u
#ifndef PERMAFROST_API_VERSION
#define PERMAFROST_API_VERSION 1000000u
#endif
#define WM_BAREMETAL_PROGRAM_API_BASE_VERSION 1u
#define WM_BAREMETAL_PROGRAM_API_VERSION PERMAFROST_API_VERSION

#define WM_BAREMETAL_PROGRAM_API_MAGIC_OFFSET 0u
#define WM_BAREMETAL_PROGRAM_API_VERSION_OFFSET 4u
#define WM_BAREMETAL_PROGRAM_API_SIZE_OFFSET 8u
#define WM_BAREMETAL_PROGRAM_API_EXPAND_DISK_FN_OFFSET 12u
#define WM_BAREMETAL_PROGRAM_API_SET_THEME_FN_OFFSET 16u
#define WM_BAREMETAL_PROGRAM_API_ENTER_GRAPHICS_MODE_FN_OFFSET 20u
#define WM_BAREMETAL_PROGRAM_API_ENTER_TEXT_MODE_FN_OFFSET 24u
#define WM_BAREMETAL_PROGRAM_API_SET_NIGHT_MODE_FN_OFFSET 28u
#define WM_BAREMETAL_PROGRAM_API_CLEAR_FN_OFFSET 32u
#define WM_BAREMETAL_PROGRAM_API_PUTC_FN_OFFSET 36u
#define WM_BAREMETAL_PROGRAM_API_WRITE_FN_OFFSET 40u
#define WM_BAREMETAL_PROGRAM_API_POLL_KEY_AX_FN_OFFSET 44u
#define WM_BAREMETAL_PROGRAM_API_END_FN_OFFSET 48u
#define WM_BAREMETAL_PROGRAM_API_STAT_FILE_FN_OFFSET 52u
#define WM_BAREMETAL_PROGRAM_API_WRITE_FILE_FN_OFFSET 56u
#define WM_BAREMETAL_PROGRAM_API_DELETE_FILE_FN_OFFSET 60u
#define WM_BAREMETAL_PROGRAM_API_HOST_LOG_FN_OFFSET 64u
#define WM_BAREMETAL_PROGRAM_API_HOST_READLINE_FN_OFFSET 68u
#define WM_BAREMETAL_PROGRAM_API_ASSIGN_WINTERSCRIPT_FUNCTION_FN_OFFSET 72u
#define WM_BAREMETAL_PROGRAM_API_MALLOC_FN_OFFSET 76u
#define WM_BAREMETAL_PROGRAM_API_FREE_FN_OFFSET 80u
#define WM_BAREMETAL_PROGRAM_API_REALLOC_FN_OFFSET 84u
#define WM_BAREMETAL_PROGRAM_API_PNG_DECODE_FILE_FN_OFFSET 88u
#define WM_BAREMETAL_PROGRAM_API_PNG_DECODE_MEMORY_FN_OFFSET 92u
#define WM_BAREMETAL_PROGRAM_API_WAV_DECODE_FILE_FN_OFFSET 96u
#define WM_BAREMETAL_PROGRAM_API_WAV_DECODE_MEMORY_FN_OFFSET 100u
#define WM_BAREMETAL_PROGRAM_API_TTF_LOAD_FILE_FN_OFFSET 104u
#define WM_BAREMETAL_PROGRAM_API_TTF_LOAD_MEMORY_FN_OFFSET 108u
#define WM_BAREMETAL_PROGRAM_API_TTF_RESIZE_FN_OFFSET 112u
#define WM_BAREMETAL_PROGRAM_API_TTF_RENDER_FN_OFFSET 116u
#define WM_BAREMETAL_PROGRAM_API_TTF_FREE_FN_OFFSET 120u
#define WM_BAREMETAL_PROGRAM_API_FRAMEBUFFER_INFO_FN_OFFSET 124u
#define WM_BAREMETAL_PROGRAM_API_POINTER_STATE_FN_OFFSET 128u
#define WM_BAREMETAL_PROGRAM_API_LIST_DIRECTORY_FN_OFFSET 132u
#define WM_BAREMETAL_PROGRAM_API_RENAME_FILE_FN_OFFSET 136u
#define WM_BAREMETAL_PROGRAM_API_CREATE_DIRECTORY_FN_OFFSET 140u
#define WM_BAREMETAL_PROGRAM_API_LAUNCH_FILE_FN_OFFSET 144u
#define WM_BAREMETAL_PROGRAM_API_THREAD_CREATE_FN_OFFSET 148u
#define WM_BAREMETAL_PROGRAM_API_EXECUTE_COMMAND_LINE_FN_OFFSET 152u
#define WM_BAREMETAL_PROGRAM_API_THREAD_YIELD_FN_OFFSET 156u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_CREATE_FN_OFFSET 160u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_UPDATE_FN_OFFSET 164u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_DESTROY_FN_OFFSET 168u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_LIST_FN_OFFSET 172u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_CONFIGURE_FN_OFFSET 176u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_QUERY_FN_OFFSET 180u
#define WM_BAREMETAL_PROGRAM_API_HARDWARE_THREADS_FN_OFFSET 184u
#define WM_BAREMETAL_PROGRAM_API_CURRENT_DEVICE_ID_FN_OFFSET 188u
#define WM_BAREMETAL_PROGRAM_API_LIST_DEVICES_FN_OFFSET 192u
#define WM_BAREMETAL_PROGRAM_API_TARGET_DEVICE_FN_OFFSET 196u
#define WM_BAREMETAL_PROGRAM_API_STAT_FILE_ON_DEVICE_FN_OFFSET 200u
#define WM_BAREMETAL_PROGRAM_API_LIST_DIRECTORY_ON_DEVICE_FN_OFFSET 204u
#define WM_BAREMETAL_PROGRAM_API_WRITE_FILE_ON_DEVICE_FN_OFFSET 208u
#define WM_BAREMETAL_PROGRAM_API_DELETE_FILE_ON_DEVICE_FN_OFFSET 212u
#define WM_BAREMETAL_PROGRAM_API_RENAME_FILE_ON_DEVICE_FN_OFFSET 216u
#define WM_BAREMETAL_PROGRAM_API_CREATE_DIRECTORY_ON_DEVICE_FN_OFFSET 220u
#define WM_BAREMETAL_PROGRAM_API_PNG_DECODE_FILE_ON_DEVICE_FN_OFFSET 224u
#define WM_BAREMETAL_PROGRAM_API_TTF_LOAD_FILE_ON_DEVICE_FN_OFFSET 228u
#define WM_BAREMETAL_PROGRAM_API_LAUNCH_FILE_ON_DEVICE_FN_OFFSET 232u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_SET_MENUS_FN_OFFSET 236u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_MENU_COMMAND_FN_OFFSET 240u
#define WM_BAREMETAL_PROGRAM_API_SHUTDOWN_FN_OFFSET 244u
#define WM_BAREMETAL_PROGRAM_API_HARDWARE_INFO_FN_OFFSET 248u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_POINTER_EVENT_FN_OFFSET 252u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_POINTER_STATE_FN_OFFSET 256u
#define WM_BAREMETAL_PROGRAM_API_PROCESS_LIST_FN_OFFSET 260u
#define WM_BAREMETAL_PROGRAM_API_SYSTEM_STATS_FN_OFFSET 264u
#define WM_BAREMETAL_PROGRAM_API_PROCESS_TERMINATE_FN_OFFSET 268u
#define WM_BAREMETAL_PROGRAM_API_DEVICE_STATS_FN_OFFSET 272u
#define WM_BAREMETAL_PROGRAM_API_GPU_INFO_FN_OFFSET 276u
#define WM_BAREMETAL_PROGRAM_API_GPU_SUBMIT_FN_OFFSET 280u
#define WM_BAREMETAL_PROGRAM_API_IMAGE_SAVE_FILE_FN_OFFSET 284u
#define WM_BAREMETAL_PROGRAM_API_IMAGE_SAVE_FILE_ON_DEVICE_FN_OFFSET 288u
#define WM_BAREMETAL_PROGRAM_API_NETWORK_INFO_FN_OFFSET 292u
#define WM_BAREMETAL_PROGRAM_API_NETWORK_RECEIVE_FN_OFFSET 296u
#define WM_BAREMETAL_PROGRAM_API_NETWORK_SEND_FN_OFFSET 300u
#define WM_BAREMETAL_PROGRAM_API_TAYGA_STATUS_FN_OFFSET 304u
#define WM_BAREMETAL_PROGRAM_API_TAYGA_SET_SHELL_MODE_FN_OFFSET 308u

#define WM_BAREMETAL_PROGRAM_KEY_ASCII_MASK 0x000000ffu
#define WM_BAREMETAL_PROGRAM_KEY_SCAN_MASK 0x0000ff00u
#define WM_BAREMETAL_PROGRAM_KEY_FLAG_SHIFT 0x00010000u
#define WM_BAREMETAL_PROGRAM_KEY_FLAG_CTRL 0x00020000u
#define WM_BAREMETAL_PROGRAM_KEY_FLAG_COMMAND 0x00040000u
#define WM_BAREMETAL_PROGRAM_KEY_FLAG_MODIFIER_STATE 0x80000000u
#define WM_BAREMETAL_PROGRAM_API_TAYGA_EXECUTE_LINE_FN_OFFSET 312u
#define WM_BAREMETAL_PROGRAM_API_TAYGA_REGISTER_PROCESS_FN_OFFSET 316u
#define WM_BAREMETAL_PROGRAM_API_TAYGA_UNREGISTER_PROCESS_FN_OFFSET 320u
#define WM_BAREMETAL_PROGRAM_API_TAYGA_PROCESS_INFO_FN_OFFSET 324u
#define WM_BAREMETAL_PROGRAM_API_TAYGA_STREAM_WRITE_FN_OFFSET 328u
#define WM_BAREMETAL_PROGRAM_API_TAYGA_STREAM_READ_LINE_FN_OFFSET 332u
#define WM_BAREMETAL_PROGRAM_API_TAYGA_DRAIN_OUTPUT_FN_OFFSET 336u
#define WM_BAREMETAL_PROGRAM_API_TAYGA_LAUNCH_FN_OFFSET 340u
#define WM_BAREMETAL_PROGRAM_API_LAST_ERROR_FN_OFFSET 344u
#define WM_BAREMETAL_PROGRAM_API_PRESENT_FRAMEBUFFER_FN_OFFSET 348u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_SET_APPEARANCE_FN_OFFSET 352u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_SET_MODE_FN_OFFSET 356u
#define WM_BAREMETAL_PROGRAM_API_TIME_INFO_FN_OFFSET 360u
#define WM_BAREMETAL_PROGRAM_API_TIME_SET_FN_OFFSET 364u
#define WM_BAREMETAL_PROGRAM_API_TIME_SYNC_NETWORK_FN_OFFSET 368u
#define WM_BAREMETAL_PROGRAM_API_WAIT_MICROSECONDS_FN_OFFSET 372u
#define WM_BAREMETAL_PROGRAM_API_FONT_RENDER_TEXT_FN_OFFSET 376u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_SET_CONTENT_SIZE_FN_OFFSET 380u
#define WM_BAREMETAL_PROGRAM_API_CLIPBOARD_WRITE_TEXT_FN_OFFSET 384u
#define WM_BAREMETAL_PROGRAM_API_CLIPBOARD_READ_TEXT_FN_OFFSET 388u
#define WM_BAREMETAL_PROGRAM_API_CLIPBOARD_TEXT_SIZE_FN_OFFSET 392u
#define WM_BAREMETAL_PROGRAM_API_HARDWARE_DEVICE_LIST_FN_OFFSET 396u
#define WM_BAREMETAL_PROGRAM_API_THREAD_CREATE_EX_FN_OFFSET 400u
#define WM_BAREMETAL_PROGRAM_API_PROCESS_REQUEST_SCHEDULING_FN_OFFSET 404u
#define WM_BAREMETAL_PROGRAM_API_APP_WINDOW_UPDATE_QUERY_FN_OFFSET 408u
#define WM_BAREMETAL_PROGRAM_API_STRUCT_SIZE 412u

#define WM_BAREMETAL_PROGRAM_FONT_RENDER_FLAG_FIXED_WIDTH 0x80000000u
#define WM_BAREMETAL_PROGRAM_FONT_RENDER_SCALE_MASK 0x0000ffffu

#define WM_BAREMETAL_PROGRAM_POINTER_FLAG_ABSOLUTE 0x00000001u
#define WM_BAREMETAL_PROGRAM_POINTER_FLAG_RELATIVE 0x00000002u
#define WM_BAREMETAL_PROGRAM_POINTER_FLAG_CTRL 0x00010000u
#define WM_BAREMETAL_PROGRAM_POINTER_BUTTON_LEFT 0x00000001u
#define WM_BAREMETAL_PROGRAM_POINTER_BUTTON_RIGHT 0x00000002u
#define WM_BAREMETAL_PROGRAM_POINTER_BUTTON_MIDDLE 0x00000004u

#define WM_BAREMETAL_PROGRAM_FILE_KIND_FILE 1u
#define WM_BAREMETAL_PROGRAM_FILE_KIND_DIRECTORY 2u
#define WM_BAREMETAL_PROGRAM_FILE_KIND_PARTITION 3u

#define WM_BAREMETAL_PROGRAM_LAUNCH_DEFAULT 0u
#define WM_BAREMETAL_PROGRAM_LAUNCH_MACHO 1u
#define WM_BAREMETAL_PROGRAM_LAUNCH_WINTERSCRIPT 2u
#define WM_BAREMETAL_PROGRAM_LAUNCH_LUA 3u
#define WM_BAREMETAL_PROGRAM_LAUNCH_RUBY 4u
#define WM_BAREMETAL_PROGRAM_LAUNCH_NONBLOCKING 0x80000000u

#define WM_BAREMETAL_PROGRAM_APP_WINDOW_FLAG_CLOSE_REQUESTED 0x00000001u
#define WM_BAREMETAL_PROGRAM_APP_WINDOW_FLAG_ACTIVE 0x00000002u
#define WM_BAREMETAL_PROGRAM_APP_WINDOW_FLAG_MINIMIZED 0x00000004u
#define WM_BAREMETAL_PROGRAM_APP_WINDOW_FLAG_VISIBLE 0x00000008u
#define WM_BAREMETAL_PROGRAM_APP_WINDOW_FLAG_DESTROYED 0x00000010u

#define WM_BAREMETAL_PROGRAM_APP_WINDOW_MODE_SOLID 0u
#define WM_BAREMETAL_PROGRAM_APP_WINDOW_MODE_CLEAR 1u
#define WM_BAREMETAL_PROGRAM_APP_WINDOW_MODE_BLUR 2u
#define WM_BAREMETAL_PROGRAM_APP_WINDOW_MODE_REFRACT 3u
#define WM_BAREMETAL_PROGRAM_APP_WINDOW_MODE_DEFAULT 0xffffffffu
#define WM_BAREMETAL_PROGRAM_APP_WINDOW_APPEARANCE_DEFAULT 0xffffffffu

#define WM_BAREMETAL_PROGRAM_APP_WINDOW_POINTER_VALID 0x00000001u
#define WM_BAREMETAL_PROGRAM_APP_WINDOW_POINTER_INSIDE 0x00000002u
#define WM_BAREMETAL_PROGRAM_APP_WINDOW_POINTER_ACTIVE 0x00000004u
#define WM_BAREMETAL_PROGRAM_APP_WINDOW_POINTER_CTRL 0x00010000u

#define WM_BAREMETAL_PROGRAM_MENU_KIND_FILE 1u
#define WM_BAREMETAL_PROGRAM_MENU_KIND_EDIT 2u
#define WM_BAREMETAL_PROGRAM_MENU_KIND_WINDOW 3u

#define WM_BAREMETAL_PROGRAM_HARDWARE_INFO_CPU_AVAILABLE 0x00000001u
#define WM_BAREMETAL_PROGRAM_HARDWARE_INFO_CACHE_AVAILABLE 0x00000002u
#define WM_BAREMETAL_PROGRAM_HARDWARE_INFO_RAM_AVAILABLE 0x00000004u
#define WM_BAREMETAL_PROGRAM_HARDWARE_INFO_SLOW_RAM_AVAILABLE 0x00000008u

#define WM_BAREMETAL_PROGRAM_PROCESS_FLAG_KERNEL 0x00000001u
#define WM_BAREMETAL_PROGRAM_PROCESS_FLAG_PROCESS_MAIN 0x00000002u
#define WM_BAREMETAL_PROGRAM_PROCESS_FLAG_RUNNING 0x00000004u
#define WM_BAREMETAL_PROGRAM_PROCESS_FLAG_FAULTED 0x00000008u

#define WM_BAREMETAL_PROGRAM_DEVICE_STATS_FLAG_PRESENT 0x00000001u
#define WM_BAREMETAL_PROGRAM_DEVICE_STATS_FLAG_MOUNTED 0x00000002u
#define WM_BAREMETAL_PROGRAM_DEVICE_STATS_FLAG_BOOT 0x00000004u
#define WM_BAREMETAL_PROGRAM_DEVICE_STATS_FLAG_READONLY 0x00000008u
#define WM_BAREMETAL_PROGRAM_DEVICE_STATS_FLAG_TABLE_CONTAINER 0x00000010u

#define WM_BAREMETAL_PROGRAM_TIME_FLAG_VALID 0x00000001u
#define WM_BAREMETAL_PROGRAM_TIME_FLAG_RTC 0x00000002u
#define WM_BAREMETAL_PROGRAM_TIME_FLAG_NETWORK 0x00000004u
#define WM_BAREMETAL_PROGRAM_TIME_FLAG_MANUAL 0x00000008u
#define WM_BAREMETAL_PROGRAM_TIME_FLAG_SOFTWARE 0x00000010u

#if !defined(__ASSEMBLER__) && !defined(__ASSEMBLY__)

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "formats.h"
#include "gpu.h"
#include "network.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WmBaremetalProgramFileInfo {
	uint32_t dataPhysical;
	uint32_t size;
	uint32_t flags;
} WmBaremetalProgramFileInfo;

typedef struct WmBaremetalProgramDirectoryEntry {
	char name[WMFS_PATH_MAX + 1u];
	char path[WMFS_PATH_MAX + 1u];
	uint32_t size;
	uint32_t flags;
	uint32_t kind;
	int32_t deviceId;
	uint32_t deviceFlags;
} WmBaremetalProgramDirectoryEntry;

typedef struct WmBaremetalProgramImageInfo {
	uint32_t pixelsPhysical;
	uint32_t pixelsPhysicalHigh;
	uint32_t pixelsSize;
	uint32_t width;
	uint32_t height;
	uint32_t stride;
} WmBaremetalProgramImageInfo;

typedef struct WmBaremetalProgramAppWindowInfo {
	uint32_t id;
	uint32_t ownerTaskId;
	uint32_t pixelsPhysical;
	uint32_t pixelsPhysicalHigh;
	uint32_t pixelsSize;
	uint32_t contentSerial;
	uint32_t width;
	uint32_t height;
	uint32_t stride;
	uint32_t clearRgb;
	uint32_t flags;
	int32_t x;
	int32_t y;
	uint32_t menuCommandSerial;
	uint32_t menuCommandKind;
	uint32_t menuCommandIndex;
	uint32_t transparency;
	uint32_t shadowIntensity;
	uint32_t mode;
	uint32_t effectRange;
	uint32_t desiredWidth;
	uint32_t desiredHeight;
	char title[64];
	char fileMenu[160];
	char editMenu[160];
	char windowMenu[160];
} WmBaremetalProgramAppWindowInfo;

typedef struct WmBaremetalProgramAppWindowPointerInfo {
	uint32_t flags;
	uint32_t buttons;
	uint32_t pressedButtons;
	uint32_t eventSerial;
	uint32_t pressSerial;
	int32_t x;
	int32_t y;
} WmBaremetalProgramAppWindowPointerInfo;

#define WM_BAREMETAL_PROGRAM_APP_WINDOW_TYPES_DEFINED 1

typedef struct WmBaremetalProgramFramebufferInfo {
	uint32_t framebufferPhysical;
	uint32_t framebufferPhysicalHigh;
	uint32_t framebufferSize;
	uint32_t framebufferPitch;
	uint32_t framebufferWidth;
	uint32_t framebufferHeight;
	uint32_t framebufferBpp;
	uint32_t redBits;
	uint32_t redShift;
	uint32_t greenBits;
	uint32_t greenShift;
	uint32_t blueBits;
	uint32_t blueShift;
} WmBaremetalProgramFramebufferInfo;

typedef struct WmBaremetalProgramPointerInfo {
	uint32_t flags;
	uint32_t buttons;
	int32_t x;
	int32_t y;
	int32_t dx;
	int32_t dy;
	uint32_t xRange;
	uint32_t yRange;
} WmBaremetalProgramPointerInfo;

typedef struct WmBaremetalProgramPcmInfo {
	uint32_t samplesPhysical;
	uint32_t samplesSize;
	uint32_t sampleCount;
	uint32_t sampleRate;
	uint32_t channels;
	uint32_t bitsPerSample;
	uint32_t frameCount;
} WmBaremetalProgramPcmInfo;

typedef struct WmBaremetalProgramHardwareInfo {
	uint32_t flags;
	char processorName[96];
	uint32_t hardwareThreads;
	uint32_t l1DataCacheBytes;
	uint32_t l1InstructionCacheBytes;
	uint32_t l1UnifiedCacheBytes;
	uint32_t l2CacheBytes;
	uint32_t l3CacheBytes;
	uint32_t l4CacheBytes;
	uint32_t detectedRamBytesLow;
	uint32_t detectedRamBytesHigh;
	uint32_t initializedRamBytesLow;
	uint32_t initializedRamBytesHigh;
	uint32_t unmappedRamBytesLow;
	uint32_t unmappedRamBytesHigh;
	uint32_t freeRamBytesLow;
	uint32_t freeRamBytesHigh;
	uint32_t slowRamBytesLow;
	uint32_t slowRamBytesHigh;
} WmBaremetalProgramHardwareInfo;

typedef struct WmBaremetalProgramHardwareDeviceInfo {
	char path[WMFS_PATH_MAX + 1u];
	char status[32];
	char summary[96];
	char details[1024];
} WmBaremetalProgramHardwareDeviceInfo;

typedef struct WmBaremetalProgramProcessInfo {
	uint32_t processId;
	uint32_t flags;
	uint32_t threadCount;
	uint32_t cpuType;
	uint32_t dispatchCount;
	uint32_t runTicks;
	uint32_t baseAddress;
	uint32_t imageBytes;
	uint32_t realMemoryBytesLow;
	uint32_t realMemoryBytesHigh;
	uint32_t virtualMemoryBytesLow;
	uint32_t virtualMemoryBytesHigh;
	uint32_t physicalStartLow;
	uint32_t physicalStartHigh;
	uint32_t apiVersion;
	int32_t sourceDeviceId;
	char name[64];
	char user[32];
	char kind[32];
	char executablePath[WMFS_PATH_MAX + 1u];
} WmBaremetalProgramProcessInfo;

typedef struct WmBaremetalProgramSystemStats {
	uint32_t ticks;
	uint32_t heapFreeBytesLow;
	uint32_t heapFreeBytesHigh;
	uint32_t heapTotalBytesLow;
	uint32_t heapTotalBytesHigh;
	uint32_t diskFreeBytesLow;
	uint32_t diskFreeBytesHigh;
	uint32_t diskTotalBytesLow;
	uint32_t diskTotalBytesHigh;
	uint32_t processCount;
	uint32_t threadCount;
	uint32_t diskReadCount;
	uint32_t diskWriteCount;
	uint32_t diskReadBytesLow;
	uint32_t diskReadBytesHigh;
	uint32_t diskWriteBytesLow;
	uint32_t diskWriteBytesHigh;
} WmBaremetalProgramSystemStats;

typedef struct WmBaremetalProgramTimeInfo {
	uint32_t size;
	uint32_t flags;
	uint32_t epochSecondsLow;
	uint32_t epochSecondsHigh;
	uint32_t monotonicTicks;
	uint32_t reserved;
} WmBaremetalProgramTimeInfo;

typedef struct WmBaremetalProgramDeviceStats {
	int32_t deviceId;
	uint32_t flags;
	uint32_t filesystemType;
	int32_t partitionIndex;
	uint32_t startLba;
	uint32_t sectorCount;
	uint32_t sectorBytes;
	uint32_t freeBytesLow;
	uint32_t freeBytesHigh;
	uint32_t totalBytesLow;
	uint32_t totalBytesHigh;
	uint32_t readCountLow;
	uint32_t readCountHigh;
	uint32_t writeCountLow;
	uint32_t writeCountHigh;
	uint32_t readBytesLow;
	uint32_t readBytesHigh;
	uint32_t writeBytesLow;
	uint32_t writeBytesHigh;
	char name[64];
} WmBaremetalProgramDeviceStats;

typedef enum WmBaremetalProgramWinterScriptValueType {
	WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_NULL = 0u,
	WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_INT = 1u,
	WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_FLOAT = 2u,
	WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_STRING = 3u,
	WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_RAW = 4u,
	WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_BOOL = 5u,
	WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_POINTER = 6u
} WmBaremetalProgramWinterScriptValueType;

typedef struct WmBaremetalProgramWinterScriptValue {
	uint32_t type;
	int32_t intValue;
	float floatValue;
	const char* stringValue;
	const uint8_t* rawValue;
	uint32_t rawSize;
} WmBaremetalProgramWinterScriptValue;

typedef struct WmBaremetalProgramApi {
	uint32_t magic;
	uint32_t version;
	uint32_t size;
	uint32_t expandDiskFn;
	uint32_t setThemeFn;
	uint32_t enterGraphicsModeFn;
	uint32_t enterTextModeFn;
	uint32_t setNightModeFn;
	uint32_t clearFn;
	uint32_t putcFn;
	uint32_t writeFn;
	uint32_t pollKeyAxFn;
	uint32_t endFn;
	uint32_t statFileFn;
	uint32_t writeFileFn;
	uint32_t deleteFileFn;
	uint32_t hostLogFn;
	uint32_t hostReadlineFn;
	uint32_t assignWinterScriptFunctionFn;
	uint32_t mallocFn;
	uint32_t freeFn;
	uint32_t reallocFn;
	uint32_t pngDecodeFileFn;
	uint32_t pngDecodeMemoryFn;
	uint32_t wavDecodeFileFn;
	uint32_t wavDecodeMemoryFn;
	uint32_t ttfLoadFileFn;
	uint32_t ttfLoadMemoryFn;
	uint32_t ttfResizeFn;
	uint32_t ttfRenderFn;
	uint32_t ttfFreeFn;
	uint32_t framebufferInfoFn;
	uint32_t pointerStateFn;
	uint32_t listDirectoryFn;
	uint32_t renameFileFn;
	uint32_t createDirectoryFn;
	uint32_t launchFileFn;
	uint32_t threadCreateFn;
	uint32_t executeCommandLineFn;
	uint32_t threadYieldFn;
	uint32_t appWindowCreateFn;
	uint32_t appWindowUpdateFn;
	uint32_t appWindowDestroyFn;
	uint32_t appWindowListFn;
	uint32_t appWindowConfigureFn;
	uint32_t appWindowQueryFn;
	uint32_t hardwareThreadsFn;
	uint32_t currentDeviceIdFn;
	uint32_t listDevicesFn;
	uint32_t targetDeviceFn;
	uint32_t statFileOnDeviceFn;
	uint32_t listDirectoryOnDeviceFn;
	uint32_t writeFileOnDeviceFn;
	uint32_t deleteFileOnDeviceFn;
	uint32_t renameFileOnDeviceFn;
	uint32_t createDirectoryOnDeviceFn;
	uint32_t pngDecodeFileOnDeviceFn;
	uint32_t ttfLoadFileOnDeviceFn;
	uint32_t launchFileOnDeviceFn;
	uint32_t appWindowSetMenusFn;
	uint32_t appWindowMenuCommandFn;
	uint32_t shutdownFn;
	uint32_t hardwareInfoFn;
	uint32_t appWindowPointerEventFn;
	uint32_t appWindowPointerStateFn;
	uint32_t processListFn;
	uint32_t systemStatsFn;
	uint32_t processTerminateFn;
	uint32_t deviceStatsFn;
	uint32_t gpuInfoFn;
	uint32_t gpuSubmitFn;
	uint32_t imageSaveFileFn;
	uint32_t imageSaveFileOnDeviceFn;
	uint32_t networkInfoFn;
	uint32_t networkReceiveFn;
	uint32_t networkSendFn;
	uint32_t taygaStatusFn;
	uint32_t taygaSetShellModeFn;
	uint32_t taygaExecuteLineFn;
	uint32_t taygaRegisterProcessFn;
	uint32_t taygaUnregisterProcessFn;
	uint32_t taygaProcessInfoFn;
	uint32_t taygaStreamWriteFn;
	uint32_t taygaStreamReadLineFn;
	uint32_t taygaDrainOutputFn;
	uint32_t taygaLaunchFn;
	uint32_t lastErrorFn;
	uint32_t presentFramebufferFn;
	uint32_t appWindowSetAppearanceFn;
	uint32_t appWindowSetModeFn;
	uint32_t timeInfoFn;
	uint32_t timeSetFn;
	uint32_t timeSyncNetworkFn;
	uint32_t waitMicrosecondsFn;
	uint32_t fontRenderTextFn;
	uint32_t appWindowSetContentSizeFn;
	uint32_t clipboardWriteTextFn;
	uint32_t clipboardReadTextFn;
	uint32_t clipboardTextSizeFn;
	uint32_t hardwareDeviceListFn;
	uint32_t threadCreateExFn;
	uint32_t processRequestSchedulingFn;
	uint32_t appWindowUpdateQueryFn;
} WmBaremetalProgramApi;

#ifndef WM_BAREMETAL_PROGRAM_X64_BRIDGE_PHYSICAL
#define WM_BAREMETAL_PROGRAM_X64_BRIDGE_PHYSICAL 0x00006a00u
#endif
#define WM_BAREMETAL_PROGRAM_X64_BRIDGE_MAGIC 0x58424d57u
#define WM_BAREMETAL_PROGRAM_X64_BRIDGE_VERSION 1u

typedef struct WmBaremetalProgramX64Bridge {
	uint32_t magic;
	uint32_t version;
	uint32_t size;
	uint32_t callFn;
} WmBaremetalProgramX64Bridge;

#if defined(__x86_64__) && defined(USE_WINTERBOOT) && defined(WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE)
#define WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE 1
typedef uint64_t (*WmBaremetalProgramX64CallFn)(
	uint32_t selector,
	uint64_t arg0,
	uint64_t arg1,
	uint64_t arg2,
	uint64_t arg3,
	uint64_t arg4,
	uint64_t arg5,
	uint64_t arg6,
	uint64_t arg7);
#endif

typedef uint32_t (*WmBaremetalProgramExpandDiskFn)(void);
typedef uint32_t (*WmBaremetalProgramSetThemeFn)(uint32_t backgroundRgb, uint32_t foregroundRgb, uint32_t textModeAttribute);
typedef uint32_t (*WmBaremetalProgramEnterGraphicsModeFn)(void);
typedef uint32_t (*WmBaremetalProgramEnterTextModeFn)(void);
typedef uint32_t (*WmBaremetalProgramSetNightModeFn)(void);
typedef uint32_t (*WmBaremetalProgramClearFn)(uint32_t backgroundRgb, uint32_t foregroundRgb, uint32_t textModeAttribute);
typedef uint32_t (*WmBaremetalProgramPutcFn)(uint32_t ch);
typedef uint32_t (*WmBaremetalProgramWriteFn)(const char* text);
typedef uint32_t (*WmBaremetalProgramPollKeyAxFn)(void);
typedef uint32_t (*WmBaremetalProgramEndFn)(void);
typedef uint32_t (*WmBaremetalProgramLastErrorFn)(char* outText, uint32_t outTextSize);
typedef uint32_t (*WmBaremetalProgramStatFileFn)(const char* path, WmBaremetalProgramFileInfo* outInfo);
typedef uint32_t (*WmBaremetalProgramWriteFileFn)(const char* path, const void* data, uint32_t size);
typedef uint32_t (*WmBaremetalProgramDeleteFileFn)(const char* path);
typedef uint32_t (*WmBaremetalProgramHostLogFn)(const char* text);
typedef uint32_t (*WmBaremetalProgramHostReadlineFn)(char* buffer, uint32_t size, const char* prompt, uint32_t allowCancel);
typedef uint32_t (*WmBaremetalProgramExecuteCommandLineFn)(const char* line, char* outText, uint32_t outTextSize);
typedef void* (*WmBaremetalProgramMallocFn)(size_t size);
typedef void (*WmBaremetalProgramFreeFn)(void* ptr);
typedef void* (*WmBaremetalProgramReallocFn)(void* ptr, size_t size);
typedef uint32_t (*WmBaremetalProgramPngDecodeFileFn)(const char* path, WmBaremetalProgramImageInfo* outImage);
typedef uint32_t (*WmBaremetalProgramPngDecodeMemoryFn)(const void* data, uint32_t size, WmBaremetalProgramImageInfo* outImage);
typedef uint32_t (*WmBaremetalProgramImageSaveFileFn)(
	const char* path,
	const void* rgbaPixels,
	uint32_t width,
	uint32_t height,
	uint32_t stride,
	uint32_t format);
typedef uint32_t (*WmBaremetalProgramWavDecodeFileFn)(const char* path, uint32_t outputChannels, WmBaremetalProgramPcmInfo* outPcm);
typedef uint32_t (*WmBaremetalProgramWavDecodeMemoryFn)(const void* data, uint32_t size, uint32_t outputChannels, WmBaremetalProgramPcmInfo* outPcm);
typedef void* (*WmBaremetalProgramTtfLoadFileFn)(const char* path, float fontSize);
typedef void* (*WmBaremetalProgramTtfLoadMemoryFn)(const void* data, uint32_t size, float fontSize);
typedef void (*WmBaremetalProgramTtfResizeFn)(void* fontHandle, float fontSize);
typedef uint32_t (*WmBaremetalProgramTtfRenderFn)(
	void* fontHandle,
	const char* utf8Text,
	int32_t r,
	int32_t g,
	int32_t b,
	uint32_t a,
	WmBaremetalProgramImageInfo* outImage);
typedef void (*WmBaremetalProgramTtfFreeFn)(void* fontHandle);
typedef uint32_t (*WmBaremetalProgramFontRenderTextFn)(
	const char* text,
	uint32_t maxChars,
	uint32_t scale,
	uint32_t rgba,
	WmBaremetalProgramImageInfo* outImage);
typedef uint32_t (*WmBaremetalProgramFramebufferInfoFn)(WmBaremetalProgramFramebufferInfo* outInfo);
typedef uint32_t (*WmBaremetalProgramPresentFramebufferFn)(uint32_t x, uint32_t y, uint32_t width, uint32_t height);
typedef uint32_t (*WmBaremetalProgramPointerStateFn)(WmBaremetalProgramPointerInfo* outInfo);
typedef uint32_t (*WmBaremetalProgramListDirectoryFn)(
	const char* path,
	WmBaremetalProgramDirectoryEntry* entries,
	uint32_t entryCapacity,
	uint32_t* outEntryCount);
typedef int32_t (*WmBaremetalProgramCurrentDeviceIdFn)(void);
typedef uint32_t (*WmBaremetalProgramListDevicesFn)(
	WmBaremetalProgramDirectoryEntry* entries,
	uint32_t entryCapacity,
	uint32_t* outEntryCount);
typedef uint32_t (*WmBaremetalProgramTargetDeviceFn)(int32_t deviceId);
typedef uint32_t (*WmBaremetalProgramStatFileOnDeviceFn)(
	int32_t deviceId,
	const char* path,
	WmBaremetalProgramFileInfo* outInfo);
typedef uint32_t (*WmBaremetalProgramListDirectoryOnDeviceFn)(
	int32_t deviceId,
	const char* path,
	WmBaremetalProgramDirectoryEntry* entries,
	uint32_t entryCapacity,
	uint32_t* outEntryCount);
typedef uint32_t (*WmBaremetalProgramWriteFileOnDeviceFn)(int32_t deviceId, const char* path, const void* data, uint32_t size);
typedef uint32_t (*WmBaremetalProgramDeleteFileOnDeviceFn)(int32_t deviceId, const char* path);
typedef uint32_t (*WmBaremetalProgramRenameFileOnDeviceFn)(int32_t deviceId, const char* oldPath, const char* newPath);
typedef uint32_t (*WmBaremetalProgramCreateDirectoryOnDeviceFn)(int32_t deviceId, const char* path);
typedef uint32_t (*WmBaremetalProgramPngDecodeFileOnDeviceFn)(int32_t deviceId, const char* path, WmBaremetalProgramImageInfo* outImage);
typedef uint32_t (*WmBaremetalProgramImageSaveFileOnDeviceFn)(
	int32_t deviceId,
	const char* path,
	const void* rgbaPixels,
	uint32_t width,
	uint32_t height,
	uint32_t stride,
	uint32_t format);
typedef void* (*WmBaremetalProgramTtfLoadFileOnDeviceFn)(int32_t deviceId, const char* path, float fontSize);
typedef uint32_t (*WmBaremetalProgramLaunchFileOnDeviceFn)(int32_t deviceId, const char* path, uint32_t launchMode);
typedef uint32_t (*WmBaremetalProgramRenameFileFn)(const char* oldPath, const char* newPath);
typedef uint32_t (*WmBaremetalProgramCreateDirectoryFn)(const char* path);
typedef uint32_t (*WmBaremetalProgramLaunchFileFn)(const char* path, uint32_t launchMode);
typedef uint32_t (*WmBaremetalProgramThreadMainFn)(void* context);
typedef uint32_t (*WmBaremetalProgramThreadCreateFn)(
	WmBaremetalProgramThreadMainFn function,
	void* context,
	const char* name);
typedef uint32_t (*WmBaremetalProgramThreadCreateExFn)(
	WmBaremetalProgramThreadMainFn function,
	void* context,
	const char* name,
	uint32_t priority);
typedef uint32_t (*WmBaremetalProgramProcessRequestSchedulingFn)(
	uint32_t priority,
	uint32_t threadCount);
typedef uint32_t (*WmBaremetalProgramAppWindowUpdateQueryFn)(
	uint32_t id,
	const char* title,
	const void* rgbaPixels,
	uint32_t width,
	uint32_t height,
	uint32_t stride,
	uint32_t clearRgb,
	WmBaremetalProgramAppWindowInfo* outWindow);
typedef uint32_t (*WmBaremetalProgramThreadYieldFn)(void);
typedef uint32_t (*WmBaremetalProgramWaitMicrosecondsFn)(uint32_t microseconds);
typedef uint32_t (*WmBaremetalProgramHardwareThreadsFn)(void);
typedef uint32_t (*WmBaremetalProgramHardwareInfoFn)(WmBaremetalProgramHardwareInfo* outInfo);
typedef uint32_t (*WmBaremetalProgramHardwareDeviceListFn)(
	WmBaremetalProgramHardwareDeviceInfo* devices,
	uint32_t deviceCapacity,
	uint32_t* outDeviceCount);
typedef uint32_t (*WmBaremetalProgramProcessListFn)(
	WmBaremetalProgramProcessInfo* processes,
	uint32_t processCapacity,
	uint32_t* outProcessCount);
typedef uint32_t (*WmBaremetalProgramSystemStatsFn)(WmBaremetalProgramSystemStats* outStats);
typedef uint32_t (*WmBaremetalProgramProcessTerminateFn)(uint32_t processId);
typedef uint32_t (*WmBaremetalProgramDeviceStatsFn)(int32_t deviceId, WmBaremetalProgramDeviceStats* outStats);
typedef uint32_t (*WmBaremetalProgramGpuInfoFn)(WmBaremetalGpuInfo* outInfo);
typedef uint32_t (*WmBaremetalProgramGpuSubmitFn)(const WmBaremetalGpuCommand* commands, uint32_t commandCount);
typedef uint32_t (*WmBaremetalProgramNetworkInfoFn)(WmBaremetalNetworkInfo* outInfo);
typedef uint32_t (*WmBaremetalProgramNetworkReceiveFn)(void* buffer, uint32_t capacity, uint32_t* outFrameBytes);
typedef uint32_t (*WmBaremetalProgramNetworkSendFn)(const void* frame, uint32_t frameBytes);
typedef uint32_t (*WmBaremetalProgramAppWindowCreateFn)(const char* title, uint32_t width, uint32_t height);
typedef uint32_t (*WmBaremetalProgramAppWindowUpdateFn)(
	uint32_t id,
	const char* title,
	const void* rgbaPixels,
	uint32_t width,
	uint32_t height,
	uint32_t stride,
	uint32_t clearRgb);
typedef uint32_t (*WmBaremetalProgramAppWindowDestroyFn)(uint32_t id);
typedef uint32_t (*WmBaremetalProgramAppWindowListFn)(
	WmBaremetalProgramAppWindowInfo* windows,
	uint32_t windowCapacity,
	uint32_t* outWindowCount);
typedef uint32_t (*WmBaremetalProgramAppWindowConfigureFn)(
	uint32_t id,
	int32_t x,
	int32_t y,
	uint32_t flagMask,
	uint32_t flagValues);
typedef uint32_t (*WmBaremetalProgramAppWindowQueryFn)(uint32_t id, WmBaremetalProgramAppWindowInfo* outWindow);
typedef uint32_t (*WmBaremetalProgramAppWindowSetMenusFn)(
	uint32_t id,
	const char* fileMenu,
	const char* editMenu,
	const char* windowMenu);
typedef uint32_t (*WmBaremetalProgramAppWindowMenuCommandFn)(
	uint32_t id,
	uint32_t menuKind,
	uint32_t menuIndex);
typedef uint32_t (*WmBaremetalProgramAppWindowPointerEventFn)(
	uint32_t id,
	int32_t x,
	int32_t y,
	uint32_t buttons,
	uint32_t flags);
typedef uint32_t (*WmBaremetalProgramAppWindowPointerStateFn)(
	uint32_t id,
	WmBaremetalProgramAppWindowPointerInfo* outInfo);
typedef uint32_t (*WmBaremetalProgramAppWindowSetAppearanceFn)(
	uint32_t id,
	uint32_t transparency,
	uint32_t shadowIntensity);
typedef uint32_t (*WmBaremetalProgramAppWindowSetModeFn)(
	uint32_t id,
	uint32_t mode,
	uint32_t effectRange);
typedef uint32_t (*WmBaremetalProgramAppWindowSetContentSizeFn)(
	uint32_t id,
	uint32_t width,
	uint32_t height);
typedef uint32_t (*WmBaremetalProgramClipboardWriteTextFn)(const char* text, uint32_t textSize);
typedef uint32_t (*WmBaremetalProgramClipboardReadTextFn)(char* outText, uint32_t outTextSize);
typedef uint32_t (*WmBaremetalProgramClipboardTextSizeFn)(void);
typedef uint32_t (*WmBaremetalProgramShutdownFn)(void);
typedef uint32_t (*WmBaremetalProgramTimeInfoFn)(WmBaremetalProgramTimeInfo* outInfo);
typedef uint32_t (*WmBaremetalProgramTimeSetFn)(uint32_t epochSecondsLow, uint32_t epochSecondsHigh);
typedef uint32_t (*WmBaremetalProgramTimeSyncNetworkFn)(
	const char* server,
	WmBaremetalProgramTimeInfo* outInfo,
	char* errorText,
	uint32_t errorTextSize);
typedef uint32_t (*WmBaremetalProgramWinterScriptNativeFn)(
	const WmBaremetalProgramWinterScriptValue* args,
	uint32_t argCount,
	WmBaremetalProgramWinterScriptValue* outValue,
	char* errorText,
	uint32_t errorTextSize);
typedef uint32_t (*WmBaremetalProgramAssignWinterScriptFunctionFn)(
	const char* name,
	WmBaremetalProgramWinterScriptNativeFn function);

static inline WmBaremetalProgramWinterScriptValue wm_program_ws_make_null(void) {
	WmBaremetalProgramWinterScriptValue value;
	value.type = WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_NULL;
	value.intValue = 0;
	value.floatValue = 0.0f;
	value.stringValue = NULL;
	value.rawValue = NULL;
	value.rawSize = 0u;
	return value;
}

static inline WmBaremetalProgramWinterScriptValue wm_program_ws_make_int(int32_t number) {
	WmBaremetalProgramWinterScriptValue value = wm_program_ws_make_null();
	value.type = WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_INT;
	value.intValue = number;
	value.floatValue = (float)number;
	return value;
}

static inline WmBaremetalProgramWinterScriptValue wm_program_ws_make_float(float number) {
	WmBaremetalProgramWinterScriptValue value = wm_program_ws_make_null();
	value.type = WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_FLOAT;
	value.intValue = (int32_t)number;
	value.floatValue = number;
	return value;
}

static inline WmBaremetalProgramWinterScriptValue wm_program_ws_make_bool(bool state) {
	WmBaremetalProgramWinterScriptValue value = wm_program_ws_make_null();
	value.type = WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_BOOL;
	value.intValue = state ? 1 : 0;
	value.floatValue = state ? 1.0f : 0.0f;
	return value;
}

static inline WmBaremetalProgramWinterScriptValue wm_program_ws_make_string(const char* text) {
	WmBaremetalProgramWinterScriptValue value = wm_program_ws_make_null();
	value.type = WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_STRING;
	value.stringValue = text;
	return value;
}

static inline WmBaremetalProgramWinterScriptValue wm_program_ws_make_raw(const void* data, uint32_t size) {
	WmBaremetalProgramWinterScriptValue value = wm_program_ws_make_null();
	value.type = WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_RAW;
	value.rawValue = (const uint8_t*)data;
	value.rawSize = size;
	return value;
}

static inline WmBaremetalProgramWinterScriptValue wm_program_ws_make_pointer(uint32_t address) {
	WmBaremetalProgramWinterScriptValue value = wm_program_ws_make_null();
	value.type = WM_BAREMETAL_PROGRAM_WINTERSCRIPT_VALUE_POINTER;
	value.intValue = (int32_t)address;
	return value;
}

static inline volatile WmBaremetalProgramApi* wm_program_api_mutable(void) {
	return (volatile WmBaremetalProgramApi*)(uintptr_t)WM_BAREMETAL_PROGRAM_API_PHYSICAL;
}

#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
static inline const volatile WmBaremetalProgramX64Bridge* wm_program_x64_bridge(void) {
	return (const volatile WmBaremetalProgramX64Bridge*)(uintptr_t)WM_BAREMETAL_PROGRAM_X64_BRIDGE_PHYSICAL;
}

static inline uint64_t wm_program_x64_call(
		uint32_t selector,
		uint64_t arg0,
		uint64_t arg1,
		uint64_t arg2,
		uint64_t arg3,
		uint64_t arg4,
		uint64_t arg5,
		uint64_t arg6,
		uint64_t arg7) {
	const volatile WmBaremetalProgramX64Bridge* bridge = wm_program_x64_bridge();
	if (!bridge ||
			bridge->magic != WM_BAREMETAL_PROGRAM_X64_BRIDGE_MAGIC ||
			bridge->version < WM_BAREMETAL_PROGRAM_X64_BRIDGE_VERSION ||
			bridge->size < sizeof(WmBaremetalProgramX64Bridge) ||
			bridge->callFn == 0u) {
		return 0u;
	}
	return ((WmBaremetalProgramX64CallFn)(uintptr_t)bridge->callFn)(
		selector,
		arg0,
		arg1,
		arg2,
		arg3,
		arg4,
		arg5,
		arg6,
		arg7);
}

static inline uint32_t wm_program_float_bits(float value) {
	uint32_t bits = 0u;
	const unsigned char* source = (const unsigned char*)(const void*)&value;
	unsigned char* dest = (unsigned char*)(void*)&bits;
	for (size_t index = 0u; index < sizeof(bits); ++index) {
		dest[index] = source[index];
	}
	return bits;
}

#define WM_PROGRAM_X64_CALL0(selector) wm_program_x64_call((selector), 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u)
#define WM_PROGRAM_X64_CALL1(selector, a0) wm_program_x64_call((selector), (uint64_t)(uintptr_t)(a0), 0u, 0u, 0u, 0u, 0u, 0u, 0u)
#define WM_PROGRAM_X64_CALL2(selector, a0, a1) wm_program_x64_call((selector), (uint64_t)(uintptr_t)(a0), (uint64_t)(uintptr_t)(a1), 0u, 0u, 0u, 0u, 0u, 0u)
#define WM_PROGRAM_X64_CALL3(selector, a0, a1, a2) wm_program_x64_call((selector), (uint64_t)(uintptr_t)(a0), (uint64_t)(uintptr_t)(a1), (uint64_t)(uintptr_t)(a2), 0u, 0u, 0u, 0u, 0u)
#define WM_PROGRAM_X64_CALL4(selector, a0, a1, a2, a3) wm_program_x64_call((selector), (uint64_t)(uintptr_t)(a0), (uint64_t)(uintptr_t)(a1), (uint64_t)(uintptr_t)(a2), (uint64_t)(uintptr_t)(a3), 0u, 0u, 0u, 0u)
#define WM_PROGRAM_X64_CALL5(selector, a0, a1, a2, a3, a4) wm_program_x64_call((selector), (uint64_t)(uintptr_t)(a0), (uint64_t)(uintptr_t)(a1), (uint64_t)(uintptr_t)(a2), (uint64_t)(uintptr_t)(a3), (uint64_t)(uintptr_t)(a4), 0u, 0u, 0u)
#define WM_PROGRAM_X64_CALL6(selector, a0, a1, a2, a3, a4, a5) wm_program_x64_call((selector), (uint64_t)(uintptr_t)(a0), (uint64_t)(uintptr_t)(a1), (uint64_t)(uintptr_t)(a2), (uint64_t)(uintptr_t)(a3), (uint64_t)(uintptr_t)(a4), (uint64_t)(uintptr_t)(a5), 0u, 0u)
#define WM_PROGRAM_X64_CALL7(selector, a0, a1, a2, a3, a4, a5, a6) wm_program_x64_call((selector), (uint64_t)(uintptr_t)(a0), (uint64_t)(uintptr_t)(a1), (uint64_t)(uintptr_t)(a2), (uint64_t)(uintptr_t)(a3), (uint64_t)(uintptr_t)(a4), (uint64_t)(uintptr_t)(a5), (uint64_t)(uintptr_t)(a6), 0u)
#define WM_PROGRAM_X64_CALL8(selector, a0, a1, a2, a3, a4, a5, a6, a7) wm_program_x64_call((selector), (uint64_t)(uintptr_t)(a0), (uint64_t)(uintptr_t)(a1), (uint64_t)(uintptr_t)(a2), (uint64_t)(uintptr_t)(a3), (uint64_t)(uintptr_t)(a4), (uint64_t)(uintptr_t)(a5), (uint64_t)(uintptr_t)(a6), (uint64_t)(uintptr_t)(a7))
#endif

static inline const volatile WmBaremetalProgramApi* wm_program_api(void) {
	return (const volatile WmBaremetalProgramApi*)(uintptr_t)WM_BAREMETAL_PROGRAM_API_PHYSICAL;
}

static inline bool wm_program_api_header_ready(const volatile WmBaremetalProgramApi* api) {
	return api &&
		api->magic == WM_BAREMETAL_PROGRAM_API_MAGIC &&
		api->version >= WM_BAREMETAL_PROGRAM_API_BASE_VERSION &&
		api->size >= WM_BAREMETAL_PROGRAM_API_SIZE_OFFSET + 4u;
}

static inline bool wm_program_api_field_ready(const volatile WmBaremetalProgramApi* api, uint32_t fieldOffset) {
	return wm_program_api_header_ready(api) && api->size >= fieldOffset + 4u;
}

static inline uint32_t wm_program_expand_disk(void) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL0(WM_BAREMETAL_PROGRAM_API_EXPAND_DISK_FN_OFFSET);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_EXPAND_DISK_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->expandDiskFn;
	return address ? ((WmBaremetalProgramExpandDiskFn)(uintptr_t)address)() : 0u;
#endif
}

static inline uint32_t wm_program_set_theme(uint32_t backgroundRgb, uint32_t foregroundRgb, uint32_t textModeAttribute) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_SET_THEME_FN_OFFSET, backgroundRgb, foregroundRgb, textModeAttribute);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_SET_THEME_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->setThemeFn;
	return address ? ((WmBaremetalProgramSetThemeFn)(uintptr_t)address)(backgroundRgb, foregroundRgb, textModeAttribute) : 0u;
#endif
}

static inline uint32_t wm_program_enter_graphics_mode(void) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL0(WM_BAREMETAL_PROGRAM_API_ENTER_GRAPHICS_MODE_FN_OFFSET);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_ENTER_GRAPHICS_MODE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->enterGraphicsModeFn;
	return address ? ((WmBaremetalProgramEnterGraphicsModeFn)(uintptr_t)address)() : 0u;
#endif
}

static inline uint32_t wm_program_enter_text_mode(void) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL0(WM_BAREMETAL_PROGRAM_API_ENTER_TEXT_MODE_FN_OFFSET);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_ENTER_TEXT_MODE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->enterTextModeFn;
	return address ? ((WmBaremetalProgramEnterTextModeFn)(uintptr_t)address)() : 0u;
#endif
}

static inline uint32_t wm_program_enter_wxga_graphics_mode(void) {
	return wm_program_enter_graphics_mode();
}

static inline uint32_t wm_program_leave_wxga_graphics_mode(void) {
	return wm_program_enter_text_mode();
}

static inline uint32_t wm_program_set_night_mode(void) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL0(WM_BAREMETAL_PROGRAM_API_SET_NIGHT_MODE_FN_OFFSET);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_SET_NIGHT_MODE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->setNightModeFn;
	return address ? ((WmBaremetalProgramSetNightModeFn)(uintptr_t)address)() : 0u;
#endif
}

static inline uint32_t wm_program_clear(uint32_t backgroundRgb, uint32_t foregroundRgb, uint32_t textModeAttribute) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_CLEAR_FN_OFFSET, backgroundRgb, foregroundRgb, textModeAttribute);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_CLEAR_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->clearFn;
	return address ? ((WmBaremetalProgramClearFn)(uintptr_t)address)(backgroundRgb, foregroundRgb, textModeAttribute) : 0u;
#endif
}

static inline uint32_t wm_program_putc(uint32_t ch) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_PUTC_FN_OFFSET, ch);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_PUTC_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->putcFn;
	return address ? ((WmBaremetalProgramPutcFn)(uintptr_t)address)(ch) : 0u;
#endif
}

static inline uint32_t wm_program_write(const char* text) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_WRITE_FN_OFFSET, text);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_WRITE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->writeFn;
	return address ? ((WmBaremetalProgramWriteFn)(uintptr_t)address)(text) : 0u;
#endif
}

static inline uint32_t wm_program_poll_key_ax(void) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL0(WM_BAREMETAL_PROGRAM_API_POLL_KEY_AX_FN_OFFSET);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_POLL_KEY_AX_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->pollKeyAxFn;
	return address ? ((WmBaremetalProgramPollKeyAxFn)(uintptr_t)address)() : 0u;
#endif
}

static inline uint32_t wm_program_end(void) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL0(WM_BAREMETAL_PROGRAM_API_END_FN_OFFSET);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_END_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->endFn;
	return address ? ((WmBaremetalProgramEndFn)(uintptr_t)address)() : 0u;
#endif
}

static inline uint32_t wm_program_last_error(char* outText, uint32_t outTextSize) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_LAST_ERROR_FN_OFFSET, outText, outTextSize);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_LAST_ERROR_FN_OFFSET)) {
		if (outText && outTextSize != 0u) {
			outText[0] = '\0';
		}
		return 0u;
	}
	const uint32_t address = api->lastErrorFn;
	return address ? ((WmBaremetalProgramLastErrorFn)(uintptr_t)address)(outText, outTextSize) : 0u;
#endif
}

static inline uint32_t wm_program_stat_file(const char* path, WmBaremetalProgramFileInfo* outInfo) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_STAT_FILE_FN_OFFSET, path, outInfo);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_STAT_FILE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->statFileFn;
	return address ? ((WmBaremetalProgramStatFileFn)(uintptr_t)address)(path, outInfo) : 0u;
#endif
}

static inline uint32_t wm_program_write_file(const char* path, const void* data, uint32_t size) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_WRITE_FILE_FN_OFFSET, path, data, size);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_WRITE_FILE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->writeFileFn;
	return address ? ((WmBaremetalProgramWriteFileFn)(uintptr_t)address)(path, data, size) : 0u;
#endif
}

static inline uint32_t wm_program_delete_file(const char* path) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_DELETE_FILE_FN_OFFSET, path);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_DELETE_FILE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->deleteFileFn;
	return address ? ((WmBaremetalProgramDeleteFileFn)(uintptr_t)address)(path) : 0u;
#endif
}

static inline uint32_t wm_program_host_log(const char* text) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_HOST_LOG_FN_OFFSET, text);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_HOST_LOG_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->hostLogFn;
	return address ? ((WmBaremetalProgramHostLogFn)(uintptr_t)address)(text) : 0u;
#endif
}

static inline uint32_t wm_program_host_readline(char* buffer, uint32_t size, const char* prompt, uint32_t allowCancel) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL4(WM_BAREMETAL_PROGRAM_API_HOST_READLINE_FN_OFFSET, buffer, size, prompt, allowCancel);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_HOST_READLINE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->hostReadlineFn;
	return address ? ((WmBaremetalProgramHostReadlineFn)(uintptr_t)address)(buffer, size, prompt, allowCancel) : 0u;
#endif
}

static inline uint32_t wm_program_assign_winterscript_function(
	const char* name,
	WmBaremetalProgramWinterScriptNativeFn function) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	(void)name;
	(void)function;
	return 0u;
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_ASSIGN_WINTERSCRIPT_FUNCTION_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->assignWinterScriptFunctionFn;
	return address ? ((WmBaremetalProgramAssignWinterScriptFunctionFn)(uintptr_t)address)(name, function) : 0u;
#endif
}

static inline void* wm_program_malloc(size_t size) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (void*)(uintptr_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_MALLOC_FN_OFFSET, size);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_MALLOC_FN_OFFSET)) {
		return NULL;
	}
	const uint32_t address = api->mallocFn;
	return address ? ((WmBaremetalProgramMallocFn)(uintptr_t)address)(size) : NULL;
#endif
}

static inline void wm_program_free(void* ptr) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	(void)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_FREE_FN_OFFSET, ptr);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_FREE_FN_OFFSET)) {
		return;
	}
	const uint32_t address = api->freeFn;
	if (address) {
		((WmBaremetalProgramFreeFn)(uintptr_t)address)(ptr);
	}
#endif
}

static inline void* wm_program_realloc(void* ptr, size_t size) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (void*)(uintptr_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_REALLOC_FN_OFFSET, ptr, size);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_REALLOC_FN_OFFSET)) {
		return NULL;
	}
	const uint32_t address = api->reallocFn;
	return address ? ((WmBaremetalProgramReallocFn)(uintptr_t)address)(ptr, size) : NULL;
#endif
}

static inline uint32_t wm_program_png_decode_file(const char* path, WmBaremetalProgramImageInfo* outImage) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_PNG_DECODE_FILE_FN_OFFSET, path, outImage);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_PNG_DECODE_FILE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->pngDecodeFileFn;
	return address ? ((WmBaremetalProgramPngDecodeFileFn)(uintptr_t)address)(path, outImage) : 0u;
#endif
}

static inline uint32_t wm_program_png_decode_memory(const void* data, uint32_t size, WmBaremetalProgramImageInfo* outImage) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_PNG_DECODE_MEMORY_FN_OFFSET, data, size, outImage);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_PNG_DECODE_MEMORY_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->pngDecodeMemoryFn;
	return address ? ((WmBaremetalProgramPngDecodeMemoryFn)(uintptr_t)address)(data, size, outImage) : 0u;
#endif
}

static inline uint32_t wm_program_wav_decode_file(const char* path, uint32_t outputChannels, WmBaremetalProgramPcmInfo* outPcm) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_WAV_DECODE_FILE_FN_OFFSET, path, outputChannels, outPcm);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_WAV_DECODE_FILE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->wavDecodeFileFn;
	return address ? ((WmBaremetalProgramWavDecodeFileFn)(uintptr_t)address)(path, outputChannels, outPcm) : 0u;
#endif
}

static inline uint32_t wm_program_wav_decode_memory(const void* data, uint32_t size, uint32_t outputChannels, WmBaremetalProgramPcmInfo* outPcm) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL4(WM_BAREMETAL_PROGRAM_API_WAV_DECODE_MEMORY_FN_OFFSET, data, size, outputChannels, outPcm);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_WAV_DECODE_MEMORY_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->wavDecodeMemoryFn;
	return address ? ((WmBaremetalProgramWavDecodeMemoryFn)(uintptr_t)address)(data, size, outputChannels, outPcm) : 0u;
#endif
}

static inline void* wm_program_ttf_load_file(const char* path, float fontSize) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (void*)(uintptr_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_TTF_LOAD_FILE_FN_OFFSET, path, wm_program_float_bits(fontSize));
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TTF_LOAD_FILE_FN_OFFSET)) {
		return NULL;
	}
	const uint32_t address = api->ttfLoadFileFn;
	return address ? ((WmBaremetalProgramTtfLoadFileFn)(uintptr_t)address)(path, fontSize) : NULL;
#endif
}

static inline void* wm_program_ttf_load_memory(const void* data, uint32_t size, float fontSize) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (void*)(uintptr_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_TTF_LOAD_MEMORY_FN_OFFSET, data, size, wm_program_float_bits(fontSize));
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TTF_LOAD_MEMORY_FN_OFFSET)) {
		return NULL;
	}
	const uint32_t address = api->ttfLoadMemoryFn;
	return address ? ((WmBaremetalProgramTtfLoadMemoryFn)(uintptr_t)address)(data, size, fontSize) : NULL;
#endif
}

static inline void wm_program_ttf_resize(void* fontHandle, float fontSize) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	(void)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_TTF_RESIZE_FN_OFFSET, fontHandle, wm_program_float_bits(fontSize));
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TTF_RESIZE_FN_OFFSET)) {
		return;
	}
	const uint32_t address = api->ttfResizeFn;
	if (address) {
		((WmBaremetalProgramTtfResizeFn)(uintptr_t)address)(fontHandle, fontSize);
	}
#endif
}

static inline uint32_t wm_program_ttf_render(
		void* fontHandle,
		const char* utf8Text,
		int32_t r,
		int32_t g,
		int32_t b,
		uint32_t a,
		WmBaremetalProgramImageInfo* outImage) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL7(WM_BAREMETAL_PROGRAM_API_TTF_RENDER_FN_OFFSET, fontHandle, utf8Text, r, g, b, a, outImage);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TTF_RENDER_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->ttfRenderFn;
	return address ? ((WmBaremetalProgramTtfRenderFn)(uintptr_t)address)(fontHandle, utf8Text, r, g, b, a, outImage) : 0u;
#endif
}

static inline void wm_program_ttf_free(void* fontHandle) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	(void)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_TTF_FREE_FN_OFFSET, fontHandle);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TTF_FREE_FN_OFFSET)) {
		return;
	}
	const uint32_t address = api->ttfFreeFn;
	if (address) {
		((WmBaremetalProgramTtfFreeFn)(uintptr_t)address)(fontHandle);
	}
#endif
}

static inline uint32_t wm_program_font_render_text(
		const char* text,
		uint32_t maxChars,
		uint32_t scale,
		uint32_t rgba,
		WmBaremetalProgramImageInfo* outImage) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL5(WM_BAREMETAL_PROGRAM_API_FONT_RENDER_TEXT_FN_OFFSET, text, maxChars, scale, rgba, outImage);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_FONT_RENDER_TEXT_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->fontRenderTextFn;
	return address ? ((WmBaremetalProgramFontRenderTextFn)(uintptr_t)address)(text, maxChars, scale, rgba, outImage) : 0u;
#endif
}

static inline uint32_t wm_program_font_render_text_fixed_width(
		const char* text,
		uint32_t maxChars,
		uint32_t scale,
		uint32_t rgba,
		WmBaremetalProgramImageInfo* outImage) {
	return wm_program_font_render_text(
		text,
		maxChars,
		(scale & WM_BAREMETAL_PROGRAM_FONT_RENDER_SCALE_MASK) |
			WM_BAREMETAL_PROGRAM_FONT_RENDER_FLAG_FIXED_WIDTH,
		rgba,
		outImage);
}

static inline uint32_t wm_program_framebuffer_info(WmBaremetalProgramFramebufferInfo* outInfo) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_FRAMEBUFFER_INFO_FN_OFFSET, outInfo);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_FRAMEBUFFER_INFO_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->framebufferInfoFn;
	return address ? ((WmBaremetalProgramFramebufferInfoFn)(uintptr_t)address)(outInfo) : 0u;
#endif
}

static inline uint32_t wm_program_present_framebuffer(uint32_t x, uint32_t y, uint32_t width, uint32_t height) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL4(WM_BAREMETAL_PROGRAM_API_PRESENT_FRAMEBUFFER_FN_OFFSET, x, y, width, height);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_PRESENT_FRAMEBUFFER_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->presentFramebufferFn;
	return address ? ((WmBaremetalProgramPresentFramebufferFn)(uintptr_t)address)(x, y, width, height) : 0u;
#endif
}

static inline uint32_t wm_program_pointer_state(WmBaremetalProgramPointerInfo* outInfo) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_POINTER_STATE_FN_OFFSET, outInfo);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_POINTER_STATE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->pointerStateFn;
	return address ? ((WmBaremetalProgramPointerStateFn)(uintptr_t)address)(outInfo) : 0u;
#endif
}

static inline uint32_t wm_program_list_directory(
		const char* path,
		WmBaremetalProgramDirectoryEntry* entries,
		uint32_t entryCapacity,
		uint32_t* outEntryCount) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL4(WM_BAREMETAL_PROGRAM_API_LIST_DIRECTORY_FN_OFFSET, path, entries, entryCapacity, outEntryCount);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_LIST_DIRECTORY_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->listDirectoryFn;
	return address ? ((WmBaremetalProgramListDirectoryFn)(uintptr_t)address)(path, entries, entryCapacity, outEntryCount) : 0u;
#endif
}

static inline uint32_t wm_program_rename_file(const char* oldPath, const char* newPath);
static inline uint32_t wm_program_create_directory(const char* path);
static inline uint32_t wm_program_launch_file(const char* path, uint32_t launchMode);

static inline int32_t wm_program_current_device_id(void) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (int32_t)WM_PROGRAM_X64_CALL0(WM_BAREMETAL_PROGRAM_API_CURRENT_DEVICE_ID_FN_OFFSET);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_CURRENT_DEVICE_ID_FN_OFFSET)) {
		return -1;
	}
	const uint32_t address = api->currentDeviceIdFn;
	return address ? ((WmBaremetalProgramCurrentDeviceIdFn)(uintptr_t)address)() : -1;
#endif
}

static inline uint32_t wm_program_list_devices(
		WmBaremetalProgramDirectoryEntry* entries,
		uint32_t entryCapacity,
		uint32_t* outEntryCount) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_LIST_DEVICES_FN_OFFSET, entries, entryCapacity, outEntryCount);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_LIST_DEVICES_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->listDevicesFn;
	return address ? ((WmBaremetalProgramListDevicesFn)(uintptr_t)address)(entries, entryCapacity, outEntryCount) : 0u;
#endif
}

static inline uint32_t wm_program_target_device(int32_t deviceId) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_TARGET_DEVICE_FN_OFFSET, deviceId);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TARGET_DEVICE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->targetDeviceFn;
	return address ? ((WmBaremetalProgramTargetDeviceFn)(uintptr_t)address)(deviceId) : 0u;
#endif
}

static inline uint32_t wm_program_stat_file_on_device(int32_t deviceId, const char* path, WmBaremetalProgramFileInfo* outInfo) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_STAT_FILE_ON_DEVICE_FN_OFFSET, deviceId, path, outInfo);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_STAT_FILE_ON_DEVICE_FN_OFFSET)) {
		return wm_program_stat_file(path, outInfo);
	}
	const uint32_t address = api->statFileOnDeviceFn;
	return address ? ((WmBaremetalProgramStatFileOnDeviceFn)(uintptr_t)address)(deviceId, path, outInfo) : 0u;
#endif
}

static inline uint32_t wm_program_list_directory_on_device(
		int32_t deviceId,
		const char* path,
		WmBaremetalProgramDirectoryEntry* entries,
		uint32_t entryCapacity,
		uint32_t* outEntryCount) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL5(WM_BAREMETAL_PROGRAM_API_LIST_DIRECTORY_ON_DEVICE_FN_OFFSET, deviceId, path, entries, entryCapacity, outEntryCount);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_LIST_DIRECTORY_ON_DEVICE_FN_OFFSET)) {
		return wm_program_list_directory(path, entries, entryCapacity, outEntryCount);
	}
	const uint32_t address = api->listDirectoryOnDeviceFn;
	return address ? ((WmBaremetalProgramListDirectoryOnDeviceFn)(uintptr_t)address)(deviceId, path, entries, entryCapacity, outEntryCount) : 0u;
#endif
}

static inline uint32_t wm_program_write_file_on_device(int32_t deviceId, const char* path, const void* data, uint32_t size) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL4(WM_BAREMETAL_PROGRAM_API_WRITE_FILE_ON_DEVICE_FN_OFFSET, deviceId, path, data, size);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_WRITE_FILE_ON_DEVICE_FN_OFFSET)) {
		return wm_program_write_file(path, data, size);
	}
	const uint32_t address = api->writeFileOnDeviceFn;
	return address ? ((WmBaremetalProgramWriteFileOnDeviceFn)(uintptr_t)address)(deviceId, path, data, size) : 0u;
#endif
}

static inline uint32_t wm_program_delete_file_on_device(int32_t deviceId, const char* path) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_DELETE_FILE_ON_DEVICE_FN_OFFSET, deviceId, path);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_DELETE_FILE_ON_DEVICE_FN_OFFSET)) {
		return wm_program_delete_file(path);
	}
	const uint32_t address = api->deleteFileOnDeviceFn;
	return address ? ((WmBaremetalProgramDeleteFileOnDeviceFn)(uintptr_t)address)(deviceId, path) : 0u;
#endif
}

static inline uint32_t wm_program_rename_file_on_device(int32_t deviceId, const char* oldPath, const char* newPath) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_RENAME_FILE_ON_DEVICE_FN_OFFSET, deviceId, oldPath, newPath);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_RENAME_FILE_ON_DEVICE_FN_OFFSET)) {
		return wm_program_rename_file(oldPath, newPath);
	}
	const uint32_t address = api->renameFileOnDeviceFn;
	return address ? ((WmBaremetalProgramRenameFileOnDeviceFn)(uintptr_t)address)(deviceId, oldPath, newPath) : 0u;
#endif
}

static inline uint32_t wm_program_create_directory_on_device(int32_t deviceId, const char* path) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_CREATE_DIRECTORY_ON_DEVICE_FN_OFFSET, deviceId, path);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_CREATE_DIRECTORY_ON_DEVICE_FN_OFFSET)) {
		return wm_program_create_directory(path);
	}
	const uint32_t address = api->createDirectoryOnDeviceFn;
	return address ? ((WmBaremetalProgramCreateDirectoryOnDeviceFn)(uintptr_t)address)(deviceId, path) : 0u;
#endif
}

static inline uint32_t wm_program_png_decode_file_on_device(int32_t deviceId, const char* path, WmBaremetalProgramImageInfo* outImage) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_PNG_DECODE_FILE_ON_DEVICE_FN_OFFSET, deviceId, path, outImage);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_PNG_DECODE_FILE_ON_DEVICE_FN_OFFSET)) {
		return wm_program_png_decode_file(path, outImage);
	}
	const uint32_t address = api->pngDecodeFileOnDeviceFn;
	return address ? ((WmBaremetalProgramPngDecodeFileOnDeviceFn)(uintptr_t)address)(deviceId, path, outImage) : 0u;
#endif
}

static inline void* wm_program_ttf_load_file_on_device(int32_t deviceId, const char* path, float fontSize) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (void*)(uintptr_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_TTF_LOAD_FILE_ON_DEVICE_FN_OFFSET, deviceId, path, wm_program_float_bits(fontSize));
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TTF_LOAD_FILE_ON_DEVICE_FN_OFFSET)) {
		return wm_program_ttf_load_file(path, fontSize);
	}
	const uint32_t address = api->ttfLoadFileOnDeviceFn;
	return address ? ((WmBaremetalProgramTtfLoadFileOnDeviceFn)(uintptr_t)address)(deviceId, path, fontSize) : NULL;
#endif
}

static inline uint32_t wm_program_launch_file_on_device(int32_t deviceId, const char* path, uint32_t launchMode) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_LAUNCH_FILE_ON_DEVICE_FN_OFFSET, deviceId, path, launchMode);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_LAUNCH_FILE_ON_DEVICE_FN_OFFSET)) {
		return wm_program_launch_file(path, launchMode);
	}
	const uint32_t address = api->launchFileOnDeviceFn;
	return address ? ((WmBaremetalProgramLaunchFileOnDeviceFn)(uintptr_t)address)(deviceId, path, launchMode) : 0u;
#endif
}

static inline uint32_t wm_program_rename_file(const char* oldPath, const char* newPath) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_RENAME_FILE_FN_OFFSET, oldPath, newPath);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_RENAME_FILE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->renameFileFn;
	return address ? ((WmBaremetalProgramRenameFileFn)(uintptr_t)address)(oldPath, newPath) : 0u;
#endif
}

static inline uint32_t wm_program_create_directory(const char* path) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_CREATE_DIRECTORY_FN_OFFSET, path);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_CREATE_DIRECTORY_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->createDirectoryFn;
	return address ? ((WmBaremetalProgramCreateDirectoryFn)(uintptr_t)address)(path) : 0u;
#endif
}

static inline uint32_t wm_program_launch_file(const char* path, uint32_t launchMode) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_LAUNCH_FILE_FN_OFFSET, path, launchMode);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_LAUNCH_FILE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->launchFileFn;
	return address ? ((WmBaremetalProgramLaunchFileFn)(uintptr_t)address)(path, launchMode) : 0u;
#endif
}

static inline uint32_t wm_program_thread_create(
		WmBaremetalProgramThreadMainFn function,
		void* context,
		const char* name) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_THREAD_CREATE_FN_OFFSET, function, context, name);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_THREAD_CREATE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->threadCreateFn;
	return address ? ((WmBaremetalProgramThreadCreateFn)(uintptr_t)address)(function, context, name) : 0u;
#endif
}

static inline uint32_t wm_program_thread_create_ex(
		WmBaremetalProgramThreadMainFn function,
		void* context,
		const char* name,
		uint32_t priority) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL4(WM_BAREMETAL_PROGRAM_API_THREAD_CREATE_EX_FN_OFFSET, function, context, name, priority);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_THREAD_CREATE_EX_FN_OFFSET)) {
		return wm_program_thread_create(function, context, name);
	}
	const uint32_t address = api->threadCreateExFn;
	if (!address) {
		return wm_program_thread_create(function, context, name);
	}
	return ((WmBaremetalProgramThreadCreateExFn)(uintptr_t)address)(function, context, name, priority);
#endif
}

static inline uint32_t wm_program_process_request_scheduling(
		uint32_t priority,
		uint32_t threadCount) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_PROCESS_REQUEST_SCHEDULING_FN_OFFSET, priority, threadCount);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_PROCESS_REQUEST_SCHEDULING_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->processRequestSchedulingFn;
	return address ? ((WmBaremetalProgramProcessRequestSchedulingFn)(uintptr_t)address)(priority, threadCount) : 0u;
#endif
}

static inline uint32_t wm_program_execute_command_line(const char* line, char* outText, uint32_t outTextSize) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_EXECUTE_COMMAND_LINE_FN_OFFSET, line, outText, outTextSize);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_EXECUTE_COMMAND_LINE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->executeCommandLineFn;
	return address ? ((WmBaremetalProgramExecuteCommandLineFn)(uintptr_t)address)(line, outText, outTextSize) : 0u;
#endif
}

static inline uint32_t wm_program_thread_yield(void) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL0(WM_BAREMETAL_PROGRAM_API_THREAD_YIELD_FN_OFFSET);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_THREAD_YIELD_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->threadYieldFn;
	return address ? ((WmBaremetalProgramThreadYieldFn)(uintptr_t)address)() : 0u;
#endif
}

static inline uint32_t wm_program_wait_microseconds(uint32_t microseconds) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_WAIT_MICROSECONDS_FN_OFFSET, microseconds);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_WAIT_MICROSECONDS_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->waitMicrosecondsFn;
	return address ? ((WmBaremetalProgramWaitMicrosecondsFn)(uintptr_t)address)(microseconds) : 0u;
#endif
}

static inline uint32_t wm_program_hardware_threads(void) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL0(WM_BAREMETAL_PROGRAM_API_HARDWARE_THREADS_FN_OFFSET);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_HARDWARE_THREADS_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->hardwareThreadsFn;
	return address ? ((WmBaremetalProgramHardwareThreadsFn)(uintptr_t)address)() : 0u;
#endif
}

static inline uint32_t wm_program_hardware_info(WmBaremetalProgramHardwareInfo* outInfo) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_HARDWARE_INFO_FN_OFFSET, outInfo);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_HARDWARE_INFO_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->hardwareInfoFn;
	return address ? ((WmBaremetalProgramHardwareInfoFn)(uintptr_t)address)(outInfo) : 0u;
#endif
}

static inline uint32_t wm_program_hardware_device_list(
		WmBaremetalProgramHardwareDeviceInfo* devices,
		uint32_t deviceCapacity,
		uint32_t* outDeviceCount) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_HARDWARE_DEVICE_LIST_FN_OFFSET, devices, deviceCapacity, outDeviceCount);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_HARDWARE_DEVICE_LIST_FN_OFFSET)) {
		if (outDeviceCount) {
			*outDeviceCount = 0u;
		}
		return 0u;
	}
	const uint32_t address = api->hardwareDeviceListFn;
	return address ? ((WmBaremetalProgramHardwareDeviceListFn)(uintptr_t)address)(devices, deviceCapacity, outDeviceCount) : 0u;
#endif
}

static inline uint32_t wm_program_process_list(
		WmBaremetalProgramProcessInfo* processes,
		uint32_t processCapacity,
		uint32_t* outProcessCount) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_PROCESS_LIST_FN_OFFSET, processes, processCapacity, outProcessCount);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_PROCESS_LIST_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->processListFn;
	return address ? ((WmBaremetalProgramProcessListFn)(uintptr_t)address)(processes, processCapacity, outProcessCount) : 0u;
#endif
}

static inline uint32_t wm_program_system_stats(WmBaremetalProgramSystemStats* outStats) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_SYSTEM_STATS_FN_OFFSET, outStats);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_SYSTEM_STATS_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->systemStatsFn;
	return address ? ((WmBaremetalProgramSystemStatsFn)(uintptr_t)address)(outStats) : 0u;
#endif
}

static inline uint32_t wm_program_process_terminate(uint32_t processId) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_PROCESS_TERMINATE_FN_OFFSET, processId);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_PROCESS_TERMINATE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->processTerminateFn;
	return address ? ((WmBaremetalProgramProcessTerminateFn)(uintptr_t)address)(processId) : 0u;
#endif
}

static inline uint32_t wm_program_device_stats(int32_t deviceId, WmBaremetalProgramDeviceStats* outStats) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_DEVICE_STATS_FN_OFFSET, deviceId, outStats);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_DEVICE_STATS_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->deviceStatsFn;
	return address ? ((WmBaremetalProgramDeviceStatsFn)(uintptr_t)address)(deviceId, outStats) : 0u;
#endif
}

static inline uint32_t wm_program_gpu_info(WmBaremetalGpuInfo* outInfo) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_GPU_INFO_FN_OFFSET, outInfo);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_GPU_INFO_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->gpuInfoFn;
	return address ? ((WmBaremetalProgramGpuInfoFn)(uintptr_t)address)(outInfo) : 0u;
#endif
}

static inline uint32_t wm_program_gpu_submit(const WmBaremetalGpuCommand* commands, uint32_t commandCount) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_GPU_SUBMIT_FN_OFFSET, commands, commandCount);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_GPU_SUBMIT_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->gpuSubmitFn;
	return address ? ((WmBaremetalProgramGpuSubmitFn)(uintptr_t)address)(commands, commandCount) : 0u;
#endif
}

static inline uint32_t wm_program_network_info(WmBaremetalNetworkInfo* outInfo) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_NETWORK_INFO_FN_OFFSET, outInfo);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_NETWORK_INFO_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->networkInfoFn;
	return address ? ((WmBaremetalProgramNetworkInfoFn)(uintptr_t)address)(outInfo) : 0u;
#endif
}

static inline uint32_t wm_program_network_receive(void* buffer, uint32_t capacity, uint32_t* outFrameBytes) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_NETWORK_RECEIVE_FN_OFFSET, buffer, capacity, outFrameBytes);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_NETWORK_RECEIVE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->networkReceiveFn;
	return address ? ((WmBaremetalProgramNetworkReceiveFn)(uintptr_t)address)(buffer, capacity, outFrameBytes) : 0u;
#endif
}

static inline uint32_t wm_program_network_send(const void* frame, uint32_t frameBytes) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_NETWORK_SEND_FN_OFFSET, frame, frameBytes);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_NETWORK_SEND_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->networkSendFn;
	return address ? ((WmBaremetalProgramNetworkSendFn)(uintptr_t)address)(frame, frameBytes) : 0u;
#endif
}

static inline uint32_t wm_program_image_save_file(
		const char* path,
		const void* rgbaPixels,
		uint32_t width,
		uint32_t height,
		uint32_t stride,
		uint32_t format) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL6(WM_BAREMETAL_PROGRAM_API_IMAGE_SAVE_FILE_FN_OFFSET, path, rgbaPixels, width, height, stride, format);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_IMAGE_SAVE_FILE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->imageSaveFileFn;
	return address ? ((WmBaremetalProgramImageSaveFileFn)(uintptr_t)address)(path, rgbaPixels, width, height, stride, format) : 0u;
#endif
}

static inline uint32_t wm_program_image_save_file_on_device(
		int32_t deviceId,
		const char* path,
		const void* rgbaPixels,
		uint32_t width,
		uint32_t height,
		uint32_t stride,
		uint32_t format) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL7(WM_BAREMETAL_PROGRAM_API_IMAGE_SAVE_FILE_ON_DEVICE_FN_OFFSET, deviceId, path, rgbaPixels, width, height, stride, format);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_IMAGE_SAVE_FILE_ON_DEVICE_FN_OFFSET)) {
		return wm_program_image_save_file(path, rgbaPixels, width, height, stride, format);
	}
	const uint32_t address = api->imageSaveFileOnDeviceFn;
	return address ? ((WmBaremetalProgramImageSaveFileOnDeviceFn)(uintptr_t)address)(deviceId, path, rgbaPixels, width, height, stride, format) : 0u;
#endif
}

static inline uint32_t wm_program_app_window_create(const char* title, uint32_t width, uint32_t height) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_CREATE_FN_OFFSET, title, width, height);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_CREATE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->appWindowCreateFn;
	return address ? ((WmBaremetalProgramAppWindowCreateFn)(uintptr_t)address)(title, width, height) : 0u;
#endif
}

static inline uint32_t wm_program_app_window_update(
		uint32_t id,
		const char* title,
		const void* rgbaPixels,
		uint32_t width,
		uint32_t height,
		uint32_t stride,
		uint32_t clearRgb) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL7(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_UPDATE_FN_OFFSET, id, title, rgbaPixels, width, height, stride, clearRgb);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_UPDATE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->appWindowUpdateFn;
	return address ? ((WmBaremetalProgramAppWindowUpdateFn)(uintptr_t)address)(id, title, rgbaPixels, width, height, stride, clearRgb) : 0u;
#endif
}

static inline uint32_t wm_program_app_window_destroy(uint32_t id) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_DESTROY_FN_OFFSET, id);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_DESTROY_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->appWindowDestroyFn;
	return address ? ((WmBaremetalProgramAppWindowDestroyFn)(uintptr_t)address)(id) : 0u;
#endif
}

static inline uint32_t wm_program_app_window_list(
		WmBaremetalProgramAppWindowInfo* windows,
		uint32_t windowCapacity,
		uint32_t* outWindowCount) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_LIST_FN_OFFSET, windows, windowCapacity, outWindowCount);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_LIST_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->appWindowListFn;
	return address ? ((WmBaremetalProgramAppWindowListFn)(uintptr_t)address)(windows, windowCapacity, outWindowCount) : 0u;
#endif
}

static inline uint32_t wm_program_app_window_configure(
		uint32_t id,
		int32_t x,
		int32_t y,
		uint32_t flagMask,
		uint32_t flagValues) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL5(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_CONFIGURE_FN_OFFSET, id, x, y, flagMask, flagValues);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_CONFIGURE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->appWindowConfigureFn;
	return address ? ((WmBaremetalProgramAppWindowConfigureFn)(uintptr_t)address)(id, x, y, flagMask, flagValues) : 0u;
#endif
}

static inline uint32_t wm_program_app_window_query(uint32_t id, WmBaremetalProgramAppWindowInfo* outWindow) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_QUERY_FN_OFFSET, id, outWindow);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_QUERY_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->appWindowQueryFn;
	return address ? ((WmBaremetalProgramAppWindowQueryFn)(uintptr_t)address)(id, outWindow) : 0u;
#endif
}

static inline uint32_t wm_program_app_window_update_query(
		uint32_t id,
		const char* title,
		const void* rgbaPixels,
		uint32_t width,
		uint32_t height,
		uint32_t stride,
		uint32_t clearRgb,
		WmBaremetalProgramAppWindowInfo* outWindow) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL8(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_UPDATE_QUERY_FN_OFFSET,
		id, title, rgbaPixels, width, height, stride, clearRgb, outWindow);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_UPDATE_QUERY_FN_OFFSET) &&
			api->appWindowUpdateQueryFn) {
		return ((WmBaremetalProgramAppWindowUpdateQueryFn)(uintptr_t)api->appWindowUpdateQueryFn)(
			id, title, rgbaPixels, width, height, stride, clearRgb, outWindow);
	}
	{
		uint32_t updated = 1u;
		if (rgbaPixels != 0) {
			updated = wm_program_app_window_update(id, title, rgbaPixels, width, height, stride, clearRgb);
		}
		if (outWindow) {
			(void)wm_program_app_window_query(id, outWindow);
		}
		return updated;
	}
#endif
}

static inline uint32_t wm_program_app_window_set_menus(
		uint32_t id,
		const char* fileMenu,
		const char* editMenu,
		const char* windowMenu) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL4(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_SET_MENUS_FN_OFFSET, id, fileMenu, editMenu, windowMenu);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_SET_MENUS_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->appWindowSetMenusFn;
	return address ? ((WmBaremetalProgramAppWindowSetMenusFn)(uintptr_t)address)(id, fileMenu, editMenu, windowMenu) : 0u;
#endif
}

static inline uint32_t wm_program_app_window_menu_command(
		uint32_t id,
		uint32_t menuKind,
		uint32_t menuIndex) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_MENU_COMMAND_FN_OFFSET, id, menuKind, menuIndex);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_MENU_COMMAND_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->appWindowMenuCommandFn;
	return address ? ((WmBaremetalProgramAppWindowMenuCommandFn)(uintptr_t)address)(id, menuKind, menuIndex) : 0u;
#endif
}

static inline uint32_t wm_program_app_window_pointer_event(
		uint32_t id,
		int32_t x,
		int32_t y,
		uint32_t buttons,
		uint32_t flags) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL5(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_POINTER_EVENT_FN_OFFSET, id, x, y, buttons, flags);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_POINTER_EVENT_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->appWindowPointerEventFn;
	return address ? ((WmBaremetalProgramAppWindowPointerEventFn)(uintptr_t)address)(id, x, y, buttons, flags) : 0u;
#endif
}

static inline uint32_t wm_program_app_window_pointer_state(
		uint32_t id,
		WmBaremetalProgramAppWindowPointerInfo* outInfo) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_POINTER_STATE_FN_OFFSET, id, outInfo);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_POINTER_STATE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->appWindowPointerStateFn;
	return address ? ((WmBaremetalProgramAppWindowPointerStateFn)(uintptr_t)address)(id, outInfo) : 0u;
#endif
}

static inline uint32_t wm_program_app_window_set_appearance(
		uint32_t id,
		uint32_t transparency,
		uint32_t shadowIntensity) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_SET_APPEARANCE_FN_OFFSET, id, transparency, shadowIntensity);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_SET_APPEARANCE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->appWindowSetAppearanceFn;
	return address ? ((WmBaremetalProgramAppWindowSetAppearanceFn)(uintptr_t)address)(id, transparency, shadowIntensity) : 0u;
#endif
}

static inline uint32_t wm_program_app_window_set_mode(
		uint32_t id,
		uint32_t mode,
		uint32_t effectRange) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_SET_MODE_FN_OFFSET, id, mode, effectRange);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_SET_MODE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->appWindowSetModeFn;
	return address ? ((WmBaremetalProgramAppWindowSetModeFn)(uintptr_t)address)(id, mode, effectRange) : 0u;
#endif
}

static inline uint32_t wm_program_app_window_set_content_size(uint32_t id, uint32_t width, uint32_t height) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_APP_WINDOW_SET_CONTENT_SIZE_FN_OFFSET, id, width, height);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_APP_WINDOW_SET_CONTENT_SIZE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->appWindowSetContentSizeFn;
	return address ? ((WmBaremetalProgramAppWindowSetContentSizeFn)(uintptr_t)address)(id, width, height) : 0u;
#endif
}

static inline uint32_t wm_program_clipboard_write_text(const char* text, uint32_t textSize) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_CLIPBOARD_WRITE_TEXT_FN_OFFSET, text, textSize);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_CLIPBOARD_WRITE_TEXT_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->clipboardWriteTextFn;
	return address ? ((WmBaremetalProgramClipboardWriteTextFn)(uintptr_t)address)(text, textSize) : 0u;
#endif
}

static inline uint32_t wm_program_clipboard_read_text(char* outText, uint32_t outTextSize) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_CLIPBOARD_READ_TEXT_FN_OFFSET, outText, outTextSize);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_CLIPBOARD_READ_TEXT_FN_OFFSET)) {
		if (outText && outTextSize != 0u) {
			outText[0] = '\0';
		}
		return 0u;
	}
	const uint32_t address = api->clipboardReadTextFn;
	return address ? ((WmBaremetalProgramClipboardReadTextFn)(uintptr_t)address)(outText, outTextSize) : 0u;
#endif
}

static inline uint32_t wm_program_clipboard_text_size(void) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL0(WM_BAREMETAL_PROGRAM_API_CLIPBOARD_TEXT_SIZE_FN_OFFSET);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_CLIPBOARD_TEXT_SIZE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->clipboardTextSizeFn;
	return address ? ((WmBaremetalProgramClipboardTextSizeFn)(uintptr_t)address)() : 0u;
#endif
}

static inline uint32_t wm_program_shutdown(void) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL0(WM_BAREMETAL_PROGRAM_API_SHUTDOWN_FN_OFFSET);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_SHUTDOWN_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->shutdownFn;
	return address ? ((WmBaremetalProgramShutdownFn)(uintptr_t)address)() : 0u;
#endif
}

static inline uint32_t wm_program_time_info(WmBaremetalProgramTimeInfo* outInfo) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_TIME_INFO_FN_OFFSET, outInfo);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TIME_INFO_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->timeInfoFn;
	return address ? ((WmBaremetalProgramTimeInfoFn)(uintptr_t)address)(outInfo) : 0u;
#endif
}

static inline uint32_t wm_program_time_set(uint32_t epochSecondsLow, uint32_t epochSecondsHigh) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_TIME_SET_FN_OFFSET, epochSecondsLow, epochSecondsHigh);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TIME_SET_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->timeSetFn;
	return address ? ((WmBaremetalProgramTimeSetFn)(uintptr_t)address)(epochSecondsLow, epochSecondsHigh) : 0u;
#endif
}

static inline uint32_t wm_program_time_sync_network(
		const char* server,
		WmBaremetalProgramTimeInfo* outInfo,
		char* errorText,
		uint32_t errorTextSize) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL4(WM_BAREMETAL_PROGRAM_API_TIME_SYNC_NETWORK_FN_OFFSET, server, outInfo, errorText, errorTextSize);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TIME_SYNC_NETWORK_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->timeSyncNetworkFn;
	return address ? ((WmBaremetalProgramTimeSyncNetworkFn)(uintptr_t)address)(server, outInfo, errorText, errorTextSize) : 0u;
#endif
}

#ifdef __cplusplus
}
#endif

#endif
