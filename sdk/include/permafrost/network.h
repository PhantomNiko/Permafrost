/* Pooka's Free Software License. Public declarations recovered from the reference distribution. */
#pragma once

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define WM_BAREMETAL_NETWORK_INFO_FLAG_PRESENT 0x00000001u
#define WM_BAREMETAL_NETWORK_INFO_FLAG_LINK_UP 0x00000002u
#define WM_BAREMETAL_NETWORK_INFO_FLAG_ETHERNET 0x00000004u
#define WM_BAREMETAL_NETWORK_INFO_FLAG_AUTOMATIC 0x00000008u

#define WM_BAREMETAL_NETWORK_ETHERNET_HEADER_BYTES 14u
#define WM_BAREMETAL_NETWORK_DEFAULT_MTU 1500u
#define WM_BAREMETAL_NETWORK_MAX_FRAME_BYTES 2048u
#define WM_BAREMETAL_NETWORK_MAX_PROVIDER_NAME 64u
#define WM_BAREMETAL_NETWORK_MAX_DRIVER_NAME 64u

typedef struct WmBaremetalNetworkInfo {
	uint32_t size;
	uint32_t flags;
	uint32_t mtu;
	uint32_t maxFrameBytes;
	uint8_t mac[6];
	uint8_t reserved0[2];
	uint32_t rxFramesLow;
	uint32_t rxFramesHigh;
	uint32_t txFramesLow;
	uint32_t txFramesHigh;
	uint32_t rxBytesLow;
	uint32_t rxBytesHigh;
	uint32_t txBytesLow;
	uint32_t txBytesHigh;
	uint32_t droppedFramesLow;
	uint32_t droppedFramesHigh;
	char providerName[WM_BAREMETAL_NETWORK_MAX_PROVIDER_NAME];
	char driverName[WM_BAREMETAL_NETWORK_MAX_DRIVER_NAME];
} WmBaremetalNetworkInfo;

#ifdef __cplusplus
}
#endif
