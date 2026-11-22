/* Pooka's Free Software License. Public declarations recovered from the reference distribution. */
#pragma once

#include <stddef.h>
#include <stdint.h>

#ifndef UINTPTR_MAX
#define UINTPTR_MAX ((uintptr_t)-1)
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define WM_BAREMETAL_GPU_INFO_FLAG_PRESENT 0x00000001u
#define WM_BAREMETAL_GPU_INFO_FLAG_ACCELERATED 0x00000002u
#define WM_BAREMETAL_GPU_INFO_FLAG_SOFTWARE 0x00000004u
#define WM_BAREMETAL_GPU_INFO_FLAG_FRAMEBUFFER_TARGET 0x00000008u

#define WM_BAREMETAL_GPU_CAP_CLEAR 0x00000001u
#define WM_BAREMETAL_GPU_CAP_FILL_RECT 0x00000002u
#define WM_BAREMETAL_GPU_CAP_FILL_TRIANGLE_2D 0x00000004u

#define WM_BAREMETAL_GPU_FORMAT_RGBA8888 1u

#define WM_BAREMETAL_GPU_COMMAND_CLEAR 1u
#define WM_BAREMETAL_GPU_COMMAND_FILL_RECT 2u
#define WM_BAREMETAL_GPU_COMMAND_FILL_TRIANGLE_2D 3u

#define WM_BAREMETAL_GPU_MAX_PROVIDER_NAME 64u
#define WM_BAREMETAL_GPU_MAX_DRIVER_NAME 64u
#define WM_BAREMETAL_GPU_DEFAULT_MAX_COMMANDS 256u

typedef struct WmBaremetalGpuInfo {
	uint32_t size;
	uint32_t flags;
	uint32_t caps;
	uint32_t maxCommandCount;
	char providerName[WM_BAREMETAL_GPU_MAX_PROVIDER_NAME];
	char driverName[WM_BAREMETAL_GPU_MAX_DRIVER_NAME];
} WmBaremetalGpuInfo;

typedef struct WmBaremetalGpuSurface {
	uint32_t pixelsPhysical;
	uint32_t pixelsPhysicalHigh;
	uint32_t pixelsSize;
	uint32_t width;
	uint32_t height;
	uint32_t stride;
	uint32_t format;
	uint32_t reserved;
} WmBaremetalGpuSurface;

typedef struct WmBaremetalGpuVertex2D {
	int32_t x;
	int32_t y;
	int32_t depth;
	uint32_t rgba;
} WmBaremetalGpuVertex2D;

typedef struct WmBaremetalGpuCommand {
	uint32_t command;
	uint32_t flags;
	WmBaremetalGpuSurface target;
	int32_t x;
	int32_t y;
	int32_t width;
	int32_t height;
	uint32_t rgba;
	uint32_t reserved;
	WmBaremetalGpuVertex2D vertices[3];
} WmBaremetalGpuCommand;

static inline void wm_baremetal_gpu_surface_rgba8888(
		WmBaremetalGpuSurface* outSurface,
		void* pixels,
		uint32_t width,
		uint32_t height,
		uint32_t stride) {
	const uintptr_t address = (uintptr_t)pixels;
	const uint64_t size = (uint64_t)stride * (uint64_t)height;
	if (!outSurface) {
		return;
	}
	outSurface->pixelsPhysical = (uint32_t)address;
#if defined(__SIZEOF_POINTER__) && __SIZEOF_POINTER__ > 4
	outSurface->pixelsPhysicalHigh = (uint32_t)(address >> 32u);
#else
	outSurface->pixelsPhysicalHigh = 0u;
#endif
	outSurface->pixelsSize = size > 0xffffffffull ? 0xffffffffu : (uint32_t)size;
	outSurface->width = width;
	outSurface->height = height;
	outSurface->stride = stride;
	outSurface->format = WM_BAREMETAL_GPU_FORMAT_RGBA8888;
	outSurface->reserved = 0u;
}

static inline uint32_t wm_baremetal_gpu_rgba(uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
	return ((uint32_t)r << 24u) | ((uint32_t)g << 16u) | ((uint32_t)b << 8u) | (uint32_t)a;
}

static inline uint8_t wm_baremetal_gpu_rgba_r(uint32_t rgba) {
	return (uint8_t)((rgba >> 24u) & 0xffu);
}

static inline uint8_t wm_baremetal_gpu_rgba_g(uint32_t rgba) {
	return (uint8_t)((rgba >> 16u) & 0xffu);
}

static inline uint8_t wm_baremetal_gpu_rgba_b(uint32_t rgba) {
	return (uint8_t)((rgba >> 8u) & 0xffu);
}

static inline uint8_t wm_baremetal_gpu_rgba_a(uint32_t rgba) {
	return (uint8_t)(rgba & 0xffu);
}

static inline uint8_t* wm_baremetal_gpu_surface_pixels(const WmBaremetalGpuSurface* surface) {
	uintptr_t address = 0u;
	if (!surface || surface->pixelsPhysical == 0u) {
		return 0;
	}
#if defined(__SIZEOF_POINTER__) && __SIZEOF_POINTER__ > 4
	address = ((uintptr_t)surface->pixelsPhysicalHigh << 32u) | (uintptr_t)surface->pixelsPhysical;
#else
	if (surface->pixelsPhysicalHigh != 0u) {
		return 0;
	}
	address = (uintptr_t)surface->pixelsPhysical;
#endif
	return (uint8_t*)address;
}

static inline uint32_t wm_baremetal_gpu_surface_rgba8888_ready(const WmBaremetalGpuSurface* surface) {
	const uint64_t rowBytes = surface ? (uint64_t)surface->width * 4u : 0u;
	const uint64_t neededBytes = surface ? (uint64_t)surface->stride * (uint64_t)surface->height : 0u;
	return surface &&
		surface->format == WM_BAREMETAL_GPU_FORMAT_RGBA8888 &&
		surface->width != 0u &&
		surface->height != 0u &&
		surface->stride >= rowBytes &&
		neededBytes != 0u &&
		(surface->pixelsSize == 0u || (uint64_t)surface->pixelsSize >= neededBytes) &&
		wm_baremetal_gpu_surface_pixels(surface) != 0;
}

static inline void wm_baremetal_gpu_write_rgba8888(uint8_t* dest, uint32_t rgba) {
	if (!dest) {
		return;
	}
	dest[0] = wm_baremetal_gpu_rgba_r(rgba);
	dest[1] = wm_baremetal_gpu_rgba_g(rgba);
	dest[2] = wm_baremetal_gpu_rgba_b(rgba);
	dest[3] = wm_baremetal_gpu_rgba_a(rgba);
}

static inline uint32_t wm_baremetal_gpu_rgba8888_word_supported(void) {
#if defined(__BYTE_ORDER__) && \
		(__BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__ || __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__)
	return 1u;
#else
	return 0u;
#endif
}

static inline uint32_t wm_baremetal_gpu_rgba8888_word(uint32_t rgba) {
#if defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
	return ((uint32_t)wm_baremetal_gpu_rgba_a(rgba) << 24u) |
		((uint32_t)wm_baremetal_gpu_rgba_b(rgba) << 16u) |
		((uint32_t)wm_baremetal_gpu_rgba_g(rgba) << 8u) |
		(uint32_t)wm_baremetal_gpu_rgba_r(rgba);
#elif defined(__BYTE_ORDER__) && __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
	return rgba;
#else
	return 0u;
#endif
}

static inline void wm_baremetal_gpu_write_rgba8888_fast(uint8_t* dest, uint32_t rgba, uint32_t rgbaWord) {
	if (!dest) {
		return;
	}
	if (wm_baremetal_gpu_rgba8888_word_supported() != 0u && (((uintptr_t)dest & 3u) == 0u)) {
		*(uint32_t*)dest = rgbaWord;
		return;
	}
	wm_baremetal_gpu_write_rgba8888(dest, rgba);
}

static inline uint32_t wm_baremetal_gpu_software_fill_rect(
		const WmBaremetalGpuSurface* surface,
		int32_t x,
		int32_t y,
		int32_t width,
		int32_t height,
		uint32_t rgba) {
	uint8_t* pixels = 0;
	const uint32_t rgbaWord = wm_baremetal_gpu_rgba8888_word(rgba);
	int32_t x0 = x;
	int32_t y0 = y;
	int32_t x1 = x + width;
	int32_t y1 = y + height;
	if (!wm_baremetal_gpu_surface_rgba8888_ready(surface) || width <= 0 || height <= 0) {
		return 0u;
	}
	if (x1 <= 0 || y1 <= 0 || x0 >= (int32_t)surface->width || y0 >= (int32_t)surface->height) {
		return 1u;
	}
	if (x0 < 0) {
		x0 = 0;
	}
	if (y0 < 0) {
		y0 = 0;
	}
	if (x1 > (int32_t)surface->width) {
		x1 = (int32_t)surface->width;
	}
	if (y1 > (int32_t)surface->height) {
		y1 = (int32_t)surface->height;
	}
	pixels = wm_baremetal_gpu_surface_pixels(surface);
	for (int32_t py = y0; py < y1; ++py) {
		uint8_t* dest = pixels + (size_t)py * (size_t)surface->stride + (size_t)x0 * 4u;
		if (wm_baremetal_gpu_rgba8888_word_supported() != 0u && (((uintptr_t)dest & 3u) == 0u)) {
			uint32_t* out = (uint32_t*)dest;
			for (int32_t px = x0; px < x1; ++px) {
				*out++ = rgbaWord;
			}
		} else {
			for (int32_t px = x0; px < x1; ++px) {
				wm_baremetal_gpu_write_rgba8888(dest, rgba);
				dest += 4u;
			}
		}
	}
	return 1u;
}

static inline int64_t wm_baremetal_gpu_triangle_edge(
		const WmBaremetalGpuVertex2D* a,
		const WmBaremetalGpuVertex2D* b,
		int32_t px,
		int32_t py) {
	return (int64_t)(px - a->x) * (int64_t)(b->y - a->y) -
		(int64_t)(py - a->y) * (int64_t)(b->x - a->x);
}

static inline uint32_t wm_baremetal_gpu_software_fill_triangle_2d(
		const WmBaremetalGpuSurface* surface,
		const WmBaremetalGpuVertex2D vertices[3],
		uint32_t rgba) {
	uint8_t* pixels = 0;
	const uint32_t rgbaWord = wm_baremetal_gpu_rgba8888_word(rgba);
	int64_t w0Row = 0;
	int64_t w1Row = 0;
	int64_t w2Row = 0;
	int64_t w0StepX = 0;
	int64_t w1StepX = 0;
	int64_t w2StepX = 0;
	int64_t w0StepY = 0;
	int64_t w1StepY = 0;
	int64_t w2StepY = 0;
	int32_t minX = 0;
	int32_t minY = 0;
	int32_t maxX = 0;
	int32_t maxY = 0;
	if (!vertices || !wm_baremetal_gpu_surface_rgba8888_ready(surface)) {
		return 0u;
	}
	minX = vertices[0].x;
	minY = vertices[0].y;
	maxX = vertices[0].x;
	maxY = vertices[0].y;
	for (uint32_t index = 1u; index < 3u; ++index) {
		if (vertices[index].x < minX) {
			minX = vertices[index].x;
		}
		if (vertices[index].y < minY) {
			minY = vertices[index].y;
		}
		if (vertices[index].x > maxX) {
			maxX = vertices[index].x;
		}
		if (vertices[index].y > maxY) {
			maxY = vertices[index].y;
		}
	}
	if (maxX < 0 || maxY < 0 || minX >= (int32_t)surface->width || minY >= (int32_t)surface->height) {
		return 1u;
	}
	if (minX < 0) {
		minX = 0;
	}
	if (minY < 0) {
		minY = 0;
	}
	if (maxX >= (int32_t)surface->width) {
		maxX = (int32_t)surface->width - 1;
	}
	if (maxY >= (int32_t)surface->height) {
		maxY = (int32_t)surface->height - 1;
	}
	if (wm_baremetal_gpu_triangle_edge(&vertices[0], &vertices[1], vertices[2].x, vertices[2].y) == 0) {
		return 1u;
	}
	w0StepX = (int64_t)(vertices[2].y - vertices[1].y);
	w1StepX = (int64_t)(vertices[0].y - vertices[2].y);
	w2StepX = (int64_t)(vertices[1].y - vertices[0].y);
	w0StepY = -(int64_t)(vertices[2].x - vertices[1].x);
	w1StepY = -(int64_t)(vertices[0].x - vertices[2].x);
	w2StepY = -(int64_t)(vertices[1].x - vertices[0].x);
	w0Row = wm_baremetal_gpu_triangle_edge(&vertices[1], &vertices[2], minX, minY);
	w1Row = wm_baremetal_gpu_triangle_edge(&vertices[2], &vertices[0], minX, minY);
	w2Row = wm_baremetal_gpu_triangle_edge(&vertices[0], &vertices[1], minX, minY);
	pixels = wm_baremetal_gpu_surface_pixels(surface);
	for (int32_t py = minY; py <= maxY; ++py) {
		uint8_t* row = pixels + (size_t)py * (size_t)surface->stride;
		int64_t w0 = w0Row;
		int64_t w1 = w1Row;
		int64_t w2 = w2Row;
		for (int32_t px = minX; px <= maxX; ++px) {
			if ((w0 >= 0 && w1 >= 0 && w2 >= 0) || (w0 <= 0 && w1 <= 0 && w2 <= 0)) {
				wm_baremetal_gpu_write_rgba8888_fast(row + (size_t)px * 4u, rgba, rgbaWord);
			}
			w0 += w0StepX;
			w1 += w1StepX;
			w2 += w2StepX;
		}
		w0Row += w0StepY;
		w1Row += w1StepY;
		w2Row += w2StepY;
	}
	return 1u;
}

static inline uint32_t wm_baremetal_gpu_software_submit(
		const WmBaremetalGpuCommand* commands,
		uint32_t commandCount) {
	if (!commands || commandCount == 0u) {
		return 0u;
	}
	for (uint32_t index = 0u; index < commandCount; ++index) {
		const WmBaremetalGpuCommand* command = &commands[index];
		uint32_t ok = 0u;
		switch (command->command) {
			case WM_BAREMETAL_GPU_COMMAND_CLEAR:
				ok = wm_baremetal_gpu_software_fill_rect(
					&command->target,
					0,
					0,
					(int32_t)command->target.width,
					(int32_t)command->target.height,
					command->rgba);
				break;
			case WM_BAREMETAL_GPU_COMMAND_FILL_RECT:
				ok = wm_baremetal_gpu_software_fill_rect(
					&command->target,
					command->x,
					command->y,
					command->width,
					command->height,
					command->rgba);
				break;
			case WM_BAREMETAL_GPU_COMMAND_FILL_TRIANGLE_2D:
				ok = wm_baremetal_gpu_software_fill_triangle_2d(
					&command->target,
					command->vertices,
					command->rgba);
				break;
			default:
				ok = 0u;
				break;
		}
		if (ok == 0u) {
			return 0u;
		}
	}
	return 1u;
}

#ifdef __cplusplus
}
#endif
