#pragma once

#if defined(__has_include)
#if __has_include("libraries/generic_Intel32/baremetal_kext_api.h")
#include "libraries/generic_Intel32/baremetal_kext_api.h"
#else
#include "baremetal_kext_api.h"
#endif
#else
#include "libraries/generic_Intel32/baremetal_kext_api.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define TAYGA_FREEBSD_DRIVER_API_MAGIC 0x46425457u
#define TAYGA_FREEBSD_DRIVER_API_VERSION WM_BAREMETAL_KEXT_API_VERSION

#define TAYGA_FREEBSD_DRIVER_EVENT_LOAD 1u
#define TAYGA_FREEBSD_DRIVER_EVENT_UNLOAD 2u
#define TAYGA_FREEBSD_DRIVER_EVENT_SUSPEND 3u
#define TAYGA_FREEBSD_DRIVER_EVENT_RESUME 4u

#define TAYGA_FREEBSD_DRIVER_FLAG_FREEBSD_ELF 0x00000001u
#define TAYGA_FREEBSD_DRIVER_FLAG_BRIDGE_SHIM 0x00000002u
#define TAYGA_FREEBSD_DRIVER_FLAG_METADATA_ONLY 0x00000004u

typedef struct WmTaygaFreeBsdDriverDescriptor {
	uint32_t version;
	uint32_t flags;
	const char* name;
	const char* driverClass;
	const char* compatible;
	const char* description;
} WmTaygaFreeBsdDriverDescriptor;

typedef struct WmTaygaFreeBsdPointerBackendInfo {
	uint32_t size;
	uint32_t pollAvailable;
	uint32_t flags;
	uint32_t buttons;
	int32_t x;
	int32_t y;
	int32_t dx;
	int32_t dy;
	uint32_t xRange;
	uint32_t yRange;
	uint32_t qemuVirtioInputPresent;
	uint32_t qemuUsbControllerCount;
	uint32_t qemuUsbDetectedCount;
	uint32_t qemuUsbMappedCount;
	uint32_t qemuUsbMapFailureCount;
	uint32_t qemuOhciCount;
	uint32_t qemuUhciCount;
	uint32_t qemuEhciCount;
	uint32_t qemuXhciCount;
	uint32_t qemuOhciDeviceReady;
	uint32_t qemuXhciDeviceReady;
	uint32_t qemuVdagentPresent;
	uint32_t qemuVdagentStage;
	uint32_t qemuVdagentCode;
	uint32_t qemuVdagentStatus;
	uint32_t qemuVdagentPort;
	uint32_t qemuVdagentControlUsedIndex;
	uint32_t qemuVdagentPortUsedIndex;
	uint32_t qemuVdagentEventCount;
	uint32_t qemuVdagentPortAddedMask;
	uint32_t qemuVdagentPortReadyMask;
	uint32_t qemuVdagentHostOpenMask;
	uint32_t qemuVdagentGuestOpenMask;
	uint32_t qemuOhciStage;
	uint32_t qemuOhciCode;
	uint32_t qemuOhciPortStatus;
	uint32_t qemuOhciTdCondition;
	uint32_t qemuOhciInterruptPending;
	uint32_t qemuXhciStage;
	uint32_t qemuXhciCode;
	uint32_t qemuXhciEventType;
	uint32_t qemuXhciPortStatus;
	uint32_t qemuXhciPortId;
	uint32_t qemuXhciSlotId;
	uint32_t qemuXhciEndpoint;
	uint32_t qemuXhciEndpointContext;
	uint32_t qemuXhciInterruptPending;
} WmTaygaFreeBsdPointerBackendInfo;

typedef uint32_t (*WmTaygaFreeBsdDriverLogFn)(const char* text);
typedef void* (*WmTaygaFreeBsdDriverMallocFn)(uint32_t bytes);
typedef void (*WmTaygaFreeBsdDriverFreeFn)(void* ptr);
typedef uint32_t (*WmTaygaFreeBsdDriverRegisterDeviceFn)(
	const char* path,
	const char* summary,
	const char* details);
typedef uint32_t (*WmTaygaFreeBsdDriverTicksFn)(void);
typedef uint32_t (*WmTaygaFreeBsdDriverWaitMicrosecondsFn)(uint32_t microseconds);
typedef uint32_t (*WmTaygaFreeBsdDriverHardwareInfoFn)(WmBaremetalKextHardwareInfo* outInfo);
typedef uint32_t (*WmTaygaFreeBsdDriverFramebufferInfoFn)(WmBaremetalKextFramebufferInfo* outInfo);
typedef uint32_t (*WmTaygaFreeBsdDriverRequestGraphicsModeFn)(
	uint32_t preferredWidth,
	uint32_t preferredHeight,
	uint32_t preferredBpp);
typedef uint32_t (*WmTaygaFreeBsdDriverApplyGraphicsModeFn)(void);
typedef uint32_t (*WmTaygaFreeBsdDriverConfigureDriverGraphicsFn)(
	uint32_t width,
	uint32_t height,
	uint32_t bpp);
typedef uint32_t (*WmTaygaFreeBsdDriverConfigureFramebufferCacheFn)(uint32_t flags);
typedef WmBaremetalKextFramebufferPresentFn WmTaygaFreeBsdDriverFramebufferPresentFn;
typedef uint32_t (*WmTaygaFreeBsdDriverRegisterFramebufferPresentFn)(
	WmTaygaFreeBsdDriverFramebufferPresentFn presentFn);
typedef uint32_t (*WmTaygaFreeBsdDriverGpuSubmitFn)(const WmBaremetalGpuCommand* commands, uint32_t commandCount);
typedef uint32_t (*WmTaygaFreeBsdDriverRegisterGpuProviderFn)(
	const WmBaremetalGpuInfo* info,
	WmTaygaFreeBsdDriverGpuSubmitFn submitFn);
typedef uint32_t (*WmTaygaFreeBsdDriverStorageDeviceCountFn)(void);
typedef uint32_t (*WmTaygaFreeBsdDriverStorageDeviceInfoFn)(int32_t deviceId, WmBaremetalKextStorageDeviceInfo* outInfo);
typedef uint32_t (*WmTaygaFreeBsdDriverStorageReadFn)(int32_t deviceId, uint32_t startLba, void* dest, uint32_t sectorCount);
typedef uint32_t (*WmTaygaFreeBsdDriverStorageWriteFn)(int32_t deviceId, uint32_t startLba, const void* data, uint32_t sectorCount);
typedef uint32_t (*WmTaygaFreeBsdDriverIoPortReadFn)(uint16_t port, uint32_t width, uint32_t* outValue);
typedef uint32_t (*WmTaygaFreeBsdDriverIoPortWriteFn)(uint16_t port, uint32_t width, uint32_t value);
typedef uint32_t (*WmTaygaFreeBsdDriverPciConfigReadFn)(
	uint8_t bus,
	uint8_t device,
	uint8_t function,
	uint16_t offset,
	uint32_t width,
	uint32_t* outValue);
typedef uint32_t (*WmTaygaFreeBsdDriverPciConfigWriteFn)(
	uint8_t bus,
	uint8_t device,
	uint8_t function,
	uint16_t offset,
	uint32_t width,
	uint32_t value);
typedef uint32_t (*WmTaygaFreeBsdDriverMmioMapAddressFn)(
	uint32_t physicalLow,
	uint32_t physicalHigh,
	uint32_t byteCount,
	uintptr_t* outLinear);
typedef uint32_t (*WmTaygaFreeBsdDriverMmioReadAddressFn)(uintptr_t linear, uint32_t width, uint32_t* outValue);
typedef uint32_t (*WmTaygaFreeBsdDriverMmioWriteAddressFn)(uintptr_t linear, uint32_t width, uint32_t value);
typedef uint32_t (*WmTaygaFreeBsdDriverDmaAddressFn)(
	uint32_t deviceHandle,
	const void* pointer,
	uint32_t bytes,
	uint32_t* outAddressLow,
	uint32_t* outAddressHigh);
typedef void (*WmTaygaFreeBsdDriverDmaSyncFn)(uint32_t deviceHandle, const void* pointer, uint32_t bytes);
typedef void (*WmTaygaFreeBsdDriverHardwareBarrierFn)(void);
typedef WmBaremetalKextPointerStateFn WmTaygaFreeBsdDriverPointerStateFn;
typedef uint32_t (*WmTaygaFreeBsdDriverRegisterPointerProviderFn)(
	WmTaygaFreeBsdDriverPointerStateFn pointerStateFn,
	uint32_t flags,
	const char* name);
typedef uint32_t (*WmTaygaFreeBsdDriverPointerPollFn)(WmBaremetalKextPointerInfo* outInfo);
typedef uint32_t (*WmTaygaFreeBsdDriverPointerBackendInfoFn)(WmTaygaFreeBsdPointerBackendInfo* outInfo);

typedef struct WmTaygaFreeBsdDriverApi {
	uint32_t magic;
	uint32_t version;
	uint32_t size;
	uintptr_t logFn;
	uintptr_t mallocFn;
	uintptr_t freeFn;
	uintptr_t registerDeviceFn;
	uintptr_t ticksFn;
	uintptr_t waitMicrosecondsFn;
	uintptr_t hardwareInfoFn;
	uintptr_t framebufferInfoFn;
	uintptr_t storageDeviceCountFn;
	uintptr_t storageDeviceInfoFn;
	uintptr_t storageReadFn;
	uintptr_t storageWriteFn;
	uintptr_t ioPortReadFn;
	uintptr_t ioPortWriteFn;
	uintptr_t pciConfigReadFn;
	uintptr_t pciConfigWriteFn;
	uintptr_t mmioMapAddressFn;
	uintptr_t mmioReadAddressFn;
	uintptr_t mmioWriteAddressFn;
	uintptr_t dmaAddressFn;
	uintptr_t dmaSyncFn;
	uintptr_t hardwareBarrierFn;
	uintptr_t registerPointerProviderFn;
	uintptr_t pointerPollFn;
	uintptr_t pointerBackendInfoFn;
	uintptr_t requestGraphicsModeFn;
	uintptr_t applyGraphicsModeFn;
	uintptr_t configureDriverGraphicsFn;
	uintptr_t configureFramebufferCacheFn;
	uintptr_t registerGpuProviderFn;
	uintptr_t registerFramebufferPresentFn;
} WmTaygaFreeBsdDriverApi;

typedef uint32_t (*WmTaygaFreeBsdDriverEventFn)(
	const WmTaygaFreeBsdDriverApi* api,
	const WmTaygaFreeBsdDriverDescriptor* descriptor,
	uint32_t event,
	void* argument);

static inline uint32_t tayga_freebsd_driver_api_ready(const WmTaygaFreeBsdDriverApi* api) {
	return api &&
		api->magic == TAYGA_FREEBSD_DRIVER_API_MAGIC &&
		api->size >= sizeof(WmTaygaFreeBsdDriverApi);
}

#ifdef __cplusplus
}
#endif
