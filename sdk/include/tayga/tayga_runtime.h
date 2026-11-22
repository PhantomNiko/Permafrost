#pragma once

#if defined(__has_include)
#if __has_include("libraries/generic_Intel32/tayga_api.h")
#include "libraries/generic_Intel32/tayga_api.h"
#else
#include "tayga_api.h"
#endif
#else
#include "libraries/generic_Intel32/tayga_api.h"
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#ifndef TAYGA_RUNTIME_MAX_ARGC
#define TAYGA_RUNTIME_MAX_ARGC 64u
#endif

#ifndef TAYGA_RUNTIME_PATH_MAX
#define TAYGA_RUNTIME_PATH_MAX (WMFS_PATH_MAX + 1u)
#endif

typedef struct TaygaRuntimeContext {
	WmTaygaProcessInfo process;
	uint32_t argc;
	char* argv[TAYGA_RUNTIME_MAX_ARGC];
	char argvStorage[512];
	char currentDirectory[TAYGA_RUNTIME_PATH_MAX];
} TaygaRuntimeContext;

typedef struct TaygaRuntimeFile {
	const uint8_t* data;
	uint32_t size;
	uint32_t offset;
	uint32_t flags;
	char path[TAYGA_RUNTIME_PATH_MAX];
} TaygaRuntimeFile;

static inline bool tayga_runtime_is_space(char ch) {
	return ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n';
}

static inline bool tayga_runtime_is_path_sep(char ch) {
	return ch == '/' || ch == '\\';
}

static inline uint32_t tayga_runtime_parse_argv(char* text, char** argv, uint32_t capacity) {
	uint32_t argc = 0u;
	char* cursor = text;
	if (!text || !argv || capacity == 0u) {
		return 0u;
	}
	while (*cursor != '\0' && argc < capacity) {
		char quote = '\0';
		while (tayga_runtime_is_space(*cursor)) {
			++cursor;
		}
		if (*cursor == '\0') {
			break;
		}
		if (*cursor == '"' || *cursor == '\'') {
			quote = *cursor;
			++cursor;
		}
		argv[argc++] = cursor;
		while (*cursor != '\0') {
			if (quote != '\0') {
				if (*cursor == quote) {
					*cursor++ = '\0';
					break;
				}
			} else if (tayga_runtime_is_space(*cursor)) {
				*cursor++ = '\0';
				break;
			}
			++cursor;
		}
	}
	return argc;
}

static inline bool tayga_runtime_init(TaygaRuntimeContext* context) {
	if (!context) {
		return false;
	}
	memset(context, 0, sizeof(*context));
	if (!tayga_process_info(&context->process)) {
		return false;
	}
	snprintf(context->argvStorage, sizeof(context->argvStorage), "%s", context->process.commandLine);
	context->argc = tayga_runtime_parse_argv(context->argvStorage, context->argv, TAYGA_RUNTIME_MAX_ARGC);
	snprintf(context->currentDirectory, sizeof(context->currentDirectory), "%s",
		context->process.currentDirectory[0] != '\0' ? context->process.currentDirectory : "/");
	return true;
}

static inline const char* tayga_runtime_getenv(TaygaRuntimeContext* context, const char* name) {
	static char value[128];
	const char* cursor = context ? context->process.environment : NULL;
	const size_t nameLength = name ? strlen(name) : 0u;
	value[0] = '\0';
	if (!cursor || !name || nameLength == 0u) {
		return NULL;
	}
	while (*cursor != '\0') {
		const char* line = cursor;
		const char* equals = NULL;
		size_t lineLength = 0u;
		while (cursor[lineLength] != '\0' && cursor[lineLength] != '\n') {
			++lineLength;
		}
		for (size_t index = 0u; index < lineLength; ++index) {
			if (line[index] == '=') {
				equals = line + index;
				break;
			}
		}
		if (equals && (size_t)(equals - line) == nameLength && memcmp(line, name, nameLength) == 0) {
			size_t valueLength = lineLength - nameLength - 1u;
			if (valueLength >= sizeof(value)) {
				valueLength = sizeof(value) - 1u;
			}
			memcpy(value, equals + 1, valueLength);
			value[valueLength] = '\0';
			return value;
		}
		cursor += lineLength;
		if (*cursor == '\n') {
			++cursor;
		}
	}
	return NULL;
}

static inline bool tayga_runtime_normalize_path(
		const TaygaRuntimeContext* context,
		const char* path,
		char* outPath,
		size_t outPathSize) {
	char combined[TAYGA_RUNTIME_PATH_MAX];
	char scratch[TAYGA_RUNTIME_PATH_MAX];
	char* segments[64];
	uint32_t segmentCount = 0u;
	char* cursor = NULL;
	if (!outPath || outPathSize == 0u) {
		return false;
	}
	outPath[0] = '\0';
	if (!path || path[0] == '\0') {
		path = ".";
	}
	if (tayga_runtime_is_path_sep(path[0])) {
		snprintf(combined, sizeof(combined), "%s", path);
	} else {
		const char* cwd = context && context->currentDirectory[0] != '\0' ? context->currentDirectory : "/";
		if (strcmp(cwd, "/") == 0) {
			snprintf(combined, sizeof(combined), "/%s", path);
		} else {
			snprintf(combined, sizeof(combined), "%s/%s", cwd, path);
		}
	}
	snprintf(scratch, sizeof(scratch), "%s", combined);
	cursor = scratch;
	while (*cursor != '\0' && segmentCount < (uint32_t)(sizeof(segments) / sizeof(segments[0]))) {
		char* segment = NULL;
		char saved = '\0';
		while (tayga_runtime_is_path_sep(*cursor)) {
			++cursor;
		}
		if (*cursor == '\0') {
			break;
		}
		segment = cursor;
		while (*cursor != '\0' && !tayga_runtime_is_path_sep(*cursor)) {
			++cursor;
		}
		saved = *cursor;
		*cursor = '\0';
		if (strcmp(segment, ".") == 0) {
			if (saved == '\0') {
				break;
			}
			++cursor;
			continue;
		}
		if (strcmp(segment, "..") == 0) {
			if (segmentCount != 0u) {
				--segmentCount;
			}
			if (saved == '\0') {
				break;
			}
			++cursor;
			continue;
		}
		segments[segmentCount++] = segment;
		if (saved == '\0') {
			break;
		}
		++cursor;
	}
	if (segmentCount == (uint32_t)(sizeof(segments) / sizeof(segments[0]))) {
		while (*cursor != '\0') {
			if (!tayga_runtime_is_path_sep(*cursor)) {
				snprintf(outPath, outPathSize, "/");
				return false;
			}
			++cursor;
		}
	}
	if (segmentCount == 0u) {
		snprintf(outPath, outPathSize, "/");
		return true;
	}
	outPath[0] = '\0';
	for (uint32_t index = 0u; index < segmentCount; ++index) {
		const size_t used = strlen(outPath);
		if (used + strlen(segments[index]) + 2u > outPathSize) {
			snprintf(outPath, outPathSize, "/");
			return false;
		}
		outPath[used] = '/';
		snprintf(outPath + used + 1u, outPathSize - used - 1u, "%s", segments[index]);
	}
	return true;
}

static inline bool tayga_runtime_host_path(
		const TaygaRuntimeContext* context,
		const char* path,
		char* outPath,
		size_t outPathSize) {
	char virtualPath[TAYGA_RUNTIME_PATH_MAX];
	if (!outPath || outPathSize == 0u) {
		return false;
	}
	outPath[0] = '\0';
	if (!tayga_runtime_normalize_path(context, path, virtualPath, sizeof(virtualPath))) {
		return false;
	}
	if (strcmp(virtualPath, "/") == 0) {
		snprintf(outPath, outPathSize, "/Tayga");
	} else {
		snprintf(outPath, outPathSize, "/Tayga%s", virtualPath);
	}
	return outPath[0] != '\0';
}

static inline bool tayga_runtime_entry_is_immediate_host_child(
		const char* hostDirectory,
		const WmBaremetalProgramDirectoryEntry* entry) {
	const char* directory = hostDirectory ? hostDirectory : "";
	const char* path = entry ? entry->path : NULL;
	const char* relative = NULL;
	size_t directoryLength = 0u;
	if (!path || path[0] == '\0') {
		return false;
	}
	while (tayga_runtime_is_path_sep(*directory)) {
		++directory;
	}
	while (tayga_runtime_is_path_sep(*path)) {
		++path;
	}
	directoryLength = strlen(directory);
	if (directoryLength == 0u) {
		relative = path;
	} else if (strncmp(path, directory, directoryLength) == 0 &&
			tayga_runtime_is_path_sep(path[directoryLength])) {
		relative = path + directoryLength + 1u;
	} else {
		return false;
	}
	if (!relative || relative[0] == '\0') {
		return false;
	}
	for (const char* cursor = relative; *cursor != '\0'; ++cursor) {
		if (tayga_runtime_is_path_sep(*cursor)) {
			return false;
		}
	}
	return true;
}

static inline uint32_t tayga_runtime_stat(
		TaygaRuntimeContext* context,
		const char* path,
		WmBaremetalProgramFileInfo* outInfo) {
	char hostPath[TAYGA_RUNTIME_PATH_MAX + 8u];
	if (!context || context->process.userDeviceId < 0 || !outInfo) {
		return 0u;
	}
	if (!tayga_runtime_host_path(context, path, hostPath, sizeof(hostPath))) {
		return 0u;
	}
	return wm_program_stat_file_on_device(context->process.userDeviceId, hostPath, outInfo);
}

static inline uint32_t tayga_runtime_list_directory(
		TaygaRuntimeContext* context,
		const char* path,
		WmBaremetalProgramDirectoryEntry* entries,
		uint32_t entryCapacity,
		uint32_t* outEntryCount) {
	char hostPath[TAYGA_RUNTIME_PATH_MAX + 8u];
	uint32_t count = 0u;
	uint32_t ok = 0u;
	if (!context || context->process.userDeviceId < 0) {
		return 0u;
	}
	if (!tayga_runtime_host_path(context, path, hostPath, sizeof(hostPath))) {
		return 0u;
	}
	ok = wm_program_list_directory_on_device(
		context->process.userDeviceId,
		hostPath,
		entries,
		entryCapacity,
		outEntryCount ? outEntryCount : &count);
	if (!ok) {
		return 0u;
	}
	if (!outEntryCount) {
		outEntryCount = &count;
	}
	if (entries && entryCapacity != 0u) {
		uint32_t writeIndex = 0u;
		uint32_t available = *outEntryCount;
		if (available > entryCapacity) {
			available = entryCapacity;
		}
		for (uint32_t readIndex = 0u; readIndex < available; ++readIndex) {
			if (!tayga_runtime_entry_is_immediate_host_child(hostPath, &entries[readIndex])) {
				continue;
			}
			if (writeIndex != readIndex) {
				entries[writeIndex] = entries[readIndex];
			}
			++writeIndex;
		}
		*outEntryCount = writeIndex;
	}
	return 1u;
}

static inline uint32_t tayga_runtime_write_file(
		TaygaRuntimeContext* context,
		const char* path,
		const void* data,
		uint32_t size) {
	char hostPath[TAYGA_RUNTIME_PATH_MAX + 8u];
	if (!context || context->process.userDeviceId < 0 || (!data && size != 0u)) {
		return 0u;
	}
	if (!tayga_runtime_host_path(context, path, hostPath, sizeof(hostPath))) {
		return 0u;
	}
	return wm_program_write_file_on_device(context->process.userDeviceId, hostPath, data, size);
}

static inline uint32_t tayga_runtime_last_error(char* outText, uint32_t outTextSize) {
	return wm_program_last_error(outText, outTextSize);
}

static inline uint32_t tayga_runtime_device_stats(
		TaygaRuntimeContext* context,
		WmBaremetalProgramDeviceStats* outStats) {
	if (!context || context->process.userDeviceId < 0 || !outStats) {
		return 0u;
	}
	return wm_program_device_stats(context->process.userDeviceId, outStats);
}

static inline uint32_t tayga_runtime_delete_file(TaygaRuntimeContext* context, const char* path) {
	char hostPath[TAYGA_RUNTIME_PATH_MAX + 8u];
	if (!context || context->process.userDeviceId < 0) {
		return 0u;
	}
	if (!tayga_runtime_host_path(context, path, hostPath, sizeof(hostPath))) {
		return 0u;
	}
	return wm_program_delete_file_on_device(context->process.userDeviceId, hostPath);
}

static inline uint32_t tayga_runtime_rename_file(
		TaygaRuntimeContext* context,
		const char* oldPath,
		const char* newPath) {
	char oldHostPath[TAYGA_RUNTIME_PATH_MAX + 8u];
	char newHostPath[TAYGA_RUNTIME_PATH_MAX + 8u];
	if (!context || context->process.userDeviceId < 0) {
		return 0u;
	}
	if (!tayga_runtime_host_path(context, oldPath, oldHostPath, sizeof(oldHostPath)) ||
			!tayga_runtime_host_path(context, newPath, newHostPath, sizeof(newHostPath))) {
		return 0u;
	}
	return wm_program_rename_file_on_device(context->process.userDeviceId, oldHostPath, newHostPath);
}

static inline uint32_t tayga_runtime_create_directory(TaygaRuntimeContext* context, const char* path) {
	char hostPath[TAYGA_RUNTIME_PATH_MAX + 8u];
	if (!context || context->process.userDeviceId < 0) {
		return 0u;
	}
	if (!tayga_runtime_host_path(context, path, hostPath, sizeof(hostPath))) {
		return 0u;
	}
	return wm_program_create_directory_on_device(context->process.userDeviceId, hostPath);
}

static inline uint32_t tayga_runtime_chdir(TaygaRuntimeContext* context, const char* path) {
	WmBaremetalProgramDirectoryEntry entries[1];
	char virtualPath[TAYGA_RUNTIME_PATH_MAX];
	uint32_t count = 0u;
	if (!context) {
		return 0u;
	}
	if (!tayga_runtime_normalize_path(context, path, virtualPath, sizeof(virtualPath))) {
		return 0u;
	}
	if (!tayga_runtime_list_directory(context, virtualPath, entries, 1u, &count)) {
		return 0u;
	}
	snprintf(context->currentDirectory, sizeof(context->currentDirectory), "%s", virtualPath);
	snprintf(context->process.currentDirectory, sizeof(context->process.currentDirectory), "%s", virtualPath);
	return 1u;
}

static inline const char* tayga_runtime_getcwd(TaygaRuntimeContext* context) {
	return context && context->currentDirectory[0] != '\0' ? context->currentDirectory : "/";
}

static inline uint32_t tayga_runtime_open_read(
		TaygaRuntimeContext* context,
		const char* path,
		TaygaRuntimeFile* outFile) {
	WmBaremetalProgramFileInfo info;
	char virtualPath[TAYGA_RUNTIME_PATH_MAX];
	if (!context || !outFile) {
		return 0u;
	}
	memset(outFile, 0, sizeof(*outFile));
	if (!tayga_runtime_normalize_path(context, path, virtualPath, sizeof(virtualPath))) {
		return 0u;
	}
	memset(&info, 0, sizeof(info));
	if (!tayga_runtime_stat(context, virtualPath, &info) || info.dataPhysical == 0u) {
		return 0u;
	}
	outFile->data = (const uint8_t*)(uintptr_t)info.dataPhysical;
	outFile->size = info.size;
	outFile->flags = info.flags;
	snprintf(outFile->path, sizeof(outFile->path), "%s", virtualPath);
	return 1u;
}

static inline uint32_t tayga_runtime_file_read(TaygaRuntimeFile* file, void* outData, uint32_t size) {
	uint32_t available = 0u;
	if (!file || !outData || size == 0u || file->offset >= file->size) {
		return 0u;
	}
	available = file->size - file->offset;
	if (size > available) {
		size = available;
	}
	memcpy(outData, file->data + file->offset, size);
	file->offset += size;
	return size;
}

static inline void tayga_runtime_file_close(TaygaRuntimeFile* file) {
	if (file) {
		memset(file, 0, sizeof(*file));
	}
}

static inline uint32_t tayga_runtime_write(uint32_t fd, const void* data, uint32_t size) {
	return tayga_stream_write(fd, data, size);
}

static inline uint32_t tayga_runtime_write_text(uint32_t fd, const char* text) {
	return tayga_stream_write_text(fd, text);
}

static inline uint32_t tayga_runtime_read_line(char* buffer, uint32_t size, const char* prompt) {
	return tayga_stream_read_line(TAYGA_STREAM_STDIN, buffer, size, prompt, 0u);
}

static inline uint32_t tayga_runtime_exit(uint32_t code) {
	(void)code;
	(void)wm_program_end();
	for (;;) {
		(void)wm_program_thread_yield();
	}
}
