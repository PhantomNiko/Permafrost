#pragma once

#if defined(__has_include)
#if __has_include("libraries/generic_Intel32/baremetal_program_api.h")
#include "libraries/generic_Intel32/baremetal_program_api.h"
#else
#include "baremetal_program_api.h"
#endif
#else
#include "libraries/generic_Intel32/baremetal_program_api.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define TAYGA_VERSION "0.2"
#define TAYGA_RELEASE "Alpha"
#define TAYGA_DEFAULT_RAMSIZE_KB 1572864u

#define TAYGA_SHELL_MODE_WINTERSCRIPT 0u
#define TAYGA_SHELL_MODE_BASH 1u

#define TAYGA_STATUS_FLAG_RUNNING 0x00000001u
#define TAYGA_STATUS_FLAG_CONFIGURED 0x00000002u
#define TAYGA_STATUS_FLAG_FOREGROUND 0x00000004u
#define TAYGA_STATUS_FLAG_RESERVED_MEMORY 0x00000008u
#define TAYGA_STATUS_FLAG_SWAP_ONLY 0x00000010u

#define TAYGA_PROCESS_INFO_FLAG_TAYGA_SUBSYSTEM 0x00000001u
#define TAYGA_PROCESS_INFO_FLAG_TAYGA_RUNTIME 0x00000002u

#define TAYGA_STREAM_STDIN 0u
#define TAYGA_STREAM_STDOUT 1u
#define TAYGA_STREAM_STDERR 2u

#define TAYGA_STREAM_READ_LINE_ALLOW_CANCEL 0x00000001u

typedef struct WmTaygaStatus {
	uint32_t version;
	uint32_t size;
	uint32_t flags;
	uint32_t processId;
	uint32_t shellMode;
	uint32_t ramsizeKb;
	uint32_t reservedBytesLow;
	uint32_t reservedBytesHigh;
	int32_t userDeviceId;
	int32_t configDeviceId;
	char versionText[16];
	char releaseText[16];
	char username[32];
	char currentDirectory[WMFS_PATH_MAX + 1u];
	char prompt[96];
} WmTaygaStatus;

typedef struct WmTaygaProcessInfo {
	uint32_t version;
	uint32_t size;
	uint32_t flags;
	uint32_t processId;
	uint32_t argc;
	int32_t userDeviceId;
	int32_t configDeviceId;
	char executablePath[WMFS_PATH_MAX + 1u];
	char currentDirectory[WMFS_PATH_MAX + 1u];
	char username[32];
	char commandLine[512];
	char environment[512];
} WmTaygaProcessInfo;

typedef uint32_t (*WmTaygaStatusFn)(WmTaygaStatus* outStatus);
typedef uint32_t (*WmTaygaSetShellModeFn)(uint32_t mode);
typedef uint32_t (*WmTaygaExecuteLineFn)(const char* line, char* outText, uint32_t outTextSize);
typedef uint32_t (*WmTaygaRegisterProcessFn)(
	uint32_t processId,
	int32_t userDeviceId,
	int32_t configDeviceId,
	uint32_t ramsizeKb,
	uint32_t reservedBytesLow,
	uint32_t reservedBytesHigh,
	const char* username,
	const char* currentDirectory);
typedef uint32_t (*WmTaygaUnregisterProcessFn)(uint32_t processId);
typedef uint32_t (*WmTaygaProcessInfoFn)(WmTaygaProcessInfo* outInfo);
typedef uint32_t (*WmTaygaStreamWriteFn)(uint32_t fd, const void* data, uint32_t size);
typedef uint32_t (*WmTaygaStreamReadLineFn)(uint32_t fd, char* buffer, uint32_t size, const char* prompt, uint32_t flags);
typedef uint32_t (*WmTaygaDrainOutputFn)(char* outText, uint32_t outTextSize);
typedef uint32_t (*WmTaygaLaunchFn)(const char* commandLine, char* outText, uint32_t outTextSize);

static inline uint32_t tayga_status(WmTaygaStatus* outStatus) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_TAYGA_STATUS_FN_OFFSET, outStatus);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TAYGA_STATUS_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->taygaStatusFn;
	return address ? ((WmTaygaStatusFn)(uintptr_t)address)(outStatus) : 0u;
#endif
}

static inline uint32_t tayga_set_shell_mode(uint32_t mode) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_TAYGA_SET_SHELL_MODE_FN_OFFSET, mode);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TAYGA_SET_SHELL_MODE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->taygaSetShellModeFn;
	return address ? ((WmTaygaSetShellModeFn)(uintptr_t)address)(mode) : 0u;
#endif
}

static inline uint32_t tayga_execute_line(const char* line, char* outText, uint32_t outTextSize) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_TAYGA_EXECUTE_LINE_FN_OFFSET, line, outText, outTextSize);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TAYGA_EXECUTE_LINE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->taygaExecuteLineFn;
	return address ? ((WmTaygaExecuteLineFn)(uintptr_t)address)(line, outText, outTextSize) : 0u;
#endif
}

static inline uint32_t tayga_register_process(
		uint32_t processId,
		int32_t userDeviceId,
		int32_t configDeviceId,
		uint32_t ramsizeKb,
		uint32_t reservedBytesLow,
		uint32_t reservedBytesHigh,
		const char* username,
		const char* currentDirectory) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL8(
		WM_BAREMETAL_PROGRAM_API_TAYGA_REGISTER_PROCESS_FN_OFFSET,
		processId,
		userDeviceId,
		configDeviceId,
		ramsizeKb,
		reservedBytesLow,
		reservedBytesHigh,
		username,
		currentDirectory);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TAYGA_REGISTER_PROCESS_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->taygaRegisterProcessFn;
	return address ? ((WmTaygaRegisterProcessFn)(uintptr_t)address)(
		processId,
		userDeviceId,
		configDeviceId,
		ramsizeKb,
		reservedBytesLow,
		reservedBytesHigh,
		username,
		currentDirectory) : 0u;
#endif
}

static inline uint32_t tayga_unregister_process(uint32_t processId) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_TAYGA_UNREGISTER_PROCESS_FN_OFFSET, processId);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TAYGA_UNREGISTER_PROCESS_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->taygaUnregisterProcessFn;
	return address ? ((WmTaygaUnregisterProcessFn)(uintptr_t)address)(processId) : 0u;
#endif
}

static inline uint32_t tayga_process_info(WmTaygaProcessInfo* outInfo) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL1(WM_BAREMETAL_PROGRAM_API_TAYGA_PROCESS_INFO_FN_OFFSET, outInfo);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TAYGA_PROCESS_INFO_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->taygaProcessInfoFn;
	return address ? ((WmTaygaProcessInfoFn)(uintptr_t)address)(outInfo) : 0u;
#endif
}

static inline uint32_t tayga_stream_write(uint32_t fd, const void* data, uint32_t size) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_TAYGA_STREAM_WRITE_FN_OFFSET, fd, data, size);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TAYGA_STREAM_WRITE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->taygaStreamWriteFn;
	return address ? ((WmTaygaStreamWriteFn)(uintptr_t)address)(fd, data, size) : 0u;
#endif
}

static inline uint32_t tayga_stream_write_text(uint32_t fd, const char* text) {
	const char* scan = text ? text : "";
	uint32_t size = 0u;
	while (scan[size] != '\0') {
		++size;
	}
	return tayga_stream_write(fd, scan, size);
}

static inline uint32_t tayga_stream_read_line(uint32_t fd, char* buffer, uint32_t size, const char* prompt, uint32_t flags) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL5(WM_BAREMETAL_PROGRAM_API_TAYGA_STREAM_READ_LINE_FN_OFFSET, fd, buffer, size, prompt, flags);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TAYGA_STREAM_READ_LINE_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->taygaStreamReadLineFn;
	return address ? ((WmTaygaStreamReadLineFn)(uintptr_t)address)(fd, buffer, size, prompt, flags) : 0u;
#endif
}

static inline uint32_t tayga_drain_output(char* outText, uint32_t outTextSize) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL2(WM_BAREMETAL_PROGRAM_API_TAYGA_DRAIN_OUTPUT_FN_OFFSET, outText, outTextSize);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TAYGA_DRAIN_OUTPUT_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->taygaDrainOutputFn;
	return address ? ((WmTaygaDrainOutputFn)(uintptr_t)address)(outText, outTextSize) : 0u;
#endif
}

static inline uint32_t tayga_launch(const char* commandLine, char* outText, uint32_t outTextSize) {
#ifdef WM_BAREMETAL_PROGRAM_USE_X64_BRIDGE
	return (uint32_t)WM_PROGRAM_X64_CALL3(WM_BAREMETAL_PROGRAM_API_TAYGA_LAUNCH_FN_OFFSET, commandLine, outText, outTextSize);
#else
	const volatile WmBaremetalProgramApi* api = wm_program_api();
	if (!wm_program_api_field_ready(api, WM_BAREMETAL_PROGRAM_API_TAYGA_LAUNCH_FN_OFFSET)) {
		return 0u;
	}
	const uint32_t address = api->taygaLaunchFn;
	return address ? ((WmTaygaLaunchFn)(uintptr_t)address)(commandLine, outText, outTextSize) : 0u;
#endif
}

static inline uint32_t tayga_switch_to_bash(void) {
	return tayga_set_shell_mode(TAYGA_SHELL_MODE_BASH);
}

static inline uint32_t tayga_switch_to_winterscript(void) {
	return tayga_set_shell_mode(TAYGA_SHELL_MODE_WINTERSCRIPT);
}

#ifdef __cplusplus
}
#endif
